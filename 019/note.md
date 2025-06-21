# 19 C Programming (Important Questions Set 3)

## Memory layout of C program

```
+=================================+
|                                 | => Command line arguments and environment variables
+=================================+
|              Stack              |
+---------------------------------+
|               ↓                 |
|                                 |
|               ↑                 |
+---------------------------------+
|              Heap               |
+=================================+
|       Uninitialized data        | => Uninitialized global, static (both local & global),
|              (BSS)              |    constant global variables
+=================================+
|        Initialized data         | => Global, extern, static (both local & global),
|                                 |    const global variables
+=================================+
|        Text/Code segment        | => Contains machine code of the compiled program
+=================================+
```

Two memory segments:
1. Text/Code segment
2. Data segment
   a. Initialized
      - Read only
      - Read write
   b. Uninitialized (BSS - Block Started by Symbol)
   c. Stack
   d. Heap
