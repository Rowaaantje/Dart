#include "dartOptions.h"
#include "calculator.h"

class scene
{
public:
    scene();
    ~scene();

    void update();

private:
    dartOptions* options;
    calculator* calc;
};

