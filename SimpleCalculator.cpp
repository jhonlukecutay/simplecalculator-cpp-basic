#include<iostream>
using namespace std;


//making the varibles for values.
int first_Num, second_Num, arith;
int ans, total;

//function for addition, subtraction, multiplication, and division.
//call function
void addition() {
total = first_Num + second_Num;

}

void subtraction() {
total = first_Num - second_Num;

}

void multiplication() {
total = first_Num * second_Num;

}

void division() {
total = first_Num / second_Num;

}




int main() {

    //First number input
    cout<<"Please input the first number: ";
    cin>>first_Num;
    cout<<""<<endl;
    //Second number input
    cout<<"Please input the second number: ";
    cin>>second_Num;
    cout<<""<<endl;


    cout<<"There is a designated arithmetic method for each numbers below:"<<endl;
    cout<<""<<endl;
    cout<<"1 = Addition"<<endl;
    cout<<"2 = Subtraction"<<endl;
    cout<<"3 = Multiplication"<<endl;
    cout<<"4 = Division"<<endl;
    cout<<""<<endl;

    //choosing what kind of arithmetic is to use...
    cout<<"Please enter any number ranges from 1-4 and give the first and and second number its own arithmetic: ";
    cin>>arith;

    if (arith == 1) {
        addition();

    } else if (arith == 2) {
        subtraction();

    } else if (arith == 3) {
        multiplication();

    } else if (arith == 4) {
        division();

    } else {
    cout<<"Invalid Input.";
    }
    cout<<""<<endl;

    //total output
    cout<<"The total answer is: ";
    ans = total;
    cout<<ans;




}
