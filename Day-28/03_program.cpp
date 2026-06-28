// Write a program to Create ticket booking system. 
#include <iostream>
#include <string>
using namespace std;

class TicketBooking
{
private:
    int totalSeats;
    int bookedSeats;

public:
    TicketBooking()
    {
        totalSeats = 50;
        bookedSeats = 0;
    }

    void bookTicket()
    {
        int seats;
        cout << "Enter number of tickets to book: ";
        cin >> seats;

        if (seats <= 0)
        {
            cout << "Invalid number of tickets!\n";
        }
        else if (bookedSeats + seats > totalSeats)
        {
            cout << "Not enough seats available!\n";
        }
        else
        {
            bookedSeats += seats;
            cout << seats << " Ticket(s) booked successfully.\n";
        }
    }

    void cancelTicket()
    {
        int seats;
        cout << "Enter number of tickets to cancel: ";
        cin >> seats;

        if (seats <= 0 || seats > bookedSeats)
        {
            cout << "Invalid cancellation!\n";
        }
        else
        {
            bookedSeats -= seats;
            cout << seats << " Ticket(s) cancelled successfully.\n";
        }
    }

    void showStatus()
    {
        cout << "\n----- Ticket Status -----\n";
        cout << "Total Seats     : " << totalSeats << endl;
        cout << "Booked Seats    : " << bookedSeats << endl;
        cout << "Available Seats : " << totalSeats - bookedSeats << endl;
    }
};

int main()
{
    TicketBooking ticket;
    int choice;

    do
    {
        cout << "\n===== TICKET BOOKING SYSTEM =====\n";
        cout << "1. Book Ticket\n";
        cout << "2. Cancel Ticket\n";
        cout << "3. Show Seat Status\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            ticket.bookTicket();
            break;

        case 2:
            ticket.cancelTicket();
            break;

        case 3:
            ticket.showStatus();
            break;

        case 4:
            cout << "Thank You!\n";
            break;

        default:
            cout << "Invalid Choice!\n";
        }

    } while (choice != 4);

    return 0;
}
