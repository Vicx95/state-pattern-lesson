#include "CoffeeExpressMakeCoffee.hpp"
#include <iostream>
CoffeeExpressMakeCoffee::CoffeeExpressMakeCoffee(CoffeeExpress* express)
    : coffeeExpress_(express) {}

void CoffeeExpressMakeCoffee::on() {
    std::cout << __PRETTY_FUNCTION__ << '\n';
}

void CoffeeExpressMakeCoffee::makeCoffee() {
    std::cout << __PRETTY_FUNCTION__ << '\n';
}

void CoffeeExpressMakeCoffee::boilingUpWater() {
    std::cout << __PRETTY_FUNCTION__ << '\n';
}

void CoffeeExpressMakeCoffee::grindCoffeeBeans() {
    std::cout << __PRETTY_FUNCTION__ << '\n';
}

void CoffeeExpressMakeCoffee::lackOfCoffeeBeans() {
    std::cout << __PRETTY_FUNCTION__ << '\n';
}

void CoffeeExpressMakeCoffee::lackOfWater() {
    std::cout << __PRETTY_FUNCTION__ << '\n';
}

void CoffeeExpressMakeCoffee::wait() {
    std::cout << __PRETTY_FUNCTION__ << '\n';
}

void CoffeeExpressMakeCoffee::off() {
    std::cout << __PRETTY_FUNCTION__ << '\n';
}

void CoffeeExpressMakeCoffee::setState(CoffeeExpress* express) {
    this->coffeeExpress_ = express;
}
