//
// Created by Marcel on 11/1/2023.
//

#ifndef MAYORISTA_STORE_HPP
#define MAYORISTA_STORE_HPP

using namespace std;
#include <string>
#include "Seller.hpp"

class Store {
private:
    string name;
    string address;
    Seller* seller;
    std::vector<Clothes*> items;
public:
    Store(string name, string address, Seller* seller);
    ~Store();
    string getName();
    string getAddress();
    Seller* getSeller();
    void addClothes(Clothes* clothes);
    std::vector<Clothes*> getClothesList();
};


#endif //MAYORISTA_STORE_HPP
