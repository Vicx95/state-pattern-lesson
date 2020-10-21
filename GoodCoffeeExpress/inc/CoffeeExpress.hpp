#pragma once
class CoffeeExpress {
public:
    CoffeeExpress() = default;

    void on();
    void makeCoffee();
    void boilingUpWater();
    void grindCoffeeBeans();
    void wait();
    void off();
    void error()
    void printMenu();
    void run();

    ~CoffeeExpress() = default;
};
