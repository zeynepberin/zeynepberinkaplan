#include <stdio.h>
#include <math.h>

// Function prototype
void computeHomeValue(void);

int main() {
    // Call the function to compute and print the home value
    computeHomeValue();
    return 0;
}

// Function definition for computing home value
void computeHomeValue(void) {
    int popularity, size;
    
    printf("Enter popularity: ");
    scanf("%d", &popularity);
    printf("Enter size: ");
    scanf("%d", &size);

    int homeValue = (pow(popularity,3)+pow(size,2)) * 10000;

    printf("Home value is: %d\n", homeValue);
}

 
