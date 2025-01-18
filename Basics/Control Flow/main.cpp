#include<iostream>
using namespace std;

int main(){

    // int budget;
    // cout << "Enter Your Budget: " << endl;
    // cin >> budget ;
    // if(budget > 2000000)
    // {
    //     cout << "You can buy Hayabusa" << endl;
    // }else{
    //     cout << "You can not buy Hayabusa" << endl;
    // }

    // int marks = 85;

    // if(marks > 90){
    //     cout << "A" << endl;
    // }else if(marks > 80){
    //     cout << "B" << endl;
    // }else if(marks > 70){
    //     cout << "C" << endl;
    // }else{
    //     cout << "F" << endl;
    // }

    int height;
    cout << "Enter height in feet" << endl;
    cin >> height;

    int weight;
    cout << "Enter your weight:" << endl;
    cin >> weight;

    if(height > 5){
        if(weight > 70){
            cout << "You got a good BMI" << endl;
        }else{
            cout << "Bhai apse nahe ho paega" << endl;
        }
    }else{
        cout << "Complain dila du" << endl;
    }
 












    return 0;
}