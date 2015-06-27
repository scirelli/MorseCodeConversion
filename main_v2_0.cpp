//Takes in a phrase of up to 100 chars and outputs the phrase in morse code

#include <string.h>
#include <iostream.h>
#include <fstream.h>



char * String_to_Morse_String(char []);
char * Get_Input();
void Morse_String_to_String(char *[]);


void main()
{
	char inputArray[100], filename[81];
	char *inputArray2[100];
	char *morsestring = new char [200];
	fstream morseinputfile;
	int i=1, choice=0;

	
	cout<< "\t\t Choose One";
	cout<< "\n\nEnter 1 for converstion of phrase to Morse code. \nEnter 2 for converstion of Morse phrase to english phrase";
	cout<< "\n\nEnter-> ";
	cin>> choice;
	
	if(choice == 1)
	{
		strcpy(inputArray,Get_Input());                       //converts string (phrase) to array
		cout<< '\n' << inputArray << "\n"; 
		cout<< "\n" << String_to_Morse_String(inputArray);    //converts each char in array into the morse equiv of char and outputs it
	}
	if(choice == 2)
	{
		while (cin.get() != '\n');//flushes buffer
		
		cout<< "Enter file name-> "; 
		cin.getline(filename, 81, '\n'); 
		morseinputfile.open(filename, ios::in);
		
		if(morseinputfile.fail())
			cout<< "Input file dose not exist";
		
		//morseinputfile.open("a:\\morsefile.txt", ios::in);
		morseinputfile.getline(morsestring, 200, '$');  //gets info and stores chars array
		inputArray2[0] = strtok(morsestring, " "); //tokenize the string
		while(inputArray2[i] != NULL)              //and stores the tokens in char of pointers
		{                                          //
			inputArray2[i] = strtok(NULL, " ");    //
			i++;
		}
	
		Morse_String_to_String(inputArray2);  //sends array of pointers to function
	}
	
	if( (choice != 1) && (choice != 2) ) //insaults stupid users
	{
		cout<< "You're an idiot, you entered the wrong thing.  How hard is it to enter a 1 or a 2? You stupid moron!";
	}

	while (cin.get() != '\n'); //clears buffer
	while (cin.get() != '\n'); //holds screen

	return;
}//end main
