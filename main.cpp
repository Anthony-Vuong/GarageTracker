#include <iostream>
#include <fstream>
#include "Garage.hpp"

using namespace std;

int main(int argc, char* argv[])
{
    ifstream input;
    
    Garage garage1(100);
    
    input.open("Cars.txt");
    string str;
    while(getline(input, str)){
        garage1.addCars(str);
        
    }
    
    input.close();
    
    garage1.displayVehicles();
    
   
	return 0;
}
