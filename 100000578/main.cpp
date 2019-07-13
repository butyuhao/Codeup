#include <iostream>

int isLeap(int year){
    if((year%4==0)&&(year%100!=0)||(year%400==0))
        return 1;
    else
        return 0;
}

int main() {
    int year1, year2, year,y1,y2,m1,m2,d1,d2,count;
    int month[12][2]={{31,31},{28,29},{31,31},{30,30},{31,31},{30,30},{31,31},{31,31},{30,30},{31,31},{30,30},{31,31}};
    while(scanf("%d%d",&year1,&year2)!=EOF){
        count = 1;
        if(year1 > year2){
            year = year1;
            year1 = year2;
            year2 = year;
        }
        y1 = year1/10000;
        y2 = year2/10000;
        m1 = year1%10000/100;
        m2 = year2%10000/100;
        d1 = year1%100;
        d2 = year2%100;
        //先计算到前一年
        while(y1<y2 || m1<m2 || d1<d2){
            d1++;
            count++;

            if(d1==(month[m1-1][isLeap(y1)]+1)){
                d1 = 1;
                m1++;
                if(m1==13){
                    m1 = 1;
                    y1++;
                }
            }
        }

        printf("%d\n",count);
    }

}