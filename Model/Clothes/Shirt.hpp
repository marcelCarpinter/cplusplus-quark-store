//
// Created by Marcel on 13/1/2023.
//

#ifndef MAYORISTA_SHIRT_HPP
#define MAYORISTA_SHIRT_HPP

using namespace std;
#include <string>
#include "../Clothes.hpp"

class Shirt: public Clothes {
private:
    bool shortSleeve;
    bool normalNeck;
public:
    Shirt(string quality, int price, int qty, bool neck, bool sleeve);
    Shirt();
    ~Shirt();
    bool isNormalNeck();
    bool isShortSleeve();
    int getPrice() override;
    void setSleeve(const bool &sleeve);
    void setNeck(const bool &neck);
};


#endif //MAYORISTA_SHIRT_HPP
