#ifndef OBSERVER_HPP
#define OBSERVER_HPP

class Observer {
public:
    virtual void onInit() = 0;

    virtual void onUpdate(float dt) = 0;

    virtual void onTerminate() = 0;

    virtual ~Observer() = default;
};

#endif //OBSERVER_HPP
