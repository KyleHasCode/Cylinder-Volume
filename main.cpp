//Language: C++

#include <iostream>
#include <time.h>



//Function to calculate volume of the cylinder
double volume(double Pi, double radius, double height){
std::cout << "Radius = " << radius <<" in" <<"\n";
std::cout << "Height = " << height <<" in" <<"\n";
return (Pi * (radius * radius) * height);

}

int main() {

//Randomly generated height and radius numbers
srand (time(NULL));
//Results
std::cout << "Volume of randomly generated cylinder:\n";
std::cout << volume(3.14, rand()% 10 + 1, rand()% 10 + 1) <<" in^3"<<"\n";

}

