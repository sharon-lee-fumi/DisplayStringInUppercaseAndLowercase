#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main (void)
{
	// variable to hold string
        char s[100];
        printf("Please enter a string: \n");
        fgets(s,99,stdin);
        int x=0;

	// print uppercase letters
	puts("Display uppercase letters:");
        while (s[x] != '\0')
        {
		printf("%c", toupper(s[x]));
                x++;
        }

  	// print lowercase letters
	puts("Display lowercase letters:");
        x=0;
	while (s[x] != '\0')
        {
		printf("%c", tolower(s[x]));
                x++;
        }
}
