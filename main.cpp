#include <iostream>

#include "Simulation.hpp"
#include "DemoObserver.hpp"

int main() {
    auto myObserver = std::make_unique<DemoObserver>();

    Simulation sim;
    sim.registerObserver(myObserver.get());
    sim.init();

    float dt = 0.1;
    while (sim.getCurrentTime() < 10) {
        sim.step(dt);
    }
    sim.terminate();

    return 0;
}
