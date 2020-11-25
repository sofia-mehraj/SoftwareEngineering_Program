//Prompt the user to input ten integer values

#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
	int Array[10];
	int Mode[10][2];
	int Max, i, j, k=0;
	cout<<"\nEnter Ten Integer Values :";
	for(int x=0; x<10; x++)
	{
		cin>>Array[x]; 
	} 

	for(i= 0;i<10;i++)
	{
		for(j= 9; j>i; j--)
		{
			if(Array[j] < Array[j-1])
			{
				int Data = Array[j];
				Array[j] = Array[j-1];
				Array[j-1] = Data;
			}
		}
	}

	cout<<"\nGreatest Integer is : "<<Array[9]<<endl;
	cout<<"\nSmallest Integer is : "<<Array[0]<<endl;

	for(i= 0; i<2; i++)
	for(j= 0; j<10; j++)
	{
		Mode[j][i] = 0;
		Mode[0][0] = 1;
	}
 
	for(i= 0; i<10; i++)
	{
		for(j= 0; j<10; j++)
		{
			if(Array[i] == Array[j+1])
			{
				++Mode[i][0];
				Mode[i][1] = Array[i];
			}
		}
	}

	Max = Mode[0][0];
   	for(j=0;j<10;j++)
	{
		if(Max<Mode[j][0])
		{
			Max = Mode[j][0];k=j;
		}
	}

	cout<<"\nRepeated Integer : "<<Mode[k][1]<<endl;
	cout<<"\nIt Occur "<<Max<<" Times."<<endl<<endl;
		
	return 0;
}



