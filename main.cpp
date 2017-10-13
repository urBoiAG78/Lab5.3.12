/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: agonzalez
 *
 * Created on October 5, 2017, 2:05 PM
 */
#include <iostream> 
#include <stdio.h>
#include <string>

using namespace std;

class FarmAnimal{ 
public:
    FarmAnimal(){}
    FarmAnimal(double water_consumption){
    this->water_consumption = water_consumption;
}; 
double getWaterConsumption(){
    return water_consumption;
};
void setWaterConsumption(double water){
    water = water_consumption;
}

private:
double water_consumption;
};

class ConsumptionAccumulator {
public:
    ConsumptionAccumulator() : total_consumption(0){}
    ;
    double getTotalConsumption(){
    return total_consumption;
    };
    void addConsumption(FarmAnimal animal){
    total_consumption += animal.getWaterConsumption();
    };
private:
    double total_consumption = 0;
};



class Sheep: public FarmAnimal{
public:
    Sheep(double weight){
        FarmAnimal::setWaterConsumption((weight / 10)*1.1);
    }
};
class Cow: public FarmAnimal{
public:
    Cow(double weight){
        FarmAnimal::setWaterConsumption((weight / 100)*8.6);
    }
};
class Horse: public FarmAnimal{
public:
    Horse(double weight){
        FarmAnimal::setWaterConsumption((weight / 100)*6.8);
    }
};

int main() {
ConsumptionAccumulator accumulator;
// read user input
// create appropriate objects and add them to the accumulator



double weight = 0;
string animal;


do 
{
    getline(cin,animal);
    if(1 == sscanf(animal.c_str(), "Cow %lf", &weight))
    {
        Cow cow(weight);
        accumulator.addConsumption(cow);
        cout << "--------------" << endl;
        
    }
    else if(1 == sscanf(animal.c_str(), "Horse %lf", &weight))
    {
        Horse horse(weight);
        accumulator.addConsumption(horse);
        cout << "--------------" << endl;
        
    }
    else if(1 == sscanf(animal.c_str(), "Sheep %lf", &weight))
    {
        Sheep sheep(weight);
        accumulator.addConsumption(sheep);
        cout << "--------------" << endl;
        
    }
    else
    {
        cout << "No Match" << endl;
        cout << "-----------" << endl;
    }
}while (animal != "");

cout << accumulator.getTotalConsumption(); return 0;

}

