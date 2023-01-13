//
// Created by Marcel on 11/1/2023.
//

#ifndef MAYORISTA_CLOTHES_HPP
#define MAYORISTA_CLOTHES_HPP

using namespace std;
#include <string>

class Clothes {
private:
    string quality;
    int quantity;
public:
    int price;
    Clothes(string, int, int);
    ~Clothes();
    string getQuality();
    virtual int getPrice() = 0;
    int getQuantity();
};


#endif //MAYORISTA_CLOTHES_HPP
