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

int Shirt::getPrice() {
    if( this->shortSleeve() ){
        this->price = this->price - (this->price * 0.1);
    }
    if ( !this->normalNeck() ){
        this->price = this->price + (this->price * 0.03);
    }
    string quality = this->getQuality();
    if(quality == "premium"){
        this->price = this->price + (this->price * 0.3);
    }
    return this->price;
}

bool Shirt::normalNeck() {
    return false;
}

bool Shirt::shortSleeve() {
    return false;
}
