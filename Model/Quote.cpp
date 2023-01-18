//
// Created by Marcel on 11/1/2023.
//

#include "Quote.hpp"

Quote::Quote(string id, string createdDate, string createdTime, string sellerCode, Clothes* itemId, int quantity) {
    this->id = id;
    this->createdDate = createdDate;
    this->createdTime = createdTime;
    this->sellerCode = sellerCode;
    this->itemId = itemId;
    this->quantity = quantity;
}

Quote::~Quote() {

}

int Quote::getTotal() {
    return 0;
}

string Quote::toString() {
    double price = this->itemId->getPrice();
    return
            "Numero de identificacion: " + this->id + "\n" +
            "Fecha y Hora: " + this->createdDate + " " + this->createdTime + "\n" +
            "Codigo del Vendedor: " + this->sellerCode + "\n" +
            "Prenda cotizada: " + this->itemId->toString() + "\n" +
            "Precio Unitario: " + to_string(price) + "\n" +
            "Cantidad de unidades cotizadas: " + to_string(this->quantity) + "\n" +
            "Precio Final: " + to_string(price * this->quantity) + "\n";
}
