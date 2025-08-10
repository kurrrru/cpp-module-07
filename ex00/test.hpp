#pragma once
#include <iostream>
#include <string>

#include <ex00/whatever.hpp>
#include <toolbox/color.hpp>

template <typename T>
void testSwapAndMinMax(const std::string& testname, T a, T b) {
    std::cout
        << "Testing with "
        << toolbox::color::green << testname
        << toolbox::color::reset << "(a = "
        << toolbox::color::green << a
        << toolbox::color::reset << ", b = "
        << toolbox::color::green << b
        << toolbox::color::reset << ")"
        << std::endl;

    std::cout
        << "Min: "
        << toolbox::color::magenta << ::min(a, b)
        << toolbox::color::reset << ", Max: "
        << toolbox::color::magenta << ::max(a, b)
        << toolbox::color::reset
        << std::endl;

    ::swap(a, b);
    std::cout
        << "After swap: a = "
        << toolbox::color::cyan << a
        << toolbox::color::reset << ", b = "
        << toolbox::color::cyan << b
        << toolbox::color::reset
        << std::endl;
    std::cout << std::endl;
}
