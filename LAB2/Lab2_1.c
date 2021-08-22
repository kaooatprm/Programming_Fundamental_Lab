#include <stdio.h>
int main() {
    int n;
    printf("Enter number : ");
    scanf("%d", &n);
    printf("Factoring Result : ", n);
    int i = 2;
    while (n!=1) {
        if (n%i == 0) {
        	while(n%i==0){
            printf("%d ", i);
            n = n/i;
        if (n!=1){
        	printf("x ");
		 }
    }
}
        else
            i++;
    }
    return 0;
}