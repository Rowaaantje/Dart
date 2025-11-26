#include "calculator.h"
#include "dartStrategy.h"

class scene
{
public:
    scene();
    ~scene();

    void update();

private:
    calculator calculator;
    dartStrategy dartStrategy;
};

