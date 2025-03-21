//example 5 - 

//include <cs50.h>
#include <stdio.h>

//f - abstraction - moving all the for loop into the meow function so you can change the interval to any number

void meow(int n)

int main(void)
{
    int n;
    do
    {
        n = get_int("Number: ");
    }
    while (n < 1);
    meow(n);
}

void meow(int n)
{
    for (int i = 0; i < n; i++)
    {
        print("meow\n");
    }
    
}

//e - creating a meow function and plugging it in 

// void meow(void)

// int main(void)
// {
//     for (int i = 0; i < 3; i++)
//     {
//         meow();
//         i++;
//     }
// }

// void meow(void)
// {
//     print("meow\n");
// }

//d for loop - best best option: 

// int main(void)
// {
//     for (int i = 0; i < 3; i++)
//     {
//         printf("meow\n");
//         i++;
//     }
// }

//c - best while loop option? better convention to increment than decrement? 

// int main(void)
// {
//     int i = 0;
//     while (i < 3)
//     {
//         printf("meow\n");
//         i++;
//     }
// }

//b - slightly better option, while loop, but still wordy: 

// int main(void)
// {
//     int i = 3;
//     while (i > 0)
//     {
//         printf("meow\n");
//         i--;
//     }
// }

// a - simplest but most wordy way 
// int main(void)
// {
//     printf("meow\n");
//     printf("meow\n");
//     printf("meow\n");
// }
// doing printf multiple times for the same thing is correct, but pedantic when we could 
//use a loop 
