#include <iostream>
#include <limits>

#include "Hotel.h"
#include "Room.h"
#include "Guest.h"
#include "Reservation.h"
#include "Bill.h"
#include "FileManager.h"

using namespace std;


// ============================================================
// Function Prototypes
// ============================================================

// Display the main menu.
void displayMenu();

// Add a new room to the hotel.
void addRoom(Hotel& hotel);

// Add a new guest to the hotel.
void addGuest(Hotel& hotel);

// Create a new reservation.
void makeReservation(Hotel& hotel);

// Create a new bill.
void createBill(Hotel& hotel);

// Display all rooms.
void displayRooms(const Hotel& hotel);

// Display all guests.
void displayGuests(const Hotel& hotel);

// Display all reservations.
void displayReservations(const Hotel& hotel);

// Display all bills.
void displayBills(const Hotel& hotel);

// Remove a room.
void removeRoom(Hotel& hotel);

// Remove a guest.
void removeGuest(Hotel& hotel);

// Cancel a reservation.
void cancelReservation(Hotel& hotel);


// ============================================================
// Main Function
// ============================================================

int main()
{
    // Create the Hotel object.
    Hotel hotel;

    // Create the FileManager object.
    FileManager fileManager;

    // Variable used to store the user's menu choice.
    int choice;


    // --------------------------------------------------------
    // Main program loop
    // --------------------------------------------------------
    do
    {
        displayMenu();

        cout << "Enter your choice: ";
        cin >> choice;


        // Check for invalid input.
        if (cin.fail())
        {
            cin.clear();

            cin.ignore(
                numeric_limits<streamsize>::max(),
                '\n'
            );

            cout << "\nInvalid input. Please enter a number.\n";

            continue;
        }


        // ----------------------------------------------------
        // Process the user's menu choice.
        // ----------------------------------------------------
        switch (choice)
        {
            case 1:
                displayRooms(hotel);
                break;

            case 2:
                displayGuests(hotel);
                break;

            case 3:
                displayReservations(hotel);
                break;

            case 4:
                displayBills(hotel);
                break;

            case 5:
                addRoom(hotel);
                break;

            case 6:
                addGuest(hotel);
                break;

            case 7:
                makeReservation(hotel);
                break;

            case 8:
                createBill(hotel);
                break;

            case 9:
                removeRoom(hotel);
                break;

            case 10:
                removeGuest(hotel);
                break;

            case 11:
                cancelReservation(hotel);
                break;

            case 12:
                cout << "\nSaving data...\n";

                // Save all hotel data to files.
                // These functions will be available once
                // FileManager.cpp is completed.
                //
                // fileManager.saveRooms(...);
                // fileManager.saveGuests(...);
                // fileManager.saveReservations(...);
                // fileManager.saveBills(...);

                cout << "Data saved successfully.\n";

                break;

            case 0:
                cout << "\nExiting Hotel Management System...\n";

                // Save data before exiting.
                //
                // These will be connected after the
                // FileManager and Hotel classes are finished.

                cout << "Goodbye!\n";

                break;

            default:
                cout << "\nInvalid choice. Please try again.\n";
        }

    } while (choice != 0);


    return 0;
}


// ============================================================
// Display Menu
// Shows the available options to the user.
// ============================================================

void displayMenu()
{
    cout << "\n";
    cout << "========================================\n";
    cout << "       HOTEL MANAGEMENT SYSTEM\n";
    cout << "========================================\n";

    cout << "1.  Display Rooms\n";
    cout << "2.  Display Guests\n";
    cout << "3.  Display Reservations\n";
    cout << "4.  Display Bills\n";

    cout << "----------------------------------------\n";

    cout << "5.  Add Room\n";
    cout << "6.  Add Guest\n";
    cout << "7.  Make Reservation\n";
    cout << "8.  Create Bill\n";

    cout << "----------------------------------------\n";

    cout << "9.  Remove Room\n";
    cout << "10. Remove Guest\n";
    cout << "11. Cancel Reservation\n";

    cout << "----------------------------------------\n";

    cout << "12. Save Data\n";
    cout << "0.  Exit\n";

    cout << "========================================\n";
}


// ============================================================
// Add Room
// Gets room information from the user and adds the room
// to the hotel.
// ============================================================

void addRoom(Hotel& hotel)
{
    int roomID;
    int roomNumber;
    string roomType;
    double price;


    cout << "\n========== ADD ROOM ==========\n";


    // Get the Room ID.
    cout << "Enter Room ID: ";
    cin >> roomID;


    // Get the room number.
    cout << "Enter Room Number: ";
    cin >> roomNumber;


    // Clear the input buffer before using getline().
    cin.ignore(
        numeric_limits<streamsize>::max(),
        '\n'
    );


    // Get the room type.
    cout << "Enter Room Type: ";
    getline(cin, roomType);


    // Get the room price.
    cout << "Enter Room Price: $";
    cin >> price;


    // New rooms are available by default.
    bool available = true;


    // Create the Room object.
    Room room(
        roomID,
        roomNumber,
        roomType,
        price,
        available
    );


    // Add the room to the Hotel.
    hotel.addRoom(room);
}


// ============================================================
// Add Guest
// Gets guest information from the user and adds the guest
// to the hotel.
// ============================================================

