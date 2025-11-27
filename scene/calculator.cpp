#include "calculator.h"

calculator::calculator() {
}

calculator::~calculator() {
}

int calculator::additions() {
    int num1, num2, num3;

    std::cout << "enter scored points" << std::endl;

    std::cin >> num1 >> num2 >> num3;
    
    return num1 + num2 + num3;
}

bool calculator::pointsLeft(int pointsleft){
    return pointsleft == 0;
}