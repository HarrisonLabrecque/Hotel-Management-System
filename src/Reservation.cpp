#include "Reservation.h"

#include <iostream>

using namespace std;


// ============================================================
// Default Constructor
// Initializes a Reservation object with default values.
// ============================================================
Reservation::Reservation()
{
    reservationID = 0;
    guestID = 0;
    roomID = 0;
    checkInDate = "";
    checkOutDate = "";
}


// ============================================================
// Parameterized Constructor
// Creates a Reservation object using the provided information.
// ============================================================
Reservation::Reservation(int reservationID,
                         int guestID,
                         int roomID,
                         string checkInDate,
                         string checkOutDate)
{
    this->reservationID = reservationID;
    this->guestID = guestID;
    this->roomID = roomID;
    this->checkInDate = checkInDate;
    this->checkOutDate = checkOutDate;
}


// ============================================================
// Getter Methods
// Used to retrieve information from the Reservation object.
// ============================================================

// Get the reservation ID.
int Reservation::getReservationID() const
{
    return reservationID;
}


// Get the guest ID.
int Reservation::getGuestID() const
{
    return guestID;
}


// Get the room ID.
int Reservation::getRoomID() const
{
    return roomID;
}


// Get the check-in date.
string Reservation::getCheckInDate() const
{
    return checkInDate;
}


// Get the check-out date.
string Reservation::getCheckOutDate() const
{
    return checkOutDate;
}


// ============================================================
// Setter Methods
// Used to modify information in the Reservation object.
// ============================================================

// Set the reservation ID.
void Reservation::setReservationID(int reservationID)
{
    this->reservationID = reservationID;
}


// Set the guest ID.
void Reservation::setGuestID(int guestID)
{
    this->guestID = guestID;
}


// Set the room ID.
void Reservation::setRoomID(int roomID)
{
    this->roomID = roomID;
}


// Set the check-in date.
void Reservation::setCheckInDate(const string& checkInDate)
{
    this->checkInDate = checkInDate;
}


// Set the check-out date.
void Reservation::setCheckOutDate(const string& checkOutDate)
{
    this->checkOutDate = checkOutDate;
}

void Reservation::reservationInfo()
{
    cout << "Reservation ID: " << reservationID << endl;
    cout << "Guest ID: " << guestID << endl;
    cout << "Room ID: " << roomID << endl;
    cout << "Check-in Date: " << checkInDate << endl;
    cout << "Check-out Date: " << checkOutDate << endl;
}
