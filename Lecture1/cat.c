//example 5 - 


#include <stdio.h>

//best option? better convention to increment than decrement? 

int main(void)
{
    int i = 0;
    while (i < 3)
    {
        printf("meow\n");
        i++;
    }
}

//better option: 

// int main(void)
// {
//     int i = 3;
//     while (i > 0)
//     {
//         printf("meow\n");
//         i--;
//     }
// }


// int main(void)
// {
//     printf("meow\n");
//     printf("meow\n");
//     printf("meow\n");
// }
// doing printf multiple times for the same thing is correct, but pedantic when we could 
//use a loop 
