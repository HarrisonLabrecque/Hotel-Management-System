#ifndef HOTEL_H
#define HOTEL_H

#include <vector>

#include "Room.h"
#include "Guest.h"
#include "Reservation.h"
#include "Bill.h"

class Hotel
{
private:
    std::vector<Room> rooms;
    std::vector<Guest> guests;
    std::vector<Reservation> reservations;
    std::vector<Bill> bills;

public:
    // Room management
    void addRoom(const Room& room);
    void removeRoom(int roomID);
    void displayRooms() const;
    Room* findRoom(int roomID);

    // Guest management
    void addGuest(const Guest& guest);
    void removeGuest(int guestID);
    void displayGuests() const;
    Guest* findGuest(int guestID);

    // Reservation management
    void addReservation(const Reservation& reservation);
    void cancelReservation(int reservationID);
    void displayReservations() const;
    Reservation* findReservation(int reservationID);

    // Bill management
    void addBill(const Bill& bill);
    void displayBills() const;
    Bill* findBill(int billID);
};

#endif