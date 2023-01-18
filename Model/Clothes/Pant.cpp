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
    if (this->finalPrice != 0){
        return this->finalPrice;
    }
    if( !this->isNormal() ){
        this->finalPrice = this->price - (this->price * 0.12);
    }
    string quality = this->getQuality();
    if(quality == "Premium"){
        this->finalPrice = this->price + (this->price * 0.3);
    }
    return this->finalPrice;
}

string Pant::toString() {
    string normal = this->isNormal() ? "Común" : "Chupín";
    return "Pantalón - " + normal + " - " + this->getQuality();
}
