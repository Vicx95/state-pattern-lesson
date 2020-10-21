#include "CoffeeExpressLackOfWater.hpp"
#include <iostream>

CoffeeExpressLackOfWater::CoffeeExpressLackOfWater(CoffeeExpress* express)
    : coffeeExpress_(express) {}

void CoffeeExpressLackOfWater::on() {
    std::cout << __PRETTY_FUNCTION__ << '\n';
}

void CoffeeExpressLackOfWater::makeCoffee() {
    std::cout << __PRETTY_FUNCTION__ << '\n';
}

void CoffeeExpressLackOfWater::boilingUpWater() {
    std::cout << __PRETTY_FUNCTION__ << '\n';
}

void CoffeeExpressLackOfWater::grindCoffeeBeans() {
    std::cout << __PRETTY_FUNCTION__ << '\n';
}

void CoffeeExpressLackOfWater::lackOfCoffeeBeans() {
    std::cout << __PRETTY_FUNCTION__ << '\n';
}

void CoffeeExpressLackOfWater::lackOfWater() {
    std::cout << __PRETTY_FUNCTION__ << '\n';
}

void CoffeeExpressLackOfWater::wait() {
    std::cout << __PRETTY_FUNCTION__ << '\n';
}

void CoffeeExpressLackOfWater::off() {
    std::cout << __PRETTY_FUNCTION__ << '\n';
}

void CoffeeExpressLackOfWater::setState(CoffeeExpress* express) {
    this->coffeeExpress_ = express;
}
