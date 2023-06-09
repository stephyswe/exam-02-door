#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>

// struct files
#include "FileData.h"

char *concatStrings(const char *str1, const char *str2)
{
    size_t len1 = strlen(str1);
    size_t len2 = strlen(str2);
    char *result = malloc((len1 + len2 + 1) * sizeof(char)); // allocate memory for result string

    if (result == NULL)
    { // check for allocation failure
        printf("Error: unable to allocate memory.\n");
        return NULL;
    }

    strcpy(result, str1); // copy str1 to result
    strcat(result, str2); // concatenate str2 to result

    return result;
}

void pauseKeyboard()
{
    printf("\nPress any key to continue...\n");
    fflush(stdout); // Ensure prompt is displayed immediately

    int c;
    do
    {
        c = getchar();
    } while (c != EOF && c != '\n');
}

void waitSeconds(int seconds)
{
    const int MILLISECOND = 1000;
    clock_t endTime = clock() + seconds * MILLISECOND;
    // Pause execution until endTime is reached
    while (clock() < endTime)
    {
    }
}

void getCardDateToArray(Card *card, const char *date)
{
    card->date = malloc(strlen(date) + 1);
    strcpy(card->date, date);
}

char *getCurrentDate(char *format)
{
    // Allocate memory for date buffer
    char *date = malloc(11);

    // Get current date and time
    time_t current_time = time(NULL);

    // Convert to local time format and format date and time
    struct tm *local_time = localtime(&current_time);
    strftime(date, 11, format, local_time);

    // Return date buffer
    return date;
}