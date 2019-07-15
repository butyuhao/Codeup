#include <iostream>
/*
 *
21 December 2012
5 January 2013
 */
int main() {
    int year1, year2, year,y1,y2,m1,m2,d1,d2,count;
    char day[7][10] = {{'M','o','n','d','a','y','\0'},{'T','u','e','s','d','a','y','\0'},{'W','e','d','n','e','s','d','a','y','\0'},{'T','h','u','r','s','d','a','y','\0'},{'F','r','i','d','a','y','\0'},{'S','a','t','u','r','d','a','y','\0'},{'S','u','n','d','a','y','\0'}};
    char month[10];
    int a,b;
    scanf("%d%s%d",&a,month,&b);
    if(month[0]=='J'){
        if(month[1]=='a')
            m1 = 1;
        else if(month[2]=='n'){
            m1 = 6;
        }
        else
            m1 = 7;
    }
    else if(month[0]=='F')
        m1 = 2;
    else if(month[0]=='M'){
        if(month[2]=='r')
            m1 = 3;
        else
            m1 = 5;
    }
    else if(month[0]=='A'){
        if(month[1]=='p'){
            m1 = 4;
        }
        else
            m1 = 8;
    }
    else if(month[0]=='S')
        m1=9;
    else if(month[0]=='O')
        m1=10;
    else if(month[0]=='N')
        m1=11;
    else if(month[0]=='D')
        m1=12;
    printf("%d",m1);


}