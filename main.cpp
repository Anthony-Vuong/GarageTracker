#include <iostream>
#include <fstream>
#include "Garage.hpp"

using namespace std;

bool EQUAL(auto a, auto b){
    return a == b;
}



#define IS_TRUE(x) { if(!(x)) std::cout << __FUNCTION__ << "\tFAILED" << "\t\t" << __LINE__ << std::endl; else std::cout << __FUNCTION__ << "\tPASSED" << "\t\t"<<  __LINE__ << std::endl; }

//Test1: 1 Vehicle Entered
void numVehicles1(){
    
    ifstream input;
    
    Garage garage1(100);
    
    input.open("single_vehicle.txt");
    string str;
    while(getline(input, str)){
        garage1.addVehicles(str);
        
    }
    
    input.close();
    
    IS_TRUE(EQUAL(garage1.get_vehicles_entered(), 1));
 
}

//Test2: 3 Vehicles Entered
void numVehicles2(){
    
    ifstream input;
    
    Garage garage1(100);
    
    input.open("vehicles.txt");
    string str;
    while(getline(input, str)){
        garage1.addVehicles(str);
        
    }
    
    input.close();
    
    IS_TRUE(EQUAL(garage1.get_vehicles_entered(), 3));
 
}

//Test3: 1 Vehicle Entered, Check type of vehicle
void correctType1(){
    
    ifstream input;
    
    Garage garage1(100);
    
    input.open("single_vehicle.txt");
    string str;
    while(getline(input, str)){
        garage1.addVehicles(str);
        
    }
    
    input.close();
    
    IS_TRUE(EQUAL(garage1.get_vehicle(0).getVehicleType(), "Car"));
    
}



void testHeader(){
    std::cout << "Test Name" << "\tPass/Fail" << "\tLine" << std::endl;
    
    std::cout << "----------     ------------     -------" << std::endl;
    
}


int main(int argc, char* argv[])
{
    
    testHeader();
    
    numVehicles1();
    
    numVehicles2();
    
    correctType1();
    
	return 0;
}

