//
//  main.cpp
//  homework15
//
//  Created by 劉世翔 on 2019/4/12.
//  Copyright © 2019年 劉世翔. All rights reserved.
//

#include<stdio.h>
#include<stdlib.h>
void isLate(int,int);
int main(void){
    int h,m;         /*建立int變數 h小時 m分鐘*/
    printf("請輸入時間");
    scanf("%d %d",&h,&m);
    isLate(h,m);
}
void isLate(int h,int m){
    if(h>=7&&h<17){
        if(h==7&&m>=30){    /*7:30為上課時間*/
            printf("上課時間");
            printf("時間%d:%d",h,m);
        }
        else if(h>7){       /*8:00~17:00為上課時間*/
            printf("上課時間");
            printf("時間%d:%d",h,m);
        }
        
    }
    else{
        printf("下課");
    }
    
}
