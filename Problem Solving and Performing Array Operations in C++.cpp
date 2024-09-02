#include <iostream>
#include <string>
#include <cctype> // for tolower
#include <limits> // for numeric_limits
using namespace std;


int main(){
	
    int House[5], numHouse = 0, numBathroom, numBedroom, counter = 0;
    int bedSize[5], paintWorker, floorWorker, kitchenSize;
    int paintCost, flooringCost, laborCost, paintTime, floorTime;
    string houseType;

    do {
        cout << "Enter the Number of Houses (1-5): ";
        cin >> numHouse;
        cin.ignore();

        if (cin.fail()) {
            // Clear the error flag
            cin.clear();

            // Ignore the invalid input
            cin.ignore(numeric_limits<streamsize>::max(), '\n');

            cout << "\nInvalid input. Please enter a number between 1 and 5." << endl;
        } else if (numHouse < 1 || numHouse > 5) {
            cout << "\nThe number of houses must be in the range of 1 to 5." << endl;
        } else {
            break; // Valid input, break out of the loop
        }
    } while (true); // Continue until a valid input is received
	
	
	do{
	
	cout<<"\nChoose the House Type (Lin/Lan): ";
	cin>>houseType;

	// Makes the input non-case sensitive
	for (int i = 0; i < houseType.length(); i++)
        houseType[i] = tolower(houseType[i]);
	
	
	
if(houseType == "lin"){
	
	do{
		
	cout<<"\nEnter the number of bedrooms: ";
	cin>>numBedroom;
		
	if(numBedroom<1 || numBedroom>4){
		cout<<"\nOnly 1-4 bedroom capacity";
	}
	
}while(numBedroom<1 || numBedroom>4);
	
	
	for(int i=0; i<numBedroom; i++){
		cout<<"Enter size of bedroom "<<i+1<<" in sqm: ";
		cin>>bedSize[i];
	}
//	for(int i=0; i<numHouse; i++){
//		cout<<"\n"<<bedSize[i];
//	}

	cout<<"\nEnter the size of the kitchen in sqm: ";
	cin>>kitchenSize;
	
	cout<<"\nEnter the number of bathrooms: ";
	cin>>numBathroom;

	cout<<"\nEnter number of workers for painting: ";
	cin>>paintWorker;


	do {
        cout<<"\nEnter number of workers for painting: ";
		cin>>paintWorker;
        cin.ignore();

        if (cin.fail()) {
            // Clear the error flag
            cin.clear();

            // Ignore the invalid input
            cin.ignore(numeric_limits<streamsize>::max(), '\n');

            cout << "Invalid input. Please enter a number between 5 and 10." << endl;
        } else if (paintWorker < 5 || paintWorker > 10) {
            cout << "Incorrect input. Please enter a number between 5 and 10." << endl;
        } else {
            break; // Valid input, break out of the loop
        }
    } while (true); // Continue until a valid input is received

	do {
        cout<<"Enter number of days for painting: ";
        cin>>paintTime;
        cin.ignore();

        if (cin.fail()) {
            // Clear the error flag
            cin.clear();

            // Ignore the invalid input
            cin.ignore(numeric_limits<streamsize>::max(), '\n');

            cout << "Invalid input. Please enter a number between 5 and 10." << endl;
        } else if (paintTime < 5 || paintTime > 10) {
            cout << "Incorrect input. Please enter a number between 5 and 10." << endl;
        } else {
            break; // Valid input, break out of the loop
        }
    } while (true); // Continue until a valid input is received
    
    do {
        cout<<"Enter number of workers for flooring: ";
        cin>>floorWorker;
        cin.ignore();

        if (cin.fail()) {
            // Clear the error flag
            cin.clear();

            // Ignore the invalid input
            cin.ignore(numeric_limits<streamsize>::max(), '\n');

            cout << "Invalid input. Please enter a number between 10 and 15." << endl;
        } else if (floorWorker < 10 || floorWorker > 15) {
            cout << "Incorrect input. Please enter a number between 10 and 15." << endl;
        } else {
            break; // Valid input, break out of the loop
        }
    } while (true); // Continue until a valid input is received
    
    do {
        cout<<"Enter number of days for painting: ";
        cin>>floorTime;
        cin.ignore();

        if (cin.fail()) {
            // Clear the error flag
            cin.clear();

            // Ignore the invalid input
            cin.ignore(numeric_limits<streamsize>::max(), '\n');

            cout << "Invalid input. Please enter a number between 7 and 15." << endl;
        } else if (floorTime < 7 || floorTime > 15) {
            cout << "Incorrect input. Please enter a number between 7 and 15." << endl;
        } else {
            break; // Valid input, break out of the loop
        }
    } while (true); // Continue until a valid input is received





	counter++;
}

}while(counter!=numHouse);
	
	return 0;
}
