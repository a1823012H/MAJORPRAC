//Implementation of the gold ticket class
#include "GoldTicket.h"
using namespace std;
#include <iostream>

// Default constructor
GoldTicket::GoldTicket(){
    userName="";
    movieName="";
    seatNumber=0;
    isDiscountValid = 0;
    ticketCost= 10.00;
}

// Constructor with arguments passed into it-overloads default
GoldTicket::GoldTicket(string _userName, string _movieName, bool _isDiscountValid){
    userName=_userName;
    movieName=_movieName;
    isDiscountValid=_isDiscountValid;
    ticketCost = 10.00;
    cout<<"Gold ticket selected "<<endl;
}

// Calculating total cost from the items available to the GoldTicket class (specified in the MenuGold class)
double GoldTicket::TotalCost(){
    double totalCost=popcornSmall*2.00+iceCream*3+popcornMedium*4.00+(ticketCost-2);
    return totalCost;
}

// Printing the receipt of items chosen from the gold menu this prints the discounted tcket print
void GoldTicket::Print(){
    if (isDiscountValid==1){
        GoldTicket::DiscountPrint();
    }
    if (isDiscountValid==0){
        double TotalPopcorn=popcornSmall*2.00;
        double TotalIcecream=iceCream*3;
        double TotalPopCornMedium=popcornMedium*4;

        cout<<"Ticket Cost (Gold) $"<< ticketCost << endl<<popcornSmall<<"x PopcornSmall purchased  $"<<TotalPopcorn<<endl<<popcornMedium<<"x Popcornmedium purchased $"<<TotalPopCornMedium<<endl
        <<iceCream<<"x Icecreams purchased $"<<TotalIcecream<<endl<<"Total Cost: "<<TotalCost()<<endl;
    }
}

//discounted ticket print
void GoldTicket::DiscountPrint(){
    double TotalPopcorn=popcornSmall*2.00;
    double TotalIcecream=iceCream*3;
    double TotalPopCornMedium=popcornMedium*4;

    cout<<"Discounted Ticket Cost (Gold) $"<< (ticketCost-2) << endl<<popcornSmall<<"x PopcornSmall purchased  $"<<TotalPopcorn<<endl<<popcornMedium<<"x Popcornmedium purchased $"<<TotalPopCornMedium<<endl
    <<iceCream<<"x Icecreams purchased $"<<TotalIcecream<<endl<<"Total Cost: "<<TotalCost()<<endl;
}

// Selecting one of the limited seats available to the GoldTicket class.
void GoldTicket::SelectSeat(int Seat){
    seatNumber=Seat;
}

// Temporary cout
GoldTicket::~GoldTicket(){
    cout << "Ticket deleted" << endl;
}