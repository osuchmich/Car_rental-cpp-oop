#include "db.h"

bool db::login(const std::string &username, const std::string &password){
    for(user user : this->users){
        if(user.get_username() == username && user.get_password() == password){
            return true;
        }
    }
    return false;
}

void db::print_users(){
    for(user user : this->users){
        user.print();
    }
}
//std::string passenger_cars_file_name, std::string hauling_trucks_file_name
void db::read_from_files(std::string user_file_name){
        int ID;
        std::string name;
        std::string last_name;
        int age;
        std::string driver_license_ID;
        std::string username;
        std::string password;
        bool is_admin;
        std::ifstream file(user_file_name);

        while(file >> ID >> name >> last_name >> age >> driver_license_ID >> username >> password >> is_admin){
            this->users.push_back(user(ID, name, last_name, age, driver_license_ID, username, password, is_admin));
        }

        file.close();

        
//         std::ifstream file(user_file_name);
        

//         file.close();

//         std::ifstream file(user_file_name);

//         file.close();
}

void db::create_user(){
    int ID = this->users.back().ID + 1;
    std::string name;
    std::string last_name;
    int age;
    std::string driver_license_ID;
    std::string username;
    std::string password;
    bool is_admin = false;

    std::cout << "Input your name: " << std::endl;
    std::cin >> name;
    std::cout << "Input your last name: " << std::endl;
    std::cin >> last_name;
    std::cout << "Input your age: " << std::endl;
    std::cin >> age;
    std::cout << "Input your driver license number: " << std::endl;
    std::cin >> driver_license_ID;
    std::cout << "Input your username: " << std::endl;
    std::cin >> username;
    std::cout << "Input your password: " << std::endl;
    std::cin >> password;

    this->users.push_back(user(ID, name, last_name, age, driver_license_ID, username, password, is_admin));
}

user& db::get_user(const int &ID) {    
    for(user &user : this->users){
        if(user.ID == ID){
            return user;
        }
    }

    throw exceptions::no_user_in_db();
}

user& db::get_user(const std::string &username){
    for(user &user : this->users){
        if(user.get_username() == username){
            return user;
        }
    }

    throw exceptions::no_user_in_db();
}

void db::delete_user(const int &ID){
    auto it = std::find(this->users.begin(), this->users.end(), this->get_user(ID));

    if(it != this->users.end()){
        this->users.erase(it);
    }

}




