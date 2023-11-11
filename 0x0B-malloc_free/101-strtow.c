#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 *  * free_grid - check the code
 *   *@grid:var
 *    *@height:vaer
 *     *
 *      * Return: Always 0.
 *       */
int count_words(char *str) {
	    int count = 0;
	        int inWord = 0;

		    while (*str) {
			            if (*str == ' ' || *str == '\t' || *str == '\n') {
					                if (inWord) {
								                inWord = 0;
										            }
							        } else {
									            if (!inWord) {
											                    count++;
													                    inWord = 1;
															                }
										            }

				            str++;
					        }

		        return (count);
}
int get_word_length(char *str) {
	    int length = 0;

	        while (*str && *str != ' ' && *str != '\t' && *str != '\n') {
			        length++;
				        str++;
					    }
		    return (length);
}
char **strtow(char *str) {
	     int currentWord = 0;
	          int numWords = count_words(str);
		      char **result = (char **)malloc((numWords + 1) * sizeof(char *));
		          if (str == NULL || *str == '\0') {
				          return NULL;
					      }
			      if (result == NULL) {
				              return (NULL);
					          }
			          while (*str) {
					          while (*str == ' ' || *str == '\t' || *str == '\n') {
							              str++;
								              }
						          if (*str == '\0') {
								              break;
									              }
							          int wordLength = get_word_length(str);
								          result[currentWord] = (char *)malloc((wordLength + 1) * sizeof(char));
									          if (result[currentWord] == NULL) {
											              for (int i = 0; i < currentWord; i++) {
													                      free(result[i]);
															                  }
												                  free(result);
														              return (NULL);
															              }
										          strncpy(result[currentWord], str, wordLength);
											          result[currentWord][wordLength] = '\0';
												          str += wordLength;
													          currentWord++;
														      }
				      result[currentWord] = NULL;

				          return (result);
}
