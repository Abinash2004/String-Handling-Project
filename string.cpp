// Program to Reverse the String

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

}

void String :: remove_character()
{

}

void String :: reverse_string()
{
	int len=0;
	char temp;

	cout<<endl<<"Your Current String : "<<str<<endl;

	while(str[len]!='\0') // Generating Length of the String
	{
		len++;
	}

	if(len%2!=0) // Converting length to even
	{
		len--;
	}

	for(int i=0;i<=len/2;i++) // Reversing the string
	{
		temp=str[i];
		str[i]=str[len-i];
		str[len-i]=temp;
	}

	cout<<endl<<"Your Modified String : "<<str<<endl;
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