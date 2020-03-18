
# _printf
_printf is a function to do formatted printing. This function allows for printing numbers and other things stored in variables.
_printf takes one argument:a string of characters to be printed. This string is composed of characters, each of which is printed exactly as it appears.
To identify the start of the string, we put a doublequote (") at the front. To identify the end of the string we put another double-quote at the end.
So _printf("Hi!"); would simply print an **H**, then a **i**, and finally a **!.** 
This is not exactly “formatted” printing, but it is still the basis of what _printf does.
### Code
    _printf("Hi!");
### Console Output

`Hi!`

 But what if we want to actually print a double-quote?
 Without a backslash, special characters have a natural special meaning. With a backslash they print as they appear.

Naturally Special Characters
-------------
| Syntax  | Description |
| ------------- | ------------- | 
| **\** |  escape the next character | 
|**\\\** | print a backslash  | 
| **\"** | print a double quote | 
| **\'** | print a single quote  |
| **\%** | print a percent sign  |

Use Special Characteres
-------------
We have characters that normally print as you would expect, but when you add a backslash, then they become special.

| Specifier  | Action |
| ------------- | ------------- |
| **\b** | Backspace  | 
| **\n** | New Line  |
| **\t** | Horizontal Tab  | 
| **\v** | Vertical Tab  | 
# Format Specifications
The real power of printf is when we are printing the contents of variables. Let’s take the format specifier %d for example. This prints a number. So, a number must be provided for printing. This is done by adding another argument to the printf statement,
as shown here.

    int age;
    age = 25;
    _printf ( "I am %d years old\n", age );
In this example, printf has two arguments. The first is a string: "I am %d years old\n". The second is an integer, age.

Table of conversion specifiers
-------------
| Specifier  | Output | Example | Description |
| ------------- | ------------- | ------------------------------ | ------------- | 
| **%c** |  Character   | H       |print a single character |
| **%s** | Strings  | Holberton    | print a string of characters|
| **%d** |  Double   | H       | print a decimal (base 10) number|
| **%i** | Integer  | Holberton    |  print an integer in base 10 |

# Authors
Sergio Steben Arias Quintero [![alt text][1.1]][2]
Fabian Andres Riascos [![alt text][1.1]][1]
<!-- links to social media icon -->
[1.1]: http://i.imgur.com/0o48UoR.png (Github)
<!-- links to your social media accounts -->
<!-- update these accordingly -->
[1]: http://www.github.com/fabian-andres
[2]: https://github.com/sarias12