//header file of the regular ticket class
#ifndef REGULAR_TICKET_H
#define REGULAR_TICKET_H

#include "Ticket.h"
#include "MenuRegular.h"

// This class is inherited from the abstract Ticket class and he MenuRegular class, and is the cheapest and most basic ticket the user can choose.
    class RegularTicket : public Ticket, public MenuRegular {

    public:
    //Regular Ticket default constructor and overloaded constructor defined below;
    RegularTicket();
    RegularTicket(string _userName, string _movieName, bool _isDiscountValid);
    //methods for regular ticket
    double TotalCost();
    void Print();
    void SelectSeat(int Seat);
    void DiscountPrint();
    ~RegularTicket();

};

#endif