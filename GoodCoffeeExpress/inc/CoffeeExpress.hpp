#pragma once
#include "CoffeExpressState.hpp"
class CoffeeExpress {
public:
    explicit CoffeeExpress(CoffeeExpressState* state); 

    void on();
    void makeCoffee();
    void boilingUpWater();
    void grindCoffeeBeans();
    void lackOfCoffeeBeans();
    void lackOfWater();
    void wait();
    void off();
    void changeState(CoffeeExpressState* state);
    void printMenu();

    ~CoffeeExpress();

private:
    CoffeeExpressState* state_;
};
