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
public:
    Shirt(string, int, int, string, string);
    ~Shirt();
    string getNeck();
    string getSleeve();
};


#endif //MAYORISTA_SHIRT_HPP
