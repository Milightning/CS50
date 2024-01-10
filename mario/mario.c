#include <cs50.h>
#include <stdio.h>

void print_row(int spaces, int bricks);
void print_bricks(int bricks);

int main(void)
{
    int height;

    do
    {
        height = get_int("Height: ");
    }
    while (height < 1 || height > 8);
    int x = height;

    for (int i = 0; i < height; i++)
    {
        print_row(x - 1, i + 1);
        x -= 1;
    }
}

void print_row(int spaces, int bricks)
{
    for (int a = spaces; a > 0; a--)
    {
        printf(" ");
    }
    print_bricks(bricks);
    printf("  ");
    print_bricks(bricks);
    printf("\n");
}

void print_bricks(int bricks)
{
    for (int b = 0; b < bricks; b++)
    {
        printf("#");
    }
}
