#pragma once

#include <string>
#include "Room.hpp"
using std::string;

class User{
    private:
        string username;
        string password;
        double balance;
        Room* myRoom;

    public:
        User(const string &username, const string &password) : username(username), password(password) {
            balance = 200.0;
            myRoom = nullptr;
        } 
        double getBalance();
        string getUsername();
        void logOut();
        void setRoomNum(int number);
        int getRoomNum();
};