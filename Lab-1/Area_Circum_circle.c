 #include <stdio.h>
#define PI 3.14159          
void main()
{
                float radius, area,circum;
                printf("Enter the radius of circle: ");
                scanf("%f", &radius);
                area = PI * radius * radius;
                circum=2*PI*radius;
                printf("The area of circle is %.2f", area);
                printf("\nThe circumference of circle is %.2f", circum);
}
