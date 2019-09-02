#include <cstdio>
#include<stack>
using namespace std;
int main() {
    int m,n,k;
    scanf("%d %d %d",&m,&n,&k);
    int sequence[1005],curser=0,flag=1;
    stack<int> st;

    while(k--){
        //读取数据
        flag = 1;
        curser = 0;
        for(int i=0;i<n;i++){
            scanf("%d",&sequence[i]);
        }
        //将栈清空
        while(!st.empty()){
            st.pop();
        }



        for(int i=1;i<=n;i++){//用外层for循环向栈中压入当前数字，用内侧while使得数字出栈
            st.push(i);

            if(st.size()>m){//如果存进去的大于了限制的大小，则标定为不行。
                flag=0;
                break;
            }

            while(!st.empty()&&st.top()==sequence[curser]){
                st.pop();
                ++curser;
            }
        }

        if(flag==1&&st.empty()){
            printf("YES\n");//最后就是因为这个位置没有回车所以出错。这说明，要仔细观察输入与输出的格式，有一点问题都是不行的。
        }
        else{
            printf("NO\n");
        }
    }

    return 0;
}