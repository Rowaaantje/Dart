#include "calculator.h"
#include "dartStrategy.h"

int main() {

    calculator calculator;
    dartStrategy dartStrategy;
    
    int pointsLeft;
    int scoredPoints;
    
    scoredPoints = calculator.additions();
    pointsLeft = dartStrategy.one - scoredPoints;

    std::cout << "points scored " << scoredPoints << std::endl;
    std::cout << "points left " << pointsLeft << std::endl;

    return 0;
}