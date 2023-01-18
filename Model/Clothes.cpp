//
// Created by Marcel on 11/1/2023.
//

#include "Clothes.hpp"

Clothes::Clothes(Quality quality, int p, int qty) {
    this->quantity = qty;
    this->price = p;
    this->finalPrice = 0;
    this->quality = quality;
}

Clothes::~Clothes() {

}

string Clothes::getQuality() {
    return (this->quality == Quality::Standard) ? "Standard" : "Premium";
}

int Clothes::getQuantity() {
    return this->quantity;
}
