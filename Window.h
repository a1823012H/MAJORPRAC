//header file defining window
#ifndef WINDOW_H
#define WINDOW_H

#include <iostream>
#include "Ticket.h"
#include "MenuRegular.h"
#include "MenuGold.h"
#include "RegularTicket.h"
#include "GoldTicket.h"
#include "PlatinumTicket.h"
#include<fstream>
#include<sstream>
#include<string>
//header file to define Window behaving as the main function when the object is instantiated from main
#include <ctype.h>
using namespace std;

//window class defined below
class Window{
    protected:
    //protected data variables of window defined below
    string userID;
    int numOfPastPurchases;
    string movieName;
    string userMovie;
    int movieNumber;
    string ticket;
    bool isDiscountValid = 0;
    string movies[3]={"Pirates of the Caribbean","Encanto","Jumanji"};
    public:

    //seat array defined below with methods.
    int *Seats=new int[10];
    void InitialPrint();
    void RegularPrint();
    void GoldPrint();
    void PlatinumPrint();
    int SelectSeatNumber();
    bool IsUserRegistered(string _userID);
    int GetPreviousPurchases(string _userID);
    int RegisterNewUser(string _userID);

    //window destructor
    ~Window();
};

#endif
