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
public:
    Store(string name, string address, Seller* seller);
    ~Store();
    string getName();
    string getAddress();
    Seller getSeller();
};


#endif //MAYORISTA_STORE_HPP
