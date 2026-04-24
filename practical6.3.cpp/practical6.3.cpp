#include<iostream>
#include<string>
using namespace std;

class Fuel
{
protected:
    string fuelType;

public:
    Fuel() {}
    Fuel(string f)
    {
        fuelType = f;
    }

    void setFuel(string f)
    {
        fuelType = f;
    }

    void displayFuel()
    {
        cout << "Fuel Type: " << fuelType << endl;
    }
};

class Brand
{
protected:
    string brandName;

public:
    Brand() {}
    Brand(string b)
    {
        brandName = b;
    }

    void setBrand(string b)
    {
        brandName = b;
    }

    void displayBrand()
    {
        cout << "Brand: " << brandName << endl;
    }
};

class Car : public Fuel, public Brand
{
public:
    Car() {}
    Car(string f, string b) : Fuel(f), Brand(b) {}

    void displayCar()
    {
        displayBrand();
        displayFuel();
    }
};

int main()
{
    int n;
    cout << "Enter number of cars: ";
    cin >> n;

    Car *dynamicCars = new Car[n];

    for(int i = 0; i < n; i++)
    {
        string fuel, brand;

        cout << "\nEnter details for Car " << i + 1 << endl;
        cout << "Brand: ";
        cin >> brand;
        cout << "Fuel Type: ";
        cin >> fuel;

        dynamicCars[i].setBrand(brand);
        dynamicCars[i].setFuel(fuel);
    }

    cout << "\nDynamic Method Output:\n";
    for(int i = 0; i < n; i++)
    {
        cout << "\nCar " << i + 1 << endl;
        dynamicCars[i].displayCar();
    }

    delete[] dynamicCars;

    const int SIZE = 3;
    Car staticCars[SIZE] = {
        Car("Petrol", "Toyota"),
        Car("Diesel", "Ford"),
        Car("Electric", "Tesla")
    };

    cout << "\nStatic Method Output:\n";
    for(int i = 0; i < SIZE; i++)
    {
        cout << "\nCar " << i + 1 << endl;
        staticCars[i].displayCar();
    }

    return 0;
}
