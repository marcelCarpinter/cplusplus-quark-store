//
// Created by Marcel on 14/1/2023.
//

#ifndef MAYORISTA_IVIEW_HPP
#define MAYORISTA_IVIEW_HPP

using namespace std;

#include <string>

class IView {
public:
    virtual ~IView() = default;
    virtual void showText(const string& text) = 0;
};


#endif //MAYORISTA_IVIEW_HPP
