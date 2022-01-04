/*  Practical 16
    Que 16.2  : 
    Task b    : Predict the Output
*/ 

#include <iostream>
using namespace std;
template <typename T>
T add(T a, T b)
{
    return a+b ;
}
template <typename T1,typename T2, typename T3>
T3 add(T1 a, T2 b)
{
    return a+b ;
}
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
