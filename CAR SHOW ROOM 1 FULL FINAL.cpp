#include <iostream>
#include <string>

using namespace std;

// defining the maximum car capacity
const int MAX_CARS = 100;

struct Car {
    string model; 
    string make; // make means brand of cars
    int year;
    bool isNew;
    int cc; // car engine Cc
    
};

void displayCars(const Car cars[], int count) {
    cout << "Car Showroom Inventory:\n";
    cout << "-----------------------\n";

    for (int i = 0; i < count; i++) {
        const Car& car = cars[i];
        cout << "Make: " << car.make << "\n";
        cout << "Model: " << car.model << "\n";
        cout << "Year: " << car.year << "\n";
        cout << "Condition: " << (car.isNew ? "New" : "Used") << "\n";
        cout << "CC: " << car.cc << "cc\n";
        
        cout << "-----------------------\n";
    }

}


void searchCar(const Car cars[], int count, const string& model) {
	
    bool found = false;

    for (int i = 0; i < count; i++) {
        const Car& car = cars[i];

        if (car.model == model) {
            cout << "Car Found!\n";
            cout << "Make: " << car.make << "\n";
            cout << "Model: " << car.model << "\n";
            cout << "Year: " << car.year << "\n";
            cout << "Condition: " << (car.isNew ? "New" : "Used") << "\n";
            cout << "CC: " << car.cc << "cc\n";
            
            found = true;

            break;
        }
    }



    if (!found) {
        cout << "Car not found in the showroom.\n";
    }
}

int main() {
    cout << "MOAZ and AHMIII brothers AUTOS" << endl;
    cout << endl;
    
    cout << "FOR ANY  QUERY CONTACT US:" << endl;
    cout << endl;
    
    cout << "MOAZ NUMBER IS: 0347-0725071" << endl;
    cout << "AHMIII NUMBER IS: 03085884820" << endl;
    cout << endl;
    
    cout << "Please choose an option:" << endl;

    Car inventory[MAX_CARS];
    
    int carCount = 0;
    int choice;

    do {
        cout << "Car Showroom Menu:\n";
        cout << "1. Add Car\n";
        cout << "2. Display Cars\n";
        cout << "3. Search Car\n";
        cout << "4. Buy a New Car\n";
        cout << "5. Buy an Old Car\n";
        cout << "6. Exit\n";
        
        cout << "Enter your choice: ";
        
        cin >> choice;

        if (choice == 1) {
            if (carCount < MAX_CARS) {
                Car newCar;

                cout << "Enter make: ";
                cin >> newCar.make;

                cout << "Enter model: ";
                cin >> newCar.model;

                cout << "Enter year: ";
                cin >> newCar.year;

                cout << "Is the car new? (0 for used, 1 for new): ";
                cin >> newCar.isNew;

                cout << "Enter CC: ";
                cin >> newCar.cc;

                inventory[carCount++] = newCar;
                cout << "Car added to the showroom!\n";
            }
			else {
                cout << "Car showroom is full. Cannot add more cars.\n";
            }
        }

        
		else if (choice == 2) {
            displayCars(inventory, carCount);
        }
		
		else if (choice == 3) {
            string searchModel;

            cout << "Enter the car model to search: ";
            cin >> searchModel;

            searchCar(inventory, carCount, searchModel);
        }
		
		else if (choice == 4) {
            cout << "Enter the model of the new car you want to buy: ";

            string newCarModel;
            cin >> newCarModel;
            
            cout << "Congratulations! You have bought a new car.\n";
        }
        
		else if (choice == 5) {
            cout << "Enter the model of the old car you want to buy: ";

            string oldCarModel;
            cin >> oldCarModel;
            cout << "Congratulations! You have bought an old car.\n";
        }
		
		else if (choice == 6) {
            cout << "Exiting the program...\n";
        }
		
		else {
            cout << "Invalid choice. Please try again.\n";
        }
        
    }
	
	while (choice != 6);

    return 0;
    
}

