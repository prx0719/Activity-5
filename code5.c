#include <stdio.h>
void decimaltobinary(int n){
    if(n==0){
            return;
        }
    
       decimaltobinary(n / 2);
       
       printf("%d" , n % 2);
        return;
    
}
    int main() {
        int n1;
        printf("Enter Your Number:");
        scanf("%d" , &n1);
        printf("Binary is: ");
    decimaltobinary(n1);
     
        return 0;
    }
