#include "CoffeExpressState.hpp"
#include "CoffeeExpress.hpp"
class CoffeeExpressMakeCoffee : public CoffeeExpressState{
public:
    explicit CoffeeExpressMakeCoffee(CoffeeExpress* express);

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

    ~CoffeeExpressMakeCoffee() = default;
private:
    CoffeeExpress* coffeeExpress_;
};
