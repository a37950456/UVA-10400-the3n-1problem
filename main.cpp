//
//  main.cpp
//  UVA-10400-the3n+1problem
//
//  Created by Tina Tsai on 2017/12/8.
//  Copyright © 2017年 Tina Tsai. All rights reserved.
//Sample Input
/*
1 10
100 200
201 210
900 1000
Sample Output   cycle length
1 10 20
100 200 125
201 210 89
900 1000 174

 input n
 print n
 if n = 1 then STOP
 if n is odd then n ←− 3n + 1
 else n ←− n/2 GOTO 2
*/


#include <iostream>
#include <cstdio>
#include <cstdlib>
using namespace std;
int main() {
    long a,b,c,i,n,cycle=0,max;
    while(scanf("%ld%ld",&a,&b)!=EOF){
        printf("%ld %ld",a,b);
        if (a>b)
        {  // if a<b change  a must be the smaller one
            c=a;
            a=b;
            b=c;
        }
        max = 0;
        for(i=a;i<=b;i++)
        {
            n=i;
            cycle = 1;
            while(n != 1)
            {
               n = n%2==1 ? 3*n+1 : n/2; //n%2成立的話n=3*n+1 不成立n=n/2
                cycle++;
            }
            max = cycle>max ? cycle:max ;
        }
        printf(" %ld\n",max);
    }
    system("pause");
    return 0;
}
