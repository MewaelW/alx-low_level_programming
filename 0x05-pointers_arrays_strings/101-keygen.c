#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
/**
* randomGenerator - this function generates random passwords
*
* return: int
*
*/
void randomGenerator(int N) 
{  
    int i = 0; 
  
    int random = 0; 
 
    srand((unsigned int)(time(NULL))); 
   
    char numbers[] = "0123456789"; 
    char letter[] = "abcdefghijklmnoqprstuvwyzx";
    char upperCase[] = "ABCDEFGHIJKLMNOQPRSTUYWVZX";
    char symbols[] = "!@#$^&*?";
    char password[N]; 
  
    random = rand() % 4; 
  
    for (i = 0; i < N; i++) { 
  
        if (random == 1) { 
            password[i] = numbers[rand() % 10]; 
            random = rand() % 4; 
            printf("%c", password[i]); 
        } 
        else if (random == 2) { 
            password[i] = symbols[rand() % 8]; 
            random = rand() % 4; 
            printf("%c", password[i]); 
        } 
        else if (random == 3) { 
            password[i] = upperCase[rand() % 26]; 
            random = rand() % 4; 
            printf("%c", password[i]); 
        } 
        else { 
            password[i] = letter[rand() % 26]; 
            random = rand() % 4; 
            printf("%c", password[i]); 
        } 
    } 
} 
