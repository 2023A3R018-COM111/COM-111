#include <stdio.h>
#include <string.h>
#include <ctype.h>

// Program to demostrate the use of string operations
int main(){
	char str1[50];
	char str2[50];

	printf("Enter the first string: ");
	scanf("%49s", str1);

	printf("Enter the second string: ");
	scanf("%49s", str2);

	char concatStr[100];
	char copyStr[50];
	char reversedStr[50];
	char substring[20];
	char upperStr[50];
	char lowerStr[50];

	printf("\n1. Length of \"%s\": %lu\n", str1, strlen(str1));

	strcpy(concatStr, str1);
	strcpy(concatStr, " ");
	strcpy(concatStr, str2);
	printf("2.Concatenated Strings: %s\n", concatStr);

	strcpy(copyStr, str1);
	printf("3. Copied String: %s\n", copyStr);

	if(strcmp(str1, str2) == 0)
		printf("4. Entered Strings are Equal.\n");
	else
		printf("4. Entered Strings are not Equal.\n");

	strcpy(reversedStr, str1);
	// strrev(reversedStr);
	printf("5. Reversed \"%s\": \"%s\"\n", str1, reversedStr);

	strncpy(substring, str1 +1, 3);
	substring[3] = '\0';
	printf("6. Substring of \"%s\": \"%s\"\n", str1, substring);

	strcpy(upperStr, str1);
	for (int i=0; i<strlen(str1); i++)
		upperStr[i] = toupper(upperStr[i]);
	printf("7. UpperCase of \"%s\": \"%s\"\n", str1, upperStr);

	strcpy(lowerStr, str1);
	for (int i=0; i<strlen(str1); i++)
		lowerStr[i] = tolower(lowerStr[i]);
	printf("8. LowerCase of \"%s\": \"%s\"\n", str1, lowerStr);
	return 0;
}
