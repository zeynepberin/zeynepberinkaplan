#include <stdio.h>
#include <math.h>

int main()
{
    float popularity,size,homeValue;
    
    printf("Enter the popularity of your land :");
    scanf("%f",&popularity);
    printf("Enter size of the house  :");
    scanf("%f",&size);
    
    homeValue = (pow(popularity,3)+pow(size,2))*10000;
    
    printf("home value is %0.0f", homeValue);

}
