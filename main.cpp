//Takes in a phrase of up to 100 chars and outputs the phrase in morse code

#include <string.h>
#include <iostream.h>
#include <cstring>
#include <fstream.h>
#include <ctype.h>
#include <stdlib.h>

void String_to_Morse_String(char []);

void main()
{
	fstream infile, outfile;
	char *input= new char [100];
	char inputArray[100];

	infile.open ("a:\\textfile.txt", ios::in);   //opens file for reading
	infile.getline(input, 100, '$');             //reads in phrase

	strcpy(inputArray,input);                    //converts string (phrase) to array
	
	String_to_Morse_String(inputArray);          //converts each char in array into the morse equiv of char and outputs it

	infile.close();                              //closes file
	
	return;
}//end main

void String_to_Morse_String(char input [])
{
	//char * morsecode;
	//char morseArray[100];
	
	cout<< input << "\n";
	
	for(int i=0; i<= 100; i++)
	{
		input[i] = tolower(input[i]);
		switch(input[i])
		{
		case 'a' : cout<< ".-" ; break;
		case 'b' : cout<< "-... "; break;
		case 'c' : cout<< "-.-. "; break;
		case 'd' : cout<< "-.. "; break;
		case 'e' : cout<< ". "; break;
		case 'f' : cout<< "..-. "; break;
		case 'g' : cout<< "--. "; break;
		case 'h' : cout<< ".... "; break;
		case 'i' : cout<< ".. "; break;
		case 'j' : cout<< ".--- "; break;
		case 'k' : cout<< "-.- "; break;
		case 'l' : cout<< ".-.. "; break;
		case 'm' : cout<< "-- "; break;
		case 'n' : cout<< "-. "; break;
		case 'o' : cout<< "--- "; break;
		case 'p' : cout<< ".--. "; break;
		case 'q' : cout<< "--.- "; break;
		case 'r' : cout<< ".-. "; break;
		case 's' : cout<< "... "; break;
		case 't' : cout<< "- "; break;
		case 'u' : cout<< "..- "; break;
		case 'v' : cout<< "...- "; break;
		case 'w' : cout<< ".-- "; break;
		case 'x' : cout<< "-..- "; break;
		case 'y' : cout<< "-.-- "; break;
		case 'z' : cout<< "--.. "; break;
		case ' ' : cout<< "Break "; break;
		//default : cout<<"didn't work";
		}
	}

	return;
}

/*
char try1[6];
	strcpy(try1, ".... ");

	char * try2 =new char [10];
	strcpy(try2, try1);
	cout<< "\n" << try2;
*/
