#include "scene.h"

scene::scene()
{
   options = new dartOptions();
   calc = new calculator();
}

scene::~scene()
{
    delete options;
    delete calc;
}

void scene::update() {
    
    int pointsLeft = options->select();    
    int scoredPoints;

    while(pointsLeft > 0) {

        scoredPoints = calc->additions();

        pointsLeft -= scoredPoints;

        if (pointsLeft <= 0) 
            pointsLeft = 0;

        std::cout << "points scored " << scoredPoints << std::endl;
        std::cout << "points left " << pointsLeft << std::endl;

        if (pointsLeft == 0) {
            break;
        }
    }
}
