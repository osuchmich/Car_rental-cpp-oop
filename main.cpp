#include <iostream>
#include "menus.h"
#include "menus.cpp"
#include "db.h"
#include "db.cpp"
#include "user.h"
#include "user.cpp"

int main() {
    db db;
    db.read_from_files("users.txt");

    menus::starting_menu(db);
    return 0;
}