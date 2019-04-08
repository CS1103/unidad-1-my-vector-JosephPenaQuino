//
// Created by rudri on 3/29/2019.
//

#include "Vector.h"

UTEC::vector::vector() : _arr{nullptr}, _size(0) {}

UTEC::vector::~vector() {
    // Completarlo
}

void UTEC::vector::push_back(const int &value) {
    // Completarlo
    if (_size == 0) {
        _arr = new int[1];
    }
    else if (_size < sizeof(*_arr)) {

    }
    else {

    }
}

void UTEC::vector::pop_back() {
    // Completarlo
}

int UTEC::vector::size() {return _size;}

int UTEC::vector::get_item(int i) {return _arr[i];}

void UTEC::vector::insert(int pos, const int &value) {

}