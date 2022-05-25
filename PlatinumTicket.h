//header file defining platinum ticket
#ifndef PLATINUM_TICKET_H
#define PLATINUM_TICKET_H

#include "Ticket.h"
#include "MenuPlatinum.h"


// This class is inherited from the abstract Ticket class and the MenuPlatinum class, and is the most extensive and expensive ticket the user can choose.
class PlatinumTicket : public Ticket, public MenuPlatinum {

    public:
    //Platinum Ticket constructor below and the overloaded constructor.
    PlatinumTicket();
    PlatinumTicket(string _userName, string _movieName, bool _isDiscountValid);
    double TotalCost();
    void Print();
    void SelectSeat(int Seat);
    void DiscountPrint();
    //Platinum Destructor
    ~PlatinumTicket();

};

#endif