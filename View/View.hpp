//
// Created by Marcel on 14/1/2023.
//

#ifndef MAYORISTA_VIEW_HPP
#define MAYORISTA_VIEW_HPP

#include "../Interface/IView.hpp"
#include "../Presentation/Presentation.hpp"
// #include "../Presentation/Presentation.hpp"

using namespace std;
#include <string>


class View: public IView {
private:
    Presentation* m_presenter;
    void showStoreInfo();
    void showSellerInfo();
    //void showMainMenu();
    //void readOption(const char* option, bool& exitCondition);
public:
    View();
    ~View() override;
    void showText(const std::string& text) override;
};


#endif //MAYORISTA_VIEW_HPP
