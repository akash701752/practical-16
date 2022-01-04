/*  
    Practical 16
    Que 16.2  : 
    part d    : Rethrow and catch an exception by creating a separate user
                defined divide function for condition divide by zero.
*/ 

#include <iostream>
#include <string>
using namespace std;
double divide(int a,int b)
{
    try
    {
        if(b==0)
        {
            throw runtime_error("Divide by Zero Error") ;
        }
    }
    catch(runtime_error& e)
    {
        cout<<"Exception Occured \n"<<e.what()<<endl ;
    }
    return (a/b) ;
}
int main()
{
	cout<<"\t\t Akash Yadav 200111076 A "<<"\n" ;
    int x  , y ;
    cout<<"Enter two Numbers : " ;
    cin>>x>>y ;
    double res ;
    cout<<divide(x,y) ;
    
    return 0;
}
/*
    
*/
