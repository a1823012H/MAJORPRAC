#ifndef TICKET_H
#define TICKET_H
#include <iostream>
using namespace std;

// Abstract ticket class (as it includes a number of virtual functions)
class Ticket{
    protected:
    string userName;
    string movieName;
    int* seats;
    int seatNumber;
    double totalCost;
    double ticketCost;
    bool isDiscountValid;

    public:
    void SetUserName(string name);
    void SetMovieName();
    string GetUserName();
    string GetMovieName();
    virtual double TotalCost()=0;
    virtual void Print()=0;
    //virtual void SelectSeat(int Seat)=0;
};
#endif
