//Sort 10 Integer

#include <iostream>
#include <cstdlib>
#include<iomanip>


using namespace std;

void SortInteger(int IntegerValue[])
{

	int i,j;
	int Value;
	for(i=0; i<10; i++)
	{
		for(j=0; j<10; j++)
		{
			if(IntegerValue[j] > IntegerValue[j+1])
			{
				Value = IntegerValue[j];
				IntegerValue[j] = IntegerValue[j+1];
				IntegerValue[j+1] = Value;
			}
		}
	}
	for(i=0; i<10; i++)
	{
		cout<<IntegerValue[i]<<"\n";
	}   
}

void SortInteger(float IntegerValue[])
{
	int i,j;
	float Value;
	for(i=0; i<10; i++)
	{
		for(j=0; j<10; j++)
		{
			if(IntegerValue[j] > IntegerValue[j+1])
			{
				Value = IntegerValue[j];
				IntegerValue[j] = IntegerValue[j+1];
				IntegerValue[j+1] = Value;
			}
		}
	}
	for(i=0; i<10; i++)
	{
		cout<<IntegerValue[i]<<"\n";
	}   
}

void SortInteger(double IntegerValue[])
{

	int i,j;
	double Value;
	for(i=0; i<10; i++)
	{
		for(j=0; j<10; j++)
		{
			if(IntegerValue[j] > IntegerValue[j+1])
			{
				Value = IntegerValue[j];
				IntegerValue[j] = IntegerValue[j+1];
				IntegerValue[j+1] = Value;
			}
		}
	}
	for(i=0; i<10; i++)
	{
		cout<<IntegerValue[i]<<"\n";
	}   
}

int main()
{
	cout<<endl;
	int IntegerValue[] = {98,67,42,16,25,71,50,88,3,145};
	SortInteger(IntegerValue);
	return 0;
 }



