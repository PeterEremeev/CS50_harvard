# Caesar Cipher Encryption Program

This repository contains a program called `caesar` that encrypts messages using Caesar’s cipher.

## Usage

The program must be executed with a single command-line argument, which should be a non-negative integer representing the key for encryption.

If the program is executed without any command-line arguments or with more than one command-line argument, an error message will be displayed, and the program will return an error value of 1 immediately.

If any of the characters in the command-line argument is not a decimal digit, the program will print the message:

Usage: ./caesar key

and return an error value of 1.

## Encryption Process

- The program outputs: `plaintext:` (with two spaces but without a newline) and then prompts the user for a string of plaintext (using `get_string`).
- The program outputs: `ciphertext:` (with one space but without a newline) followed by the plaintext’s corresponding ciphertext, with each alphabetical character in the plaintext “rotated” by `k` positions; non-alphabetical characters should be outputted unchanged.
- The program preserves case: capitalized letters, though rotated, must remain capitalized letters; lowercase letters, though rotated, must remain lowercase letters.
- After outputting ciphertext, a newline is printed, and the program exits by returning 0 from `main`.
