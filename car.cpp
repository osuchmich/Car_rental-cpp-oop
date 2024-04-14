#include "car.h"

void car::set_brand_name(){
    std::cout << "Input brand name\n";
    std::cin >> this->brand_name;
}

void car::set_model(){
    std::cout << "Input model\n";
    std::cin >> this->model;
}

void car::set_production_year(){
    std::cout << "Input production year\n";
    std::cin >> this->production_year;
}

void car::set_cost(){
    std::cout << "Input cost\n";
    std::cin >> this->cost;
}

void car::print()
{
    std::cout << "ID: " << this->ID << std::endl;
    std::cout << "Brand name: " << this->brand_name << std::endl;
    std::cout << "Model: " << this->model << std::endl;
    std::cout << "Production year: " << this->production_year << std::endl;
    std::cout << "Cost to rent per day: " << this->cost << std::endl;
    std::cout << "Description: " << this->description << std::endl;
    if(is_rented){
        std::cout << "Rented\n";
    }else{
        std::cout << "Available\n";
    }

}
