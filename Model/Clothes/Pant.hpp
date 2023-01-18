//
// Created by Marcel on 13/1/2023.
//

#ifndef MAYORISTA_PANT_HPP
#define MAYORISTA_PANT_HPP


#include "../Clothes.hpp"

class Pant: public Clothes {
private:
    bool normal;
public:
    Pant(Quality quality, int price, int qty, bool normal);
    ~Pant();
    bool isNormal();
    double getPrice() override;
    string toString() override;
};


#endif //MAYORISTA_PANT_HPP
