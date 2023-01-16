//
// Created by Marcel on 14/1/2023.
//

#include <iostream>
#include "View.hpp"

View::View() {
    this->m_presenter = new Presentation(this);
    this->showText("Cotizador Express - Menú Principal");
    this->showText("-----------------------------");
    this->showStoreInfo();
    this->showText("-----------------------------");
    this->showSellerInfo();
}

View::~View() {

}

void View::showText(const string &text) {
    std::cout << text << std::endl;
}

void View::showStoreInfo() {
    this->showText(this->m_presenter->getStoreInfo());
}

void View::showSellerInfo(){
    this->showText("Nombre de Vendedor | Código de Vendedor");
}