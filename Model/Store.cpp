//
// Created by Marcel on 11/1/2023.
//

#include "Store.hpp"

Store::Store(string name, string address) {
    this->name = name;
    this->address = address;
}

Store::~Store() {

}

string Store::getName() {
    return this->name;
}

string Store::getAddress() {
    return this->address;
}
