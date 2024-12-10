#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"Enter The Number:";
    cin >> num;

    switch( num)
    {
        case 1: 
        cout<<" Rahul:";
        break;

        case 2:
        cout<<" Rohit:";
        break;

        case 3:
        cout<<" Raushan :";
        break;

        case 4: 
        cout<<" Ravi:";
        break;

        default:
        cout<<" Random Name :" << endl;
    }
    cout<< " Bye";


    return 0;
}