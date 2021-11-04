#include "Vehicle.hpp"


Vehicle::Vehicle()
    :type_vehicle{nullptr},make{nullptr}, model{nullptr}, year{nullptr}, license_plate{nullptr}{
}

//Constructor
Vehicle::Vehicle(std::string type_, std::string make_, std::string model_, std::string year_, std::string license_plt_)
    :type_vehicle{type_},make{make_}, model{model_}, year{year_}, license_plate{license_plt_}{
}

//Copy Constructor
Vehicle::Vehicle(const Vehicle &source)
    :type_vehicle{source.type_vehicle},make{source.make}, model{source.model}, year{source.year}, license_plate{source.license_plate}{
        
}

//Destructor
Vehicle::~Vehicle(){

}

std::string Vehicle::getVehicleType(){
    return type_vehicle;
}

std::string Vehicle::getVehicleMake(){
    return make;
}

std::string Vehicle::getVehicleYear(){
    return year;
}

std::string Vehicle::getVehicleModel(){
    return model;
}

std::string Vehicle::getVehicleLic_Plt(){
    return license_plate;
}

const void Vehicle::spaces_needed(){
    
}
void Vehicle::set_space(){
    
}
void Vehicle::set_vehicle_type(){
    
}

