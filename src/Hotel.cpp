#include "Hotel.h"


#include <iostream>
#include <algorithm>

using namespace std;


// ============================================================
// ROOM MANAGEMENT
// ============================================================

// ------------------------------------------------------------
// Add Room
// Adds a new Room object to the hotel's room list.
// ------------------------------------------------------------
void Hotel::addRoom(const Room& room)
{
    rooms.push_back(room);

    cout << "Room added successfully.\n";
}


// ------------------------------------------------------------
// Remove Room
// Removes a room using its Room ID.
// ------------------------------------------------------------
void Hotel::removeRoom(int roomID)
{
    for (auto it = rooms.begin(); it != rooms.end(); ++it)
    {
        if (it->getRoomID() == roomID)
        {
            rooms.erase(it);

            cout << "Room removed successfully.\n";
            return;
        }
    }

    cout << "Room not found.\n";
}


// ------------------------------------------------------------
// Display Rooms
// Displays all rooms in the hotel.
// ------------------------------------------------------------
void Hotel::displayRooms() const
{
    if (rooms.empty())
    {
        cout << "No rooms found.\n";
        return;
    }

    cout << "\n========== HOTEL ROOMS ==========\n";

    for (const Room& room : rooms)
    {
        room.displayRoomInformation();

        cout << "---------------------------------\n";
    }
}


// ------------------------------------------------------------
// Find Room
// Searches for a room using its Room ID.
// Returns a pointer to the Room if found.
// ------------------------------------------------------------
Room* Hotel::findRoom(int roomID)
{
    for (Room& room : rooms)
    {
        if (room.getRoomID() == roomID)
        {
            return &room;
        }
    }

    return nullptr;
}


// ============================================================
// GUEST MANAGEMENT
// ============================================================

// ------------------------------------------------------------
// Add Guest
// Adds a new Guest object to the hotel's guest list.
// ------------------------------------------------------------
void Hotel::addGuest(const Guest& guest)
{
    guests.push_back(guest);

    cout << "Guest added successfully.\n";
}


// ------------------------------------------------------------
// Remove Guest
// Removes a guest using their Guest ID.
// ------------------------------------------------------------
void Hotel::removeGuest(int guestID)
{
    for (auto it = guests.begin(); it != guests.end(); ++it)
    {
        if (it->getGuestID() == guestID)
        {
            guests.erase(it);

            cout << "Guest removed successfully.\n";
            return;
        }
    }

    cout << "Guest not found.\n";
}


// ------------------------------------------------------------
// Display Guests
// Displays all registered guests.
// ------------------------------------------------------------
void Hotel::displayGuests() const
{
    if (guests.empty())
    {
        cout << "No guests found.\n";
        return;
    }

    cout << "\n========== HOTEL GUESTS ==========\n";

    for (const Guest& guest : guests)
    {
        guest.displayGuest();

        cout << "----------------------------------\n";
    }
}


// ------------------------------------------------------------
// Find Guest
// Searches for a guest using their Guest ID.
// Returns a pointer to the Guest if found.
// ------------------------------------------------------------
Guest* Hotel::findGuest(int guestID)
{
    for (Guest& guest : guests)
    {
        if (guest.getGuestID() == guestID)
        {
            return &guest;
        }
    }

    return nullptr;
}


// ============================================================
// RESERVATION MANAGEMENT
// ============================================================

// ------------------------------------------------------------
// Add Reservation
// Adds a new reservation to the hotel's reservation list.
// ------------------------------------------------------------
void Hotel::addReservation(const Reservation& reservation)
{
    reservations.push_back(reservation);

    cout << "Reservation added successfully.\n";
}


// ------------------------------------------------------------
// Cancel Reservation
// Removes a reservation using its Reservation ID.
// ------------------------------------------------------------
void Hotel::cancelReservation(int reservationID)
{
    for (auto it = reservations.begin();
         it != reservations.end();
         ++it)
    {
        if (it->getReservationID() == reservationID)
        {
            reservations.erase(it);

            cout << "Reservation cancelled successfully.\n";
            return;
        }
    }

    cout << "Reservation not found.\n";
}


// ------------------------------------------------------------
// Display Reservations
// Displays all hotel reservations.
// ------------------------------------------------------------
void Hotel::displayReservations() const
{
    if (reservations.empty())
    {
        cout << "No reservations found.\n";
        return;
    }

    cout << "\n======= HOTEL RESERVATIONS =======\n";

    for (const Reservation& reservation : reservations)
    {
        cout << "Reservation ID: "
             << reservation.getReservationID() << endl;

        cout << "Guest ID: "
             << reservation.getGuestID() << endl;

        cout << "Room ID: "
             << reservation.getRoomID() << endl;

        cout << "Check-in Date: "
             << reservation.getCheckInDate() << endl;

        cout << "Check-out Date: "
             << reservation.getCheckOutDate() << endl;

        cout << "----------------------------------\n";
    }
}


// ------------------------------------------------------------
// Find Reservation
// Searches for a reservation using its Reservation ID.
// Returns a pointer if the reservation is found.
// ------------------------------------------------------------
Reservation* Hotel::findReservation(int reservationID)
{
    for (Reservation& reservation : reservations)
    {
        if (reservation.getReservationID() == reservationID)
        {
            return &reservation;
        }
    }

    return nullptr;
}


// ============================================================
// BILL MANAGEMENT
// ============================================================

// ------------------------------------------------------------
// Add Bill
// Adds a new bill to the hotel's bill list.
// ------------------------------------------------------------
void Hotel::addBill(const Bill& bill)
{
    bills.push_back(bill);

    cout << "Bill added successfully.\n";
}


// ------------------------------------------------------------
// Display Bills
// Displays all hotel bills.
// ------------------------------------------------------------
void Hotel::displayBills() const
{
    if (bills.empty())
    {
        cout << "No bills found.\n";
        return;
    }

    cout << "\n========== HOTEL BILLS ==========\n";

    for (const Bill& bill : bills)
    {
        cout << "Bill ID: "
             << bill.getBillID() << endl;

        cout << "Guest ID: "
             << bill.getGuestID() << endl;

        cout << "Room ID: "
             << bill.getRoomID() << endl;

        cout << "Room Charges: $"
             << bill.getRoomCharges() << endl;

        cout << "Additional Charges: $"
             << bill.getAdditionalCharges() << endl;

        cout << "Total: $"
             << bill.getTotal() << endl;

        cout << "Payment Status: "
             << (bill.isPaid() ? "Paid" : "Unpaid")
             << endl;

        cout << "----------------------------------\n";
    }
}


// ------------------------------------------------------------
// Find Bill
// Searches for a bill using its Bill ID.
// Returns a pointer if the bill is found.
// ------------------------------------------------------------
Bill* Hotel::findBill(int billID)
{
    for (Bill& bill : bills)
    {
        if (bill.getBillID() == billID)
        {
            return &bill;
        }
    }

    return nullptr;
}