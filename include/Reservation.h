#ifndef RESERVATION_H
#define RESERVATION_H

#include <string>

class Reservation
{
private:
    int reservationID;
    int guestID;
    int roomID;
    std::string checkInDate;
    std::string checkOutDate;

public:
    // Constructors
    Reservation();

    Reservation(int reservationID,
                int guestID,
                int roomID,
                std::string checkInDate,
                std::string checkOutDate);

    // Getters
    int getReservationID() const;
    int getGuestID() const;
    int getRoomID() const;
    std::string getCheckInDate() const;
    std::string getCheckOutDate() const;

    // Setters
    void setReservationID(int reservationID);
    void setGuestID(int guestID);
    void setRoomID(int roomID);
    void setCheckInDate(const std::string& checkInDate);
    void setCheckOutDate(const std::string& checkOutDate);

    void reservationInfo();
};

#endif