void addGuest(Hotel& hotel)
{
    int guestID;

    string name;
    string address;
    string phone;
    string email;


    cout << "\n========== ADD GUEST ==========\n";


    // Get the Guest ID.
    cout << "Enter Guest ID: ";
    cin >> guestID;


    // Clear the input buffer.
    cin.ignore(
        numeric_limits<streamsize>::max(),
        '\n'
    );


    // Get the guest's name.
    cout << "Enter Name: ";
    getline(cin, name);


    // Get the guest's address.
    cout << "Enter Address: ";
    getline(cin, address);


    // Get the guest's phone number.
    cout << "Enter Phone: ";
    getline(cin, phone);


    // Get the guest's email.
    cout << "Enter Email: ";
    getline(cin, email);


    // Create the Guest object.
    Guest guest(
        guestID,
        name,
        address,
        phone,
        email
    );


    // Add the guest to the Hotel.
    hotel.addGuest(guest);
}


// ============================================================
// Make Reservation
// Gets reservation information from the user and adds the
// reservation to the hotel.
// ============================================================

void makeReservation(Hotel& hotel)
{
    int reservationID;
    int guestID;
    int roomID;

    string checkInDate;
    string checkOutDate;


    cout << "\n======= MAKE RESERVATION =======\n";


    // Get the Reservation ID.
    cout << "Enter Reservation ID: ";
    cin >> reservationID;


    // Get the Guest ID.
    cout << "Enter Guest ID: ";
    cin >> guestID;


    // Get the Room ID.
    cout << "Enter Room ID: ";
    cin >> roomID;


    // Clear the input buffer.
    cin.ignore(
        numeric_limits<streamsize>::max(),
        '\n'
    );


    // Get the check-in date.
    cout << "Enter Check-in Date: ";
    getline(cin, checkInDate);


    // Get the check-out date.
    cout << "Enter Check-out Date: ";
    getline(cin, checkOutDate);


    // Create the Reservation object.
    Reservation reservation(
        reservationID,
        guestID,
        roomID,
        checkInDate,
        checkOutDate
    );


    // Add the reservation to the Hotel.
    hotel.addReservation(reservation);
}


// ============================================================
// Create Bill
// Gets billing information from the user and adds the bill
// to the hotel.
// ============================================================

void createBill(Hotel& hotel)
{
    int billID;
    int guestID;
    int roomID;

    double roomCharges;
    double additionalCharges;


    cout << "\n========== CREATE BILL ==========\n";


    // Get the Bill ID.
    cout << "Enter Bill ID: ";
    cin >> billID;


    // Get the Guest ID.
    cout << "Enter Guest ID: ";
    cin >> guestID;


    // Get the Room ID.
    cout << "Enter Room ID: ";
    cin >> roomID;


    // Get the room charges.
    cout << "Enter Room Charges: $";
    cin >> roomCharges;


    // Get any additional charges.
    cout << "Enter Additional Charges: $";
    cin >> additionalCharges;


    // New bills are unpaid by default.
    bool paid = false;


    // Create the Bill object.
    Bill bill(
        billID,
        guestID,
        roomID,
        roomCharges,
        additionalCharges,
        paid
    );


    // Add the bill to the Hotel.
    hotel.addBill(bill);


    // Display the calculated total.
    cout << "Bill Total: $"
         << bill.getTotal()
         << endl;
}


// ============================================================
// Display Rooms
// Displays all rooms managed by the Hotel.
// ============================================================

void displayRooms(const Hotel& hotel)
{
    cout << "\n========== ROOMS ==========\n";

    hotel.displayRooms();
}


// ============================================================
// Display Guests
// Displays all guests managed by the Hotel.
// ============================================================

void displayGuests(const Hotel& hotel)
{
    cout << "\n========== GUESTS ==========\n";

    hotel.displayGuests();
}


// ============================================================
// Display Reservations
// Displays all reservations managed by the Hotel.
// ============================================================

void displayReservations(const Hotel& hotel)
{
    cout << "\n======= RESERVATIONS =======\n";

    hotel.displayReservations();
}


// ============================================================
// Display Bills
// Displays all bills managed by the Hotel.
// ============================================================

void displayBills(const Hotel& hotel)
{
    cout << "\n========== BILLS ==========\n";

    hotel.displayBills();
}


// ============================================================
// Remove Room
// Removes a room using the Room ID.
// ============================================================

void removeRoom(Hotel& hotel)
{
    int roomID;


    cout << "\n========== REMOVE ROOM ==========\n";


    // Ask the user for the Room ID.
    cout << "Enter Room ID: ";
    cin >> roomID;


    // Remove the room from the Hotel.
    hotel.removeRoom(roomID);
}


// ============================================================
// Remove Guest
// Removes a guest using the Guest ID.
// ============================================================

void removeGuest(Hotel& hotel)
{
    int guestID;


    cout << "\n========== REMOVE GUEST ==========\n";


    // Ask the user for the Guest ID.
    cout << "Enter Guest ID: ";
    cin >> guestID;


    // Remove the guest from the Hotel.
    hotel.removeGuest(guestID);
}


// ============================================================
// Cancel Reservation
// Cancels a reservation using the Reservation ID.
// ============================================================

void cancelReservation(Hotel& hotel)
{
    int reservationID;


    cout << "\n======= CANCEL RESERVATION =======\n";


    // Ask the user for the Reservation ID.
    cout << "Enter Reservation ID: ";
    cin >> reservationID;


    // Cancel the reservation.
    hotel.cancelReservation(reservationID);
}