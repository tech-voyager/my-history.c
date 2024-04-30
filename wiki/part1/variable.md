### Variables

**A variable is an area in memory where a specific value is stored.**

**You may be wondering what data we can store? Let's figure it out.**
**`int` - integer values**
**`float` - real numbers**.

*Well, let's look at the syntax of variables and write the first program!*

- how to install:
> Linux, termux:
**`pkg add gcc`** only for termux.
**`apt add gcc`** only for Debian-like
**`pacman -S gcc`** only for Arch, Manjaro etc.
---------

- how to compile(run):
> Linux, termux:
**gcc -o program main.c"** - *main.c - your code file*
**./program**

```c
#include <stdio.h> // This is the library declaration (we'll talk about them later)

int main() {
  // as you can see we used the data type int.
  // Let's look at the variable syntax
  // <data type> <name> = <value>
  
  int var = 5; // int value.
  int var2 = 10.5; // float value.
  // ok, so what next? How can we use them??!
  // Let's use the functions provided by the library "stdio.h"
  printf("Hello!");
  printf("Hello!: %d", var);
  // Well, we got two excellent conclusions, you can check them and draw conclusions.
```

**We have two conclusions: Hello!Hello!: 5**
**You probably asked yourself the question: how can we wrap the output to a new line and how can we display the values of another variable and what is %d?**

*%d -> Declarative for outputting integer values*

*Let's add the following changes:**
```patch
- printf("Hello!");
+ printf("Hello!\n"); // add a newline character
- printf("Hello!: %d", var1);
+ printf("Hello!: %d\n", var1); // add a newline char

// let's add another line with this code

+ printf("Hello2!: %g", var2); // WHAT??! %g???!
```

**Correct %g for displaying numbers with floating point.**

*%g - Declarative for displaying real values*

**full code:**
```c
#include <stdio.h>

int main() {
  int var = 5;
  int var2 = 10.5;
  
  printf("Hello!\n");
  printf("Hello!: %d", var);
  printf("Hello!: %g", var2);
}
```
