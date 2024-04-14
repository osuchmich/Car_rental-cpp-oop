#ifndef PASSENGER_CAR_H
#define PASSANGER_CAR_H

class passenger_car : public car{
    private:
    int nr_of_doors;
    int nr_of_seats;

    public: 

    passenger_car(){};
    ~passenger_car(){};
    passenger_car(int ID, std::string brand_name, std::string model, int production_year, double cost, std::string description, int nr_of_doors, int nr_of_seats){
        car(ID, brand_name, model, production_year, cost, description);
        this->nr_of_doors = nr_of_doors;
        this->nr_of_seats = nr_of_seats;
    }

    void print() override; 
    void set_nr_of_doors();
    void set_nr_of_seats();
};

#endif