//implementation of Window.h acts as the interface linking the user to the tickets and their respective menus
#include <algorithm>
#include "Window.h"
#include <cctype>
#include <string>
using namespace std;
#include <iostream>


//selecting seatNumber as a data member of Window
int Window::SelectSeatNumber(){
    int SeatNumber=0;
    cout << "Note: 1 means occupied and 0 means avaliable." << endl;
    cout<< "Select seat number between 0 and 9: " <<endl;
    cin>>SeatNumber;
    while ((Window::Seats[SeatNumber]!=0)||(SeatNumber<0) ||(SeatNumber>10)){
        cout<<"Select unoccupied seat number"<<endl;
        cin>>SeatNumber;
    }
    if ((Window::Seats[SeatNumber]==0)&&(SeatNumber<10)&&(SeatNumber>=0)){
        Window::Seats[SeatNumber]=1;
        return SeatNumber;
    }
    return SeatNumber;
}


//regular print function called from initial print when a regular ticket is to be instantiated
void Window::RegularPrint(){
        RegularTicket userTicket(userID,userMovie,isDiscountValid);
        //cout<<userTicket.GetUserName()<<endl;
        int Popcorn=0;
        cout<<"Menu Regular: PopcornSmall"<<endl;
        cout<<"How many Popcorns do you want?"<<endl;
        cin>>Popcorn;
        while (Popcorn<0||Popcorn>5){
            cout<<"enter valid popcorn quantity"<<endl;
            cin>>Popcorn;
        }

        if (Popcorn>=0&&Popcorn<=5){
            userTicket.AddPopcornSmall(Popcorn);
        }
        cout << "All seats: ";
        for (int i=0;i<10;i++){
            cout<<Seats[i]<<" ";
            if (i==9){
                cout<<"\n"<<endl;
            }
        }
        int a=SelectSeatNumber();
        userTicket.SelectSeat(a);
        userTicket.Print();

        //cout<<"Total Cost: $"<<userTicket.TotalCost()<<endl;
}

//Gold print below for instantiating the user ticket.
void Window::GoldPrint(){
        GoldTicket userTicket(userID,userMovie,isDiscountValid);
        int Popcorn=0;
        int iceCream=0;
        int popcornMedium=0;
        cout<<"Menu Gold: PopcornSmall, Medium Popcorn, icecream"<<endl;
        cout<<"How many small Popcorns do you want?"<<endl;
        cin>>Popcorn;
        while (!(Popcorn>=0&&Popcorn<=5)){
            cout<<"enter valid popcorn quantity"<<endl;
            cin>>Popcorn;
        }
        if (Popcorn>=0&&Popcorn<=5){
            userTicket.AddPopcornSmall(Popcorn);
        }
        cout<<"How many medium Popcorns do you want?"<<endl;
        cin>>popcornMedium;
         while (!(popcornMedium=0||popcornMedium<=5)){
            cout<<"enter valid popcorn quantity"<<endl;
            cin>>popcornMedium;
        }
        if (popcornMedium>=0&&popcornMedium<=5){
            userTicket.AddPopcornMedium(popcornMedium);
        }

        cout<<"How many icecream cones do you want?"<<endl;
        cin>>iceCream;
         while (!(iceCream>=0||iceCream<=5)){
            cout<<"enter valid popcorn quantity"<<endl;
            cin>>iceCream;
        }
        if (iceCream>=0&& iceCream<=5){
            userTicket.AddIceCream(iceCream);
        }

        cout << "All seats: ";
        for (int i=0;i<10;i++){
            cout<<Seats[i]<<" ";
            if (i==9){
                cout<<"\n"<<endl;
            }
        }
        int a=SelectSeatNumber();
        userTicket.SelectSeat(a);
       // cout<<"Total Cost: $"<<userTicket.TotalCost()<<endl;
        userTicket.Print();
}


