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
    Pant(string unnamed, int unnamed1, int unnamed2, bool);
    ~Pant();
    bool isNormal();
};


#endif //MAYORISTA_PANT_HPP
