//
// Created by Marcel on 11/1/2023.
//

#ifndef MAYORISTA_STORE_HPP
#define MAYORISTA_STORE_HPP

using namespace std;
#include <string>

class Store {
private:
    string name;
    string address;
public:
    Store(string, string);
    ~Store();
};


#endif //MAYORISTA_STORE_HPP
