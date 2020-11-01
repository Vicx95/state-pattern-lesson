#pragma once
class CoffeeExpress {
public:
    enum class ExpressActions {
        On = 1,
        MakeCoffee = 2,
        Off = 3,
        LackOfWater,
        LackOfCoffeeBeans,
        WaitingForAction,
        
    };
    CoffeeExpress() = default;

    void on();
    void makeCoffee();
    void boilingUpWater();
    void grindCoffeeBeans();
    void wait();
    void off();
    void error(ExpressActions error);
    void makeAction(ExpressActions action);
    void printMenu();
    void run();

    ~CoffeeExpress() = default;
private:
    int waterLevel_ = 100;
    int coffeeBeansLevel_ = 100;
};
