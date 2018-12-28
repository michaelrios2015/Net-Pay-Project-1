//*********************************************** 
// COSC 501                                LAB #3 
// Michael Rios                             9/23/13 
// PROGRAM-NAME: Project 1
// Calculates employees net pay by subtracting taxes and other expenses     
//*********************************************** 

#include <iostream>
#include <iomanip>
using namespace std;

void main()
{
	//the variables, earnings and deducations
	double earnings, employee_id, federal_tax, state_tax; 
    double s_s_tax, medicare, pension, health_insurance, net_pay;

	//this is used to control the loop
	char end;

	//just a precaution in case there was some weird junk that defaulted in end
	end = 'a';
	
	// keeps us going till n is choosen
	while (end != 'n')
	{

		//gets user input
		cout << "please enter the employee identification number\n";
		cin >> employee_id;

		cout << "please enter employees earnings\n";
		cin >> earnings;

		//the hard work, calculates each of the deductions
		federal_tax = earnings *.15; 
		state_tax = earnings *.05; 
		s_s_tax = earnings *.05;
		medicare  = earnings *.03;
		pension  = earnings *.08;
		health_insurance  = 125;
		//calculates net_pay
		net_pay = earnings - federal_tax - state_tax - s_s_tax - medicare - pension - health_insurance;

	
		//displaying the results
		cout << endl;
		cout << left << setw(20) << "EMPLOYEE ID" << setw(10) << employee_id << endl;
		//creates a line
		cout<< setfill('-') <<setw(40) << "-" << setfill(' ') << endl;
		//formating to make it look nice
		cout << setw(18) << "Earnings" << fixed << setprecision(2) << "$" << earnings << endl;
		cout << setw(20) << "Federal Tax" << fixed << setprecision(2) << federal_tax << endl;
		cout << setw(20) << "State Tax" << state_tax << endl;
		cout << setw(20) << "Social Security" << s_s_tax << endl;
		cout << setw(20) << "Medicare/Medicade" << medicare << endl;
		cout << setw(20) << "Pension" << pension << endl;
		cout << setw(20) << "Health Insurance" << fixed << setprecision(2) << health_insurance << endl;

		cout << endl;
		cout<< setfill('-') <<setw(40) << "-" << setfill(' ') << endl;
		cout << setw(25) << "Net pay after taxes is " <<  "$" << net_pay;
		cout << endl;

		//allows you to continue or not
		cout << "\nwould you like to contine??? (y/n)\n";
		cin >> end;
		cout << endl;
	}

//always be polite
cout << "Thank you\n";

}





