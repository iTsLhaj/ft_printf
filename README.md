## ft_printf

![](assets/cover.png)

`ft_printf` is the next foundational project in the **School 42** curriculum.
The goal is to recreate a custom version of the C standard library function `printf()`
using variadic functions with (`<stdarg.h>`).

### Mandatory Supported Specifiers

This function handles the following conversions:

* **`%c`** : Single character
* **`%s`** : String of characters
* **`%p`** : Pointer address (in hexadecimal format)
* **`%d`** : Signed decimal integer
* **`%i`** : Signed integer
* **`%u`** : Unsigned decimal integer
* **`%x`** : Hexadecimal number (lowercase)
* **`%X`** : Hexadecimal number (uppercase)
* **`%%`** : A literal percent sign

### How to Use

1.  **Clone the repository:**
    ```bash
    git clone https://github.com/iTsLhaj/ft_printf.git
    ```
2.  **Compile the library:**
    ```bash
    cd ft_printf
    make
    ```
    This generates the static library file `libftprintf.a`.

3.  **Link it to your project:**
    ```bash
    cc your_program.c -L. -lftprintf -o your_executable
    ```
