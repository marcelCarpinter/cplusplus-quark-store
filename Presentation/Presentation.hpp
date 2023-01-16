//
// Created by Marcel on 14/1/2023.
//

#ifndef MAYORISTA_PRESENTATION_HPP
#define MAYORISTA_PRESENTATION_HPP


#include "../Interface/IView.hpp"
#include "../Model/Store.hpp"

class Presentation {
private:
    IView* view = nullptr;
    Store* store = nullptr;
public:
    Presentation(IView* view);
    ~Presentation();
    string getStoreInfo();
};


#endif //MAYORISTA_PRESENTATION_HPP
