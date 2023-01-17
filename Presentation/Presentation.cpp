//
// Created by Marcel on 14/1/2023.
//

#include "Presentation.hpp"

Presentation::Presentation(IView* view)
{
    this->view = view;
    auto seller = new Seller("Marcel", "Carpinter", "S001");
    auto store = new Store("Quark Store", "Fake Street, 123", seller);

    //Manga Corta
    //Cuello Mao
    store->addClothes(new Shirt(Quality::Standard, 10, 100, false, true));
    store->addClothes(new Shirt(Quality::Premium, 10, 100, false, true));
    //Cuello Normal
    store->addClothes(new Shirt(Quality::Standard, 10, 150, true, true));
    store->addClothes(new Shirt(Quality::Premium, 10, 150, true, true));

    //Manga Larga
    //Cuello Mao
    store->addClothes(new Shirt(Quality::Standard, 10, 75, false, true));
    store->addClothes(new Shirt(Quality::Premium, 10, 75, false, true));
    //Cuello Normal
    store->addClothes(new Shirt(Quality::Standard, 10, 175, true, true));
    store->addClothes(new Shirt(Quality::Premium, 10, 175, true, true));

    //Pantalón
    //Chupin
    store->addClothes(new Pant(Quality::Standard, 10, 750, false));
    store->addClothes(new Pant(Quality::Premium, 10, 750, false));
    //Normales
    store->addClothes(new Pant(Quality::Standard, 10, 250, true));
    store->addClothes(new Pant(Quality::Premium, 10, 250, true));

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
    Seller* seller = this->store->getSeller();
    return seller->getName() + " " + seller->getLastname() + " | " + seller->getCode();
}

Shirt* Presentation::createShirt(Quality quality, int price, int qty, bool neck, bool sleeve) {
    return new Shirt(quality, price, qty, neck, sleeve);
}

void Presentation::updateShirtSleeve(Shirt* shirt, bool sleeve) {
    shirt->setSleeve(sleeve);
}

string Presentation::createQuote(Clothes *clothes, int quantity) {
    // current date/time based on current system
    time_t now = time(0);
    tm *ltm = localtime(&now);
    string date = to_string(ltm->tm_mday) + "/" + to_string((1 + ltm->tm_mon)) + "/" + to_string((1900 + ltm->tm_year));
    string hour = to_string((ltm->tm_hour)) + ":" + to_string((ltm->tm_min));
    auto quote = new Quote(
            this->generateQuoteCode(),
            date,
            hour,
            this->store->getSeller()->getCode(),
            clothes,
            quantity);
    this->store->getSeller()->addQuote(quote);
    this->store->getSeller()->getQuotes();
    return quote->toString();
}

Pant *Presentation::createPant(Quality quality, int price, int qty, bool normal) {
    return new Pant(quality, price, qty, normal);
}

string Presentation::getAllQuotes() {
    Seller* seller = this->store->getSeller();
    std::vector<Quote*> quotes = seller->getQuotes();
    if(quotes.empty()){
        return "No hay Cotizaciones creadas";
    }
    string history;
    for( Quote* quote : quotes ){
        history += quote->toString() + "\n";
    }
    return history;
}

string Presentation::generateQuoteCode(){
    int totalQuotes = this->store->getSeller()->getQuotes().size();
    return "QID_" + to_string(totalQuotes + 1);
}

