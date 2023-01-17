//
// Created by Marcel on 14/1/2023.
//

#ifndef MAYORISTA_VIEW_HPP
#define MAYORISTA_VIEW_HPP

#include "../Interface/IView.hpp"
#include "../Presentation/Presentation.hpp"
#include "../Enum/Quality.hpp"
// #include "../Presentation/Presentation.hpp"

using namespace std;
#include <string>


class View: public IView {
private:
    Presentation* m_presenter;
    void showStoreInfo();
    void showSellerInfo();
    void showMainMenu();
    void newQuote();
    void chooseClothes();
    bool chooseShirtSleeve();
    bool chooseShirtNeck();
    bool choosePantType();
    int insertPrice();
    int insertQty();
    Quality insertQuality();
    void readOption(const char* option, bool& exitCondition);
public:
    View();
    ~View() override;
    void showText(const std::string& text) override;
};


#endif //MAYORISTA_VIEW_HPP
