// String Handling Project

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
	cout<<"Enter the String : ";
	cin>>str;
}

void String :: add_character()
{
	cout<<endl<<"Your Current String : "<<str<<"\n\n"; // Old String

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
	char chr1,chr2;
	int check=0;

	cout<<endl<<"Your Current String : "<<str<<"\n\n";

	cout<<"Enter the Character to be Replaced : ";
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
		cout<<endl<<chr<<" Not Found in the String !"<<endl;
	}
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