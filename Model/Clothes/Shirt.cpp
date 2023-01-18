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
    if (this->finalPrice != 0){
        return this->finalPrice;
    }
    if( this->shortSleeve ){
        this->finalPrice = this->price - (this->price * 0.1);
    }
    if ( !this->normalNeck ){
        this->finalPrice = this->price + (this->price * 0.03);
    }
    string quality = this->getQuality();
    if(quality == "Premium"){
        this->finalPrice = this->price + (this->price * 0.3);
    }
    return this->finalPrice;
}

void Shirt::setSleeve(const bool &sleeve) {
    Shirt::shortSleeve = sleeve;
}

void Shirt::setNeck(const bool &neck) {
    Shirt::normalNeck = neck;
}

string Shirt::toString() {
    string neck = this->isNormalNeck() ? "Cuello común" : "Cuello Mao";
    string sleeve = this->isShortSleeve() ? "Manga Corta" : "Manga Larga";
    return "Camisa - " + neck + " - " + sleeve + " - " + this->getQuality();
}

bool Shirt::isNormalNeck() {
    return this->normalNeck;
}

bool Shirt::isShortSleeve() {
    return this->shortSleeve;
}

