#include <iostream>
#include "CoffeeExpressOn.hpp"
CoffeeExpressOn::CoffeeExpressOn(CoffeeExpress* express)
    : coffeeExpress_(express) {}

void CoffeeExpressOn::on() {
    std::cout << __PRETTY_FUNCTION__ << '\n';
}

void CoffeeExpressOn::makeCoffee() {
    std::cout << __PRETTY_FUNCTION__ << '\n';
}

void CoffeeExpressOn::boilingUpWater() {
    std::cout << __PRETTY_FUNCTION__ << '\n';
}

void CoffeeExpressOn::grindCoffeeBeans() {
    std::cout << __PRETTY_FUNCTION__ << '\n';
}

void CoffeeExpressOn::lackOfCoffeeBeans() {
    std::cout << __PRETTY_FUNCTION__ << '\n';
}

void CoffeeExpressOn::lackOfWater() {
    std::cout << __PRETTY_FUNCTION__ << '\n';
}

void CoffeeExpressOn::wait() {
    std::cout << __PRETTY_FUNCTION__ << '\n';
}

void CoffeeExpressOn::off() {
    std::cout << __PRETTY_FUNCTION__ << '\n';
}
