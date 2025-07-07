# 48 Special Programs in C − Check If The Number Is Palindrome Number

## Basics

### What is Palindrome?

A number or a ord or a phrase if read backwards gives the same number or a word or a phrase as it is being read forward.

Example: 1221, racecar, 24542, etc.

Idea:

Make last number the first number, 2nd last number the second number, and so on.

That means you need to reverse the number and if the reversed number is equal to the actual number than we can say that the number is palindrome.

### What happens when we divide the number by 10?

456/10 → Reminder = 6
         Quotient = 45

result = 0
number = 2332
q = number

reminder = q % 10
result = result * 10 + reminder
q = q / 10
