#ifndef VEHICLES_HPP
#define VEHICLES_HPP

#include <string>
#include <vector>
#include "Vehicle.hpp"
#include <memory>


class Garage
{
    
private:
    int vehicles_entered{0};
    int max_parking;
    std::vector<std::unique_ptr<Vehicle>> vehicles;
    int number_spaces{100};
    int spaces_taken{0};
    
public:
    Garage(int max_parking_spots);
    Garage(const Garage &resource);
    void addVehicles(std::string str);
    const int get_num_spaces();
    const int get_spaces_taken();
    const int get_vehicles_entered();
    Vehicle get_vehicle(int i);
    const void displayVehicles();
    ~Garage();

};

#endif // VEHICLES_HPP
