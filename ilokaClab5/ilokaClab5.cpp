// ilokaClab5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

#include <stdio.h>
#include <string.h>

int main() {
    char text[1000];
    char word[100];
    int i, j, k, len;

    printf("Enter the text:\n");
    fgets(text, sizeof(text), stdin);

    printf("Text with words shorter than 5 characters excluded:\n");
    for (i = 0; text[i] != '\0'; i++) {
        j = 0;
        while (text[i] != ' ' && text[i] != '\n' && text[i] != '\0') {
            word[j++] = text[i++];
        }
        word[j] = '\0';

        len = strlen(word);
        if (len >= 5) {
            printf("%s ", word);
        }
    }

    printf("\n");

    return 0;
}