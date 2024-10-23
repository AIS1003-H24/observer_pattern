
#ifndef SIMULATION_HPP
#define SIMULATION_HPP

#include "Observer.hpp"

#include <vector>

class Simulation {
public:
    void init() {
        for (auto observer: observers_) {
            observer->onInit();
        }
    }

    void step(double dt) {
        // some simulation happeining here

        for (auto observer: observers_) {
            observer->onUpdate(dt);
        }
        time_ += dt;
    }

    void terminate() {
        for (auto observer: observers_) {
            observer->onTerminate();
        }
    }

    void registerObserver(Observer *observer) {
        observers_.push_back(observer);
    }

    float getCurrentTime() const {
        return time_;
    }

private:
    float time_{0};
    std::vector<Observer *> observers_;
};

#endif //SIMULATION_HPP
