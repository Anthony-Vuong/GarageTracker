#include "Truck.hpp"

Truck::Truck()
    :Vehicle(){
}

Truck::Truck(std::string type_, 
             std::string make_,
             std::string model_,
             std::string year_,
             std::string license_plt_,
             int truck_,
             std::string drive_,
             int cabin_,
             float bed_)
    :Vehicle(type_, make_,model_, year_, license_plt_),
            truck_type{truck_},
            drive_train{drive_},
            cabin_size{cabin_},
            bed_size{bed_}{
}


Truck::~Truck()
{
}
