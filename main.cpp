#include <iostream>
#include <cmath>
using namespace std;

void menu();
void maxNumberFinder();
void areaFinder();
void degreeConversion();
void leapYearFinder();
void twoPointsDist();
void squareEquation();
void myCalculator();

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
            twoPointsDist();
            break;
        case '6':
            squareEquation();
            break;
        case '7':
            myCalculator();
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
    }else if (numberOne == numberTwo && numberTwo == numberThree){
        cout << "Numbers are equal! " << endl;
        
    }else {
        cout << "Max number is number three" << endl;
    }
}

void areaFinder() {
    
    cout << "\nწრეწირის ფართობის პოვნა: \n";
    float radius;
    float pi = 3.14;
    cout << "Enter circle radius: ";
    cin >> radius;
    cout << "circle radius is: " << pi * pow(radius, 2)<< endl;
}

void degreeConversion() {
    cout << "\n გრადუსების კონვერტერი: ";
    
    float degrees;
    short input;
    float output;
    cout << "\nChose the conversion: \n celcius to fahrenheit type: 1\n fahrenheit to celcius type: 2 \n";
    cin >> input;
    if (input == 1) {
        cout << "\nEnter degrees: ";
        cin >> degrees;
        output = (degrees * 9/5 ) + 32;
        cout << degrees << " in fahrenheit is: "<< output << endl; 
    }else if (input == 2){
        cout << "\nEnter degrees: ";
        cin >> degrees;
        output = (degrees - 32) * 5/9;
        cout << degrees << " in celcius is: "<< output<< endl;
    }else {
        cout << "Enter valid option" << endl;
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

void twoPointsDist() {
    float x1, x2, y1, y2;
    cout << "ორ წერტილს შორის მანძილის გამოთვლა "<< endl;
    
    cout << "\n Enter x1, y1, x2, y2 points (x1, y1) (x2, y2)\n Press Enter after every number." << endl;
    cin >>x1 >> y1 >> x2 >> y2;
    float distance = sqrt(pow(x2-x1, 2) + pow(y2-y1, 2));
    cout << "Distance is: " << distance << endl;
}

void squareEquation(){
    cout << "კვადრატული განტოლების ამომხსნელი "<<endl;
    
    cout << "\n To solve the quadratic equation enter a, b, c properties one after another\n Press Enter after every input"<< endl;
    int a, b, c;
    cin >> a >> b >> c;
    int discriminant;
    discriminant = sqrt(pow(b, 2) - 4*a*c);
    int qdrx1, qdrx2;
    qdrx1 = (-b + discriminant)/(2 * a);
    qdrx2 = (-b - discriminant)/(2 *a);
    cout << "Anwsers are: \n X1 = "<< qdrx1 << "\n X2 = "<< qdrx2 << endl;
}

void myCalculator() {
    cout << "კალკულატორი"<<endl;
    float numOne, numTwo;
    char calcInput;
    cout << "Enter number one: "<< endl;
    cin >> numOne;
    cout << "Enter number two: "<< endl;
    cin >> numTwo;
    cout << "Chose the operation: \n Type one of the following: '+', '-', 'x', '%'"<< endl;
    cin >> calcInput;
    switch(calcInput) {
        case '+':
            cout << "number one + number two is: "<< numOne + numTwo << endl;
            break;
        case '-':
            cout << "number one - number two is: "<< numOne - numTwo << endl;
            break;
        case 'x':
            cout << "number one x number two is: "<< numOne * numTwo << endl;
            break;
        case '%':
            cout << "number one % number two is: "<< numOne / numTwo << endl;
            break;
        default:
            cout << "Enter valid operator" << endl;
            break;

    }
}

