#ifndef GUEST_H
#define GUEST_H

#include <string>

class Guest {

    private:
    int guestID;
    std::string name;
    std::string address;
    std::string phone;
    std::string email;

    public:
    //default constructor
    Guest();

    //parameterized constructor
    Guest(int guestID,std::string name,
    std::string address, std::string phone,
std::string email);

    //Getter methods
    int getGuestID() const;
    std::string getName() const;
    std::string getAddress() const;
    std::string getPhone() const;
    std::string getEmail() const;

    //Setter methods
    void setGuestID(int guestID);
    void setName(std::string name);
    void setAddress(std::string address);
    void setPhone(std::string phone);
    void setEmail(std::string email);


    //display Guest information
    void displayGuest() const;



};


#endif