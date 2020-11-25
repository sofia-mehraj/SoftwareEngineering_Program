#include<iostream>

using namespace std;

int main()
{
	int Array[5];
	int *Pointer = Array;

	cout<<endl<<"Enter Five Integer : ";
	cin>> *Pointer >> *(Pointer+1)>>*( Pointer+2)>>*(Pointer+3)>>*(Pointer+4);

	cout << endl;
	cout<<"Your Integers are:\n";

	for(int i=0; i<5; i++)
	{
		cout<<Array[i]<<endl;
	}
	return 0;

}


