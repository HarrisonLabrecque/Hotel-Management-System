# Hotel Management System

A console-based **Hotel Management System** written in **C++17**. The application is designed to manage hotel rooms, guests, reservations, and billing information using object-oriented programming and file storage.

## Features

### Room Management

* Add new rooms
* Remove rooms
* Display room information
* Search for rooms by Room ID
* Track room availability
* Store room type and pricing

### Guest Management

* Add new guests
* Remove guests
* Display guest information
* Search for guests by Guest ID
* Store guest contact information

### Reservation Management

* Create reservations
* Cancel reservations
* Display reservations
* Search for reservations by Reservation ID
* Store check-in and check-out dates

### Billing Management

* Create bills
* Store room charges
* Store additional charges
* Automatically calculate the total
* Track payment status
* Search for bills by Bill ID

### File Management

The system uses text files to store information between program sessions.

The following files are used:

```text
data/
├── rooms.txt
├── guests.txt
├── reservations.txt
└── bills.txt
```

The `FileManager` class is responsible for reading and writing these files.

---

## Project Structure

```text
HotelManagementSystem/
│
├── main.cpp
│
├── include/
│   ├── Room.h
│   ├── Guest.h
│   ├── Reservation.h
│   ├── Bill.h
│   ├── Hotel.h
│   └── FileManager.h
│
├── src/
│   ├── Room.cpp
│   ├── Guest.cpp
│   ├── Reservation.cpp
│   ├── Bill.cpp
│   ├── Hotel.cpp
│   └── FileManager.cpp
│
├── data/
│   ├── rooms.txt
│   ├── guests.txt
│   ├── reservations.txt
│   └── bills.txt
│
└── .vscode/
    ├── tasks.json
    └── launch.json
```

---

## Classes

### Room

The `Room` class represents a hotel room.

It stores:

```text
Room ID
Room Number
Room Type
Price
Availability
```

### Guest

The `Guest` class represents a hotel guest.

It stores:

```text
Guest ID
Name
Address
Phone
Email
```

### Reservation

The `Reservation` class represents a hotel reservation.

It stores:

```text
Reservation ID
Guest ID
Room ID
Check-in Date
Check-out Date
```

### Bill

The `Bill` class represents a guest's hotel bill.

It stores:

```text
Bill ID
Guest ID
Room ID
Room Charges
Additional Charges
Total
Payment Status
```

The total is calculated using:

```text
Total = Room Charges + Additional Charges
```

### Hotel

The `Hotel` class acts as the main management class.

It manages collections of:

```cpp
std::vector<Room>
std::vector<Guest>
std::vector<Reservation>
std::vector<Bill>
```

It provides functions for adding, removing, finding, and displaying hotel information.

### FileManager

The `FileManager` class handles persistent data storage.

It provides functions to:

* Save rooms
* Load rooms
* Save guests
* Load guests
* Save reservations
* Load reservations
* Save bills
* Load bills

---

## Technologies Used

* **C++17**
* **Object-Oriented Programming**
* **STL Vectors**
* **File I/O**
* **`fstream`**
* **`stringstream`**
* **VS Code**
* **MSYS2 UCRT64 / MinGW**

---

## Requirements

To build and run this project, you will need:

* Windows
* Visual Studio Code
* C++ compiler supporting C++17
* MSYS2 with the UCRT64 toolchain
* GDB for debugging

The project is designed around the following compiler:

```text
C:\msys64\ucrt64\bin\g++.exe
```

---

## Building the Project

Open the project folder in Visual Studio Code.

From the VS Code terminal, you can compile the project with:

```bash
g++ -std=c++17 -Iinclude main.cpp src/*.cpp -o HotelManagementSystem.exe
```

If the build succeeds, an executable named:

```text
HotelManagementSystem.exe
```

will be created.

---

## Running the Program

After compiling, run:

```bash
./HotelManagementSystem.exe
```

On Windows PowerShell, you can also use:

```powershell
.\HotelManagementSystem.exe
```

---

## Main Menu

The program provides a menu similar to:

```text
========================================
       HOTEL MANAGEMENT SYSTEM
========================================
1.  Display Rooms
2.  Display Guests
3.  Display Reservations
4.  Display Bills
----------------------------------------
5.  Add Room
6.  Add Guest
7.  Make Reservation
8.  Create Bill
----------------------------------------
9.  Remove Room
10. Remove Guest
11. Cancel Reservation
----------------------------------------
12. Save Data
0.  Exit
========================================
```

---

## Data Storage Format

The system uses the `|` character to separate fields in the text files.

### rooms.txt

```text
1|101|Single|100|1
2|102|Double|150|1
3|201|Suite|250|0
```

Format:

```text
RoomID|RoomNumber|RoomType|Price|Available
```

### guests.txt

```text
1|John Smith|123 Main Street|555-1234|john@email.com
2|Jane Doe|456 Oak Street|555-5678|jane@email.com
```

Format:

```text
GuestID|Name|Address|Phone|Email
```

### reservations.txt

```text
1|1|101|2026-09-01|2026-09-05
```

Format:

```text
ReservationID|GuestID|RoomID|CheckInDate|CheckOutDate
```

### bills.txt

```text
1|1|101|400|50|450|0
```

Format:

```text
BillID|GuestID|RoomID|RoomCharges|AdditionalCharges|Total|Paid
```

For Boolean values:

```text
1 = true
0 = false
```

---

## Object-Oriented Programming

This project demonstrates several important C++ OOP concepts:

### Encapsulation

Class data members are private and accessed through public getters and setters.

Example:

```cpp
private:
    int roomID;
    double price;
```

### Constructors

Each class provides default and parameterized constructors.

Example:

```cpp
Room();
Room(int roomID,
     int roomNumber,
     std::string roomType,
     double price,
     bool available);
```

### Classes and Objects

The system creates objects representing real-world hotel entities:

```cpp
Room room;
Guest guest;
Reservation reservation;
Bill bill;
```

### Vectors

The `Hotel` class uses vectors to store multiple objects:

```cpp
std::vector<Room> rooms;
std::vector<Guest> guests;
std::vector<Reservation> reservations;
std::vector<Bill> bills;
```

### File I/O

The `FileManager` class uses C++ file streams to save and load data:

```cpp
std::ofstream
std::ifstream
```

---

## Future Improvements

Possible improvements for future versions include:

* Check room availability before making a reservation
* Automatically mark rooms as occupied after check-in
* Automatically make rooms available after check-out
* Prevent duplicate Room IDs
* Prevent duplicate Guest IDs
* Validate phone numbers and email addresses
* Validate reservation dates
* Add check-in functionality
* Add check-out functionality
* Add payment functionality
* Add room searching by room type
* Add guest searching by name
* Generate detailed receipts
* Add employee/staff management
* Add administrator login
* Add a graphical user interface
* Replace text files with a database such as SQLite

---

## Author

**Harrison Labrecque**

Hotel Management System developed as a C++ programming project.

## License

This project is intended for educational and personal development purposes.
