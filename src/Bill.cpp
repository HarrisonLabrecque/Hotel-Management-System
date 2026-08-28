#include "Bill.h"

// ============================================================
// Default Constructor
// Initializes a Bill object with default values.
// ============================================================
Bill::Bill()
{
    billID = 0;
    guestID = 0;
    roomID = 0;
    roomCharges = 0.0;
    additionalCharges = 0.0;
    total = 0.0;
    paid = false;
}


// ============================================================
// Parameterized Constructor
// Creates a Bill object using the provided information.
// ============================================================
Bill::Bill(int billID, int guestID, int roomID,
           double roomCharges, double additionalCharges,
           bool paid)
{
    // Assign the provided values to the member variables.
    this->billID = billID;
    this->guestID = guestID;
    this->roomID = roomID;
    this->roomCharges = roomCharges;
    this->additionalCharges = additionalCharges;
    this->paid = paid;

    // Calculate the total charges.
    calculateTotal();
}


// ============================================================
// Getter Methods
// Used to retrieve information from the Bill object.
// ============================================================

// Get the bill ID.
int Bill::getBillID() const
{
    return billID;
}


// Get the guest ID.
int Bill::getGuestID() const
{
    return guestID;
}


// Get the room ID.
int Bill::getRoomID() const
{
    return roomID;
}


// Get the room charges.
double Bill::getRoomCharges() const
{
    return roomCharges;
}


// Get the additional charges.
double Bill::getAdditionalCharges() const
{
    return additionalCharges;
}


// Get the total bill amount.
double Bill::getTotal() const
{
    return total;
}


// Check whether the bill has been paid.
bool Bill::isPaid() const
{
    return paid;
}


// ============================================================
// Setter Methods
// Used to modify information in the Bill object.
// ============================================================

// Set the bill ID.
void Bill::setBillID(int billID)
{
    this->billID = billID;
}


// Set the guest ID.
void Bill::setGuestID(int guestID)
{
    this->guestID = guestID;
}


// Set the room ID.
void Bill::setRoomID(int roomID)
{
    this->roomID = roomID;
}


// Set the room charges.
void Bill::setRoomCharges(double roomCharges)
{
    this->roomCharges = roomCharges;

    // Recalculate the total after changing the room charges.
    calculateTotal();
}


// Set the additional charges.
void Bill::setAdditionalCharges(double additionalCharges)
{
    this->additionalCharges = additionalCharges;

    // Recalculate the total after changing the additional charges.
    calculateTotal();
}


// Set the payment status.
void Bill::setPaid(bool paid)
{
    this->paid = paid;
}


// ============================================================
// Calculate Total
// Adds room charges and additional charges.
// ============================================================
void Bill::calculateTotal()
{
    total = roomCharges + additionalCharges;
}