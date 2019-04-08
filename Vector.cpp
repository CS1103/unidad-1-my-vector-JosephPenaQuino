//
// Created by rudri on 3/29/2019.
//

#include "Vector.h"

UTEC::vector::vector() : _arr{nullptr}, _size(0), empty(true), capacity(0) {}

UTEC::vector::~vector() {
    // Completarlo
}

void UTEC::vector::push_back(const int &value) {
    if (empty) {
        capacity = 1;
        _arr = new int[capacity];
        empty = false;
    }
    else if (_size < capacity) {
        _arr[_size] = value;
    }
    else {
        capacity = capacity*2;
        int *temp_arr = new int[capacity];
        for (int i = 0; i < _size; ++i) {
            int xd = _arr[i];
            temp_arr[i] = xd;
        }
        _arr = temp_arr;
        _arr[_size] = value;
    }
    _size++;
}

void UTEC::vector::pop_back() {
    if (!empty) {
        if (_size -1 < capacity/2) {
            capacity = capacity/2;
            int * temp_arr = new int[capacity];
            for (int i = 0; i < _size-1; ++i) {
                temp_arr[i] = _arr[i];
            }
            _arr = temp_arr;
            _size--;
        }
        else {
            _size--;
        }
        if (_size == 0) empty = true;
    }
}

int UTEC::vector::size() {return _size;}

int UTEC::vector::get_item(int i) {
    if (i < _size) return _arr[i];
    else assert(_arr[i]);
}

void UTEC::vector::insert(int pos, const int &value) {

}