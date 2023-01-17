//
// Created by Marcel on 14/1/2023.
//

#include <iostream>
#include <stdlib.h>
#include "View.hpp"
#include "../Model/Clothes.hpp"
#include "../Model/Clothes/Shirt.hpp"
#include "../Model/Clothes/Pant.hpp"
#include "../Enum/Quality.hpp"

View::View() {
    this->m_presenter = new Presentation(this);
    this->showMainMenu();
}

View::~View() {
    delete m_presenter;
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
    bool isValidOption = true;
    do{
        this->separatorLine();
        this->showText("Cotizador Express - Menú Principal");
        this->separatorLine();
        this->showStoreInfo();
        this->separatorLine();
        this->showSellerInfo();
        this->separatorLine();
        this->showText("Seleccione una opción del menú");
        this->showText("1- Historial de Cotizaciones");
        this->showText("2- Realizar Cotización");
        this->showText("3- Salir");
        int option;
        cin >> option;
        cin.get();
        isValidOption = option > 0 && option < 3;
        switch (option) {
            case 1:
                this->displayAllQuotes();
                this->showMainMenu();
                break;
            case 2:
                this->newQuote();
                this->showMainMenu();
                break;
            case 3:
                std::cout.flush();
                exit(EXIT_SUCCESS);
                break;
            default:
                this->showText("Error en la opción a elegir");
        }
    } while (!isValidOption);
}

void View::newQuote() {
    this->separatorLine();
    this->showText("Cotizador Express - Cotizar");
    this->separatorLine();
    this->showText("Paso 1: Selecciona la prenda a cotizar");
    this->showText("1) Camisa");
    this->showText("2) Pantalón");
    this->chooseClothes();
}

void View::chooseClothes() {
    string option;
    cin >> option;
    cin.get();
    this->cleanConsole();
    if(option == "1"){
        bool sleeve = this->chooseShirtSleeve();
        bool neck = this->chooseShirtNeck();
        Quality quality = this->insertQuality();
        int price = this->insertPrice();
        int qty = this->insertQty();
        this->separatorLine();
        this->showText("Cotizador Express - Cotización creada");
        this->backToMainMenuText();
        this->showText(this->m_presenter->createQuote(
                this->m_presenter->createShirt(quality, price, qty, neck, sleeve),
                qty));
    }
    if(option == "2"){
        bool type = this->choosePantType();
        Quality quality = this->insertQuality();
        int price = this->insertPrice();
        int qty = this->insertQty();
        Pant* p = new Pant(quality, price, qty, type);
        this->showText(p->getQuality());
        this->separatorLine();
        this->showText("Cotizador Express - Cotización creada");
        this->backToMainMenuText();
        this->showText(this->m_presenter->createQuote(
                this->m_presenter->createPant(quality, price, qty, type),
                qty));
    }
    this->backToMainMenu();
}

bool View::chooseShirtSleeve() {
    int option;
    this->separatorLine();
    this->showText("Cotizador Express - Cotizar");
    this->separatorLine();
    this->showText("Paso 2.a - La camisa a cotizar, ¿Es manga corta?");
    displayYesNoMenu();
    std::cin >> option;
    return (option == 1);
}

bool View::chooseShirtNeck() {
    int option;
    this->separatorLine();
    this->showText("Cotizador Express - Cotizar");
    this->separatorLine();
    this->showText("Paso 2.b) La camisa a cotizar, ¿Es cuello Mao?");
    displayYesNoMenu();
    std::cin >> option;
    return (option != 1);
}

bool View::choosePantType() {
    string option;
    this->separatorLine();
    this->showText("Cotizador Express - Cotizar");
    this->separatorLine();
    this->showText("El pantalón a cotizar, ¿es chupin?");
    displayYesNoMenu();
    std::cin >> option;
    return (option == "1");
}

int View::insertPrice() {
    int option;
    this->separatorLine();
    this->showText("Cotizador Express - Cotizar");
    this->separatorLine();
    this->showText("Insertar precio");
    std::cin >> option;
    this->cleanConsole();
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
    this->separatorLine();
    this->showText("Cotizador Express - Cotizar");
    this->separatorLine();
    this->showText("Insertar calidad");
    this->showText("1) Standard");
    this->showText("2) Premium");
    std::cin >> option;
    cout.flush();
    return (option == 1) ? Quality::Standard : Quality::Premium;
}

void View::separatorLine() {
    this->showText("-----------------------------");
}

void View::displayAllQuotes() {
    this->separatorLine();
    this->showText("Cotizador Express - Historial de Cotizaciones");
    this->backToMainMenuText();
    this->showText(this->m_presenter->getAllQuotes());
    this->backToMainMenu();
}

void View::displayYesNoMenu() {
    this->showText("1) Sí");
    this->showText("2) No");
}

void View::backToMainMenuText() {
    this->separatorLine();
    this->showText("Presiona 3 para Volver al Menú Principal");
    this->separatorLine();
}

void View::backToMainMenu() {
    bool backToMainMenu = false;
    do{
        this->backToMainMenuText();
        int option;
        std::cin >> option;
        if(option != 3 ){
            this->showText("Opción no válida");
        }
        backToMainMenu = (option == 3);
    }
    while(!backToMainMenu);
}

void View::cleanConsole() {
    std::system("cls");
}
