#ifndef BILL_H
#define BILL_H

class Bill
{
private:
    int billID;
    int guestID;
    int roomID;
    double roomCharges;
    double additionalCharges;
    double total;
    bool paid;

public:
    // Default constructor
    Bill();

    // Parameterized constructor
    Bill(int billID, int guestID, int roomID,
         double roomCharges, double additionalCharges,
         bool paid = false);

    // Getters
    int getBillID() const;
    int getGuestID() const;
    int getRoomID() const;
    double getRoomCharges() const;
    double getAdditionalCharges() const;
    double getTotal() const;
    bool isPaid() const;

    // Setters
    void setBillID(int billID);
    void setGuestID(int guestID);
    void setRoomID(int roomID);
    void setRoomCharges(double roomCharges);
    void setAdditionalCharges(double additionalCharges);
    void setPaid(bool paid);

    // Calculate total
    void calculateTotal();
};

#endif