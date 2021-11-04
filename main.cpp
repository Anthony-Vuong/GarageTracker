#include <iostream>
#include <fstream>
#include "Garage.hpp"

using namespace std;

bool func1(int a){
    return a > 5;
}

bool func1(int a, int b){
    return a == b;
}

#define IS_TRUE(x) { if(!(x)) std::cout << __FUNCTION__ << "failed" << __LINE__ << std::endl;}
//#define IS_EQUAL(x, y) { if((x==y) std::cout << __FUNCTION__ << "failed" << __LINE__ << std::endl;}




void test_function1(int numCars){
    IS_TRUE(func1(numCars, 3));
 
}


int main(int argc, char* argv[])
{
    
    
    
    ifstream input;
    
    Garage garage1(100);
    
    input.open("vehicles.txt");
    string str;
    while(getline(input, str)){
        garage1.addVehicles(str);
        
    }
    
    input.close();
    
    //garage1.displayVehicles();
    
    std::cout << garage1.get_vehicles_entered();
    
    test_function1(garage1.get_vehicles_entered());
	return 0;
}

