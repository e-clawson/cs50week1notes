//first example

// #include <stdio.h>

// int main(void)
// {
//     printf("hello, world\n");
// }

//second example - this probablty won't work for me in regular vscode because idk that it knows 
//to use this <cs50.h> - it might not have access to that - and it didn't, got the error messade cs50.h not found 
//thi is probably also why my string on line 18 remains white but in the class video his is red 
#include <cs50.h>
#include <stdio.h>

int main(void)
{
    string answer = get_string("what's your name? ");
    printf("hello, %s", answer);
}