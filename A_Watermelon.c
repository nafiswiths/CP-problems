#include <stdio.h>

int main() {
    int w;
    
    // Read input
    scanf("%d", &w);
    
    // Check if w is even and greater than 2
    if (w % 2 == 0 && w >= 2) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }
    
    return 0;
}