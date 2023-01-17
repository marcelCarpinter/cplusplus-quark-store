//
// Created by Marcel on 13/1/2023.
//

#include "Shirt.hpp"

Shirt::Shirt(Quality quality, int price, int qty, bool neck, bool sleeve) : Clothes(quality, price, qty) {
    this->normalNeck = neck;
    this->shortSleeve = sleeve;
}

Shirt::~Shirt() {

}

int Shirt::getPrice() {
    if( this->shortSleeve ){
        this->price = this->price - (this->price * 0.1);
    }
    if ( !this->normalNeck ){
        this->price = this->price + (this->price * 0.03);
    }
    string quality = this->getQuality();
    if(quality == "premium"){
        this->price = this->price + (this->price * 0.3);
    }
    return this->price;
}

Shirt::Shirt() = default;

void Shirt::setSleeve(const bool &sleeve) {
    Shirt::shortSleeve = sleeve;
}

void Shirt::setNeck(const bool &neck) {
    Shirt::normalNeck = neck;
}
