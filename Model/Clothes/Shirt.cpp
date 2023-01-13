//
// Created by Marcel on 13/1/2023.
//

#include "Shirt.hpp"

Shirt::Shirt(string quality, int price, int qty, string neck, string sleeve) : Clothes(quality, price, qty) {
    this->neck = neck;
    this->sleeve = sleeve;
}

Shirt::~Shirt() {

}

string Shirt::getNeck() {
    return this->neck;
}

string Shirt::getSleeve() {
    return this->sleeve;
}
