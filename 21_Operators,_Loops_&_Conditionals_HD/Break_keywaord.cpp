#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<< " Enter An Number :";
    cin>>n;
    // for( int i=0; i<n; i++)
    // {
    //     cout<< "love babbar:" << endl;
    // }
    // cout<< " hello:" << endl;


                                                     //  break .keywoard are using 

    //  for( int i=0; i<n; i++)
    // {
    //     cout<< "love babbar:" << endl;

    //     break;
    // }

    // cout<< " hello:" << endl;


    //  output is  only one time print love babbar and one time hello 
 


    //  continue statement are using in written  in  loops 
     for( int i=0; i<n; i++)
    {
        if( i==2 || i==4 )
        {
            continue ;
        }
    
        cout<< "love babbar:" << endl;
          
          
    }
    cout<< " hello:" << endl;

//  Conditions:- its declared in  last of the ;statement 
    // continue are using for print the  message for given loop in given number by the user 
    return 0;
}
