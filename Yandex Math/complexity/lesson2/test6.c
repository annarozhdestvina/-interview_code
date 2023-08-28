#include <stdio.h>

int main()
{
    const char string[] = "abcde abc abcde abc  s abcd aac ac abcd aa tt   azazaz  ";
    const int length = sizeof(string) / sizeof(string[0]); // with terminator
    printf("length = %d\n", length);
    int word_counter = 0;
    int word_length = 0;
    int shortest_word_length = length;
    for (int i = 0; i < length; ++i)
    {
        if (string[i] == ' ' || string[i] == '\0')
        {
            if (word_length < shortest_word_length && word_length != 0) {       // word_length != 0 to exclude several spaces in a row
                shortest_word_length = word_length;
            }
            if (word_length != 0)                                               // word_length != 0 to exclude several spaces in a row
                ++word_counter;
            word_length = 0;
            continue;
        }
        ++word_length;
    }
    printf("counter of words = %d\n", word_counter);
    printf("shortest length = %d\n", shortest_word_length);
    word_length = 0;
    int word_start = 0;
    for (int i = 0; i < length; ++i)
    {
        if (string[i] == ' ' || string[i] == '\0')
        {
            if (word_length == shortest_word_length) {                          // printing
                for (int j = word_start; j < word_start + word_length; ++j)
                    printf("%c", string[j]);
            
                printf("\n");
            }

            word_length = 0;
            word_start = i + 1;
            continue;
        }
        ++word_length;
    }
    return 0;
}