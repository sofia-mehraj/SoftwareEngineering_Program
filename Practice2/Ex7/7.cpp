#include<iostream>

using namespace std;

int *Ascending(int *Pointer, int size)
{

	for(int i=0; i<size; i++)
	{
		for(int j= i+1; j<size; j++)
		{
			if(*(Pointer+j)<*(Pointer+i))
			{
				int Data = *(Pointer+j);
				*(Pointer+j) = *(Pointer+i);
				*(Pointer+i) = Data;
			}
		}
	}
	return Pointer;
}

int main()
{
	int Array[] = {856,-3,59,31,7,-25,93,0,47,68};
	int *Pointer = Ascending(Array,10);
	cout<<endl<<"Ascending Order\n"<<endl;
	for(int k=0; k<10; k++)
	cout<<*(Pointer+k)<<endl;
	return 0;
}

