#include <iostream>

using namespace std;

int multiply(int a, int b){
 return 4 * 5;
}

int add(int a, int b){
    return a + b;
}

int divide(int a, int b){
    return a / b;
}

int subtract(int a, int b){
    return a - b;
}

int main()
{
    string choice;
    int a;
    int b;

    cout << "What would you like to calculate?";
    cin >> choice;

    if(choice == "add"){
        cout << "First number to add: ";
        cin >> a;

        cout << "Second number to add: ";
        cin >> b;

        cout << "The sum is: ";
        cout << add(a, b);
    } else if(choice == "multiply"){
        cout << "First number to multiply: ";
        cin >> a;

        cout << "Second number to multiply: ";
        cin >> b;

        cout << "The result is: ";
        cout << multiply(a, b);
    } else if(choice == "divide"){
        cout << "First number to divide: ";
        cin >> a;

        cout << "Second number to divide: ";
        cin >> b;

        cout << "The result is: ";
        cout << divide(a, b);
    } else if(choice == "subtract"){
        cout << "Subtract: ";
        cin >> b;

        cout << "from: ";
        cin >> a;

        cout << "The result is: ";
        cout << subtract(a, b);
    }
    return 0;
}


