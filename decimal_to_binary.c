#include <stdio.h>

int main()
{
    int n,  q, r = 1;
    printf("enter decimal no:");
    scanf("%d", &n);
    
    int binary[32];
    if(n==0){
        printf("0\n");
        return 0;
    }

    for (int l = n; l > 0; l = l / 2)
    {
        q = l % 2;
        binary[r-1]=q;
        r++;   
    }
    for(int i=r-2;i>=0;i--){
            printf("%d",binary[i]);
        }

    printf("\n");
    return 0;
}
