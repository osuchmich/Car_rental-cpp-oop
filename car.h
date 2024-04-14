#ifndef CAR_H
#define CAR_H

#include<iostream>
#include<string>

class car {
    protected:
    std::string brand_name;
    std::string model;
    int production_year;
    double cost;

    public:
    int ID;
    std::string description;
    bool is_rented;
    
    car(){};
    virtual ~car(){};
    car(int ID, std::string brand_name, std::string model, int production_year, double cost, std::string description){
        this->ID = ID;
        this->brand_name = brand_name;
        this->model = model;
        this->production_year = production_year;
        this->cost = cost;
        this->description = description;
        is_rented = false;

    }
    virtual void print();
    void set_brand_name();
    void set_model();
    void set_production_year();
    void set_cost();

    bool operator==(const car& other) const {
        return this->ID == other.ID;
    }
};


#endif
