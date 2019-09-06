#include <cstdio>
int num;
int fei_bo_na_qi(int n){
    int num;
    if(n==0||n==1||n==2){
        if(n==0){
            num = 0;
        }
        if(n==1){

            num = 1;
        }
        if(n==2){

            num = 1;
        }
        return num;
    }
    num = fei_bo_na_qi(n-1)+fei_bo_na_qi(n-2);

    //printf("%d ",num);
    return num;
}

int main() {
    int n = 0,height,width,space;
    scanf("%d",&n);
    for(int t = 0;t<n;t++){
        scanf("%d",&height);
        width =1+(height-1)*2*2;
        for(int i=1;i<=height;i++){
            space = (width-(1+(i-1)*2*2))/2;
            for(int j=1;j<=space;j++){
                printf(" ");
            }
            for(int k=0;k<1+(i-1)*2;k++){
                printf("%d",fei_bo_na_qi(k));
                if(k<(i-1)*2){
                    printf(" ");
                }
            }
            for(int j=1;j<=space;j++){
                printf(" ");
            }
            printf("\n");
        }
    }

    return 0;
}