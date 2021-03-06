cmake_minimum_required(VERSION 3.10)
project(GoodCoffeeExpress)

set(CMAKE_CXX_STANDARD 17)

include_directories(inc)
include_directories(src)

set(HEADERS   
    inc/CoffeeExpress.hpp
    inc/CoffeeExpressState.hpp
    inc/CoffeeExpressOn.hpp
    inc/CoffeeExpressBoilingUpWater.hpp
    inc/CoffeeExpressMakeCoffee.hpp
    inc/CoffeeExpressGrindCoffeeBeans.hpp
    inc/CoffeeExpressLackOfCoffeeBeans.hpp
    inc/CoffeeExpressLackOfWater.hpp
    inc/CoffeeExpressWait.hpp
    inc/CoffeeExpressOff.hpp
    )

set(SRC
    src/CoffeeExpress.cpp
    src/CoffeeExpressOn.cpp
    src/CoffeeExpressBoilingUpWater.cpp
    src/CoffeeExpressMakeCoffee.cpp
    src/CoffeeExpressGrindCoffeeBeans.cpp
    src/CoffeeExpressLackOfCoffeeBeans.cpp
    src/CoffeeExpressLackOfWater.cpp
    src/CoffeeExpressWait.cpp
    src/CoffeeExpressOff.cpp
    )

add_library(${PROJECT_NAME}-lib STATIC ${SRC})
add_executable(${PROJECT_NAME} main.cpp)
target_link_libraries(${PROJECT_NAME} ${PROJECT_NAME}-lib)
set(FLAGS -Wall -Wextra -Werror -Wconversion -Wpedantic)
target_compile_options(${PROJECT_NAME} PRIVATE ${FLAGS})
