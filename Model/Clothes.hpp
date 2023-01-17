//
// Created by Marcel on 11/1/2023.
//

#ifndef MAYORISTA_CLOTHES_HPP
#define MAYORISTA_CLOTHES_HPP

using namespace std;
#include <string>
#include "../Enum/Quality.hpp"

class Clothes {
private:
    Quality quality;
    int quantity;
public:
    int price;
    Clothes();
    Clothes(Quality quality, int p, int qty);
    ~Clothes();
    string getQuality();
    virtual int getPrice() = 0;
    int getQuantity();
};


#endif //MAYORISTA_CLOTHES_HPP
