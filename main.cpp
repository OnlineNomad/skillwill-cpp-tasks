#include <iostream>
#include <cmath>
using namespace std;

void menu();
void maxNumberFinder();
void areaFinder();
void degreeConversion();
void leapYearFinder();


int main()
{   
    menu();
    return 0;
}

void menu() {
    // -----M E N U ----
    cout << "აირჩიეთ დავალება: "<< endl;
    cout << "Max number finder - Type: 1\nCircle area finder - Type: 2\nDegree conversion - Type: 3\nLeap year finder - Type: 4\nDistance between two points finder - Type: 5\nSquare equation calculator - Type: 6\nCalculator - Type: 7"<< endl;
    
    char menuInput;
    cin >> menuInput;
    
    switch (menuInput) {
        case '1':
            maxNumberFinder();
            break;
        case '2':
            areaFinder();
            break;
        case '3':
            degreeConversion();
            break;
        case '4':
            leapYearFinder();
            break;
        case '5':
            // twoPointsDist();
            break;
        case '6':
            // squareEquation();
            break;
        case '7':
            // myCalculator();
            break;
        default:
            cout << "ERROR ! Enter valid number. ";
    }
}

void maxNumberFinder(){
    cout << "\nმაქსიმალური რიცხვის პოვნა: \n";     
    int numberOne, numberTwo, numberThree;
    cout << "Enter num one: ";
    cin >> numberOne;
    cout << "Enter num two: ";
    cin >> numberTwo;
    cout << "Enter num three: ";
    cin >> numberThree;
    
    if (numberOne > numberTwo && numberOne > numberThree) {
        cout << "Max number is number one" << endl;
    }else if (numberTwo > numberThree) {
        cout << "Max number is number two" << endl;
    }else {
        cout << "Max number is number three" << endl;
    }
}

void areaFinder() {
    
    cout << "\nწრეწირის ფართობის პოვნა: \n";
    int radius;
    float pi = 3.14;
    cout << "Enter circle radius: ";
    cin >> radius;
    cout << "circle radius is: " << pi * pow(radius, 2)<< endl;
}

void degreeConversion() {
    cout << "\n გრადუსების კონვერტერი: ";
    
    float degrees;
    cout << "\nEnter degrees: ";
    cin >> degrees;
    
    short input;
    float output;
    cout << "Chose the conversion: \n celcius to fahrenheit type: 1\n fahrenheit to celcius type: 2 \n";
    cin >> input;
    if (input == 1) {
        output = (degrees * 9/5 ) + 32;
        cout << degrees << " in fahrenheit is: "<< output << endl; 
    }else if (input == 2){
        output = (degrees - 32) * 5/9;
        cout << degrees << " in celcius is: "<< output<< endl;
    }
}

void leapYearFinder() {
    cout << "\n ნაკიანი წელიწადის პოვნა ";
    int leapYear;
    cout << "\nEnter year: ";
    cin >> leapYear;
    if (leapYear % 4 == 0){
        cout << leapYear << " is a leap year!"<<endl;
        
    }else {
        cout << leapYear << " is not a leap year" << endl;
    }
    
}


