//主要想法是在碰到加减号之前一直将算式push到栈里头，当碰到一个加减号则计算前面的部分
//主要是碰到加减号要如栈，因为不知懂后面是不是乘号或是除号
//碰到加减号，判断栈里有没有，有的话先和栈里面的做运算
//碰到乘除先看看栈里面有没有东西，有的话
#include <iostream>
#include <stack>
using namespace std;
stack<float> num_stack;
stack<char> op_stack;
int main() {

    int is_finish=0,status=0,pre_status=0,add2mul_flag=0;//status=0表示当前是加法运算
    float  num1,num2;
    char op,ch;
    while(1){
        status=0;
        status=0;
        cin>>num1;
        if(num1 == 0){
            return 0;
        }
        //初始化读取符号
        ch = getchar();//把空格去掉
        cin>>op;//读取第一个操作符
        if(op=='/'||op=='*'){
            status=1;
            pre_status=1;
        }
        while(op!='\n'){
            //读取数字
            ch = getchar();//把空格去掉
            cin>>num2;
            //如果操作符是乘或是除就直接计算
            if((pre_status==status)&&(status==0)){

                if(op=='+'){
                    num1 = num1+num2;
                }
                else {
                    num1 = num1-num2;
                }
            }
            if((pre_status==status)&&(status==1)){

                if(op=='*'){
                    num1 = num1*num2;
                }
                else {
                    num1 = num1/num2;
                }
            }
            if((pre_status != status)&&status == 1){
                if(!num_stack.empty()){

                    if(op_stack.top() == '+'){
                        num1 = num1+num_stack.top();
                        op_stack.pop();
                    }
                    else{
                        num1 = num1-num_stack.top();
                        op_stack.pop();
                    }
                }

            }

            if((pre_status != status)&&status == 0){
                if(!num_stack.empty()){

                }
                num_stack.push(num1);
                op_stack.push(op);
                num1 = num2;




            }


            cout<<num1<<endl;
            //读取符号
            ch = getchar();//把空格去掉
            cin>>op;//
            pre_status = status;
            if(op=='/'||op=='*'){
                status = 1;
            }
            else{
                status = 0;
            }
        }
        cout<<num1;
    }

}