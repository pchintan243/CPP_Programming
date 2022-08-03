#include <stdio.h>
void disk(int n, char l, char m, char u)
{
    if (n > 0)
    {
        disk(n - 1, l, u, m);
        printf("Disk %d move from %c -> %c\n", n, l, u);
        disk(n - 1, m, l, u);
    }
}
int main()
{
    disk(3, 'A', 'B', 'C');
    return 0;
}