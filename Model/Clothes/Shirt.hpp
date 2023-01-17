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
    string sleeve;
    string neck;
    bool shortSleeve();
    bool normalNeck();
public:
    Shirt(string quality, int price, int qty, string neck, string sleeve);
    ~Shirt();
    string getNeck();
    string getSleeve();
    int getPrice() override;
};


#endif //MAYORISTA_SHIRT_HPP
