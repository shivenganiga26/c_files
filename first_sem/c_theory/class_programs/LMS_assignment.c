#include<stdio.h> 
    int main() {
    int n, category;
    int regularCount = 0, premiumCount = 0, reclinerCount = 0;
    int total = 0;
    float finalAmount;
    printf("Enter number of tickets:");
    scanf("%d",&n);
    for (int i = 1; i <= n; i++) {
        printf("Enter category for ticket %d (1/2/3): ",i);
        scanf("%d",&category);
        if (category == 1) {
            total = total + 150;
            regularCount++;}
        else if (category == 2) {
            total = total + 250;
            premiumCount++;}
         else if (category == 3) {
            total = total + 400;
            reclinerCount++;} 
        else {
            printf("Invalid category! Please enter 1, 2 or 3 only.\n");
            i--;} // repeat same ticket
    }
    printf("\n--- Final Bill ---\n");
    printf("Regular tickets: %d\n",regularCount);
    printf("Premium tickets: %d\n",premiumCount);
    printf("Recliner tickets: %d\n",reclinerCount);
    printf("Total (before discount): %d\n", total);
    if (n >= 5) {
        finalAmount = total - (total * 0.10);
        printf("Discount applied: Yes (10%%)\n");
        printf("Final Amount: %.0f\n",finalAmount);} 
    else {
        finalAmount = total;
        printf("Discount applied: No\n");
        printf("Final Amount: %.0f\n",finalAmount);}
    return 0;
}