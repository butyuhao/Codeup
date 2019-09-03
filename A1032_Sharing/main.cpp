#include<cstdio>

int main() {
    int slt[100005];
    int mark[100005] = {0};
    int head1,head2,n,addr,data,next;
    scanf("%d%d%d",&head1,&head2,&n);
    for(int i=0;i<n;i++){
        scanf("%d %c %d",&addr,&data,&next);
        slt[addr] = next;
    }
    int p = head1,is_found = 0;
    while(slt[p]!=-1&&n!=0){
        mark[p] = 1;
        p = slt[p];
    }
    mark[p] = 1;

    p = head2;
    while(slt[p]!=-1){
        if(mark[p]==1){
            is_found = 1;
            break;
        }
        p = slt[p];
    }
    if(slt[p]==-1){
        if(mark[p]==1){
            is_found = 1;
        }
    }
    if(is_found==1){
        printf("%05d",p);
    }
    if(is_found==0){
        printf("%d",-1);
    }

    return 0;
}
/*
11111 22222 9
67890 i 00002
00010 a 12345
00003 g -1
12345 D 67890
00002 n 00003
22222 B 23456
11111 L 00001
23456 e 67890
00001 o 00010
*/

/*
00001 00002 4
00001 a 10001
10001 s -1
00002 a 10002
10002 t -1
 */

/*
11111 22222 4
11111 i 33333
33333 i -1
22222 i 33333
66666 i 44444


  */