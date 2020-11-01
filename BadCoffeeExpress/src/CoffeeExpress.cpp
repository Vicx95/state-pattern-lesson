#include "CoffeeExpress.hpp"
#include <iostream>

constexpr int waterNeedToMakeCoffee = 20;
constexpr int coffeeBeansNeedToMakeCoffee = 25;

void CoffeeExpress::on() {
    std::cout << __PRETTY_FUNCTION__ << '\n';
}

void CoffeeExpress::makeCoffee() {
    std::cout << __PRETTY_FUNCTION__ << '\n';
    waterLevel_ -= waterNeedToMakeCoffee;
    coffeeBeansLevel_ -= coffeeBeansNeedToMakeCoffee;
}

void CoffeeExpress::boilingUpWater() {
    std::cout << __PRETTY_FUNCTION__ << '\n';
}

void CoffeeExpress::grindCoffeeBeans() {
    std::cout << __PRETTY_FUNCTION__ << '\n';
}

void CoffeeExpress::error(ExpressActions error) {
    switch (error) {
    case ExpressActions::LackOfWater:
        std::cout << "Error: Lack of water, I need more water to make coffee..." << '\n';
        break;
    case ExpressActions::LackOfCoffeeBeans:
        std::cout << "Error: Lack of coffee beans, I need more coffee beans to make coffee..." << '\n';
    default:
        break;
    }
}

void CoffeeExpress::off() {
    std::cout << __PRETTY_FUNCTION__ << '\n';
}

void CoffeeExpress::wait() {
    std::cout << __PRETTY_FUNCTION__ << '\n';
}

void CoffeeExpress::makeAction(ExpressActions action) {
    switch (action) {
    case ExpressActions::On:
        on();
        break;
    case ExpressActions::MakeCoffee:
        if (waterLevel_ >= waterNeedToMakeCoffee &&
            coffeeBeansLevel_ >= coffeeBeansNeedToMakeCoffee) {
            boilingUpWater();
            grindCoffeeBeans();
            makeCoffee();
        } else if (waterLevel_ < waterNeedToMakeCoffee) {
            error(ExpressActions::LackOfWater);
        } else if (coffeeBeansLevel_ < coffeeBeansNeedToMakeCoffee) {
            error(ExpressActions::LackOfCoffeeBeans);
        }
        break;
    case ExpressActions::LackOfWater:
        error(ExpressActions::LackOfWater);
        break;
    case ExpressActions::LackOfCoffeeBeans:
        error(ExpressActions::LackOfCoffeeBeans);
        break;
    case ExpressActions::WaitingForAction:
        wait();
        break;
    case ExpressActions::Off:
        off();
        exit(1);
        break;

    default:
        break;
    }
}

void CoffeeExpress::printMenu() {
    std::cout << "Hello, it's your coffee express :)\n"
              << "1 - ON\n"
              << "2 - Make coffee\n"
              << "3 - OFF\n";
}

void CoffeeExpress::run() {
    while (true) {
        printMenu();
        std::cout << "Choose action: ";
        int option;
        std::cin.clear();
        std::cin >> option;
        makeAction(static_cast<ExpressActions>(option));
    }
}
