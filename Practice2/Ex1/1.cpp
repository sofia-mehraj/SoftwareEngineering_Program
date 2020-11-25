#include<iostream>
#include<cmath>

using namespace std;

int main()
{
	int I, J;
	char OP, Cont;

	cout << "\nMENU" << endl;
	cout << "1. Add" << endl;
	cout << "2. Subtract" << endl;
	cout << "3. Multiply" << endl;
	cout << "4. Divide" << endl;
	cout << "5. Modulus" << endl;
	
	do
	{
		cout << "Enter Your Choice: ";
		cin >> OP ;
		cout << endl;
		
		cout << "Enter Two Numbers: ";
		cin>> I >> J;
		cout << endl;

		switch (OP)
		{
			case'1':
				cout << "Addition("<< I <<","<< J <<") : ";
				cout<< I + J << endl;
			break;

			case'2':
				cout << "Subtract ("<< I <<","<< J <<") : ";
				cout << I - J << endl;
			break;
			
			case'3':
				cout << "Multiply ("<< I <<","<< J <<") : ";
				cout << I * J << endl;
			break;

			case'4':
				cout << "Divide ("<< I <<","<< J <<") : ";
				if(J==0)
				{
					cout << "Invalid" << endl;
				}
				cout << (I/J) << endl;
			break;

			case'5':
	
				cout << "Modulus ("<< I <<","<< J <<") : ";
				cout << I % J << endl;
			break;

			default:
				cout << "Invalid Command"<< endl;

		}
        
		cout << "\n\nEnter Y or y to Continue : ";
		cin >> Cont;
		cout << endl;
	}

	while(Cont == 'y'|| Cont == 'Y');

	return 0;

}

