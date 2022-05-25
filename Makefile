output: Main.o RegularTicket.o GoldTicket.o PlatinumTicket.o Ticket.o MenuRegular.o MenuGold.o MenuPlatinum.o Window.o
	g++ Main.o RegularTicket.o GoldTicket.o PlatinumTicket.o Ticket.o MenuRegular.o MenuGold.o MenuPlatinum.o Window.o -o output
Main.o: Main.cpp
	g++ -c Main.cpp
RegularTicket.o: RegularTicket.cpp RegularTicket.h
	g++ -c RegularTicket.cpp
GoldTicket.o: GoldTicket.cpp GoldTicket.h
	g++ -c GoldTicket.cpp
PlatinumTicket.o:PlatinumTicket.cpp PlatinumTicket.h
	g++ -c PlatinumTicket.cpp
Ticket.o: Ticket.cpp Ticket.h
	g++ -c Ticket.cpp
MenuRegular.o: MenuRegular.cpp MenuRegular.h
	g++ -c MenuRegular.cpp
MenuGold.o: MenuGold.cpp MenuGold.h
	g++ -c MenuGold.cpp
MenuPlatinum.o: MenuPlatinum.cpp MenuPlatinum.h
	g++ -c MenuPlatinum.cpp
Window.o: Window.cpp Window.h
	g++ -c Window.cpp
clean:
	rm *.o output