//Platinum prints the Platinum menu and instantiates the Platinum ticket
void Window::PlatinumPrint(){
        PlatinumTicket userTicket(userID,userMovie,isDiscountValid);
        int Popcorn=0;;
        int iceCream=0;
        int popcornMedium=0;
        int burger=0;
        int fries=0;
        cout<<"Menu Gold: PopcornSmall, Medium Popcorn, icecream,burger,fries "<<endl;
        cout<<"How many small Popcorns do you want?"<<endl;
        cin>>Popcorn;
        while (!(Popcorn>=0||Popcorn<=5)){
            cout<<"enter valid popcorn quantity"<<endl;
            cin>>Popcorn;
        }
    //     while (true)
    //  	{
		  //  cout << "Please enter an integer : "; cin >>Popcorn;
    //             if(!cin)
    //             {
   	// 	        cin.clear();
		  //      cin.ignore(numeric_limits<streamsize>::max(), '\n');
    //                 cout << "Invalid integer! Please try again\n\n";
    //                 continue;
    //             }
    //           else break;
    //  	}
        if (Popcorn>=0&&Popcorn<=5)
        {
            userTicket.AddPopcornSmall(Popcorn);
        }
        cout<<"How many medium Popcorns do you want?"<<endl;
        cin>>popcornMedium;
         while (!(popcornMedium>=0||popcornMedium<=5))
         {
            cout<<"enter valid popcorn quantity"<<endl;
            cin>>popcornMedium;
        }
        if (popcornMedium>=0&&popcornMedium<=5)
        {
            userTicket.AddPopcornMedium(popcornMedium);
        }

        cout<<"How many icecream cones do you want?"<<endl;
        cin>>iceCream;
        while (!(iceCream>=0||iceCream<=5)){
            cout<<"enter valid iceCream quantity"<<endl;
            cin>>iceCream;
        }
        if (iceCream>=0 && iceCream<=5){
            userTicket.AddIceCream(iceCream);
        }
        cout<<"How many burgers do you want?"<<endl;
        cin>>burger;
        while (!(burger>=0||burger<=5))
        {
            cout<<"enter valid burger quantity"<<endl;
            cin>>burger;
        }
        if (burger>=0&& burger<=5)
        {
              userTicket.AddBurger(burger);
        }
        cout<<"How many fries do you want?"<<endl;
        cin>>fries;
        while (!(fries>=0||fries<=5))
        {
            cout<<"enter valid fries quantity"<<endl;
            cin>>fries;
        }
        if (fries>=0 && fries<=5)
        {
              userTicket.AddFries(fries);
        }

        cout << "All seats: ";
        for (int i=0;i<10;i++){
            cout<<Seats[i]<<" ";
            if (i==9){
                cout<<"\n"<<endl;
            }
        }
        int a=SelectSeatNumber();
        userTicket.SelectSeat(a);

        userTicket.Print();
}


