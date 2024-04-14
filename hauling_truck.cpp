#include "hauling_truck.h"

void hauling_truck::print() override {
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
    std::cout<<"Boot dimensions: " << this->boot_dimensions;
    std::cout<<"Max load [kg]: " << this->max_load;
}

void hauling_truck::set_boot_dimensions(){
    std::cout << "Input boot dimensions\n";
    std::cin >> this->boot_dimensions;
}

void hauling_truck::set_max_load(){
    std::cout << "Input max load [kg]\n";
    std::cin >> this->max_load;
}