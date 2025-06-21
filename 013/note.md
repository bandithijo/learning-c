# 13 Variable Modifiers − Register

## Memory Hierarchy

1. Register Memory
2. Cache Memory
3. Main Memory     => Primary Memory
4. Magnetic Disks  => Auxillary Memory
5. Magnetic Tapes  => Auxillary Memory

## What is register modifier?

syntax: 

```
register some_data_type some_variable_name;
```

```c
#include <stdio.h>

int main()
{
  register int var;
  return 0;
}
```

Register keyword hints the compiler to store a variable in register memory.

This is done because access time reduces greatly for most frequently referred variables.

This is the choice of compiler whether it puts the given variable in register or not.

Usually compiler themselved do the necessary optimizations.
