#include "scene.h"

int main() {
    
    scene* newScene = new scene();

    newScene->update();

    //delete memory
    delete newScene; 

    return 0;
}