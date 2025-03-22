#include <stdio.h>

// Function prototype
int computeHomeValue(int popularity, int size);

int main() {
    int popularity, size, homeValue;

    printf("Enter popularity: ");
    scanf("%d", &popularity);
    printf("Enter size: ");
    scanf("%d", &size);

    // Call function to compute the home value
    homeValue = computeHomeValue(popularity, size);

    printf("Home value is: %d\n", homeValue);

    return 0;
}

int computeHomeValue(int popularity, int size) {
    return (popularity * popularity * popularity + size * size) * 10000;
}
