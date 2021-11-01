#include "Garage.hpp"
#include "Vehicle.hpp"
#include <memory>
#include <iostream>

//Constructor
Garage::Garage(int max_parking_spots)
    :max_parking{max_parking_spots}{
}

//Copy Constructor
Garage::Garage(const Garage &source)
    :vehicles_entered{source.vehicles_entered}{
        
}

//Destructor
Garage::~Garage(){
    //delete [] vehicles_types;
}

void Garage::addCars(std::string str){
    std::string delimiter = " ";
    std::string type{""};
    std::string make{""};
    std::string year{""};
    std::string model{""};
    std::string lic_plt{""};
    int i{0};
    
    size_t pos =0;
    std::string token;
    
    while((pos = str.find(delimiter)) != std::string::npos){
        token = str.substr(0, pos);
        if(i == 0){
            type = token;
        }else if(i == 1){
            year = token;
        }else if(i == 2){
            make = token;
        }else if(i == 3){
            model = token;
        }
        if(i == 4){
            lic_plt = token;
        }
        i++;
        
        str.erase(0, pos + delimiter.length());
    }
    
    vehicles.push_back(std::make_unique<Vehicle>(type, make, model, year, lic_plt));
    
    spaces_taken++;

}


const void Garage::displayVehicles(){
    for(const auto &i: vehicles){
        std::cout <<  i->getVehicleType() << " " << i->getVehicleYear() << " " << i->getVehicleMake() << " " << i->getVehicleModel() << " " << i->getVehicleLic_Plt() << std::endl;
    }

}

const int Garage::get_num_spaces(){
    return number_spaces;  
};


const int Garage::get_spaces_taken(){
    return spaces_taken;
}
