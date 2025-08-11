#include <exception>

template <typename T>
Array<T>::Array() : _data(NULL), _size(0) {
}

template <typename T>
Array<T>::Array(unsigned int size) : _size(size) {
    _data = new T[size];
}

template <typename T>
Array<T>::Array(const Array<T>& other) : _size(other._size) {
    _data = new T[_size];
    for (std::size_t i = 0; i < other.size(); ++i) {
        _data[i] = other[i];
    }
}

template <typename T>
Array<T>& Array<T>::operator=(const Array<T>& other) {
    if (this != &other) {
        T* newData = new T[other._size];
        delete[] _data;
        _size = other._size;
        _data = newData;
        for (std::size_t i = 0; i < other.size(); ++i) {
            _data[i] = other[i];
        }
    }
    return *this;
}

template <typename T>
Array<T>::~Array() {
    delete[] _data;
}

template <typename T>
T& Array<T>::operator[](std::size_t index) {
    if (index >= _size) {
        throw std::out_of_range("Index out of range");
    }
    return _data[index];
}

template <typename T>
const T& Array<T>::operator[](std::size_t index) const {
    if (index >= _size) {
        throw std::out_of_range("Index out of range");
    }
    return _data[index];
}

template <typename T>
std::size_t Array<T>::size() const {
    return _size;
}
