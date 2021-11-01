#ifndef VEHICLE_HPP
#define VEHICLE_HPP

#include <string>

#define truck 1
#define sedan 2
#define van 3
#define suv 4
 
class Vehicle
{
private:
    std::string type_vehicle;
    std::string make;
    std::string model;
    std::string year;
    std::string license_plate;
    int vehicle_spaces{1};
    
public:
    Vehicle(std::string type_, std::string make_, std::string model_, std::string year_, std::string license_plt_);
    Vehicle(const Vehicle &source);
    ~Vehicle();
    
    std::string getVehicleType();
    std::string getVehicleMake();
    std::string getVehicleYear();
    std::string getVehicleModel();
    std::string getVehicleLic_Plt();
    const void spaces_needed();
    void set_space();
    void set_vehicle_type();

};

#endif // CAR_HPP
