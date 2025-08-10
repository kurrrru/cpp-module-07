#include <iostream>
#include <string>

#include <ex01/iter.hpp>

int main() {
    toolbox::logger::StepMark::setLogFile("iter.log");
    toolbox::logger::StepMark::setLevel(toolbox::logger::INFO);
    int intArray[] = {1, 2, 3, 4, 5};
    std::string strArray[] = {"Hello", "World", "C++", "Iterators"};

    std::cout << "Iterating over integer array:" << std::endl;
    iter(intArray, 5, output_const);
    iter(intArray, 5, output_non_const);
    std::cout << std::endl;

    std::cout << "Iterating over string array:" << std::endl;
    iter(strArray, 4, output_const);
    iter(strArray, 4, output_non_const);
    std::cout << std::endl;

    return 0;
}
