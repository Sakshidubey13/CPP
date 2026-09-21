#include <iostream>
#include <string>
using namespace std;

class Vehicle
{
private:
    int vehicleID;
    string manufacturer;
    string model;
    int year;

public:
    static int totalVehicles;

    // Constructor
    Vehicle()
    {
        this->vehicleID = 0;
        this->manufacturer = "";
        this->model = "";
        this->year = 0;

        totalVehicles++;
    }

    // Destructor
    virtual ~Vehicle()
    {
        totalVehicles--;
    }

    //set
    void setVehicleID(int id)
    {
        this->vehicleID = id;
    }

    void setManufacturer(string manufacturer)
    {
        this->manufacturer = manufacturer;
    }

    void setModel(string model)
    {
        this->model = model;
    }

    void setYear(int year)
    {
        this->year = year;
    }

    //get
    int getVehicleID()
    {
        return this->vehicleID;
    }

    string getManufacturer()
    {
        return this->manufacturer;
    }

    string getModel()
    {
        return this->model;
    }

    int getYear()
    {
        return this->year;
    }

    //input
    virtual void setVehicle()
    {
        cout << "Enter Vehicle ID : ";
        cin >> this->vehicleID;

        cout << "Enter Manufacturer : ";
        cin >> this->manufacturer;

        cout << "Enter Model : ";
        cin >> this->model;

        cout << "Enter Year : ";
        cin >> this->year;
    }

//output
    virtual void getVehicle()
    {
        cout << endl;
        cout << "Vehicle ID : " << this->vehicleID << endl;
        cout << "Manufacturer : " << this->manufacturer << endl;
        cout << "Model : " << this->model << endl;
        cout << "Year : " << this->year << endl;
    }
};

int Vehicle::totalVehicles = 0;
// CAR
// SINGLE INHERITANCE
// Vehicle -> Car

class Car : public Vehicle
{
private:
    string fuelType;

public:
    // Constructor
    Car() : Vehicle()
    {
        this->fuelType = "";
    }

    // Destructor
    ~Car()
    {
    }

    // Input
    void setCar()
    {
        this->setVehicle();

        cout << "Enter Fuel Type : ";
        cin >> this->fuelType;
    }

    // Output
    void getVehicle() override
    {
        this->Vehicle::getVehicle();

        cout << "Fuel Type : "
             << this->fuelType << endl;
    }
};

// ELECTRIC CAR
// MULTILEVEL INHERITANCE
// Vehicle -> Car -> ElectricCar
class ElectricCar : public Car
{
private:
    float batteryCapacity;

public:
    // Constructor
    ElectricCar() : Car()
    {
        this->batteryCapacity = 0;
    }

    // Destructor
    ~ElectricCar()
    {
    }

    // Input
    void setElectricCar()
    {
        this->setCar();

        cout << "Enter Battery Capacity : ";
        cin >> this->batteryCapacity;
    }

    // Output
    void getVehicle() override
    {
        this->Car::getVehicle();

        cout << "Battery Capacity : "
             << this->batteryCapacity
             << " kWh" << endl;
    }
};

// SPORTS CAR
// MULTILEVEL INHERITANCE
// Vehicle -> Car -> ElectricCar -> SportsCar
class SportsCar : public ElectricCar
{
private:
    int topSpeed;

public:
    // Constructor
    SportsCar() : ElectricCar()
    {
        this->topSpeed = 0;
    }

    // Destructor
    ~SportsCar()
    {
    }

    // Input
    void setSportsCar()
    {
        this->setElectricCar();

        cout << "Enter Top Speed : ";
        cin >> this->topSpeed;
    }

    // Output
    void getVehicle() override
    {
        this->ElectricCar::getVehicle();

        cout << "Top Speed : "
             << this->topSpeed
             << " km/h" << endl;
    }
};

// AIRCRAFT
// BASE CLASS FOR MULTIPLE INHERITANCE


class Aircraft
{
private:
    int flightRange;

public:
    // Constructor
    Aircraft()
    {
        this->flightRange = 0;
    }

    // Destructor
    ~Aircraft()
    {
    }

    // Input
    void setAircraft()
    {
        cout << "Enter Flight Range : ";
        cin >> this->flightRange;
    }

    // Output
    void getAircraft()
    {
        cout << "Flight Range : "
             << this->flightRange
             << " km" << endl;
    }
};

// FLYING CAR
// MULTIPLE INHERITANCE
// Car + Aircraft -> FlyingCar

class FlyingCar : public Car, public Aircraft
{
public:
    // Constructor
    FlyingCar() : Car(), Aircraft()
    {
    }

    // Destructor
    ~FlyingCar()
    {
    }

    // Input
    void setFlyingCar()
    {
        this->setCar();
        this->setAircraft();
    }

