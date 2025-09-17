#include <stdio.h>
int main() {
    float BS, HRA, DA, GS;
    printf("Enter the Basic Salary: ");
    scanf("%f", &BS);
    HRA = 0.10 * BS;
    DA = 0.05 * BS;
    GS = BS + HRA + DA;
    printf("Gross Salary: %.2f\n", GS);
    return 0;
}
