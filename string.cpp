// Program for Replacing a Character of the String

#include<iostream>
using namespace std;

class String
{
	private:
	char str[30];

	public:
		void input_new_string();
		void add_character();
		void replace_character();
		void remove_character();
		void reverse_string();
};

void String :: input_new_string()
{
	
}

void String :: add_character()
{

}

void String :: replace_character()
{
	char chr1,chr2;
	int check=0;

	cout<<endl<<"Your Current String : "<<str<<"\n\n";

	cout<<"Enter the Character to Replace : ";
	cin>>chr1; // character to be replaced
	cout<<"Enter the New Character in place of "<<chr1<<" : ";
	cin>>chr2; // character to replace with

	for(int j=0;str[j]!='\0';j++) // Finding the Character and Replacing it
	{
		if(str[j]==chr1)
		{
			check=1;
			str[j]=chr2;
		}
	}

	if(check==1) // Successfully Replacing the Character
	{
		cout<<endl<<"Your Modified String : "<<str<<endl;
	}

	else // If character not found in the String
	{
		cout<<endl<<chr1<<" Not Found in the String !"<<endl;
	}
}

void String :: remove_character()
{

}

void String :: reverse_string()
{

}

int main()
{
	String s;
	s.input_new_string();

	int choice;
	while(choice!=6)
	{
		cout<<"\n1 - Input New String\n2 - Add Character\n3 - Replace Character\n4 - Remove Character\n5 - Reverse String\n6 - Exit\n"<<endl;

		cout<<"Enter Your Choice : ";
		cin>>choice;

		switch(choice)
		{
			case 1:
			s.input_new_string();
			break;
			
			case 2:
			s.add_character();
			break;
			
			case 3:
			s.replace_character();
			break;
			
			case 4:
			s.remove_character();
			break;
			
			case 5:
			s.reverse_string();
			break;
			
			case 6:
			cout<<"Program Ended !"<<endl;
			break;
			
			default:
			cout<<"Invalid Choice !"<<endl;
			break;
		}
	}
	return 0;
}