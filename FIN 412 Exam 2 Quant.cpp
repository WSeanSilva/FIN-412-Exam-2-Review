//Import Libraries
#include <iostream>
#include <cmath>

using namespace std;
//Global Variables
std::string menu;

int menuChoice;

//Declaring Core Functions
void nonInc_SGA();
void mergerCalc();

//Declaring Aesthetic and UI functions
void shutDown();


//main function
int main () {
cout << "Fin 412 Exam II Review\n";

do {
    cout << "Select the calculation you wish to perform\n";
    cout << "1. Non-incremental SG&A\n";
    cout << "2. Merger/Synergy Analysis";

    cin >> menuChoice;

    //Selection to calculation
    switch (menuChoice) {
    case 1:
        nonInc_SGA();
        break;
    case 2:
        mergerCalc();
        break;
    default:
        cout << "Please select a valid option";
    }


} while (menu != "No" || "no");

shutDown();

return 0;

}



//Declared core-function exposition

//Non Incremental SGA
void nonInc_SGA() {
//Variables for function
float sgaExpense, percentIncremental, taxRate;

//Prompt User
cout << "What was the assigned value for SG&A expense: ";
cin >> sgaExpense;

cout << "What percent of the SG&A was incremental: ";
cin >> percentIncremental;

cout << "What was the company tax rate: ";
cin >> taxRate;

//Perform Math Calculations
float nonIncSGA, adjCashFlow;

//Non Incremental SG&A
nonIncSGA = sgaExpense * (1 - percentIncremental);
//Adjustment to cash flow to account for this
adjCashFlow = nonIncSGA * (1 - taxRate);

//Answers
cout << "$" << nonIncSGA << " is the amount of the non-incremental SG&A.\n";
cout << "$" << adjCashFlow << " is the adjustment to the cash flow to account for the non-incremental cash flow.\n";

//Ask to return to menu
cout << "Return to menu? Type 'Yes or 'No'. \n";
cin >> menu;
}

//Project Evaluation
void mergerCalc() {
//variables
std::string b1, b2;
float b1MV, b2MV, b1ROE, b2ROE, b1Growth, b2Growth, mergerShock, continuedRate;

//User inputs
cout << "What is the name of the first business? ";
cin >> b1;

cout << "What is " << b1 << "'s cost of capital and market value? ";
cin >> b1ROE;
cin >> b1MV;


//User inputs




//Calculations





}

//Declared aesthetic and UI function expositions
void shutDown (){
std::string shutdownText = R"(
 .d8888b.                         888        888888b.                     888
d88P  Y88b                        888        888  "88b                    888
888    888                        888        888  .88P                    888
888         .d88b.   .d88b.   .d88888        8888888K.  888  888  .d88b.  888
888  88888 d88""88b d88""88b d88" 888        888  "Y88b 888  888 d8P  Y8b 888
888    888 888  888 888  888 888  888 888888 888    888 888  888 88888888 Y8P
Y88b  d88P Y88..88P Y88..88P Y88b 888        888   d88P Y88b 888 Y8b.      "
 "Y8888P88  "Y88P"   "Y88P"   "Y88888        8888888P"   "Y88888  "Y8888  888
                                                             888
                                                        Y8b d88P
                                                         "Y88P"
)";

cout << shutdownText;
}

