#include <cstdio>
const int maxn=11;
int n,P[maxn],hashTable[maxn] = {false};//n是位数，P存放当前的排列

void generateP(int index){
    if(index==n+1){
        for(int i=1;i<=n;i++){
            printf("%d",P[i]);
        }
        printf("\n");
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
    n=3;
    generateP(1);
    return 0;
}