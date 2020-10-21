#include "CoffeExpressState.hpp"
#include "CoffeeExpressBoilingUpWater.hpp"
#include "CoffeeExpressGrindCoffeeBeans.hpp"
#include "CoffeeExpressLackOfCoffeeBeans.hpp"
#include "CoffeeExpressLackOfWater.hpp"
#include "CoffeeExpressMakeCoffee.hpp"
#include "CoffeeExpressOff.hpp"
#include "CoffeeExpressOn.hpp"
#include "CoffeeExpressWait.hpp"

int main() {
    CoffeeExpress express(nullptr);
    CoffeeExpressState* state = new CoffeeExpressBoilingUpWater(&express);
    express.changeState(state);
    express.on();

    return 0;
}
