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
    Truck();
    ~Truck();
    
    int get_truck_type();
    std::string get_drive_train();
    int get_cabin_size();
    float get_bed_size();

};

#endif // TRUCK
