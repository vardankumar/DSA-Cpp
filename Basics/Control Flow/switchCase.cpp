#include<iostream>
using namespace std;

int main(){

    char grade;
    cout << "Enter Your Grade " << endl;
    cin >> grade;

    switch (grade)
    {
    case 'A':
        cout << "Your marks will be in range 90 - 100" << endl;
        break;
    
    case 'B':
        cout << "Your marks will be in range 80 - 90" << endl;
        break;
    
    case 'C':
        cout << "Your marks will be in range 70 - 80" << endl;
        break;
    
    case 'D':
        cout << "Your marks will be in range 60 - 70" << endl;
        break;
    
    default:
        cout << "Your marks will be below 60" << endl;
        break;
    }

    return 0;
}
