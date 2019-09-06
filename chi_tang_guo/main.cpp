#include <cstdio>
using namespace std;

int get_candy(int num){
    if(num==2){
        return 2;
    }
    if(num==1){
        return 1;
    }
    return get_candy(num-1)+get_candy(num-2);
}

int main() {
    int n;

    while(scanf("%d",&n)!=EOF){
        printf("%d\n",get_candy(n));
    }

}