#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int i,sayi,n,sum;

    printf("n i giriniz");
    scanf("%d",&n);

    sum=2;

    srand(time(NULL));

    for(i=0;i<n;i++){
        for(;;){
            sayi=rand()%100+1;

            if(sum%2==0){
                if(sayi%2!=0){
                printf("%d ",sayi);
                sum++;
                break;
                }
            }

            if(sum%2!=0){
                if(sayi%2==0){
                    printf("%d ",sayi);
                    sum++;
                    break;

                }

            }

        }
    }
}
