//
// Created by Marcel on 14/1/2023.
//

#include <iostream>
#include "View.hpp"
#include "../Model/Clothes.hpp"
#include "../Model/Clothes/Shirt.hpp"
#include "../Model/Clothes/Pant.hpp"
#include "../Enum/Quality.hpp"

View::View() {
    this->m_presenter = new Presentation(this);
    this->showText("Cotizador Express - Menú Principal");
    this->showText("-----------------------------");
    this->showStoreInfo();
    this->showText("-----------------------------");
    this->showSellerInfo();
    this->showText("-----------------------------");
    this->showMainMenu();
    this->newQuote();
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
    this->showText(this->m_presenter->getSellerInfo());
}

void View::showMainMenu() {
    this->showText("Seleccione una opción del menú");
    this->showText("1- Historial de Cotizaciones");
    this->showText("2- Realizar Cotización");
    this->showText("3- Salir");
}

void View::newQuote() {
    this->showText("Paso 1: Selecciona la prenda a cotizar");
    this->showText("1) Camisa");
    this->showText("2) Pantalón");
    this->chooseClothes();
}

void View::chooseClothes() {
    string option;
    cin >> option;
    cin.get();
    if(option == "1"){
        bool sleeve = this->chooseShirtSleeve();
        bool neck = this->chooseShirtNeck();
        Quality quality = this->insertQuality();
        int price = this->insertPrice();
        int qty = this->insertQty();
        Shirt *shirt = this->m_presenter->createShirt();
        this->showText(this->m_presenter->createQuote("Seller", shirt, qty));
    }
    if(option == "2"){
        bool type = this->choosePantType();
        Pant* p = new Pant(Quality::Standard, 5, 5, type);
        this->showText(p->getQuality());
    }
}

bool View::chooseShirtSleeve() {
    int option;
    this->showText("Paso 2.a - La camisa a cotizar, ¿Es manga corta?");
    this->showText("1) Sí");
    this->showText("1) No");
    std::cin >> option;
    return (option == 1);
}

bool View::chooseShirtNeck() {
    int option;
    this->showText("Paso 2.b) La camisa a cotizar, ¿Es cuello Mao?");
    this->showText("1) Sí");
    this->showText("1) No");
    std::cin >> option;
    return (option == 1);
}

bool View::choosePantType() {
    string option;
    this->showText("¿Es chupin?");
    std::cin >> option;
    return (option == "1");
}

int View::insertPrice() {
    int option;
    this->showText("Insertar precio");
    std::cin >> option;
    return option;
}

int View::insertQty() {
    int option;
    this->showText("Insertar cantidad a cotizar");
    std::cin >> option;
    return option;
}

Quality View::insertQuality(){
    int option;
    this->showText("Insertar calidad");
    this->showText("1) Standard");
    this->showText("2) Premium");
    std::cin >> option;
    return (option == 1) ? Quality::Standard : Quality::Premium;
}
