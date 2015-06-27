#include <string.h>
#include <ctype.h>
#include <stdlib.h>

char * String_to_Morse_String(char input [])
{
	char * morsecode = new char [500];
		
	strcpy(morsecode, " ");//puts a char in string so there is something to concat. onto

	for(int i=0; i<= 100; i++)
	{
		input[i] = tolower(input[i]); //generalizes input, makes all input lower case
		switch(input[i])                        //creates string of chars...ie. phrase
		{
		case 'a' : strcat(morsecode, ".- ");  break; 
		case 'b' : strcat(morsecode,"-... "); break;
		case 'c' : strcat(morsecode,"-.-. "); break;
		case 'd' : strcat(morsecode,"-.. ");  break;
		case 'e' : strcat(morsecode,". ");    break;
		case 'f' : strcat(morsecode,"..-. "); break;
		case 'g' : strcat(morsecode,"--. ");  break;
		case 'h' : strcat(morsecode,".... "); break;
		case 'i' : strcat(morsecode,".. ");   break;
		case 'j' : strcat(morsecode,".--- "); break;
		case 'k' : strcat(morsecode,"-.- ");  break;
		case 'l' : strcat(morsecode,".-.. "); break;
		case 'm' : strcat(morsecode,"-- ");   break;
		case 'n' : strcat(morsecode,"-. ");   break;
		case 'o' : strcat(morsecode,"--- ");  break;
		case 'p' : strcat(morsecode,".--. "); break;
		case 'q' : strcat(morsecode,"--.- "); break;
		case 'r' : strcat(morsecode,".-. ");  break;
		case 's' : strcat(morsecode,"... ");  break;
		case 't' : strcat(morsecode,"- ");    break;
		case 'u' : strcat(morsecode,"..- ");  break;
		case 'v' : strcat(morsecode,"...- "); break;
		case 'w' : strcat(morsecode,".-- ");  break;
		case 'x' : strcat(morsecode,"-..- "); break;
		case 'y' : strcat(morsecode,"-.-- "); break;
		case 'z' : strcat(morsecode,"--.. "); break;
		case ' ' : strcat(morsecode,"Break ");break;
		case '\n' : strcat(morsecode,"\n");break;
		//default : cout<<"didn't work";
		}
	}

	return morsecode;
}