#include "CoffeeExpressLackOfCoffeeBeans.hpp"
#include <iostream>

CoffeeExpressLackOfCoffeeBeans::CoffeeExpressLackOfCoffeeBeans(CoffeeExpress* express)
    : coffeeExpress_(express) {}

void CoffeeExpressLackOfCoffeeBeans::on() {
    std::cout << __PRETTY_FUNCTION__ << '\n';
}

void CoffeeExpressLackOfCoffeeBeans::makeCoffee() {
    std::cout << __PRETTY_FUNCTION__ << '\n';
}

void CoffeeExpressLackOfCoffeeBeans::boilingUpWater() {
    std::cout << __PRETTY_FUNCTION__ << '\n';
}

void CoffeeExpressLackOfCoffeeBeans::grindCoffeeBeans() {
    std::cout << __PRETTY_FUNCTION__ << '\n';
}

void CoffeeExpressLackOfCoffeeBeans::lackOfCoffeeBeans() {
    std::cout << __PRETTY_FUNCTION__ << '\n';
}

void CoffeeExpressLackOfCoffeeBeans::lackOfWater() {
    std::cout << __PRETTY_FUNCTION__ << '\n';
}

void CoffeeExpressLackOfCoffeeBeans::wait() {
    std::cout << __PRETTY_FUNCTION__ << '\n';
}

void CoffeeExpressLackOfCoffeeBeans::off() {
    std::cout << __PRETTY_FUNCTION__ << '\n';
}

void CoffeeExpressLackOfCoffeeBeans::setState(CoffeeExpress* express) {
    this->coffeeExpress_ = express;
}
