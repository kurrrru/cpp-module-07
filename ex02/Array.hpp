#pragma once

template <typename T>
class Array {
 public:
    Array();
    explicit Array(unsigned int size);
    Array(const Array<T>& other);
    Array<T>& operator=(const Array<T>& other);
    ~Array();

    T& operator[](std::size_t index);
    const T& operator[](std::size_t index) const;

    std::size_t size() const;

 private:
    T* _data;
    std::size_t _size;
};

#include "Array.tpp"
