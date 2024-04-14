#ifndef USER_H
#define USER_H

#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <type_traits>
#include "exceptions.h"


class user {
    private:
    std::string name;
    std::string last_name;
    int age;
    std::string driver_license_ID;
    std::string username;
    std::string password;
    bool is_admin;

    public:
    int ID;
    std::vector<int> rented_cars_ids;

    user(){};
    virtual ~user(){};
    user(int ID, std::string name, std::string last_name, int age, std::string driver_license_ID, std::string username, std::string password, bool is_admin){
        this->ID = ID;
        this->name = name;
        this->last_name = last_name;
        this->age = age;
        this->driver_license_ID = driver_license_ID; 
        this->username = username;
        this->password = password;
        this->is_admin = is_admin;
    }

    bool operator==(const user& other) const {
        return this->ID == other.ID;
    }

    void print();
    void set_user_name();
    void set_user_last_name();
    void set_user_age();
    void set_user_driver_license_ID();
    void set_user_username();
    void set_user_password();
    std::string get_password();
    std::string get_username();
};

#endif