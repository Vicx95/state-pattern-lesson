#include "CoffeeExpressGrindCoffeeBeans.hpp"
#include <iostream>

CoffeeExpressGrindCoffeeBeans::CoffeeExpressGrindCoffeeBeans(CoffeeExpress* express)
    : coffeeExpress_(express) {}

void CoffeeExpressGrindCoffeeBeans::on() {
    std::cout << __PRETTY_FUNCTION__ << '\n';
}

void CoffeeExpressGrindCoffeeBeans::makeCoffee() {
    std::cout << __PRETTY_FUNCTION__ << '\n';
}

void CoffeeExpressGrindCoffeeBeans::boilingUpWater() {
    std::cout << __PRETTY_FUNCTION__ << '\n';
}

void CoffeeExpressGrindCoffeeBeans::grindCoffeeBeans() {
    std::cout << __PRETTY_FUNCTION__ << '\n';
}

void CoffeeExpressGrindCoffeeBeans::lackOfCoffeeBeans() {
    std::cout << __PRETTY_FUNCTION__ << '\n';
}

void CoffeeExpressGrindCoffeeBeans::lackOfWater() {
    std::cout << __PRETTY_FUNCTION__ << '\n';
}

void CoffeeExpressGrindCoffeeBeans::wait() {
    std::cout << __PRETTY_FUNCTION__ << '\n';
}

void CoffeeExpressGrindCoffeeBeans::off() {
    std::cout << __PRETTY_FUNCTION__ << '\n';
}

void CoffeeExpressGrindCoffeeBeans::setState(CoffeeExpress* express) {
    this->coffeeExpress_ = express;
}
