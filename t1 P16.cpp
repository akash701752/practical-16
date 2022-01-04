/*  Practical 16
    Que 16.1  : WAP in C++ program to create a genetic add function
    Task 1    : Perform add over two integers and return integer
    Task 2    :Perform add over one int and one float and return double
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
	int a,b,c;
	float d ;
	cout<<"Enter Two Integers : ";
	cin>>a>>b ;
	cout<<"Using genetic Function Add Over int int\n";
	cout<<"Sum is : "<<add<int>(a,b)<<endl; 
	
	//Add over int, float
	cout<<"Enter a Integer : ";
	cin>>c ;
	cout<<"Enter a Float : ";
	cin>>d ;
	cout<<"Using genetic Function Add Over int float\n";
	cout<<"Sum is : "<<add<int,float,double>(c,d)<<endl; 
    return 0;
}
