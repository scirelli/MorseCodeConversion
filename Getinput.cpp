#include <iostream.h>
#include <fstream.h>
#define FLUSH while (cin.get() != '\n')

char * Get_Input()
{
	int Menu(void);
	char *input= new char [100];
	fstream infile;
	char filename[81];

	switch(Menu())
	{
	case 1 : infile.open("a:\\code.txt", ios::in); break;         //opens file for reading
	
	case 2 : cout<< "Enter file name-> ";                            //allows user to enter path
		     cin.getline(filename, 81, '\n'); 
			 infile.open(filename, ios::in);
			 if(infile.fail())                                      //test to see if file is there
				cout<< "Input file dose not exist";
			 break;
	default : cout<<"That is not an option.  Using default, option 1"; 
			  infile.open ("a:\\code.txt", ios::in);
	}	
	
	infile.getline(input, 100, '\n');                      //reads in phrase
	
	infile.close();                                       //closes file
	return input;
}

int Menu()
{
	int choice=0;

	cout<< "\t\tChoose and option \n\n1) Use default path \n2) Enter your own path";
	cout<< "\n(note: path example a:\\[filename] this is the path to your .txt file) \n\nOption-> ";
	cin>> choice;
	FLUSH;
	return choice;
}