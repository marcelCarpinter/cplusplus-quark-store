#ifndef MAYORISTA_SELLER_HPP
#define MAYORISTA_SELLER_HPP

using namespace std;
#include <string>

class Seller {
private:
    string name;
    string lastname;
    string code;
public:
    Seller(string name, string lastname, string code);
    ~Seller();
    string getName();
    string getLastname();
    string getCode();
};


#endif //MAYORISTA_SELLER_HPP
