# Readability

This program, `readability.c`, calculates the Coleman-Liau index of a given text and determines the corresponding grade level of the text based on this index. The Coleman-Liau index is a readability test designed to gauge the understandability of a piece of text for the average reader.

## Implementation Details

- The program prompts the user for a string of text using the `get_string` function provided by the CS50 library.
- It then counts the number of letters, words, and sentences in the text. A letter is considered to be any lowercase character from 'a' to 'z' or any uppercase character from 'A' to 'Z'. A word is any sequence of characters separated by spaces, and a sentence is determined by the presence of a period ('.'), exclamation point ('!'), or question mark ('?').
- Using the letter, word, and sentence counts, the program calculates the Coleman-Liau index, which is then rounded to the nearest integer.
- The program prints the calculated grade level as "Grade X", where X is the rounded grade level based on the Coleman-Liau index. If the grade level is 16 or higher, it prints "Grade 16+". If the grade level is less than 1, it prints "Before Grade 1".
