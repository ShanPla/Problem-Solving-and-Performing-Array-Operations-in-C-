#include <iostream>
#include <string>
#include <cctype> // for tolower
#include <limits> // for numeric_limits
using namespace std;

	int bedSize, numHouse, i, numBathroom, numBedroom, daysTemp;
    int paintTime, paintWorker, floorTime, floorWorker, kitchenSize;
    float paintCost, flooringCost, paintLaborCost, floorLaborCost, paintTotal[5], floorTotal[5], pLaborTotal[5], fLaborTotal[5], daysTotal[5];
	string houseType;

void Clear(){ // Clears value for next iterations
	
	paintCost = 0;
	flooringCost = 0;
	paintLaborCost = 0;
	floorLaborCost = 0;
	daysTemp = 0;
	
}

void displayTotal(){
	
	for(int i = 0; i<numHouse; i++){		
		
	cout<<"\nTotal Cost for House #"<<i+1<<endl;
	cout<<"Painting Cost: P"<<paintTotal[i]<<endl;
	cout<<"Flooring Cost: P"<<floorTotal[i]<<endl;
	cout<<"Paint Labor Cost: P"<<pLaborTotal[i]<<endl;
	cout<<"Flooring Labor Cost: P"<<fLaborTotal[i]<<endl;
	cout<<"Total Overall Cost: P"<<paintTotal[i] + floorTotal[i] + pLaborTotal[i] + fLaborTotal[i]<<endl;
	cout<<"Total Days: "<<daysTotal[i]<<" days"<<endl;

}

	// Adds all the value for the projected expense	
	for(int i = 0; i<numHouse; i++){

		// 
		paintCost += paintTotal[i];
		flooringCost += floorTotal[i];
		paintLaborCost += pLaborTotal[i];
		floorLaborCost += fLaborTotal[i];	
		daysTemp += daysTotal[i];
		
	}	
	
		cout<<"\nOverall Projected Expenses:"<<endl;
		cout<<"Total Painting Cost: P"<<paintCost<<endl;
		cout<<"Total Flooring Cost: P"<<flooringCost<<endl;
		cout<<"Total Labor Cost: P"<<paintLaborCost + floorLaborCost<<endl;
		cout<<"Total Expenses: P"<<paintCost + flooringCost + paintLaborCost + floorLaborCost<<endl;
		cout<<"Total Number of Days: "<<daysTemp<<" days"<<endl;
	
		Clear();
}

