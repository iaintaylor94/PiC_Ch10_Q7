// Program to insert a string into another string
// This program was really difficult, I could not lengthen the array passed as an argument.

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// Declare Functions
char* insertString (char [], char [], int);

int main(void) {

  char first[] = "This is the first string";
  char second[] = "INSERT";

  char *newString = insertString (first, second, 8);

//  printf ("text: %s\n", first); // Does not Work
  printf ("first: %s\n", first);
  printf ("second: %s\n", second);
  printf ("newString: %s\n", newString);
  
  return 0;
}

// Define Functions
char* insertString (char text[], char insert[], int index) {
  // Create returnString
  char *returnString = malloc(strlen(text) + strlen(insert) + 1);

  // Fill returnString
  int i, 
  
  // Fill first "index" chars
  for (i = 0; i < index; i++) {
    returnString[i] = text[i];
  }

  // Fill next strlen(insert) chars
  for (j = 0; j < strlen(insert); j++) {
    returnString[i + j] = insert[j];
  }

  // Fill end of "text" string
  for ( ; i < strlen(text); i++) {
    returnString[i + j] = text[i];
  }

  // Append '\0' to returnString
  returnString[strlen(text) + strlen(insert) + 1] = '\0';
  
  // Redirect text to returnString
  text = returnString;

  return returnString;
}