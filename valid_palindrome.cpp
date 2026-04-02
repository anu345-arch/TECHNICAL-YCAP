#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>

bool isPalindrome(char* s) 
{ 
    int i = 0;
    int j = strlen(s) - 1;

    while(i < j)
    {
        // Skip non-alphanumeric from left
        while(i < j && !isalnum(s[i])) i++;

        // Skip non-alphanumeric from right
        while(i < j && !isalnum(s[j])) j--;

        // Compare lowercase
        if(tolower(s[i]) != tolower(s[j]))
        {
            return false;
        }

        i++;
        j--;
    }  

    return true;
}
