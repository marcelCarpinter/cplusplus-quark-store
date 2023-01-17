//
// Created by Marcel on 14/1/2023.
//

#include "Presentation.hpp"

Presentation::Presentation(IView* view)
{
    this->view = view;
    auto seller = new Seller("Marcel", "Carpinter", "S001");
    auto store = new Store("Quark Store", "Fake Street, 123", seller);
    this->store = store;
}

Presentation::~Presentation() {
    delete this->view;
    delete this->store;
}

string Presentation::getStoreInfo() {
    return this->store->getName() + " | " + this->store->getAddress();
}

string Presentation::getSellerInfo() {
    Seller seller = this->store->getSeller();
    return seller.getName() + " " + seller.getLastname() + " | " + seller.getCode();
}

Shirt* Presentation::createShirt(Quality quality, int price, int qty, bool neck, bool sleeve) {
    return new Shirt(quality, price, qty, neck, sleeve);
}

void Presentation::updateShirtSleeve(Shirt* shirt, bool sleeve) {
    shirt->setSleeve(sleeve);
}

string Presentation::createQuote(string seller_code, Clothes *clothes, int quantity) {
    // current date/time based on current system
    time_t now = time(0);
    tm *ltm = localtime(&now);
    string date = to_string(ltm->tm_mday) + "/" + to_string((1 + ltm->tm_mon)) + "/" + to_string((1900 + ltm->tm_year));
    string hour = to_string((ltm->tm_hour)) + ":" + to_string((ltm->tm_min));
    auto quote = new Quote(
            "001",
            date,
            hour,
            this->store->getSeller().getCode(),
            clothes,
            quantity);
    return quote->toString();
}

Pant *Presentation::createPant(Quality quality, int price, int qty, bool normal) {
    return new Pant(quality, price, qty, normal);
}




