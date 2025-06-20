# 12 Variable Modifiers − Auto & Extern

## TAKEWAYS

1. When we write extern some_data_type some_variable_name; no memory is allocated. Only property of variable is announced.
2. Multiple declarations of extern variable is allowed within the file. This is not the case with automatic variables.
3. Extern variable says to compiler "go outside from my scope and you will find the definition of the variable that I declared".
4. Compiler believes that whatever the extern variable said is true and produce no error. Linker throws an error when he finds no such variable exist.
5. When an extern variale is initalized, then memory for this variable is allocated and it will be considered defined.
