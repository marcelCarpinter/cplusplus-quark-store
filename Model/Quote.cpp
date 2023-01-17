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
