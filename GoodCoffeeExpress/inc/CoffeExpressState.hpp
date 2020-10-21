#pragma once
class CoffeeExpress;
class CoffeeExpressState {
public:
    virtual void on() = 0;
    virtual void makeCoffee() = 0;
    virtual void boilingUpWater() = 0;
    virtual void grindCoffeeBeans() = 0;
    virtual void lackOfCoffeeBeans() = 0;
    virtual void lackOfWater() = 0;
    virtual void wait() = 0;
    virtual void off() = 0;
    virtual void setState(CoffeeExpress* express) = 0;

    virtual ~CoffeeExpressState() = default;
};
