#include <string.h>
#include <iostream.h>

void Morse_String_to_String(char *inputArray2[])
{
	char *morsecode[27];
	char alphabet[27]= {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', ' '};

	morsecode[0]= ".-";    //a
	morsecode[1]= "-...";  //b
	morsecode[2]= "-.-.";  //c
	morsecode[3]= "-..";   //d
	morsecode[4]= ".";     //e
	morsecode[5]= "..-.";  //f
	morsecode[6]= "--.";   //g
	morsecode[7]= "....";  //h
	morsecode[8]= "..";    //i
	morsecode[9]= ".---";  //j
	morsecode[10]= "-.-";  //k
	morsecode[11]= ".-.."; //l
	morsecode[12]= "--";   //m
	morsecode[13]= "-.";   //n
	morsecode[14]= "---";  //o
	morsecode[15]= ".--."; //p
	morsecode[16]= "--.-"; //q
	morsecode[17]= ".-.";  //r
	morsecode[18]= "...";  //s
	morsecode[19]= "-";    //t
	morsecode[20]= "..-";  //u
	morsecode[21]= "...-"; //v
	morsecode[22]= ".--";  //w
	morsecode[23]= "-..-"; //x
	morsecode[24]= "-.--"; //y
	morsecode[25]= "--.."; //z
	morsecode[26]= "break";
	
	
	for(int i=0; inputArray2[i] != '\0'; i++)         
		for(int j=0; j<=27; j++)
			if(strcmp(inputArray2[i], morsecode[j]) == 0)   //compares the morse code with input and if its a mores code then couts char
				cout<< alphabet[j];
	
	return;
}