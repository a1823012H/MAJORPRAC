//header file to define Gold Ticket.
#ifndef GOLD_TICKET_H
#define GOLD_TICKET_H

#include "Ticket.h"
#include "MenuGold.h"

// This class is the second of three available tickets that the user can chosse, inheriting from the abstract Ticket class and the MenuGold class.
class GoldTicket : public Ticket, public MenuGold {

    public:

    GoldTicket();
    GoldTicket(string _userName, string _movieName, bool _isDiscountValid);
    double TotalCost();
    void Print();
    void SelectSeat(int Seat);
    void DiscountPrint();
    ~GoldTicket();

};

#endif