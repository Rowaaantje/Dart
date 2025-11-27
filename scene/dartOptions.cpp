#include "dartOptions.h"

dartOptions::dartOptions() {
    one = 360;
    two = 501;
}

dartOptions::~dartOptions() {

}

int dartOptions::select() {
    
    int selected = 0;

    while(true) {
        std::cout << "Select by entering either value: " << one << " or " << two << std::endl;
        std::cin >> selected;

        if (std::cin.fail()) {
            std::cin.clear();
            std::cin.ignore(10000, '\n');
            std::cout << "Invalid input. Please enter a number." << std::endl;
            continue;
        }

        if (selected == one || selected == two) {
            return selected;
        } 
        std::cout << "Please enter a valid value: either " << one << " or " << two << std::endl;
    }
}