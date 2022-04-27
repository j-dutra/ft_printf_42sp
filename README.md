<h1 align=center>
	<b>ft_printf</b>
</h1>

<h4 align=center>
	Because putnbr and putstr aren’t enough
</h4>

<p align=center>
	In this repo you will find all the codes developed during the <i>ft_printf</i> project, both <b>mandatory</b>'s part and <b>bonus</b>.
</p>

---

<div align=center>
<h2>
	Final score
</h2>
<img src=https://github.com/edmarpaulino/42projects_pics/blob/master/score_125.png alt=edpaulin's 42Project Score/>
<h4>Completed + Bonus</h4>
<img src=https://github.com/edmarpaulino/42projects_pics/blob/master/ft_printfm.png alt=edpaulin's 42Project Badge/>
</div>

---

<h3 align=center>
Mandatory
</h3>

> <i>It will manage the following conversions: cspdiuxX%
A small description of the required conversion:
• %c print a single character.
• %s print a string of characters.
• %p The void * pointer argument is printed in hexadecimal.
• %d print a decimal (base 10) number.
• %i print an integer in base 10.
• %u print an unsigned decimal (base 10) number.
• %x print a number in hexadecimal (base 16).
• %% print a percent sign.</i>

<p align=center>

</p>

<h3 align=center>
Bonus
</h3>

> <i>Manage any combination of the following flags:
’-0.’ and minimum field width with all conversions.
Manage all the following flags:
’# +’ (yes, one of them is a space).</i>
<p align=center>

</p>

---

<h2>
The project
</h2>

### Header files

- [`libft.h`](includes/libft.h)
- [`ft_printf.h`](includes/ft_printf.h)

### Functions from "libft.h"

- [`ft_convert_base`](libft/ft_convert_base.c)	- converts a decimal number to the specified base
- [`ft_isdigit`](libft/ft_isdigit.c)	- checks for a digit (0 through 9).
- [`ft_nbrlen`](libft/ft_nbrlen.c)	- get the number of numeric places according to the specified base
- [`ft_putnchar`](libft/ft_putnchar.c)	- print n times the character
- [`ft_skip_atoi`](libft/ft_skip_atoi.c)	- convert from ascii to integer and skip pointer
- [`ft_strjoin`](libft/ft_strjoin.c)	- concatenates two strings
- [`ft_strlcpy`](libft/ft_strlcpy.c)	- copy string to an specific size
- [`ft_strlen`](libft/ft_strlen.c)	- calculate the length of a string
- [`ft_uitoa`](libft/ft_uitoa.c)	- converts a unsigned int number into a string

### Functions from "ft_printf"

- [`ft_printf`](srcs/ft_printf.c)	- print a formatted string
- [`ft_vprintf`](srcs/ft_printf.c)	- print the string and if it finds a % handles it
- [`ft_check_error`](srcs/ft_printf.c)	- if an error occurs prints the rest of the string from the % that the error occurs
- [`ft_parser_type`](srcs/ft_parser_type.c)	- designates which treatment the data will receive from the given type
- [`ft_type_c`](srcs/ft_type_c.c)	- character handling
- [`ft_type_s`](srcs/ft_type_s.c)	- string handling
- [`ft_type_p`](srcs/ft_type_p.c)	- pointer address handling
- [`ft_type_d`](srcs/ft_type_d.c)	- decimal and integer base 10 handling
- [`ft_type_u`](srcs/ft_type_u.c)	- unsigned decimal base 10 handling
- [`ft_type_x`](srcs/ft_type_x.c)	- hexadecimal lowercase and uppercase handling
- [`ft_parser_flag`](srcs/ft_parser_flag.c)	- capture the flags
- [`ft_ft_check_flag`](srcs/ft_parser_flag.c)	- checks for a flag (-0.# +).
- [`ft_print_signal`](srcs/ft_format.c)	- print the number signal
- [`ft_precision`](srcs/ft_format.c)	- precision flag handling
- [`ft_init`](srcs/ft_parser_flag.c)	- initialize the structure
- [`ft_get_size`](srcs/ft_parser_flag.c)	- get width size
- [`ft_alternate`](srcs/ft_format.c)	- hash flag handling
- [`ft_zero_pad`](srcs/ft_format.c)	- zero and space flags handling
- [`ft_left_pad`](srcs/ft_format.c)	- minus flag handling

---
<h2>
Usage
</h2>

### Requirements

`libft` requires *clang* compiler and some standard libraries.

### Instructions

Clone this repository in your local computer:

```sh
git clone https://github.com/edmarpaulino/ft_printf.git
```

In your local repository, run `make`

```sh
make 
```

> `make` suports 6 flags: 
> - `make all` or simply `make` compiles only the mandatory functions
> - `make bonus` compiles the bonus functions (in this case only call the flag `all`)
> - `make clean` deletes the `.o` files generated during compilation
> - `make fclean` deletes the `.o` and the `libft.a` library file generated
> - `make re` executes `fclean` and `all` in sequence, recompiling the library without the bonus functions
> - `make rebonus` executes `fclean` and `bonus` in sequence, recompiling the library with the bonus functions

To use the library in your code you will need to include the header:
```c
#include "ft_printf.h" 
```

To compile the program, use your preferred compiler followed by these flags:
```sh
path/to/main_function.c path/to/libftprintf.a -I path/to/includes-folder
```
To run the program, use this command:
```sh
./a.out 
``
