//header file defining regular menu
#ifndef MENUREGULAR_H
#define MENUREGULAR_H
#include <iostream>
using namespace std;

// Base class for the menu options. This menu will be available to all customers.

class MenuRegular {
    public:

    int popcornSmall = 0;

    void AddPopcornSmall(int _popcorn);

};
#endif