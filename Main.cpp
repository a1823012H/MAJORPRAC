//main function instantiates window object which behaves as the interface between the code and the user
#include <iostream>
#include "Ticket.h"
#include "MenuRegular.h"
#include "MenuGold.h"
#include "RegularTicket.h"
#include "GoldTicket.h"
#include "PlatinumTicket.h"
#include "Window.h"
#include <ctype.h>
using namespace std;

int main(){
    Window c;
    c.InitialPrint();

    return 0;
}

