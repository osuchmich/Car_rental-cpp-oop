#include "passenger_car.h"

void passenger_car::print() override {
    std::cout << "ID: " << this->ID << std::endl;
    std::cout << "Brand name: " << this->brand_name << std::endl;
    std::cout << "Model: " << this->model << std::endl;
    std::cout << "Production year: " << this->production_year << std::endl;
    std::cout << "Cost to rent per day: " << this->cost << std::endl;
    std::cout << "Description: " << this->description << std::endl;
    if(is_rented){
        std::cout << "Rented\n"
    }else{
        std::cout << "Available\n"
    }
    std::cout<<"Number of doors: " << this->nr_of_doors;
    std::cout<<"Number of seats: " << this->nr_of_seats;
}

void passenger_car::set_nr_of_doors(){
    std::cout << "Input number of doors\n";
    std::cin >> this->nr_of_doors;
}

void passenger_car::set_nr_of_seats(){
    std::cout << "Input number of seats\n";
    std::cin >> this->nr_of_seats;
}