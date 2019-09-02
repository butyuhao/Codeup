#include <cstdio>
#include <queue>
using namespace std;

typedef struct mouse{
    int weight;
    int rank = 0;

}mouse;

int main() {

    int np,ng,group,num,max;//group是每轮一组中的人数

    queue <int> q;
    scanf("%d%d",&np,&ng);


    mouse m[1005];
    for(int i=0;i<np;i++){
        scanf("%d",&m[i].weight);
    }

    for(int i=1;i<=np;i++){
        scanf("%d",&num);
        q.push(num);
    }

    while(q.size()>1){
        int temp = q.size();
        if((np%ng)==0){
            group = temp/ng;
        }
        else{
            group = (temp/ng)+1;
        }
        //k保存当前轮最大号码数的老鼠，每轮都出队，并保存最大号码在每一小轮最后将这一号码入队

        for(int i=1;i<=group;i++){
            max = q.front();
            for(int j=1;j<=ng;j++){
                //printf("%d\n",(i-1)*ng+j);
                if((i-1)*ng+j>temp){
                    break;
                }
                if(m[q.front()].weight>m[max].weight){//如果当前subgroup里的当前只老鼠体重大于max这只老鼠的体重，则记录
                    max = q.front();
                }
                m[q.front()].rank = group+1;
                q.pop();
            }
            q.push(max);
        }
    }
    m[q.front()].rank = 1;

    for(int i=0;i<np;i++){
        printf("%d",m[i].rank);
        if(i!=np-1){
            printf(" ");
        }
    }



    return 0;
}

//11 3
//25 18 0 46 37 3 19 22 57 56 10
//6 0 8 7 10 5 9 1 4 2 3