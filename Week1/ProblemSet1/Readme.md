# Credit Card Validation Program

This repository contains a program that validates credit card numbers using Luhn's algorithm. The program takes a credit card number as input and determines whether it is valid based on the algorithm described below.

## Luhn's Algorithm
Luhn's algorithm determines the validity of a credit card number as follows:
1. Multiply every other digit by 2, starting with the number’s second-to-last digit, and then add those products’ digits together.
2. Add the sum to the sum of the digits that weren’t multiplied by 2.
3. If the total’s last digit is 0 (or, put more formally, if the total modulo 10 is congruent to 0), the number is valid.

## Example
Consider David’s Visa with the number 4003600000000014.
- Multiply each underlined digit by 2: \(1 \times 2 + 0 \times 2 + 0 \times 2 + 0 \times 2 + 0 \times 2 + 6 \times 2 + 0 \times 2 + 4 \times 2\)
- Add the products' digits together: \(2 + 0 + 0 + 0 + 0 + 1 + 2 + 0 + 8 = 13\)
- Add the sum of products' digits to the sum of other digits: \(13 + 4 + 0 + 0 + 0 + 0 + 0 + 3 + 0 = 20\)
- The last digit of the sum is 0, so the card is valid.

## Usage
1. Clone this repository to your local machine.
2. Run the program, providing a credit card number as input.
3. The program will output whether the credit card number is valid or not.

## Example Usage
```bash
python validate_credit_card.py 4003600000000014
