#include <iostream>
#include <cstring>
using namespace std;

class Train
{
private:
    int trainNumber;
    char trainName[50];
    char source[50];
    char destination[50];
    char trainTime[10];
    static int trainCount;

public:
    Train()
    {
        this->trainNumber = 0;
        strcpy(this->trainName, "");
        strcpy(this->source, "");
        strcpy(this->destination, "");
        strcpy(this->trainTime, "");

        trainCount++;
    }

    Train(int trainNumber, const char trainName[],
          const char source[], const char destination[],
          const char trainTime[])
    {
        this->trainNumber = trainNumber;
        strcpy(this->trainName, trainName);
        strcpy(this->source, source);
        strcpy(this->destination, destination);
        strcpy(this->trainTime, trainTime);

        trainCount++;
    }

    
    ~Train()
    {
        trainCount--;
    }

    // setters

    void setTrainNumber(int trainNumber)
    {
        this->trainNumber = trainNumber;
    }

    void setTrainName(const char trainName[])
    {
        strcpy(this->trainName, trainName);
    }

    void setSource(const char source[])
    {
        strcpy(this->source, source);
    }

    void setDestination(const char destination[])
    {
        strcpy(this->destination, destination);
    }

    void setTrainTime(const char trainTime[])
    {
        strcpy(this->trainTime, trainTime);
    }

//getter
    int getTrainNumber()
    {
        return this->trainNumber;
    }

    const char *getTrainName()
    {
        return this->trainName;
    }

    const char *getSource()
    {
        return this->source;
    }

    const char *getDestination()
    {
        return this->destination;
    }

    const char *getTrainTime()
    {
        return this->trainTime;
    }


    void inputTrainDetails()
    {
        cout << "Enter Train Number: ";
        cin >> this->trainNumber;

        cout << "Enter Train Name: ";
        cin.ignore();
        cin.getline(this->trainName, 50);

        cout << "Enter Source: ";
        cin.getline(this->source, 50);

        cout << "Enter Destination: ";
        cin.getline(this->destination, 50);

        cout << "Enter Train Time: ";
        cin.getline(this->trainTime, 10);
    }

    void displayTrainDetails()
    {
        cout << "Train Number: " << this->trainNumber << endl;
        cout << "Train Name: " << this->trainName << endl;
        cout << "Source: " << this->source << endl;
        cout << "Destination: " << this->destination << endl;
        cout << "Train Time: " << this->trainTime << endl;
    }

    static int getTrainCount()
    {
        return trainCount;
    }
};

int Train::trainCount = 0;
class RailwaySystem
{
private:
    Train trains[100];
    int totalTrains;

public:
    RailwaySystem()
    {
        this->totalTrains = 0;
    }

    // Add Train
    void addTrain()
    {
        if (this->totalTrains >= 100)
        {
            cout << "Train storage is full!" << endl;
            return;
        }

        cout << "\n-Add New Train Record-" << endl;

        this->trains[this->totalTrains].inputTrainDetails();

        this->totalTrains++;

        cout << "\nTrain record added successfully!" << endl;
    }

    // Display All Trains
    void displayAllTrains()
    {
        if (this->totalTrains == 0)
        {
            cout << "\nNo train records available!" << endl;
            return;
        }

        cout << "\nALL TRAIN RECORDS" << endl;

        for (int i = 0; i < this->totalTrains; i++)
        {
            cout << "\nTrain " << i + 1 << " details:" << endl;
            this->trains[i].displayTrainDetails();
        }
    }

    // Search Train
    void searchTrainByNumber(int number)
    {
        bool found = false;
        for (int i = 0; i < this->totalTrains; i++)
        {
            if (this->trains[i].getTrainNumber() == number)
            {
                cout << "\nTrain found!" << endl;
                cout << "\nTrain Details" << endl;

                this->trains[i].displayTrainDetails();
                found = true;
                break;
            }
        }
        if (!found)
        {
            cout << "\nTrain with number "
                 << number << " not found!" << endl;
        }
    }
};

int main()
{
    RailwaySystem railway;
    int choice;
    int searchNumber;

    do
    {
        cout << "     RAILWAY RESERVATION SYSTEM" << endl<<endl;
        cout << "1. Add New Train Record" << endl;
        cout << "2. Display All Train Records" << endl;
        cout << "3. Search Train by Number" << endl;
        cout << "4. Display Total Train Count" << endl;
        cout << "5. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;
    
        switch (choice)
        {
        case 1:
            railway.addTrain();
            break;

        case 2:
            railway.displayAllTrains();
            break;

        case 3:
            cout << "\nEnter Train Number to search: ";
            cin >> searchNumber;
            railway.searchTrainByNumber(searchNumber);
            break;

        case 4:
            cout << "\nTotal Train Objects: "
                 << Train::getTrainCount() << endl;
            break;

        case 5:
            cout << "\nExiting the system. Goodbye!" << endl;
            break;

        default:
            cout << "\nInvalid choice! Please try again." << endl;
        }

    } while (choice != 5);

    return 0;
}