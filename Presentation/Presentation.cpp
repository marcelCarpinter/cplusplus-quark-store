//
// Created by Marcel on 14/1/2023.
//

#include "Presentation.hpp"

Presentation::Presentation(IView* view) : view(view), store(new Store("Quark Store", "Fake Street, 123"))
{
}