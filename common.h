// struct files
#include "FileData.h"

// Description: concatStrings
// Parameters: const char *str1, const char *str2
// Returns: char *result
char *concatStrings(const char *str1, const char *str2);

// Function: pauseKeyboard
// Description: Pause keyboard
void pauseKeyboard();

// Function: waitSeconds
// Description: Timeout function per second
// Parameters: int seconds
void waitSeconds(int seconds);

// Function: getCardDateToArray
// Description: Returns card date
// Parameters: Card *card, const char *date
void getCardDateToArray(Card *card, const char *date);

// Function: getCurrentDate specific format
// Description: Returns current date
// Parameters: char *format
// Returns: char *date
char *getCurrentDate(char *format);