#include <iostream>
#include <sstream>
#include <string>

#include <ex02/Array.hpp>
#include <toolbox/color.hpp>
#include <toolbox/StepMark.hpp>

int main() {
    toolbox::logger::StepMark::setLogFile("Array.log");
    toolbox::logger::StepMark::setLevel(toolbox::logger::INFO);
    try {
        Array<int> intArray(5);
        for (unsigned int i = 0; i < intArray.size(); ++i) {
            intArray[i] = i * 10;
        }

        std::cout << "Integer Array:" << std::endl;
        for (unsigned int i = 0; i < intArray.size(); ++i) {
            std::cout << intArray[i] << " ";
        }
        std::cout << std::endl;

        std::cout << intArray[10] << std::endl;  // This will throw an exception
    } catch (const std::exception& e) {
        std::stringstream ss;
        ss << "Exception caught: " << e.what();
        toolbox::logger::StepMark::error(ss.str());
        std::cerr << toolbox::color::red << "Exception: " << e.what()
                << toolbox::color::reset << std::endl;
    }

    try {
        Array<std::string> strArray(3);
        strArray[0] = "Hello";
        strArray[1] = "World";
        strArray[2] = "C++";

        std::cout << "String Array:" << std::endl;
        for (unsigned int i = 0; i < strArray.size(); ++i) {
            std::cout << strArray[i] << " ";
        }
        std::cout << std::endl;

        std::cout << strArray[5] << std::endl;  // This will throw an exception
    } catch (const std::exception& e) {
        std::stringstream ss;
        ss << "Exception caught: " << e.what();
        toolbox::logger::StepMark::error(ss.str());
        std::cerr << toolbox::color::red << "Exception: " << e.what()
                << toolbox::color::reset << std::endl;
    }
    return 0;
}
