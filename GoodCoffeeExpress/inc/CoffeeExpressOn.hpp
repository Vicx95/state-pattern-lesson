#include "CoffeExpressState.hpp"
#include "CoffeeExpress.hpp"
class CoffeeExpressOn : public CoffeeExpressState{
public:
    explicit CoffeeExpressOn(CoffeeExpress* express);

    //override from CoffeeExpressState
    void on() override;
    void makeCoffee() override;
    void boilingUpWater() override;
    void grindCoffeeBeans() override;
    void lackOfCoffeeBeans() override;
    void lackOfWater() override;
    void wait() override;
    void off() override;
    void setState(CoffeeExpress* express) override;

    ~CoffeeExpressOn() = default;
private:
    CoffeeExpress* coffeeExpress_;
};
