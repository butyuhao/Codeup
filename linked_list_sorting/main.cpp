#include <cstdio>
#include <algorithm>
using namespace std;
typedef struct Node{
    int address;
    int data;
    int next;
    int valid = 0;//是否真的在链表中？
}node;

bool cmp(Node a,Node b){
    if(a.valid==0||b.valid==0){
        return a.valid>b.valid;
    }
    else{
        return a.data<b.data;
    }

}

int main() {
    node n[100005];
    int num,head,addr,p,count=0;
    scanf("%d %d",&num,&head);
    for(int i=0;i<num;i++){
        scanf("%d",&addr);
        n[addr].address = addr;
        scanf("%d%d",&n[addr].data,&n[addr].next);
    }
    p = head;
    while(p!=-1){
        n[p].valid=1;
        p = n[p].next;
        count++;//记录结点数
    }

    if(count==0){
        printf("0 -1");
    }
    else{
        sort(n,n+100005,cmp);
        printf("%d %05d\n",count,n[0].address);
        for(int i=0;i<count;i++){
            if(i<count-1){
                printf("%05d %d %05d\n",n[i].address,n[i].data,n[i+1].address);
            }
            else{
                printf("%05d %d -1\n",n[i].address,n[i].data,n[i+1].address);
            }
        }
    }
    return 0;
}
/*
5 00001
11111 100 -1
00001 0 22222
33333 100000 11111
12345 -1 33333
22222 1000 12345
 */