// Program for Removing a Character from the String

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
	cout<<endl<<"Your Current String : "<<str<<"\n\n"; 

	char chr;
	int check=0;

	cout<<"Enter the Character to be Removed : "; // Character to remove
	cin>>chr;

	for(int i=0;str[i]!='\0';i++)
	{
		if(str[i]==chr) // Finding the character
		{
			check=1;
			for(int j=i;str[j]!='\0';j++)
			{
				str[j]=str[j+1]; // Removing the character
			}
			i--; // in case consecuting character occur
		}
	}

	if(check==1) // Character removed successfully
	{
		cout<<endl<<"Your Modified String : "<<str<<endl;
	}

	else // Character not Found in the String
	{
		cout<<endl<<chr<<" Not Found in String !"<<endl;
	}
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