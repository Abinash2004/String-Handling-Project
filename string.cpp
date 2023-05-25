// Program for Adding a New Character to the String

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
	cout<<endl<<"Yout Current String : "<<str<<"\n\n"; // Old String

	char chr; 
	int pos,len=0,check=0; 

	cout<<"Enter the Character to Add : ";
	cin>>chr; // character to add
	cout<<"Enter the Position to Add : ";
	cin>>pos; // Position to add

	while(str[len]!='\0') // Generating Length of the string
	{
		if(len==pos)
			check=1;
		len++;
	}

	if(check==0)
	{
		cout<<"Invalid Position for the Character !"<<endl;
	}
	else
	{
		for(int i=len;i>=pos;i--)
		{
			str[i]=str[i-1];
		}

		str[len+1]='\0'; // end of the string
		str[pos-1]=chr;  // adding the character

		cout<<endl<<"Your Modified String : "<<str<<endl; // New String
	}
}

void String :: replace_character()
{

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