#include "CoffeeExpressBoilingUpWater.hpp"
#include <iostream>

CoffeeExpressBoilingUpWater::CoffeeExpressBoilingUpWater(CoffeeExpress* express)
    : coffeeExpress_(express) {}

void CoffeeExpressBoilingUpWater::on() {
    std::cout << __PRETTY_FUNCTION__ << '\n';
}

void CoffeeExpressBoilingUpWater::makeCoffee() {
    std::cout << __PRETTY_FUNCTION__ << '\n';
}

void CoffeeExpressBoilingUpWater::boilingUpWater() {
    std::cout << __PRETTY_FUNCTION__ << '\n';
}

void CoffeeExpressBoilingUpWater::grindCoffeeBeans() {
    std::cout << __PRETTY_FUNCTION__ << '\n';
}

void CoffeeExpressBoilingUpWater::lackOfCoffeeBeans() {
    std::cout << __PRETTY_FUNCTION__ << '\n';
}

void CoffeeExpressBoilingUpWater::lackOfWater() {
    std::cout << __PRETTY_FUNCTION__ << '\n';
}

void CoffeeExpressBoilingUpWater::wait() {
    std::cout << __PRETTY_FUNCTION__ << '\n';
}

void CoffeeExpressBoilingUpWater::off() {
    std::cout << __PRETTY_FUNCTION__ << '\n';
}

void CoffeeExpressBoilingUpWater::setState(CoffeeExpress* express) {
    this->coffeeExpress_ = express;
}
