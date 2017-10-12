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

using namespace std;

class FarmAnimal{ 
public:
FarmAnimal(double water_consumption); 
double getWaterConsumption();
void setWaterConsumption(double water){
    water = water_consumption;
}
private:
double water_consumption;
};

FarmAnimal::FarmAnimal(double water_consumption) { 
    this->water_consumption = water_consumption;
}

double FarmAnimal::getWaterConsumption() { 
    return water_consumption;
}

class ConsumptionAccumulator {
public:
    ConsumptionAccumulator();
    double getTotalConsumption();
    void addConsumption(FarmAnimal animal);
private:
    double total_consumption;
};

ConsumptionAccumulator::ConsumptionAccumulator() : 
total_consumption(0)
{ 
}
double ConsumptionAccumulator::getTotalConsumption() {
return total_consumption; 
}

void ConsumptionAccumulator::addConsumption(FarmAnimal animal) {
total_consumption += animal.getWaterConsumption(); }

class Sheep: public FarmAnimal{
public:
    getWeight(double weight){
        FarmAnimal::setWaterConsumption((weight / 10)*1.1);
    }
};
class Cow: public FarmAnimal{
public:
    getWeight(double weight){
        FarmAnimal::setWaterConsumption((weight / 100)*8.6);
    }
};
class Horse: public FarmAnimal{
public:
    getWeight(double weight){
        FarmAnimal::setWaterConsumption((weight / 100)*6.8);
    }
};

int main() {
ConsumptionAccumulator accumulator;
// read user input
// create appropriate objects and add them to the accumulator


/**
double weight = 0;
string animal;
double totalWater = 0;

do 
{
    getline(cin,weight);
    if(1 == sscanf(animal.c_str(), "Cow %lf", &weight))
    {
        cout << totalWater << endl;
        cout << "--------------" << endl;
        
    }
    else
    {
        cout << "No Match" << endl;
        cout << "-----------" << endl;
    }
}while (animal != "");

cout << accumulator.getTotalConsumption(); return 0;**/

}

