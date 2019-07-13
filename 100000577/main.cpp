#include <iostream>

int main() {
    int h,bottom;
    while(scanf("%d",&h)!=EOF){
        bottom = h+(h-1)*2;
        for(int i=0;i<h;i++){
            for(int j=0;j<bottom-(h+i*2);j++){
                printf(" ");
            }
            for(int k=0;k<h+i*2;k++){
                printf("*");
            }
            if(i<h){
                printf("\n");
            }
        }
    }
    return 0;
}