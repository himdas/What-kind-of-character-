#include <stdio.h>
#include <ctype.h>
#define FALSE 0

main()
{  /*main*/

int Response;

    printf("Enter a character: ");
Response = getchar();
if (isalpha(Response) != FALSE)
    printf("You entered a letter.");
else if (isdigit(Response) != FALSE)
    printf("You entered a digit.");
else if (ispunct(Response) != FALSE)
    printf("You entered a punctuation mark.");
else
    printf("You entered a character I can't identify.\n");

}  /*main*/