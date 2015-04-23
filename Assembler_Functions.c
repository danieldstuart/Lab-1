#include <string.h>
#include <stdio.h>
#include <assert.h>

int AssemblyCode(char str[5]){
	
	if ((strcmp(str, "NOP")) == 0){
		return 0;
	}
	else if((strcmp(str, "LDD")) == 0){
		return 1;
	}
	else if ((strcmp(str, "LDI")) == 0){
		return 2;
	}
	else if ((strcmp(str, "STO")) == 0){
		return 3;
	}
	else if ((strcmp(str, "MOV")) == 0){
		return 4;
	}
	else if ((strcmp(str, "ADI")) == 0){
		return 5;
	}
	else if ((strcmp(str, "ADF")) == 0){
		return 6;
	}
	else if ((strcmp(str, "OR")) == 0){
		return 7;
	}
	else if ((strcmp(str, "AND")) == 0){
		return 8;
	}
	else if ((strcmp(str, "XOR")) == 0){
		return 9;
	}
	else if ((strcmp(str, "ROR")) == 0){
		return 10;
	}
	else if ((strcmp(str, "JMP")) == 0){
		return 11;
	}
	else if ((strcmp(str, "HLT")) == 0){
		return 12;
	}
	else if ((strcmp(str, "LDX")) == 0){
		return 13;
	}
	else if ((strcmp(str, "STX")) == 0){
		return 14;
	}
	
	assert (AssemblyCode("NOP") ==0);
	assert (AssemblyCode("LDD") ==1);
	assert (AssemblyCode("LDI") ==2);
	assert (AssemblyCode("STO") ==3);
	assert (AssemblyCode("MOV") ==4);
	assert (AssemblyCode("ADI") ==5);
	assert (AssemblyCode("ADF") ==6);
	assert (AssemblyCode("OR") ==7);
	assert (AssemblyCode("AND") ==8);
	assert (AssemblyCode("XOR") ==9);
	assert (AssemblyCode("ROR") ==10);
	assert (AssemblyCode("JMP") ==11);
	assert (AssemblyCode("HLT") ==12);
	assert (AssemblyCode("LDX") ==13);
	assert (AssemblyCode("STX") ==14);
	assert (AssemblyCode("CAT") == -1);
	assert (AssemblyCode("DOG") == 20);
}

char File_Opener(){
	FILE *fp;
	FILE *Output;
	char mystring [100];
	char Input_Name [20];
	char Output_Name [20];

printf("Please enter input and output file names: ");
scanf("%s", Input_Name);
scanf("%s", Output_Name);

fp = fopen(Input_Name, "r");
Output = fopen(Output_Name, "w");


if (fp == NULL) perror ("Error opening file"); 
	else{
		//to print out all the stings obtained from the file
		while (fgets (mystring, 100, fp) != NULL)
			printf ("%s", mystring) && fprintf(Output, "%s", mystring);
			
		fclose(fp);
	}
	
	printf("\n");
	return 0;
}


int String_Breaker(){
	char The_String [] = "This-is-a-string, split it please.";
	char *part;

	// to split the string at the given characters
	part = strtok(The_String, " ,-");

	// to continue running through string until nothing is left
	while (part != NULL){
		printf("%s\n", part);
	
		part = strtok(NULL, " ,-");
	}
	return 0;
}