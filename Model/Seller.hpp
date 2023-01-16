#ifndef MAYORISTA_SELLER_HPP
#define MAYORISTA_SELLER_HPP

using namespace std;
#include <string>
#include <vector>
#include "Quote.hpp"

class Seller {
private:
    string name;
    string lastname;
    string code;
    std::vector<Quote*> quotes;
public:
    Seller(string name, string lastname, string code);
    ~Seller();
    string getName();
    string getLastname();
    string getCode();
    std::vector<Quote*> getQuotes();
    void addQuote(Quote* quote);
};


#endif //MAYORISTA_SELLER_HPP
