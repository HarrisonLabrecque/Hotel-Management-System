#include "Guest.h"

#include <iostream>

using namespace std;


// ============================================================
// Default Constructor
// Initializes a Guest object with default values.
// ============================================================
Guest::Guest()
{
    guestID = 0;
    name = "";
    address = "";
    phone = "";
    email = "";
}


// ============================================================
// Parameterized Constructor
// Creates a Guest object using the provided information.
// ============================================================
Guest::Guest(int guestID,
             string name,
             string address,
             string phone,
             string email)
{
    this->guestID = guestID;
    this->name = name;
    this->address = address;
    this->phone = phone;
    this->email = email;
}


// ============================================================
// Getter Methods
// Used to retrieve information from the Guest object.
// ============================================================

// Get the guest ID.
int Guest::getGuestID() const
{
    return guestID;
}


// Get the guest name.
string Guest::getName() const
{
    return name;
}


// Get the guest address.
string Guest::getAddress() const
{
    return address;
}


// Get the guest phone number.
string Guest::getPhone() const
{
    return phone;
}


// Get the guest email.
string Guest::getEmail() const
{
    return email;
}


// ============================================================
// Setter Methods
// Used to modify information in the Guest object.
// ============================================================

// Set the guest ID.
void Guest::setGuestID(int guestID)
{
    this->guestID = guestID;
}


// Set the guest name.
void Guest::setName(string name)
{
    this->name = name;
}


// Set the guest address.
void Guest::setAddress(string address)
{
    this->address = address;
}


// Set the guest phone number.
void Guest::setPhone(string phone)
{
    this->phone = phone;
}


// Set the guest email.
void Guest::setEmail(string email)
{
    this->email = email;
}


// ============================================================
// Display Guest
// Displays all guest information.
// ============================================================
void Guest::displayGuest() const
{
    cout << "Guest ID: " << guestID << endl;
    cout << "Name: " << name << endl;
    cout << "Address: " << address << endl;
    cout << "Phone: " << phone << endl;
    cout << "Email: " << email << endl;
}