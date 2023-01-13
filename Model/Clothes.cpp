//
// Created by Marcel on 11/1/2023.
//

#include "Clothes.hpp"

Clothes::Clothes(string quality, int p, int qty) {
    this->quantity = qty;
    this->price = p;
    this->quality = quality;
}

Clothes::~Clothes() {

}

string Clothes::getQuality() {
    return this->quality;
}

int Clothes::getQuantity() {
    return this->quantity;
}
