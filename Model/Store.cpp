//
// Created by Marcel on 11/1/2023.
//

#include "Store.hpp"

Store::Store(string name, string address, Seller* seller) {
    this->name = name;
    this->address = address;
    this->seller = seller;
}

Store::~Store() {

}

string Store::getName() {
    return this->name;
}

string Store::getAddress() {
    return this->address;
}

Seller Store::getSeller() {
    return *this->seller;
}
