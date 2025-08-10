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

    int a = 2;int b = 3;
    ::swap( a, b );
    std::cout << "a = " << a << ", b = " << b << std::endl;
    std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
    std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
    std::string c = "chaine1";
    std::string d = "chaine2";
    ::swap(c, d);
    std::cout << "c = " << c << ", d = " << d << std::endl;
    std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
    std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;

    return 0;
}
