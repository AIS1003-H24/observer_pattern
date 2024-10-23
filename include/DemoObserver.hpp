
#ifndef DEMOOBSERVER_HPP
#define DEMOOBSERVER_HPP

#include "Observer.hpp"

class DemoObserver : public Observer {
public:
    void onInit() override {
        std::cout << "DemoObserver::onInit()" << std::endl;
    }

    void onUpdate(float dt) override {
        std::cout << "DemoObserver::onUpdate()" << std::endl;
    }

    void onTerminate() override {
        std::cout << "DemoObserver::onTerminate()" << std::endl;
    }
};

#endif //DEMOOBSERVER_HPP
