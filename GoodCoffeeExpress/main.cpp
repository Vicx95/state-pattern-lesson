#include "CoffeExpressState.hpp"
#include "CoffeeExpressWait.hpp"
#include "CoffeeExpressOn.hpp"
#include "CoffeeExpressOff.hpp"
#include "CoffeeExpressMakeCoffee.hpp"
#include "CoffeeExpressLackOfWater.hpp"
#include "CoffeeExpressLackOfCoffeeBeans.hpp"
#include "CoffeeExpressGrindCoffeeBeans.hpp"
#include "CoffeeExpressBoilingUpWater.hpp"


int main() {
    CoffeeExpress express(nullptr);
    CoffeeExpressState* state = new CoffeeExpressBoilingUpWater(&express);
    express.changeState(state);
    express.on();
    
    return 0;
}
