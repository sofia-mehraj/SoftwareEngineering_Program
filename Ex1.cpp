Problem 1

***Area and circumference of a circle***


#include <iostream>

#define PI 3.14159

using namespace std;

int main()
{
	float radius, area, circum;
		
	cout << "\n\nArea and Circumference of Circle\n\n"<<endl;

	cout<<"Radius of a Circle : ";
    	cin>>radius;
	
	circum = 2*PI*radius;
	area = PI*(radius*radius);

	cout<<"Area of the Circle is : "<< area << endl;
	cout<<"Circumference of the Circle is : "<< circum << endl;
	
	cout << endl;

	return 0;
}



Problem 2

***Max and  Min***


#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

#define SIZE 50

int main()

{
	srand(time(0));	

	int array[SIZE]; 

	int i, max, min, size;

	cout<<"\nEnter size of the Array: ";
	cin>>size;

  
	for(i=0; i<size; i++)
	{
	        array[i] = rand();
	}
	
	cout << "\n\nThe Random Array is : "; 

	for (int i=0; i<size; i++)
	{
	        cout << array[i] << " ";
	}
	
	
	max = array[0];
	min = array[0];

	for(i=1; i<size; i++)
	{
		if(array[i] > max)
		max = array[i];

		if(array[i] < min)
		min = array[i];
	}

	cout<<"\n\n\nMaximum element = " << max << "\n"<<endl;

	cout<<"\nMinimum element = " << min<<"\n"<<endl;

	
	return(0);
}




Problem 3


***Fibonacci sequence***


#include <iostream>

using namespace std;

int main()
{
	int num, first=0, second=1, next;

	cout<<"\nEnter the number of terms: ";
	cin>>num;

	cout<<"\n\nFibonnacci series: "<<endl;
	
	for(int i=0; i<num; i++)
	{
		cout<<first<<endl;

		next = first+second;
		first = second;
		second = next;
	}

	return 0;
}



Problem 4


***Multiplication Table***


#include <iostream>
using namespace std;

int main()
{
	int n;

	cout << "\n\nEnter a Value for Multiplication Table: ";
	cin >> n;

	for (int i = 1; i <= 10; i++)
	{
		cout<< endl;

		cout << n << " * " << i << " = " << n * i << endl;
	}
    
	return 0;
}



Problem 5


***Truth Table of AND, OR operator***


#include<iostream>

using namespace std;

int main()
{
	bool a;
	int i,j,k;

	cout<<"\n\nAND Truth Table\n"<<endl;

	for (i=0; i<=1; i++)
	{
		for(j=0; j<=1;j++)
		{
			for (k=0; k<=1; k++)
			{
				a = (i&&j)&&k;

				std::cout<< i <<" & "<< j <<" & "<< k <<" = "<< a <<endl;
			}
		}
	}

	cout<<"\n\nOR Truth Table\n"<<endl;

	for (int i=0; i<=1; i++)
	{
		for(int j=0; j<=1; j++)
		{
			for (int k=0; k<=1; k++)
			{
				a = (i||j)||k;

				std::cout << i <<" | "<< j <<" | "<< k <<" = "<< a <<endl;
			}
		}
	}
	return 0;
}
