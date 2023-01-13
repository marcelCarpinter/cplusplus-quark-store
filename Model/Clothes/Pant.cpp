//
// Created by Marcel on 13/1/2023.
//

#include "Pant.hpp"

Pant::Pant(string quality, int price, int qty, bool normal) : Clothes(quality, price, qty) {
    this->normal = normal;
}

Pant::~Pant() {

}

bool Pant::isNormal() {
    return this->normal;
}
