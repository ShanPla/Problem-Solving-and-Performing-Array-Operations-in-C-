#include <iostream>
#include <string>
#include <cctype> // for tolower
#include <limits> // for numeric_limits
using namespace std;

int main(){
	
    int House[5], bedSize[5], numHouse = 0, counter, numBathroom, numBedroom;
    int paintTime, paintWorker, floorTime, floorWorker, kitchenSize;
    float paintCost, flooringCost paintTotal[5], paintLaborCost, floorLaborCost;
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
	
	for(counter = 0; counter<numHouse; counter++){
		
	// Handles the inputs for the house type
	do{
		
	cout<<"\nChoose the House Type (Lin/Lan): ";
	cin>>houseType;
	
	// Makes the input non-case sensitive
	for (int i = 0; i < houseType.length(); i++)
        houseType[i] = tolower(houseType[i]);
		
}while(!(houseType=="lin" || houseType=="lan"));
	
	
	// Does the inputs for house type lin
if(houseType == "lin"){
	
	do{
		
	flooringCost += 123450; //Flooring cost initialized to set value for Lin	
		
	cout<<"\nEnter the number of bedrooms: ";
	cin>>numBedroom;
	
	if(numBedroom>2 && numBathroom<5){
		flooringCost += (numBedroom-2)*8500;
	}
		
	if(numBedroom<1 || numBedroom>4){
		cout<<"\nOnly 1-4 bedroom capacity";
	}
	
}while(numBedroom<1 || numBedroom>4);
	
	
	for(int i=0; i<numBedroom; i++){
		
		cout<<"Enter size of bedroom "<<i+1<<" in sqm: ";
		cin>>bedSize[i];
		
		// Calculates the value of the painting cost
		if(bedSize[i]<30){
			paintCost += bedSize[i]*125;
		}
		
		else if(bedSize[i]<41){
			paintCost += bedSize[i]*175.25;
		}
		
		else{
			paintCost += bedSize[i]*205.50;
		}
	}

	cout<<"\nEnter the size of the kitchen in sqm: ";
	cin>>kitchenSize;
	
	paintCost += 12500;	
	
	if(kitchenSize>50) {
		paintCost += ((kitchenSize-50)*74.45);
	}
	
	cout<<"\nEnter the number of bathrooms: ";
	cin>>numBathroom;
	
		if(numBathroom>1){
		flooringCost += (numBathroom-1)*4750;
	}
	
	cout<<"\n";
	
	// Adds value to paintCost for total cost
	paintCost += numBathroom*6550;

	do {
        cout<<"Enter number of workers for painting: ";
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
    
    paintLaborCost += (paintTime*650)*paintWorker; // Calculates the labor cost for painting
    
    cout<<"\n";
    
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

            cout << "Invalid input. Please enter a number between 7 and 14." << endl;
            
        } else if (floorTime < 7 || floorTime > 14) {
            cout << "Incorrect input. Please enter a number between 7 and 14." << endl;
            
        } else {
            break; // Valid input, break out of the loop
        }
    } while (true); // Continue until a valid input is received

	floorLaborCost += (floorTime*550)*floorWorker; // Calculates the labor cost for flooring

	cout<<"\nTotal Cost for House #"<<counter+1<<endl;
	cout<<"Painting Cost: P"<<paintCost<<endl;
	cout<<"Flooring Cost: P"<<flooringCost<<endl;
	cout<<"Paint Labor Cost: P"<<paintLaborCost<<endl;
	cout<<"Flooring Labor Cost: P"<<floorLaborCost<<endl;
	cout<<"Total Overall Cost: P"<<paintCost + flooringCost + paintLaborCost + floorLaborCost;
	
	counter++;
} // Lin border

}
	
	return 0;
}
