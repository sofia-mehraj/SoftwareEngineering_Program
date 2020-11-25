//Pascal Triangle

#include <iostream>

using namespace std;

void printPascal(int x)
{

	for (int k = 1; k <= x; k++)
	{
		int C = 1; 

		for (int i = 1; i < (x - k + 1); i++)
		{
			cout << " ";
		}

		for (int i = 1; i <= k; i++)
		{
			cout << C << " ";
			C = C * (k - i) / i;
		}

		cout << "\n";
	}
}


int main() 
{ 

	int x = 5; 
	cout<<"\n\nEnter the Number of Pascal rows: ";
	cin>>x;
	cout<<endl; 
	
	printPascal(x); 
	return 0; 
} 

