#include <stdio.h>

int main() {
    int n, i;
    int a = 0, b = 1, c;

    printf("Enter number of terms: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++) {
        
        c = a + b;
        a = b;
        b = c;
        printf("%d",c);
    }

    return 0;
}
