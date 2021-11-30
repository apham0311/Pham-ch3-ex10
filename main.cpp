/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Anh Pham
 */

#include <iostream>
using namespace std;
int main()
{
    string operation;
    double val1,val2;
    cout<<"Please enter an operation(+,-,*,/) followed by two numbers separated by a space: ";


    while(cin>>operation>>val1>>val2)       {

        double res;

        if(operation == "plus" || operation=="+")  res=val1+val2;
        else if(operation == "minus"|| operation=="-")  res=val1-val2;
        else if(operation == "mul"  || operation=="*")  res=val1*val2;
        else if(operation == "div"  || operation=="/")   {

            if(val2==0)
            {

                cout<<"Error! Cannot divide by zero!";

            }

            else{
                res=val1/val2;}
        }

        cout<<val1<<operation<<val2<<"=="<<res<<endl;
        cout<<"Please try again"; }
    cout<<"Error!";
}