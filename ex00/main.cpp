#include <iostream>
#include <string>

#include <ex00/whatever.hpp>
#include <ex00/test.hpp>
#include <toolbox/color.hpp>

int main() {
    testSwapAndMinMax("integers", 42, 24);
    testSwapAndMinMax("floating-point numbers", 3.14, 2.71);
    testSwapAndMinMax("characters", 'A', 'B');
    testSwapAndMinMax("strings", std::string("Hello"), std::string("World"));
    testSwapAndMinMax<double>("integer and double", 42, 3.14);
    return 0;
}
