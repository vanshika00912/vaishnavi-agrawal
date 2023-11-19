#include <iostream>
// #include <conio.h>
#include <stdlib.h>

using namespace std;

// Define a struct for car details
struct Cars {
    string Company[13] = {"Toyota", "Ford", "Honda", "BMW", "Mercedes-Benz", "Audi", "Hyundai", "Kia", "Tesla", "Jaguar", "Land Rover", "Ferrari", "Lamborghini"};
    string Model[13] = {"Camry", "Mustang", "Civic", "3 Series", "C-Class", "A4", "Sonata", "Optima", "Model 3", "F-PACE", "Range Rover", "488 GTB", "Aventador"};
    string Price[13] = {"11000", "33000", "9000", "27000", "24000", "19000", "12000", "17000", "20000", "32000", "22000", "22000", "26000"};
};

Cars car; // Declare an instance of the Cars struct

void menu() {
    int num = 1;
    for (int i = 0; i < 13; i++) {
        cout << "\t\t" << num << ". " << car.Company[i] << endl;
        num++;
    }
}

void details(int choice) {
    cout << "\t\t Company: " << car.Company[choice - 1] << endl;
    cout << "\t\t Model: " << car.Model[choice - 1] << endl;
    cout << "\t\t Price: " << car.Price[choice - 1] << endl;
}

int main() {
    string decide = "yes";

    cout << "\t\t Welcome" << endl;
    cout << "\t\t Choose your option" << endl;

    while (decide != "exit") {
        menu();

        cout << "\t\t Your choice: ";
        int choice;
        cin >> choice;

        if (choice < 1 || choice > 13) {
            cout << "\t\t Invalid choice. Please choose a valid option." << endl;
            system("pause");
            system("cls");
            continue;
        }

        details(choice);

        cout << "\t\t Are you sure you want to rent this? (yes/no/exit): ";
        cin >> decide;

        if (decide == "yes" || decide == "Yes") {
            cout << " Car rented successfully" << endl;
            cout << " Company: " << car.Company[choice - 1] << endl;
            cout << " Model: " << car.Model[choice - 1] << endl;
            cout << " Price: " << car.Price[choice - 1] << endl;
            system("pause");
            system("cls");
        } else if (decide == "no" || decide == "No") {
            cout << " Choose your option" << endl;
        } else if (decide == "exit") {
            cout << " Thank you" << endl;
            system("pause");
            system("cls");
        } else {
            cout << "\t\t Invalid input" << endl;
            system("pause");
            system("cls");
        }
    }

    return 0;
}
