//platinum menu implemented below
#ifndef MENUPLATINUM_H
#define MENUPLATINUM_H

#include "MenuGold.h"
#include <iostream>
using namespace std;

// This platinum menu class has been inherited from the base regular menu class. This menu will be available to all customers who purchase the Platinum ticket, and has more items available to the customer than the regular menu and the gold menu.
class MenuPlatinum : public MenuGold {

    protected:
    int burger=0;
    int fries=0;

    public:
    void AddBurger(int _burger);
    void AddFries(int _fries);

};

#endif