//Name: TOH SHEE THONG
//Matric number: A24CS0309
//14.11.2024

#include<iostream>
using namespace std;

int main(){
	char choice;
	do{
	
	int num, sum = 0, digit;
	cout<<"Enter an integer number: ";
	cin >> num;
	int n = num;
	do
	{
		digit = n%10;
		sum += digit;
		n = n/10;
		if (n>0){
		cout<<digit<<" + ";
		}
		else 
		{
			cout<<digit;
		}
		
	} while (n>0);
	cout<<" = "<<sum<<endl;
	
	if (sum % 2 == 0){
		if (sum % 4 == 0 && sum % 5 == 0){
			cout<<sum<<" is even & multiples of 4 and 5"<<endl;
		}if (sum % 3 == 0 && sum % 4 == 0){
			cout<<sum<<" is even & multiples of 3 and 4"<<endl;
		
		}else if (sum%3 == 0){
			cout<<sum<<" is even number & multiples of 3"<<endl;
		}else if (sum%4 == 0){
			cout<<sum<<" is even number & multiples of 4"<<endl;
		}else if (sum%5 == 0){
			cout<<sum<<" is even number & multiples of 5"<<endl;
		}
		else
		cout<<sum<<" is even number"<<endl;
	}else 
	if (sum % 3 == 0){
		if (sum % 3 == 0 && sum % 5 == 0){
			cout<<sum<<" is odd number & multiples of 3 and 5"<<endl;
		}else
		cout<<sum<<" is odd number & multiples of 3"<<endl; 
	}
	else if (sum % 5 == 0){
		cout<<sum<<" is odd number & multiples of 5"<<endl; 
	}
	
	else
	{
		cout<<sum<<" is odd number"<<endl;
	}
	
	cout<<"Do you wish to continue? (y/n)"<<endl;
	cin>>choice;
	
	
}while (choice == 'y' || choice == 'Y');
return 0;

}

