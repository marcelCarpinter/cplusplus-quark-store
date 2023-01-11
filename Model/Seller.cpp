//
// Created by Marcel on 11/1/2023.
//

#include "Seller.h"

Seller::Seller(string name, string lastname, string code) {
    this->name = name;
    this->lastname = lastname;
    this->code = code;
}

Seller::~Seller() {

}

string Seller::getName() {
    return this->name;
}

string Seller::getLastname() {
    return this->lastname;
}

string Seller::getCode() {
    return this->code;
}
