//
// Created by Marcel on 13/1/2023.
//

#include "Pant.hpp"

Pant::Pant(Quality quality, int price, int qty, bool normal) : Clothes(quality, price, qty) {
    this->normal = normal;
}

Pant::~Pant() {

}

bool Pant::isNormal() {
    return this->normal;
}

int Pant::getPrice() {
    if( !this->isNormal() ){
        this->price = this->price - (this->price * 0.12);
    }
    string quality = this->getQuality();
    if(quality == "premium"){
        this->price = this->price + (this->price * 0.3);
    }
    return this->price;
}

string Pant::toString() {
    string normal = this->isNormal() ? "Común" : "Chupín";
    return "Pantalón - " + normal + " - " + this->getQuality();
}
