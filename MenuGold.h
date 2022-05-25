//header file defining class menu gold
#ifndef MENUGOLD_H
#define MENUGOLD_H
#include "MenuRegular.h"
#include <iostream>
using namespace std;


// This gold menu class has been inherited from the base regular menu class. This menu will be available to all customers who purchase the Gold ticket or higher, and has more items available to the customer than the regular menu..

class MenuGold : public MenuRegular {

    public:
    int iceCream;
    int popcornMedium;

    public:

    void AddIceCream(int _iceCream);
    void AddPopcornMedium(int _popcorn);

};
#endif