void House(){
	
	if(houseType == "lin"){  // sets the limits for lin		

	do{
		
	cout<<"\nEnter the number of bedrooms: ";
	cin>>numBedroom;
	
	if (cin.fail()) {
            // Clear the error flag
            cin.clear();

            // Ignore the invalid input
            cin.ignore(numeric_limits<streamsize>::max(), '\n');

            cout << "Invalid input. Please enter a number." << endl;  
			i--;
        }
	
	else if(numBedroom<1 || numBedroom>4){
		cout<<"\nOnly 1-4 bedroom capacity";
	}
	else{
		break;
	}
	
}while(true);
}
 
	if(houseType == "lan"){ // sets the limits for lan
	
	do{
		
	cout<<"\nEnter the number of bedrooms: ";
	cin>>numBedroom;
	
	if (cin.fail()) {
            // Clear the error flag
            cin.clear();

            // Ignore the invalid input
            cin.ignore(numeric_limits<streamsize>::max(), '\n');

            cout << "Invalid input. Please enter a number." << endl;  
			i--;
        }
	
	else if(numBedroom<1 || numBedroom>5){
		cout<<"\nOnly 1-5 bedroom capacity";
	}
	else{
		break;
	}
	
}while(true);
}

	if(numBedroom>2 && numBathroom<5){
		flooringCost += (numBedroom-2)*8500;
	}
	
	for(int i=0; i<numBedroom; i++){
		
		cout<<"Enter size of bedroom "<<i+1<<" in sqm: ";
		cin>>bedSize;
		
		if (cin.fail()) {
            // Clear the error flag
            cin.clear();

            // Ignore the invalid input
            cin.ignore(numeric_limits<streamsize>::max(), '\n');

            cout << "Invalid input. Please enter a number." << endl;  
			i--;
        }
		
		// Calculates the value of the painting cost
		else if(bedSize<30){
			paintCost += bedSize*125;
		}
		
		else if(bedSize<41){
			paintCost += bedSize*175.25;
		}
		
		else{
			paintCost += bedSize*205.50;
		}
	}
	
	do{
	
	cout<<"\nEnter the size of the kitchen in sqm: ";
	cin>>kitchenSize;
	
	if (cin.fail()) {
            // Clear the error flag
            cin.clear();

            // Ignore the invalid input
            cin.ignore(numeric_limits<streamsize>::max(), '\n');

            cout << "Invalid input. Please enter a number." << endl;  
			i--;
        }
    else{
    	break;
	}

}while (true);

	paintCost += 12500;	
	
	if(kitchenSize>50) {
		paintCost += ((kitchenSize-50)*74.45);
	}
	
	if(houseType == "lin"){  // sets the limits for lin	
	
	do{
	
	cout<<"\nEnter the number of bathrooms: ";
	cin>>numBathroom;
	
	if (cin.fail()) {
            // Clear the error flag
            cin.clear();

            // Ignore the invalid input
            cin.ignore(numeric_limits<streamsize>::max(), '\n');

            cout << "Invalid input. Please enter a number." << endl;        
        }
     else if (numBathroom < 1 || numBathroom > 2) {
            cout << "Incorrect input. Please enter a number between 1 and 2." << endl;
            
        }    
	else{
		break;
	}
	}while (true);
}
	if(houseType == "lan"){  // sets the limits for lin	
	
	do{
	
	cout<<"\nEnter the number of bathrooms: ";
	cin>>numBathroom;
	
	if (cin.fail()) {
            // Clear the error flag
            cin.clear();

            // Ignore the invalid input
            cin.ignore(numeric_limits<streamsize>::max(), '\n');

            cout << "Invalid input. Please enter a number." << endl;        
        }
     else if (numBathroom < 1 || numBathroom > 3) {
            cout << "Incorrect input. Please enter a number between 1 and 2." << endl;
            
        }    
	else{
		break;
	}
	}while (true);
}

	if(numBathroom>1){
		flooringCost += (numBathroom-1)*4750;
	
	cout<<"\n";
	
	// Adds value to paintCost for total cost
	paintCost += numBathroom*6550;

	if(houseType == "lin"){

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
            
        } 
		else if (paintWorker < 5 || paintWorker > 10) {
            cout << "Incorrect input. Please enter a number between 5 and 10." << endl;
            
        } 
		else {
            break; // Valid input, break out of the loop
        }
    } while (true); // Continue until a valid input is received
}

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
            
        } 
		else if (paintTime < 5 || paintTime > 10) {
            cout << "Incorrect input. Please enter a number between 5 and 10." << endl;
            
        } 
		else {
            break; // Valid input, break out of the loop
        }
    } while (true); // Continue until a valid input is received
    
    cout<<"\n";
    
}
	
	if(houseType == "lan"){
	
		do {
        cout<<"Enter number of workers for painting: ";
		cin>>paintWorker;
        cin.ignore();

        if (paintWorker < 10 || paintWorker > 15) {
            cout << "Incorrect input. Please enter a number between 10 and 15." << endl;
            
        } 
		else {
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

            cout << "Invalid input. Please enter a number between 7 and 14." << endl;
            
        } 
		else if (paintTime < 7 || paintTime > 14) {
            cout << "Incorrect input. Please enter a number between 7 and 14." << endl;
            
        } 
		else {
            break; // Valid input, break out of the loop
        }
    } while (true); // Continue until a valid input is received
    
    cout<<"\n";
}
    
    do {
        cout<<"Enter number of workers for flooring: ";
        cin>>floorWorker;

        if (cin.fail()) {
            // Clear the error flag
            cin.clear();

            // Ignore the invalid input
            cin.ignore(numeric_limits<streamsize>::max(), '\n');

            cout << "Invalid input. Please enter a number between 10 and 15." << endl;
            
        } 
		else if (floorWorker < 10 || floorWorker > 15) {
            cout << "Incorrect input. Please enter a number between 10 and 15." << endl;
            
        } 
		else {
            break; // Valid input, break out of the loop
        }
    } while (true); // Continue until a valid input is received
    
    do {
        cout<<"Enter number of days for flooring: ";
        cin>>floorTime;
        cin.ignore();

        if (cin.fail()) {
            // Clear the error flag
            cin.clear();

            // Ignore the invalid input
            cin.ignore(numeric_limits<streamsize>::max(), '\n');

            cout << "Invalid input. Please enter a number between 7 and 14." << endl;
            
        } 
		else if (floorTime < 7 || floorTime > 14) {
            cout << "Incorrect input. Please enter a number between 7 and 14." << endl;
            
        } 
		else {
            break; // Valid input, break out of the loop
        }
    } while (true); // Continue until a valid input is received
    
    paintLaborCost += (paintTime*650)*paintWorker; // Calculates the labor cost for painting
	floorLaborCost += (floorTime*550)*floorWorker; // Calculates the labor cost for flooring
	
	// Puts the cost of each house in a holder
	paintTotal[i] = paintCost;
	floorTotal[i]	= flooringCost;
	pLaborTotal[i] = paintLaborCost;
	fLaborTotal[i] = floorLaborCost;
	daysTotal[i] = paintTime + floorTime;
		
	// Calls the func
	Clear();
	
}

int main(){
	
    do {
        cout << "Enter the Number of Houses (1-5): ";
        cin >> numHouse;

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
	
	for(i = 0; i<numHouse; i++){
		
	// Handles the inputs for the house type
	do{
		
	cout<<"\nChoose the House Type (Lin/Lan): ";
	cin>>houseType;
	
	// Makes the input non-case sensitive
	for (int i = 0; i < houseType.length(); i++)
        houseType[i] = tolower(houseType[i]);
        
    if(houseType == "lin"){
    	
    	flooringCost += 123450; //Flooring cost initialized to set value for Lin
		House(); // Calls the function
		
	}
	
	else if(houseType == "lan"){
		
		flooringCost += 180500; //Flooring cost initialized to set value for Lan
		House(); // Calls the function
	}
	
	else{
		cout<<"Invalid input."<<endl;
	}
           	
}while(!(houseType=="lin" || houseType=="lan"));
	
}

	displayTotal();
	
	return 0;
}
