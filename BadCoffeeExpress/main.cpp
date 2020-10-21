#include "CoffeeExpress.hpp"


int main(){
    CoffeeExpress express;
    express.makeAction(CoffeeExpress::ExpressActions::On);
    express.makeAction(CoffeeExpress::ExpressActions::MakeCoffee);
    express.makeAction(CoffeeExpress::ExpressActions::MakeCoffee);
    express.makeAction(CoffeeExpress::ExpressActions::MakeCoffee);
    express.makeAction(CoffeeExpress::ExpressActions::MakeCoffee);
    express.makeAction(CoffeeExpress::ExpressActions::LackOfWater);
    express.makeAction(CoffeeExpress::ExpressActions::MakeCoffee);
    express.makeAction(CoffeeExpress::ExpressActions::MakeCoffee);
    express.makeAction(CoffeeExpress::ExpressActions::LackOfCoffeeBeans);
    express.makeAction(CoffeeExpress::ExpressActions::MakeCoffee);
    express.makeAction(CoffeeExpress::ExpressActions::WaitingForAction);
    express.makeAction(CoffeeExpress::ExpressActions::Off);

}
