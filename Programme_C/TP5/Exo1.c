#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

/**
 * Exercice 1 : 
    Ecrire un programme qui déclare deux structures : 
    date (exemple 11 novembre 2021) 
    et heure (10:25:58).
*/

struct DateTime
{
    int sec;
    int min;
    int hour;
    int day;
    int month;
    int year;
};

struct DateTime affiche_date(){
    
    struct DateTime dateTime;

    time_t currentTime;
    struct tm *localTime;

    time(&currentTime);
    localTime = localtime(&currentTime);

    dateTime.sec = localTime->tm_sec;
    dateTime.min = localTime->tm_min;
    dateTime.hour = localTime->tm_hour;
    dateTime.day = localTime->tm_mday;
    dateTime.month = localTime->tm_mon + 1;
    dateTime.year = localTime->tm_year + 1900;

    return dateTime;
}

int main()
{
    struct DateTime result = affiche_date();
    printf("DateTime: %d-%02d-%02d %02d:%02d:%02d\n", result.year, result.month, result.day, result.hour, result.min, result.sec);

    return 0;
}
