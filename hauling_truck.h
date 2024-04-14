#ifndef HAULING_TRUCK_H
#define HAULING_TRUCK_H

#include <string>
#include "car.h"

class hauling_truck : public car {
    private:
    std::string boot_dimensions;
    int max_load;

    public:

    hauling_truck(){};
    ~hauling_truck(){};
    hauling_truck(int ID, std::string brand_name, std::string model, int production_year, double cost, std::string description, std::string boot_dimensions, int max_load) {
        car(ID, brand_name, model, production_year, cost, description);
        this->boot_dimensions = boot_dimensions;
        this->max_load = max_load;
    }

    void print() override;
    void set_boot_dimensions();
    void set_max_load();

};
#endif
