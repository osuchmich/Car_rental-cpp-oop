#ifndef MENUS_H
#define MENUS_h

#include <iostream>
#include <string>
#include "db.h"
#include "exceptions.h"
#include <memory>

namespace menus {

    void starting_menu(db &db);
    void login_menu(db &db, int response);
    void user_menu(db &db, const int &ID);
    void change_user_menu(db &db, const int &ID);
};

#endif