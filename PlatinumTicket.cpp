//code implementing the class Platinum Ticket
#include "PlatinumTicket.h"
#include <iostream>
using namespace std;

// Default constructor
PlatinumTicket::PlatinumTicket(){
    userName="";
    movieName="";
    seatNumber=0;
    isDiscountValid = 0;
    ticketCost= 15.00;
}

// Contructor with arguments
PlatinumTicket::PlatinumTicket(string _userName, string _movieName, bool _isDiscountValid){
    userName=_userName;
    movieName=_movieName;
    isDiscountValid=_isDiscountValid;
    ticketCost = 15.00;
    cout<<"Platinum ticket selected "<<endl;
}

// Calculating total cost from the items chosen in the platinum menu.
double PlatinumTicket::TotalCost(){
    double totalCost=popcornSmall*2.00+iceCream*3+popcornMedium*4.00+burger*10+fries*3+ticketCost;
    return totalCost;
}

// Printing the receipt of items chosen from platinum ticket
void PlatinumTicket::Print(){
     if (isDiscountValid==1){
         PlatinumTicket::DiscountPrint();
    }
    if(isDiscountValid==0){
        double TotalPopcorn=popcornSmall*2.00;
        double TotalIcecream=iceCream*3;
        double TotalPopCornMedium=popcornMedium*4;
        double TotalBurgers=burger*10;
        double TotalFries=fries*3;
        cout<<"Ticket Cost (Platinum) $"<< ticketCost << endl<<popcornSmall<<"x PopcornSmall purchased  $"<<TotalPopcorn<<endl
        <<iceCream<<"x Icecreams purchased $"<<TotalIcecream<<endl<<popcornMedium<<"x popcornMedium purchased $"<<TotalPopCornMedium<<endl<<
        burger<<"x burgers purchased $"<<TotalBurgers<<endl<<fries<<"x fries purchased $"<<TotalFries<<endl<<"Total Cost: $"<<TotalCost()<<endl;
    }

}

// Printing the receipt of items chosen from platinum ticket, in the instance of a discount
void PlatinumTicket::DiscountPrint(){
    double TotalPopcorn=popcornSmall*2.00;
    double TotalIcecream=iceCream*3;
    double TotalPopCornMedium=popcornMedium*4;
    double TotalBurgers=burger*10;
    double TotalFries=fries*3;
    cout<<"Ticket Cost (Platinum) $"<< (ticketCost-5) << endl<<popcornSmall<<"x PopcornSmall purchased  $"<<TotalPopcorn<<endl
    <<iceCream<<"x Icecreams purchased $"<<TotalIcecream<<endl<<popcornMedium<<"x popcornMedium purchased $"<<TotalPopCornMedium<<endl<<
    burger<<"x burgers purchased $"<<TotalBurgers<<endl<<fries<<"x fries purchased $"<<TotalFries<<endl<<"Total Cost: $"<<TotalCost()<<endl;
}


// Selecting one of the limited seats available to the GoldTicket class.
void PlatinumTicket::SelectSeat(int Seat){
    seatNumber=Seat;

}

// Temporary cout
PlatinumTicket::~PlatinumTicket(){
    cout << "ticket deleted." << endl;
}

