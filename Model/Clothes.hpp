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
    int price;
    int quantity;
public:
    Clothes(string, int, int);
    ~Clothes();
    string getQuality();
    int getPrice();
    int getQuantity();
};


#endif //MAYORISTA_CLOTHES_HPP
