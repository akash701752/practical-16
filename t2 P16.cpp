/*  Practical 16
    Que 16.2 : WAP in C++ program to 
    Task a   : Catch a Divide by zero exception in z = x/y using "throw
                runtime_error"
    
*/ 

#include <iostream>
using namespace std;

int main()
{
	cout<<"\t\t Akash Yadav 200111076 A "<<"\n" ;
	int x , y , res ;
	cout<<"Enter two Integers : ";
	cin>>x>>y ;
	//res = x/y ;
	try
	{
	    if(y==0)
	    {
	        throw runtime_error("Math Error : Attempted to divide by Zero \n") ;
	    }
	    res=x/y;
	    cout<<res ;
	}
	catch(runtime_error& e)
	{
	    cout<<"Exception Occured : "<<e.what() ;
	}
    return 0;
}
