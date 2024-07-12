#include <bits/stdc++.h>
using namespace std;

class Vehicle
{
protected:
  string make;
  string model;
  int year;
  static int vehicleCount;

public:
  Vehicle(string make, string model, int year)
  {
    this->make = make;
    this->model = model;
    this->year = year;
    vehicleCount++;
  }

  virtual void displayInfo() const
  {
    cout << "Make: " << make << endl;
    cout << "Model: " << model << endl;
    cout << "Year: " << year << endl;
  }

  static int getVehicleCount()
  {
    return vehicleCount;
  }
};

int Vehicle::vehicleCount = 0;

class Car : public Vehicle
{
public:
  Car(string make, string model, int year)
      : Vehicle(make, model, year) {}

  void displayInfo() const override
  {
    cout << "Car Information:" << endl;
    Vehicle::displayInfo();
  }
};

class Truck : public Vehicle
{
private:
  int cargoCapacity;

public:
  Truck(string make, string model, int year, int cargoCapacity)
      : Vehicle(make, model, year), cargoCapacity(cargoCapacity) {}

  void displayInfo() const override
  {
    cout << "Truck Information:" << endl;
    Vehicle::displayInfo();
    cout << "Cargo Capacity: " << cargoCapacity << " kg" << endl;
  }

  Truck operator+(const Truck &temp) const
  {
    return Truck(make + " and " + temp.make, model + " and " + temp.model, year + year, cargoCapacity + temp.cargoCapacity);
  }
};

int main()
{
  // Vehicle v1("Toyota", "Camry", 2022);
  // v1.displayInfo();

  Car c1("Toyota", "Camry", 2022);
  Truck t1("Ford", "F-150", 2020, 1000);
  Truck t2("Chevy", "Silverado", 2021, 1500);

  c1.displayInfo();
  cout << endl;

  t1.displayInfo();
  cout << endl;

  t2.displayInfo();
  cout << endl;

  // Truck t3 = t1 + t2;
  // t3.displayInfo();

  cout << "Total number of vehicles created: " << Vehicle::getVehicleCount() << endl;

  return 0;
}