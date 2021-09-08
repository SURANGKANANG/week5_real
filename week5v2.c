//จงเขียนโปรแกรมรับตัวเลข 3 ตัว แล้วหาผลสรุปว่าตัวเลขใดมีค่ามากสุด ตัวเลขใดมีค่าน้อยสุด และตัวเลขใดคือค่ากลาง (Level 2)
#include <stdio.h>
main() {
    double a,b,c,max,min,mid ;
    printf("Input number :");
    scanf("%ld%ld%ld",&a,&b,&c) ;
     max =a ;
     min = a ; 
    if(b>max){
        max=b ;
        if(c>max)
        max=c ;
    }
    if(b<min){
        min=b ;
        if(c<min)
        min=c ;
    }
    mid = a ;
    if(b<max && b>min){
        mid =b ;
        if(c<max && c>min)
        mid = c ;
    }
    printf("max= %ld\nmin= %ld\nmid= %ld",max,min,mid);
}