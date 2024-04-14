#include "menus.h"

void menus::change_user_menu(db &db, const int &ID) {
    int response = 0;

    while(response != -1){
        std::cout << "What do you wanna change?\n"
             "1. Name\n"
             "2. Last name\n"
             "3. Age\n"
             "4. Driver license ID\n"
             "5. Username\n"
             "6. Password\n"
             "Press any other key to exit\n";
        std::cin>>response;

        switch(response){
            case 1:
            db.get_user(ID).set_user_name();
            break;
            case 2:
            db.get_user(ID).set_user_last_name();
            break;
            
            case 3:
            db.get_user(ID).set_user_age();
            break;
            
            case 4:
            db.get_user(ID).set_user_driver_license_ID();
            break;
            
            case 5:
            db.get_user(ID).set_user_username();
            break;
            
            case 6:
            db.get_user(ID).set_user_password();
            break;

            default:
            response = -1;
        }
    };
    menus::user_menu(db, ID);     
}

void menus::user_menu(db &db, const int &ID){
    try{
        db.get_user(ID);
    }catch(const exceptions::no_user_in_db& ex) {
        std::cout << ex.what() << std::endl;
        menus::login_menu(db, 1);
    }

    int response;

    while(response != -1){
        std::cout <<"What do you wanna do ?:\n"
                "1.Rent a Car\n"
                "2.Display what you owe\n"
                "3.Display what cars are available to rent\n"
                "4.Display your rented cars\n"
                "5.Display your data\n"
                "6.Change your data\n"
                "7.Delete your account\n"
                "Press any other key to logout\n";
        std::cin>>response;

        switch(response){
            case 1:
            break;
            
            case 2:
            break;

            case 3:
            break;

            case 4:
            break;

            case 5:
                db.get_user(ID).print();
            break;

            case 6:
            menus::change_user_menu(db, ID);
            break;

            case 7:
            db.delete_user(ID);
            db.print_users();
            break;

            default:
            response = -1;
            break;
        }
    };
    menus::login_menu(db, ID);
}

void menus::login_menu(db &db, int response){
    if(response == 1){
        std::string username;
        std::string password;

        std::cout << "Input your username\n";
        std::cin >> username;
        std::cout << "Input your password\n";
        std::cin >> password;

       if(db.login(username, password)) {
        std::cout << "Login succesful\n";
        menus::user_menu(db, db.get_user(username).ID);

       }else {
        std::cout << "Incorrect login or password. Try again...\n";
        menus::login_menu(db, response);    
       }

    }else if (response == 2) {
        db.create_user();
        menus::user_menu(db, db.users.back().ID);

    }else {
        std::cout << "Please enter 1 or 2" <<std::endl;
        std::cin>>response;
        menus::login_menu(db, response);
    }
}

void menus::starting_menu(db &db){
    int response;
    std::string menu = 
    "Welcome to the car rental\n"
    "Enter 1 to login.\n"
    "Enter 2 to create a new accout.\n";

    std::cout << menu;
    std::cin>>response;
    menus::login_menu(db, response);

}