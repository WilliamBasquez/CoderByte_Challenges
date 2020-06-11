#include <stdio.h>
#include <stdlib.h>

int spitNewNum(int*, int);
int numOfSpaces(char[]);
void arrayFilled(char[], int, int[]);

int main()
{
    char string[100];
    printf("Enter the number you want to find the binary reverse: ");
    fgets(string, 100, stdin);
    int spaces = numOfSpaces(string);
    printf("Using %d spaces\n", spaces);
    int newArray[spaces];
    arrayFilled(string, spaces, newArray);
    printf("returning: %d\n", spitNewNum(newArray, spaces));

    return 0;
}

int numOfSpaces(char str[]){
    int binary = atoi(str), items = 0;
    int power = 1;
    
    while(binary > 0){
        items++;
        binary /= 2;
    }
    
    while(items % 8 != 0)
        items++
    
    return items;
}

void arrayFilled(char str[], int length, int *incoming){
    int f = 0;
    for(f; f < length; f++)
        incoming[f] = 0;

    int o = length-1;
    int num = atoi(str);
    
    for(o; o > -1; o--){
        incoming[o] = num % 2;
        num /= 2;
    }
}

int spitNewNum(int *input, int len){
    int result = 0, counter = 0, power = 1;
    
    while(counter < len){
        result += *(input+counter) * power;
        power *= 2;
        counter++;
    }
    
    return result;
}

