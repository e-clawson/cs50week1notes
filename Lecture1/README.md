# cs50week1notes

- going to take what we reviewed in scratch and move the same concepts into a programming language called C 
- The Purple - function - action or verb that gets the code to do something 
    - english-like but not english - special syntax - our Source code 
    - computers don't understand source code so we need a compiler that will take our source code and turn it into patterns of bits in binary which the computer can read (Machine Code)
- Last week we wrote source code through dragging and dropping - this week we will do it through the language C and a compiler 

- we will use a cloudbased version of vscode (I might use my desktop version) - 

What is VS Code? 
- A Graphical User Interface (GUI) - contains things like buttons and icons that represent actions as opposed to a: 
- Command Line Interface (CLI) - like your terminal - where every action has to be typed out manually 

Our first 3 commands: 
- code hello.c - code is the command in vscode to create a new file, hello is our name for the file .c is the file extension which tells vscode this is a file running in C 
- make hello - this step tells vscode to run the "compiler" (it's not quite a compiler but more on that later) 
- ./ hello - run the machine code in the hello file - ./ - command for specifying the file you want to run is in this folder - run the program called hello 

3 steps again: 
- create file 
- run the compiler 
- execute - run the program 

More commands and info: 
- $ - indicator of the start of a line in the CLI 
- ls - list - tells you what files are in your current folder in the directory you are in 
- control L - clears the terminal window - can also just type clear in the terminal 

Difference btw hello and hello.c 
- hello.c is the source code 
- hello is the "compiler"

How C relates to Scratch 
- in scratch you have the purple "say" block - this is equivalent to print(), or printf(), in C - everything in the () needs to be in doubel quotes "" 
- what is the \n doing? - without it we will have the $ in the same line, not on a new line - the \n  means new line - it is an escape sequence - tells the computer to move to a new line 
- f(x) - function - argument -> [function] -> side effects or return value 

More escape sequences in C: 
- \n - new line 
- \r - older - moves cursor not to a new line but to the beginning of the line 
- \" - for when you want to print out an actual double quote "" - since we use "" as a tool already to mean something in coding, we need to be precise and tell the computer when we want to use it for text instead of for it's coding job 
    - example printf("hello, \"world\"\n") would print as hello, "world" 
- \' - similarly to the double quotes - this is for when you want to print single quotes 
- \\ - this is for when you want to print a \

this linse #include <stdio.h> helps declare this as a header file - any file that ends in .h is a header file - header files contain functionality that came with the system/with the language (in this case C)

- Library - a collection of code written by someone else that you can use - you access it by including header files 
    - for example in our code, printf() is proably a function that was created by someone and included in the library stdio - including stdio in our header gives us access to the printf() functionality and a lot of other stuff too 
    - not studio.h it is starndard io 
    - documentation for c - manual (man) pages - older more pedantic - can use https://manual.cs50.io/ for a more user-friendly and class-applicable version of the documentation 
        - includes more header files and an explanation of what functions are included in each (hundreds of functions already in C)

- get_string 

- %s - the way to join things in c - sort of saying give me something else - in this case, put another string here - sort of like leaving a placeholder in the code where values will go later
- printf() can take multiple inputs separated by a comma 

More CLI commands: 
- cd - change directory (similar to double clicking in a gui)
- cp - copy -make a copy of a file or folder 
- ls - list - shows files in your current folder in the directory 
- mkdir - make directory - makes a new file in your current folder in the directory 
- mv - move - move a file to somewhere else or rename it 
- rm - remove 
- rmdir - remove directory 

Types of info: 
- string - %s - text - phrase/sentence - in c, when using a string, use double quotes
- int - %i - integer 
- bool - boolean (true/false)
- char - single character - insteadof a full phrase/sentence - in c, when using single chars, use single quotes
- double/float - real numbers - something equivalent of fractions/decimal points 
- long - integers but longer integers 

Conditionals 
- proverbial forks in the road 
- if x is true, do y, else do z 

Operators: 
- = - the assignment operator - will assign a value to a variable 
- <
- <= 
- ">"
- ">="
- == 
- != 
- += or ++ - incrementor 
- -- = decrementor 

! - bang operator - inverts the concept - Not equal in this case 