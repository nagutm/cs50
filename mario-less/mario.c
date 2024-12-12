#include <cs50.h>
#include <stdio.h>

void print_row(int n);
void print_space(int n);
int get_height();

int main(void)
{
    int height = get_height();

    for (int i = 0; i < height; i++)
    {
        print_space(height-(i+1));
        print_row(i+1);
    }
    
}

int get_height()
{
    int height;
    do
    {
        height = get_int("Height: ");
    }
    while (height < 1);
}

void print_row(int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("#");
    }
    printf("\n");
}

void print_space(int n)
{
    for (int i = 0; i < n; i++)
    {
        printf(" ");
    }
}

