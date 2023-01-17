//
// Created by Marcel on 14/1/2023.
//

#ifndef MAYORISTA_PRESENTATION_HPP
#define MAYORISTA_PRESENTATION_HPP


#include "../Interface/IView.hpp"
#include "../Model/Store.hpp"
#include "../Model/Clothes/Pant.hpp"
#include "../Model/Clothes/Shirt.hpp"

class Presentation {
private:
    IView* view = nullptr;
    Store* store = nullptr;
public:
    Presentation(IView* view);
    ~Presentation();
    string getStoreInfo();
    string getSellerInfo();
    Shirt* createShirt(Quality quality, int price, int qty, bool neck, bool sleeve);
    void updateShirtSleeve(Shirt* shirt, bool sleeve);
    string createQuote(Clothes* clothes, int quantity);
    Pant* createPant(Quality quality, int price, int qty, bool normal);
    string getAllQuotes();
    string generateQuoteCode();
    int currentStock(Clothes* clothes);
    Shirt* findShirt(Clothes* clothes);
    Pant* findPant(Clothes* clothes);
    bool hasStock(Clothes* clothes, int quantity);
};


#endif //MAYORISTA_PRESENTATION_HPP
