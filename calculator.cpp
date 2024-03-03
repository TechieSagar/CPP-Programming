/* C++ program for calculator. */


#include <iostream>
using namespace std;

void getAddition();
void getSubstraction();
void getDivision();
void getMultiplication();
void afterCalculation();
void getCalculation();


// main function
int main(){

    cout <<"Program to perform Various Operations";
    cout <<"\n\n";

    // call to function
    getCalculation();

    return 0;
}


// addition function
void getAddition(){
    int n;
    int total = 0;

    cout << "Enter number for addition and enter 0 to get addition \n\n";

    while(true){
        cin >> n;

        if(n!=0){
            total = total+n;
        } else {
            break;
        }
    }

    cout << "Total Sum : " << total << "\n";

    // function call
    afterCalculation();
}


// substraction function
void getSubstraction(){
    int n, initial;
    int total = 0;

    cout << "Enter number for Substraction and enter 0 to end \n\n";

        cin >> initial;

    while(true){
        cin >> n;

        if(n!=0){
            total = initial-n;
            initial = total;
        } else {
            break;
        }
    }

    cout << "After Substraction : " << total << "\n";
    afterCalculation();
}

// division function
void getDivision(){
    double dividend,divisor,result;
    cout << "Enter Dividend \n";
    cin >> dividend;
    cout << "Enter Divisor \n";
    cin >> divisor;

    result = dividend/divisor;

    cout << "After Divison : " << result << "\n";

    // function call
    afterCalculation();

}

// multiplication function
void getMultiplication(){
    double n1,n2,result;
    cout << "Enter number : ";
    cin >> n1;
    cout << "Enter Multiplier : ";
    cin >> n2;

    result = n1*n2;
    cout << "After Multiplication : " << result << "\n";

    // function call
    afterCalculation();
}

// function to calculate again
void afterCalculation(){
    char value = ' ';
    cout << "Do you want to calculate more ? Reply with Y or N : ";
    cin >> value;

    while(true){
        if ((value== 'Y') || (value== 'y')){   
        getCalculation(); // function call to perform various operaation
        break;
        } else if((value=='n') || (value == 'N')){
            cout << "Program ended";
            break;
            
        } else{
            cout << "Try again with Y or N : ";
            cin >> value;
            
        }
    }

}

// function to perform various operations +, -, /, *
void getCalculation(){
    char oprand = ' ';
    cout <<" + for addition\n - for substraction\n * for multiplication\n / for division\n\n";
    cin >> oprand;

    switch(oprand){
        case '+':
            getAddition(); // addition function call
            break;

        case '-':
            getSubstraction(); // substraction function call
            break;

        case '*':
            getMultiplication(); // multiplication function call
            break;

        case '/':
            getDivision(); // division function call
            break;

        default:
            cout << "Wrong input try again :\n\n";
            getCalculation(); // call the function again if the input is not desirable
    }
}