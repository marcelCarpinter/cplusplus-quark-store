//
// Created by Marcel on 11/1/2023.
//

#ifndef MAYORISTA_QUOTE_HPP
#define MAYORISTA_QUOTE_HPP

using namespace std;
#include <string>
#include "Clothes.hpp"

class Quote {
private:
    string id;
    string createdDate;
    string createdTime;
    string sellerCode;
    Clothes* itemId;
    int quantity;
public:
    Quote(string id, string createdDate, string createdTime, string sellerCode, Clothes* itemId, int quantity);
    ~Quote();
    int getTotal();
    string toString();
};


#endif //MAYORISTA_QUOTE_HPP