    // Output
    void getVehicle() override
    {
        this->Car::getVehicle();
        this->getAircraft();
    }
};

// SEDAN
// HIERARCHICAL INHERITANCE
// Car -> Sedan
class Sedan : public Car
{
public:
    // Constructor
    Sedan() : Car()
    {
    }

    // Destructor
    ~Sedan()
    {
    }

    // Input
    void setSedan()
    {
        this->setCar();
    }
};
// SUV
// HIERARCHICAL INHERITANCE
// Car -> SUV
class SUV : public Car
{
public:
    // Constructor
    SUV() : Car()
    {
    }

    // Destructor
    ~SUV()
    {
    }

    // Input
    void setSUV()
    {
        this->setCar();
    }
};



int main()
{
    // Array of Vehicle pointers
    Vehicle *vehicles[100];

    int vehicleCount = 0;
    int choice;

    do
    {
        cout << endl;
        cout << "  VEHICLE REGISTRY SYSTEM" << endl;

        cout << "1. Add Car" << endl;
        cout << "2. Add Electric Car" << endl;
        cout << "3. Add Sports Car" << endl;
        cout << "4. Add Flying Car" << endl;
        cout << "5. Add Sedan" << endl;
        cout << "6. Add SUV" << endl;
        cout << "7. View All Vehicles" << endl;
        cout << "8. Search Vehicle By ID" << endl;
        cout << "9. Show Total Vehicles" << endl;
        cout << "10. Exit" << endl;

        cout << endl;
        cout << "Enter your choice : ";
        cin >> choice;

        // ADD CAR
        if (choice == 1)
        {
            Car *car = new Car();

            car->setCar();

            vehicles[vehicleCount] = car;

            vehicleCount++;

            cout << endl;
            cout << "Car Added Successfully!" << endl;
        }


        else if (choice == 2)
        {
            ElectricCar *car = new ElectricCar();

            car->setElectricCar();

            vehicles[vehicleCount] = car;

            vehicleCount++;

            cout << endl;
            cout << "Electric Car Added Successfully!" << endl;
        }

        else if (choice == 3)
        {
            SportsCar *car = new SportsCar();

            car->setSportsCar();

            vehicles[vehicleCount] = car;

            vehicleCount++;

            cout << endl;
            cout << "Sports Car Added Successfully!" << endl;
        }
    else if (choice == 4)
        {
            FlyingCar *car = new FlyingCar();

            car->setFlyingCar();

            vehicles[vehicleCount] = car;

            vehicleCount++;

            cout << endl;
            cout << "Flying Car Added Successfully!" << endl;
        }

        else if (choice == 5)
        {
            Sedan *car = new Sedan();

            car->setSedan();

            vehicles[vehicleCount] = car;

            vehicleCount++;

            cout << endl;
            cout << "Sedan Added Successfully!" << endl;
        }
        else if (choice == 6)
        {
            SUV *car = new SUV();

            car->setSUV();

            vehicles[vehicleCount] = car;

            vehicleCount++;

            cout << endl;
            cout << "SUV Added Successfully!" << endl;
        }
        else if (choice == 7)
        {
            if (vehicleCount == 0)
            {
                cout << endl;
                cout << "No Vehicles Available!" << endl;
            }
            else
            {
                cout << endl;
                cout << "=== ALL VEHICLES ===" << endl;

                for (int i = 0; i < vehicleCount; i++)
                {
                    cout << endl;
                    cout << "Vehicle " << i + 1 << endl;
                    vehicles[i]->getVehicle();
                }
            }
        }
        else if (choice == 8)
        {
            int searchID;
            bool found = false;

            cout << "Enter Vehicle ID : ";
            cin >> searchID;

            for (int i = 0; i < vehicleCount; i++)
            {
                if (vehicles[i]->getVehicleID() == searchID)
                {
                    cout << endl;
                    cout << "Vehicle Found!" << endl;
                    vehicles[i]->getVehicle();

                    found = true;
                    break;
                }
            }

            if (found == false)
            {
                cout << endl;
                cout << "Vehicle Not Found!" << endl;
            }
        }
        // TOTAL VEHICLES
        else if (choice == 9)
        {
            cout << endl;
            cout << "Total Vehicles : "
                 << Vehicle::totalVehicles
                 << endl;
        }
        else if (choice == 10)
        {
            cout << endl;
            cout << "Thank You For Using Vehicle Registry System!"
                 << endl;
        }
        // INVALID CHOICE
        else
        {
            cout << endl;
            cout << "Invalid Choice!" << endl;
        }

    } while (choice != 10);
    // DELETE ALL OBJECTS  
    for (int i = 0; i < vehicleCount; i++)
    {
        delete vehicles[i];
    }
    return 0;
}