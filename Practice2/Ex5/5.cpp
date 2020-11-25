//Pointer MaxValue

#include<iostream>


using namespace std;

int *MaxValue(int b[],int x)
{
	int *Max=b;
    
	for(int i=1; i<x; i++)
	{
		if(*Max<*(Max+i)) *Max=*(Max+i);                            
	}
	return Max;
}

int main()
{    
	int x,*Ptr;
	cout<<endl;
	cout<<"Enter No. Data Values: ";
	cin>>x;
    
	int array[x];
	for(int i=0;i<x;i++)
	{
		cout<<"Enter the Value "<<i+1<<" : ";
		cin>>array[i];
	}

	Ptr=MaxValue(array,x);
	cout<<"The Max Value is : "<<*Ptr<<endl;
	return 0;
}  

