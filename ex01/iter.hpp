#pragma once

#include <cstddef>
#include <iostream>

#include <toolbox/StepMark.hpp>

template <typename T>
void iter(T* arr, std::size_t size, void (*func)(T&)) {
    toolbox::logger::StepMark::info("non-const version of iter called");
    for (std::size_t i = 0; i < size; ++i) {
        func(arr[i]);
    }
}

template <typename T>
void iter(const T* arr, std::size_t size, void (*func)(const T&)) {
    toolbox::logger::StepMark::info("const version of iter called");
    for (std::size_t i = 0; i < size; ++i) {
        func(arr[i]);
    }
}


template <typename T>
void output_const(const T& value) {
    std::cout << value << " ";
}

template <typename T>
void output_non_const(T& value) {
    std::cout << value << " ";
}
