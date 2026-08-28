#include "FileManager.h"
#include "Room.h"
#include "Guest.h"
#include "Reservation.h"
#include "Bill.h"

#include <fstream>
#include <sstream>
#include <iostream>

// ============================================================
// Save Rooms
// Saves all room information to data/rooms.txt
// ============================================================
void FileManager::saveRooms(const std::vector<Room>& rooms)
{
    // Open the rooms file for writing.
    // If the file does not exist, it will be created.
    std::ofstream file("data/rooms.txt");

    // Check if the file was opened successfully.
    if (!file)
    {
        std::cerr << "Error: Could not open rooms.txt for writing.\n";
        return;
    }

    // Loop through every room in the vector.
    for (const Room& room : rooms)
    {
        // Write the room information to the file.
        // The | character is used to separate each field.
        file << room.getRoomID() << "|"
             << room.getRoomNumber() << "|"
             << room.getRoomType() << "|"
             << room.getPrice() << "|"
             << room.getAvailability() << "\n";
    }

    // Close the file when finished.
    file.close();
}


// ============================================================
// Load Rooms
// Reads room information from data/rooms.txt
// and returns a vector of Room objects.
// ============================================================
std::vector<Room> FileManager::loadRooms()
{
    // Create an empty vector to store the rooms.
    std::vector<Room> rooms;

    // Open the rooms file for reading.
    std::ifstream file("data/rooms.txt");

    // If the file does not exist, return an empty vector.
    if (!file)
    {
        return rooms;
    }

    // Store one line of the file at a time.
    std::string line;

    // Read the file one line at a time.
    while (std::getline(file, line))
    {
        // Create a stringstream from the current line.
        // This allows us to separate the fields.
        std::stringstream ss(line);

        // Variables to temporarily store each field.
        std::string roomID;
        std::string roomNumber;
        std::string roomType;
        std::string price;
        std::string available;

        // Read each field using | as the delimiter.
        std::getline(ss, roomID, '|');
        std::getline(ss, roomNumber, '|');
        std::getline(ss, roomType, '|');
        std::getline(ss, price, '|');
        std::getline(ss, available, '|');

        // Create a Room object using the information
        // that was read from the file.
        Room room(
            std::stoi(roomID),
            std::stoi(roomNumber),
            roomType,
            std::stod(price),
            std::stoi(available) != 0
        );

        // Add the Room object to the vector.
        rooms.push_back(room);
    }

    // Close the file when finished reading.
    file.close();

    // Return all loaded rooms.
    return rooms;
}