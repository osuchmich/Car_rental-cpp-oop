#ifndef DB_H
#define DB_H

#include "user.h"
#include "exceptions.h"
#include "car.h"
#include "hauling_truck.h"
#include "passenger_car.h"
#include <vector>
#include <algorithm>
#include <memory>
#include <any>

 
class db {
    public:

    std::vector<user> users;
    std::vector<std::any> cars;
    
    user& get_user(const int &ID);
    user& get_user(const std::string &username);
    void set_user(user &user, const int &ID);
    void create_user();
    void delete_user(const int &ID);
    void print_users();
    bool login(const std::string &username, const std::string &password);
    void read_from_files(std::string user_file_name);

};

#endif




