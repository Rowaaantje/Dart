#include "scene.h"

scene::scene()
{
   
}

scene::~scene()
{
}

void scene::update() {
   
    int pointsLeft;    
    int scoredPoints;
    
    scoredPoints = calculator.additions();
    pointsLeft = dartStrategy.one - scoredPoints;

    std::cout << "points scored " << scoredPoints << std::endl;
    std::cout << "points left " << pointsLeft << std::endl;
}
