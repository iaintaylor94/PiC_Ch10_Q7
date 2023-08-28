// Program to insert a string into another string
// This program was really difficult, I could not lengthen the array passed as an argument.

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// Declare Functions
void insertString (char [], char [], int, char **);

int main(void) {

  char *first = "This is the first string";
  char second[] = "INSERT";

  printf ("Before insert:\n");
  printf ("first: %s\n", first);
  printf ("second: %s\n\n", second);

  insertString (first, second, 8, &first); // Probably could be better

  printf ("After insert:\n");
  printf ("first: %s\n", first);
  printf ("second: %s\n", second);
  
  return 0;
}

// Define Functions
void insertString (char text[], char insert[], int index, char **output) {
  // Create returnString
  char *returnString = malloc(strlen(text) + strlen(insert) + 1);

  // Fill returnString
  int i, j;
  
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
  *output = returnString;
}