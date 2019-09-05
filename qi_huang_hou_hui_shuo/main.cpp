#include <cstdio>
#include<stdlib.h>

const int maxn=11;
int n,P[maxn],hashTable[maxn] = {false},line=0;//n是位数，P存放当前的排列
int count=0;
void generateP(int index){
    if(index==n+1) {

        count++;
        printf("%d\n",count);
        return;
    }

    for(int x=1;x<=n;x++){
        if(hashTable[x]==false){

            bool valid = true;
            for(int pre=1;pre<index;pre++){//注意这边不能等于，因为等于的时候相当于是同一个点，当然在一条线上
                if(abs(pre-index)==abs(x-P[pre])){//x不可以换成P[index]，因为还没有做下方的语句，所以说这个位置还没有值
                    valid = false;
                    break;
                }
            }
            if(valid==true){
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

//在采用暴力法的时候，输出的行数为40320，采用回朔法后，行数变成