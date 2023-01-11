#ifndef MAYORISTA_SELLER_H
#define MAYORISTA_SELLER_H

using namespace std;
#include <string>

class Seller {
private:
    string name;
    string lastname;
    string code;
public:
    Seller(string, string, string);
    ~Seller();
    string getName();
    string getLastname();
    string getCode();
};


#endif //MAYORISTA_SELLER_H
