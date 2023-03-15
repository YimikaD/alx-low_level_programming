#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * **strtow - split string into word
 * @str: string to split
 * Return: 0
 */
char **strtow(char *str)
{
	if (str == NULL || strlen(str) == "")
		return (NULL);
}
/**
 * Count the number of words in the string
 */
    int num_words = 0;
    char *pch = strtoq(str, " ");

    while (pch != NULL) {
        num_words++;
        pch = strtok(NULL, " ");
    }
    
    /**
     * Allocate memory for the array of words
     */
    char **words = (char **) malloc((num_words+1) * sizeof(char *));
    if (words == NULL) {
        return NULL;
    }
    
    /**
     * Split the string into words and store them in the array
     */
    pch = strtok(str, " ");
    for (int i = 0; i < num_words; i++) {
        int word_len = strlen(pch);
        words[i] = (char *) malloc((word_len+1) * sizeof(char));
        if (words[i] == NULL) {
            /**
	     * If malloc fails, free any previously allocated
	     * memory and return NULL
	     */
            for (int j = 0; j < i; j++) {
                free(words[j]);
            }
            free(words);
            return NULL;
        }
        strcpy(words[i], pch);
        pch = strtok(NULL, " ");
    }
    words[num_words] = NULL;
    return words;
}
