#include "CoffeExpressState.hpp"
#include "CoffeeExpressBoilingUpWater.hpp"
#include "CoffeeExpressGrindCoffeeBeans.hpp"
#include "CoffeeExpressLackOfCoffeeBeans.hpp"
#include "CoffeeExpressLackOfWater.hpp"
#include "CoffeeExpressMakeCoffee.hpp"
#include "CoffeeExpressOff.hpp"
#include "CoffeeExpressOn.hpp"
#include "CoffeeExpressWait.hpp"
#include <memory>
#include <vector>
int main() {
    CoffeeExpress express(nullptr);
    
    std::vector<CoffeeExpressState*> exampleScenario{
        new CoffeeExpressOff(&express),
        new CoffeeExpressOn(&express),
        new CoffeeExpressBoilingUpWater(&express),
        new CoffeeExpressMakeCoffee(&express),
        new CoffeeExpressGrindCoffeeBeans(&express),
        new CoffeeExpressMakeCoffee(&express),
        new CoffeeExpressGrindCoffeeBeans(&express),
        new CoffeeExpressMakeCoffee(&express),
        new CoffeeExpressGrindCoffeeBeans(&express),
        new CoffeeExpressMakeCoffee(&express),
        new CoffeeExpressGrindCoffeeBeans(&express),
        new CoffeeExpressMakeCoffee(&express),
        new CoffeeExpressLackOfWater(&express),
        new CoffeeExpressWait(&express),
        new CoffeeExpressMakeCoffee(&express),
        new CoffeeExpressMakeCoffee(&express),
        new CoffeeExpressLackOfCoffeeBeans(&express),
        new CoffeeExpressWait(&express),
        new CoffeeExpressMakeCoffee(&express),
        new CoffeeExpressOff(&express)
    };

    for(const auto& state : exampleScenario){
        state->boilingUpWater();
    }

    return 0;
}
