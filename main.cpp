//*****************
//Program Name: Program 3 - Savings Compounding
//Author: Veronica Pichay
//IDE Used: Repl.it
//Program description: Calculates the amount of savings after one year using compounded interest
//*****************

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

//Constants
const int PREC = 2;

int main()
{

//Declaration
float intrstRate, principal, interest, intrstPrcnt, savings;
int time;
cout << setprecision(2) << fixed;

//Welcome 
cout << endl;
cout <<"This program will calculate the amount you'd have in \n" ;
cout <<"savings, given the starting principal, interest rate, and \n" ;
cout <<"number of compounding periods per year, which you enter.";
cout <<endl <<endl;

//Input
cout <<"Please enter starting principal in dollars and cents: --> ";
cin  >> principal;
cout <<"Interest rate in decimal format (e.g. 4% enter 0.04): --> "; 
cin  >> intrstRate;
cout <<"Number of compounding periods per year in whole numbers: --> ";
cin  >> time; 
cout << endl;
cout << "******* Your future savings amount *******\n\n";

//Calculation
cout << setprecision(PREC) << fixed;
intrstPrcnt = intrstRate * 100;
savings = principal * pow( 1.0 + intrstRate / time, time);
interest = savings - principal;

//Output
cout << endl;
cout <<"Interest rate: ";
cout << setw(21) << intrstPrcnt << "%" << endl;
cout <<"Times compounded: ";
cout << setw(18) << time <<endl;
cout <<"Principal: " << setw(11) << " $ ";
cout << setw(14) << principal << endl;
cout <<"Interest: " << setw(12) << " $ ";
cout << setw(14) << interest << endl;
cout <<"Amount in savings: " << setw(2) << " $ ";
cout << setw(14) << savings << endl; 

//Fin
cout << endl;
cout << "***This concludes the program. Have a good day!***" << endl;



return 0;

}


