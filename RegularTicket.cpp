//implementation of the Regulalar Ticket
#include "RegularTicket.h"
#include "MenuRegular.h"
#include "Window.h"

using namespace std;
#include <iostream>


// Default constructor
RegularTicket::RegularTicket(){
    userName="";
    movieName="";
    seatNumber=0;
    isDiscountValid=0;
    ticketCost=5.00;
    cout<<"Regular ticket selected "<<endl;
}

// Countructor with arguments
RegularTicket::RegularTicket(string _userName, string _movieName, bool _isDiscountValid){
    userName=_userName;
    movieName=_movieName;
    isDiscountValid=_isDiscountValid;
    ticketCost = 5.00;
    cout<<"Regular ticket selected "<<endl;
}

// Calculating total cost from the regular menu.
double RegularTicket::TotalCost(){
    double totalCost=popcornSmall*2.00+5.00-2;//+water*0.50+sprite*2.50+cocaCola*2.50+5.00;
    return totalCost;
}

// Printing the receipt of items chosen from regular ticket
void RegularTicket::Print(){
    if (isDiscountValid==1){
        RegularTicket::DiscountPrint();
    }
    if (isDiscountValid==0){

        double TotalPopcorn=popcornSmall*2.00;
        cout<<"Ticket Cost (Regular) $"<< ticketCost << endl<<popcornSmall<<"x PopcornSmall purchased  $"<<TotalPopcorn<<endl <<"TotalCost: $"<<TotalCost()<<endl;
    }
}
void RegularTicket::DiscountPrint(){
    double TotalPopcorn=popcornSmall*2.00;
    cout<<"Ticket Cost (Regular) $"<< (ticketCost-2) << endl<<popcornSmall<<"x PopcornSmall purchased  $"<<TotalPopcorn<<endl <<"TotalCost: $"<<TotalCost()<<endl;
}


// Selecting one of the limited seats available to the RegularTicket class.
void RegularTicket::SelectSeat(int Seat){
    seatNumber=Seat;

}

// Destructor of the regular ticket Object
RegularTicket::~RegularTicket(){cout<<"ticket deleted" << endl;}

