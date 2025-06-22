# 23 Increment and Decrement Operators in C (Part 2)

## Token Generation

- Lexical analysis is the first phase in the compilation process.

- Lexical analyzer (scanner) scans the whole source program and when it finds the meaningful sequence of characters (lexemes) then it converts it into a token.

- Token: lexemes mapped into token-name and attribute-value.

  ```
  int → <keyword, int>
  ```

- It always matches the longest character sequence.

  > Contoh, dalam kode `int x = 10;`, lexem-lexemnya adalah:
  > 
  > `int` → keyword
  > 
  > `x` → identifier
  > 
  > `=` → operator
  > 
  > `10` → literal
  > 
  > `;` → delimiter

  > Another example, in expression `a+++b;`:
  > 
  > `a` → identifier
  > 
  > `++` → operator (unary operator)
  > 
  > `+` → operator (binary operator - addition)
  > 
  > `b` → identifier
  > 
  > `;` → delimiter

> Lexem adalah rangkaian karakter dalam source code yang diidentifikasi sebagai token oleh lexer (lexical analyzer).
