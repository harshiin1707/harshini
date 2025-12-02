#include <stdio.h>
void fibonacciSeries(int n)
{
    int f = 0, s = 1, t;
    printf("%d %d", f, s);
    t = f + s;
    while (t <= n) 
	{
        printf(" %d", t);
        f = s;
        s = t;
        t = f + s;
    }
}

int main()
 {
    int n;
    printf("Enter size of the series");
    scanf("%d", &n);
    fibonacciSeries(n);

    return 0;
}
