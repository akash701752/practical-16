/*  Practical 16
    Que 16.2  : 
    Task b    : Predict the Output
*/ 

#include <iostream>
using namespace std;
int main()
{
	cout<<"\t\t Akash Yadav 200111076 A "<<"\n" ;

    try 
    {
    throw 'a';
    }
    catch (int x) 
    {
    cout << "Caught " << x;
    }
    catch (...) {
    cout << "Default Exception\n";
    }
    return 0;
    
}
/*
    There is no value in a so everytime default exception
    will caught up.
*/
