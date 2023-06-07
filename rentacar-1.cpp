#include<iostream>
#include<fstream>
#include<string>
using namespace std;

//Global Variables
int car_type,car_model;
char choice;
float deal,total;
string name,email_address,CNIC,phone_number;
fstream testfile;


// Function to Apply the Discount if the days are more than 15
double deals (int days,int total)
{
	if(days>=30)
		{	
			cout << "\n25% DISCOUNT APPLIED";
			deal = total -total*0.25;
			cout <<"\nAfter Discount, Your Total is: " <<deal;
		}
	else if(days>21)
		{
			cout << "\n20% DISCOUNT APPLIED";
			deal = total -total*0.20;
			cout <<"\nAfter Discount, Your Total is: " <<deal;
		}
	else if(days>=15)
		{
			cout << "\n15% DISCOUNT APPLIED";
			deal = total - total*0.15;
			cout <<"\nAfter Discount, Your Total is: " <<deal;
		}
}

int main()
{
	
	//Array to declare the car name and their types and prices
	string car_type_name[4] = {"City Car","SuperMini","Small Family Car","Large Family Car"};
	
	const int type1_car[4] = {2500,2000,4000,5300};
	const int type2_car[4] = {2750,3000,3500,4000};
	const int type3_car[4] = {4000,5000,5500,6000};
	const int type4_car[4] = {6350,7800,4800,7000};
	
	int days,driver_charges = 0;
	char driver;
	char agree;
	
	cout << "\t\t\t\t*******************************************************"<<endl;
	cout << "\t\t\t\t*            RENTAL CAR MANAGMENT SYSTEM              *"<<endl;
	cout << "\t\t\t\t*******************************************************"<<endl;

// Do While to repeat the program on user's demand
do{	

	// For how many days customer wants to rent a car	
	cout<<"\n------------------DISCOUNTED RATES------------------\n"<<endl;
	cout<<"NOTE: You will get Discount in Total if you are Renting a Car for 15 Days or more than 15 Days.\n";
	cout << "\nYou will Get 15% DISCOUNT on 15 Days" << endl;
	cout << "\nYou will Get 20% DISCOUNT on 21 Days" << endl;
	cout << "\nYou will Get 25% DISCOUNT on 30 Days\n" << endl;
	cout << "Please Enter For How Many Days You Want To Rent a Car: ";
	cin >> days;
	system ("cls");
	
// Driver Option	
	cout <<"\n------------------DRIVER OPTION AVAILABLE (OPTIONAL)------------------"<<endl;
	cout <<"\nEXTRA \"1000\" will be charged for a DRIVER"<<endl;
	cout << "\nWould you like a driver?"<<endl;
	cout <<"\nPress \"Y\" For \"YES\" or Press \"N\" for \"NO\":\n", cin >> driver,cout << endl;
	if(driver == 'Y'|| driver == 'y' )
		driver_charges = 1000;
		system ("cls");

	// Car Type Menu
	cout <<"Please Select Which Car Type You Want:\n"<<endl;
	cout << "Press \"0\" To Select " << car_type_name[0] << "\nPress \"1\" To Select " << car_type_name[1] << endl;
	cout << "Press \"2\" To Select " << car_type_name[2] << "\nPress \"3\" To Select " << car_type_name[3] << endl;
	cout << "\nPlease Enter The Type: ";
	cin >> car_type;

	while(car_type > 3)
		{
			cout << "wrong input entered";
			cout << "\nPlease Enter The Type: ";
			cin >> car_type;
		}
	
	cout<<"-----------------CAR MODELS-----------------\n";

//Using Switch/case to represent our Car Models and their prices
	switch(car_type)
		{
			case 0:
			{
				cout << "\nPlease Select Which Car Model You Would Like:\n"<<endl;
				cout <<"\nCar 1-A = 2500 \t\t 0\nCar 1-B = 2000 \t\t 1\nCar 1-C = 4000 \t\t 2\nCar 1-D = 5300 \t\t 3\n"<<endl;
				cout << "\nPlease Enter The Model = ", cin >> car_model;
				while(car_model > 3)
				{
					cout << "wrong input entered";
					cout << "\nPlease Enter The Model = ";
					cin >> car_model;}
				
				switch(car_model)
					{
						case 0:
						total =days*type1_car[car_model]+driver_charges;
						cout <<"Your Total Price is : "<< total << endl;
						deals(days,total);
						break;

						case 1:
						total =days*type1_car[car_model]+driver_charges;
						cout <<"Your Total Price is : "<< total << endl;
						deals(days,total);
						break;

						case 2:
						total =days*type1_car[car_model]+driver_charges;
						cout <<"Your Total Price is : "<< total << endl;
						deals(days,total);
						break;

						case 3:
						total =days*type1_car[car_model]+driver_charges;
						cout <<"Your Total Price is : "<< total << endl;
						deals(days,total);
						break;
					}
			}
			break;

			case 1:
			{
				cout << "Please Select Which Car Model You Would Like:\n";
				cout <<"Car 2-A = 2750 \t\t 0\nCar 2-B = 3000 \t\t 1\nCar 2-C = 3500 \t\t 2\nCar 2-D = 4000 \t\t 3\n";
				cout << "Please Enter The Model =", cin >> car_model;
				while(car_model > 3)
				{
					cout << "wrong input entered";
					cout << "\nPlease Enter The Model = ";
					cin >> car_model;}
				
				switch(car_model)
					{

						case 0:
						total =days*type2_car[car_model]+driver_charges;
						cout <<"Your Total Price is :"<< total << endl;
						deals(days,total);
						break;

						case 1:
						total =days*type2_car[car_model]+driver_charges;
						cout <<"Your Total Price is :"<< total << endl;
						deals(days,total);
						break;

						case 2:
						total =days*type2_car[car_model]+driver_charges;
						cout <<"Your Total Price is :"<< total << endl;
						deals(days,total);
						break;

						case 3:
						total =days*type2_car[car_model]+driver_charges;
						cout <<"Your Total Price is :"<< total << endl;
						deals(days,total);
						break;
					}
			}
			break;

			case 2:
			{
				cout << "Please Select Which Car Model You Would Like:\n";
				cout <<"Car 3-A = 4000 \t\t 0\nCar 3-B = 5000 \t\t 1\nCar 3-C = 5500 \t\t 2\nCar 3-D = 6000 \t\t 3\n";
				cout << "Please Enter The Model =", cin >> car_model;
				while(car_model > 3)
				{
					cout << "wrong input entered";
					cout << "\nPlease Enter The Model = ";
					cin >> car_model;}
				
				switch(car_model)
					{

						case 0:
						total =days*type3_car[car_model]+driver_charges;
						cout <<"Your Total Price is :"<< total << endl;
						deals(days,total);
						break;

						case 1:
						total =days*type3_car[car_model]+driver_charges;
						cout <<"Your Total Price is :"<< total << endl;
						deals(days,total);
						break;

						case 2:
						total =days*type3_car[car_model]+driver_charges;
						cout <<"Your Total Price is :"<< total << endl;
						deals(days,total);
						break;

						case 3:
						total =days*type3_car[car_model]+driver_charges;
						cout <<"Your Total Price is :"<< total << endl;
						deals(days,total);
						break;
					}

			}
			break;

			case 3:
			{
				cout << "Please Select Which Car Model You Would Like:\n";
				cout <<"Car 4-A = 6350 \t\t 0\nCar 4-B = 7800 \t\t 1\nCar 4-C = 4800 \t\t 2\nCar 4-D = 7000 \t\t 3\n\n";
				cout << "Please Enter The Model = "; cin >> car_model;
				while(car_model > 3)
				{
					cout << "wrong input entered";
					cout << "\nPlease Enter The Model = ";
					cin >> car_model;}
				
				switch(car_model)
					{

						case 0:
						total =days*type4_car[car_model]+driver_charges;
						cout <<"Your Total Price is :"<< total << endl;
						deals(days,total);
						break;

						case 1:
						total =days*type4_car[car_model]+driver_charges;
						cout <<"Your Total Price is :"<< total << endl;
						deals(days,total);
						break;

						case 2:
						total =days*type4_car[car_model]+driver_charges;
						cout <<"Your Total Price is :"<< total << endl;
						deals(days,total);
						break;

						case 3:
						total =days*type4_car[car_model]+driver_charges;
						cout <<"Your Total Price is :"<< total << endl;
						deals(days,total);
						break;
					}
			}
			break;

	}
		
	system ("cls");
//	Customer Details 
	cout<<"\n----------------CUSTOMER DETAILS----------------"<<endl;	
	cout << "\nCustomer Name : ";getline(cin >> ws,name);
   	cout << "Customer E-mail Address : ", getline(cin,email_address);
    cout << "Customer Phone Number : ", cin >> phone_number;
    cout << "Customer CNIC : ", cin >> CNIC, cout << endl;
    
    system ("cls");
// Final Agreement

do {
	cout << "\t\t\t\t\tAGREEMENT" << endl;
	cout << "This Agreement is between the owner of the Rent A Car Managment System and the customer Name of the Customer.\n" << endl;
	cout << "1 - The customer would cover damage to the Rented Vechile; at the time this car rental agreemnent is signed.\n" << endl;
	cout << "2 - Renter represents and warrants that renter is legally entitled to operate the motor vechicle under the law of this jurisdiction.\n" << endl;
	cout << "Do you Agree With Our Terms and Conditions of the Agreement?\n" << endl;
 	cout << "Please Press \"Y\" for YES or Press \"N\" for No\n" << endl;
	
	cin >> agree;
	
	if (agree == 'Y' || agree == 'y')
	{
		testfile.open("user file.txt",ios::app);

	if (testfile.is_open()) //Writing 
		{
			testfile << "Customer Name : " << name<< endl;
			testfile << "Customer E-mail Address : "<< email_address << endl;
			testfile << "Customer Phone Number : " << phone_number<< endl;
			testfile << "Customer CNIC : " << CNIC<< endl;
			testfile << "Car Type : " << car_type_name[car_type] << endl;
			testfile << "Car Model : " << car_model << endl;
			testfile << "Days : " << days << endl;
			testfile << "Driver Charges : " << driver_charges << endl;
			testfile << "Total Price : " << total << endl;
			
			if(days >=15)
				testfile << "Price After Dicount : " << deal << endl;
			
			testfile << "----------------------------------------------------- " << endl;			
				}
			
		testfile.close();
		cout << "\nRegistration Successfull" << endl;
	}
	
	else if (agree == 'N' || agree == 'n'){
		
		cout << "Registration Unsuccessfull\n" << endl;
		break;
	}
	 
	 
	} while (agree != 'y');    
			
// File Handling			
	
		cout << "press \"Y\" to Enter another Entry OR press \"N\" to Stop : ",cin >> choice,cout << endl;
}while(choice != 'n' && choice != 'N');
		
	
	 
cout << "Press \"V\" to View the Entered Records OR Press \"t\" to Terminate the Program \n";
cout << "Enter here : ",cin >> choice;
	 
	if (choice == 'v' || choice == 'V')
		{
			system("cls");
			testfile.open("user file.txt",ios::in);
			
			if (testfile.is_open()) //Read
				{
					string line;
					while(getline(testfile,line))
						cout << line << endl;
						
				}
			testfile.close();	
		}	

	else
		cout << "Program is Terminated";
}
