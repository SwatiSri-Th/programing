#include<iostream>
using namespace std;
int main()
{
	int *a= new int(50);
	int *b = new int[5];
	int i;
	cout<<"Enter array elements : ";
	for(i=0;i<5;i++)
	   cin>>*(b+i);
	   cout<<"\n Array elements are ";
	   for(i=0;i<5;i++)
	   cout<< *(b+i);
	   cout<<"\n value of a is "<<a;
	   cout<<"\n value of *a is "<<*a;
	   delete a;
	   delete[]b;
	   return 0;
}
