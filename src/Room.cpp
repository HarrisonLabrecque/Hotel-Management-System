#include "Room.h"
#include <string>
#include <iostream>

using namespace std;

Room::Room(){

    roomID = 0;
    roomNumber = 0;
    roomType = "";
    price = 0.0;
    available = false;

};

Room::Room(int roomID, int roomNumber, string roomType, double price, bool available) {

    this->roomID = roomID;
    this->roomNumber = roomNumber;
    this->roomType = roomType;
    this->price = price;
    this->available = available;
}

void Room::setRoomID(int roomID){

    this->roomID = roomID;
}

void Room::setRoomNumber(int roomNumber){

    this->roomNumber = roomNumber;
}

void Room::setRoomType(string roomType){
    
    this->roomType = roomType;
}

void Room::setPrice(double price){

    this->price = price;
}

void Room::setAvailability(bool available) {
    
    this->available = available;
}

int Room::getRoomID() const {

    return roomID;
}

int Room::getRoomNumber() const {

    return roomNumber;
}

string Room::getRoomType() const {

    return roomType;
}

double Room::getPrice() const {

    return price;
}

bool Room::getAvailability() const {

    return available;
}

void Room::displayRoomInformation() const
{
    cout << "Room ID: " << roomID << endl;
    cout << "Room Number: " << roomNumber << endl;
    cout << "Room Type: " << roomType << endl;
    cout << "Price: $" << price << endl;

    if (available)
    {
        cout << "Availability: Available" << endl;
    }
    else
    {
        cout << "Availability: Occupied" << endl;
    }
}