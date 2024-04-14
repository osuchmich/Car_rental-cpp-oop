#include "user.h"

    void user::print() {
        std::cout << "ID: " << this->ID << std::endl;
        std::cout << "Name: " << this->name << std::endl;
        std::cout << "Last Name: " << this->last_name << std::endl;
        std::cout << "Age: " << this->age << std::endl;
        std::cout << "Driver License ID: " << this->driver_license_ID << std::endl;
        std::cout << "Username: " << this->username << std::endl;
        std::cout << "Password: " << this->password << std::endl;
    }

    std::string user::get_password(){
        return this->password;
    }

    std::string user::get_username(){
        return this->username;
    }

    void user::set_user_name(){
        std::cout << "Input your new name\n";
        std::cin >> this->name;
    }

    void user::set_user_last_name(){
        std::cout << "Input your new last name\n";
        std::cin >> this->last_name;
    }

    void user::set_user_age(){
        std::cout << "Input your new age\n";
        std::cin >> this->age;
    }

    void user::set_user_driver_license_ID(){
        std::cout << "Input your new driver license ID\n";
        std::cin >> this->driver_license_ID;
    }

    void user::set_user_username(){
        std::cout << "Input your new username\n";
        std::cin >> this->username;
    }

    void user::set_user_password(){
        std::cout << "Input your new password\n";
        std::cin >> this->password;
    }


    // bool user::is_admin(){
    //     return this->is_admin;
    // }
    
    // void user::rent_car() {

    // }

