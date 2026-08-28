#ifndef ROOM_H
#define ROOM_H

#include <string>

class Room
{
private:
    int roomID;
    int roomNumber;
    std::string roomType;
    double price;
    bool available;

public:
    // Default constructor
    Room();

    // Parameterized constructor
    Room(int roomID,
         int roomNumber,
         std::string roomType,
         double price,
         bool available);

    // Getter methods
    int getRoomID() const;
    int getRoomNumber() const;
    std::string getRoomType() const;
    double getPrice() const;
    bool getAvailability() const;

    // Setter methods
    void setRoomID(int roomID);
    void setRoomNumber(int roomNumber);
    void setRoomType(std::string type);
    void setPrice(double price);
    void setAvailability(bool available);

    // Display room information
    void displayRoomInformation() const;
};

#endif