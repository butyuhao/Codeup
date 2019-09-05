#include <cstdio>
#include<stdlib.h>

const int maxn=11;
int n,P[maxn],hashTable[maxn] = {false};//n是位数，P存放当前的排列
int count=0;
void generateP(int index){
    if(index==n+1){
        bool valid=true;
        for(int i=1;i<=n;i++)
            for(int j=i+1;j<=n;j++){
                if(abs(i-j)==abs(P[i]-P[j])){
                    valid=false;
                }
            }
        for(int i=1;i<=n;i++){
            printf("%d",P[i]);
        }
        if(valid==true){
            count++;
            printf(" ---------------------->>>YES");
        }
        else{
            printf(" NO");
        }
        printf("\n");
        printf("%d ",count);
        return;
    }
    else{
        for(int x=1;x<=n;x++){
            if(hashTable[x]==false){
                P[index] = x;
                hashTable[x] = true;
                generateP(index+1);
                hashTable[x] = false;

            }
        }
    }
}

int main() {
    n=8;
    generateP(1);
    return 0;
}