//main window below takes the place of main
void Window::InitialPrint(){
    for (int i=0;i<5;i++){
        Seats[i]=1;
    }
    // for (int i=0;i<5;i++){
    //     Seats[i]=1;
    // }
    string input = "";
    string letter;
    cout<< "What's your four-digit User ID? : "<<endl;
    cin >> input;
    userID = "";
    for (int i = 0; i < 4; i++){
        letter = input[i];
        userID += letter;
    }

    bool isUserRegistered = IsUserRegistered(userID);

    if (isUserRegistered == true){
        numOfPastPurchases = GetPreviousPurchases(userID);
        if (numOfPastPurchases >= 5){
            isDiscountValid = 1;
            cout << "Congratulations! You are eligible for a discount." << endl;
        } else {
            int remaining = 5 - numOfPastPurchases;
            cout << "You'll be eligible for a discount after " << remaining << " more purchases." << endl;
        }

    } else {
        // string input = "";
        cout << "Hi there! You aren't registered yet." << endl;
        // cin >> input;
        // userID = "";
        // for (int i = 0; i < 4; i++){
        //     letter = input[i];
        //     userID += letter;
        // }

        // isUserRegistered = IsUserRegistered(userID);

        // while (isUserRegistered == true){
        //     string input = "";
        //     cout << "This user ID is already taken. Please enter a different UserID: " << endl;
        //     cin >> input;
        //     userID = "";
        //     for (int i = 0; i < 4; i++){
        //         letter = input[i];
        //         userID += letter;
        //     }
        int returned_value;
        returned_value = RegisterNewUser(userID);

    }


   //Selecting movie and taking the int input from the user which is the= index of the movie +1
    cout << "Select a movie you'd like to watch: " << endl << "1. Pirates of the Caribbean" << endl << "2. Encanto " << endl<< "3. Jumanji" << endl;
    cin >> movieNumber;

    while (!(movieNumber ==1 || movieNumber == 2||movieNumber==3) ){
        cout << "Enter valid number: "<<endl;
        movieNumber = 0;
        cin >> movieNumber;
    }

    //printing the movie name
    cout<<"The movie is: "<<movies[movieNumber-1]<<endl;
    userMovie=movies[movieNumber-1];

    //////////////generating the ticket conctructors by taking in an input from the user
    cout << "What kind of ticket would you like to buy: regular, gold or platinum? : " << endl;
    cin >> ticket;
    //
    //int sizeticket=sizeof(ticket);
    transform(ticket.begin(), ticket.end(), ticket.begin(),
     [](unsigned char c){ return std::tolower(c); });
    //ticket = tolower(ticket[sizeticket-1]);
    while(!(ticket == "regular" || ticket == "gold" || ticket == "platinum")){
        cout << "Enter valid ticket type: "<<endl;
        cin >> ticket;
        transform(ticket.begin(), ticket.end(), ticket.begin(),
          [](unsigned char c){ return std::tolower(c); });
        //ticket = tolower(ticket[sizeticket-1]);
    }
    if (ticket == "regular"){
        RegularPrint();
    }
    else if(ticket=="gold"){
        GoldPrint();
    }
    else if(ticket=="platinum"){
        PlatinumPrint();
    }

}

// finds out whether user data is in the database
bool Window::IsUserRegistered(string _userID){

    string search_term = _userID;
    bool record_found = false;


    ifstream myFileStream("database.txt");
    if(!myFileStream.is_open()){
        cout << "File failed to open." << endl;
        return 0;
    }

    string userID, userName, number;

    // line is where data of a line is saved
    string line;

    while(getline(myFileStream, line) && !record_found){
        stringstream ss(line);
        getline(ss, userID, ',');
        if (userID == search_term) {
            getline(ss, userName, ',');
            getline(ss, number, ',');
            record_found = true;
        }
    }

    myFileStream.close();
    return record_found;
}


//gets the num of previous purchases of the user
int Window::GetPreviousPurchases(string _userID){

    string search_term = _userID;
    bool record_found = false;


    ifstream myFileStream("database.txt");
    if(!myFileStream.is_open()){
        cout << "File failed to open." << endl;
        return 0;
    }

    string userID, userName, number;
    int numOfPastPurchases;

    string line;

    // line is where data of a line is saved
    while(getline(myFileStream, line) && !record_found){
        stringstream ss(line);
        getline(ss, userID, ',');
        if (userID == search_term) {
            getline(ss, userName, ',');
            getline(ss, number, ',');
            numOfPastPurchases = stoi(number);
        }
    }

    myFileStream.close();
    cout << endl;
    cout << "Welcome back, " << userName << "!" << endl;
    return numOfPastPurchases;

}

// Updates the database file
int Window::RegisterNewUser(string _userID){

    string userName = "";
    string input = "";
    string secondName;
    char character;
    cout << "Please enter your first name only: " << endl;
    cin >> input;

    int userNameLen;
    userNameLen = input.length();

    for (int i = 0; i < userNameLen; i++){
        userName += input[i];
    }

    fstream myFileStream("database.txt", ios::in|ios::out|ios::ate );
    if(!myFileStream.is_open()){
        cout << "File failed to open." << endl;
        return 0;
    }

    string userID = _userID;
    int numOfPastPurchases = 0;
    string number = to_string(numOfPastPurchases);

    myFileStream << userID << "," << userName << "," << number << endl;

    myFileStream.close();
    return 0;
}


//destructor for the window object
Window::~Window(){
    cout<<"Window deleted"<<endl;
    delete[] Seats;
}