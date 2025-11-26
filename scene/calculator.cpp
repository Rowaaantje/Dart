#include "calculator.h"

calculator::calculator() {
}

calculator::~calculator() {
}

int calculator::additions() {
    int num1, num2, num3;

    std::cin >> num1 >> num2 >> num3;
    
    return num1 + num2 + num3;
}