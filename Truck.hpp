#ifndef TRUCK
#define TRUCK

#include "Vehicle.hpp"

#define full_size 1
#define mid_size 2


class Truck: public Vehicle
{
    
    int truck_type;
    std::string drive_train;
    int cabin_size;
    float bed_size;
    
    
public:

    //Empty constructor
    Truck();
    
    //Base truck constructor
    Truck(std::string type_, 
          std::string make_,
          std::string model_,
          std::string year_,
          std::string license_plt_,
          int truck_type,
          std::string drive_train,
          int cabin_size,
          float bed_size
    );
    
    //Destructor
    ~Truck();
    
    int get_truck_type();
    std::string get_drive_train();
    int get_cabin_size();
    float get_bed_size();

};

#endif // TRUCK
