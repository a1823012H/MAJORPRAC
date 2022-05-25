//header file to define the abstract ticket class
#include "Ticket.h"
#include <string>
using namespace std;

// A funcion to set the username from the user input
void Ticket::SetUserName(string name){
    userName=name;
}

//a function which returns Username
string Ticket::GetUserName(){return userName;}

//a function which returns movieName
string Ticket::GetMovieName(){return movieName;}
