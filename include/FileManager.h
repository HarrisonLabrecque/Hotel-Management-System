#ifndef FILEMANAGER_H
#define FILEMANAGER_H

#include <vector>

#include "Room.h"
#include "Guest.h"
#include "Reservation.h"
#include "Bill.h"

class FileManager
{
public:

    // Room file management
    void saveRooms(const std::vector<Room>& rooms);
    std::vector<Room> loadRooms();

    // Guest file management
    void saveGuests(const std::vector<Guest>& guests);
    std::vector<Guest> loadGuests();

    // Reservation file management
    void saveReservations(
        const std::vector<Reservation>& reservations
    );

    std::vector<Reservation> loadReservations();

    // Bill file management
    void saveBills(const std::vector<Bill>& bills);
    std::vector<Bill> loadBills();
};

#endif