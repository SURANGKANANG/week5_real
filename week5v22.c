//จงเขียนโปรแกรมรับตัวเลข 3 ตัว แล้วหาผลสรุปว่าตัวเลขใดมีค่ามากสุด ตัวเลขใดมีค่าน้อยสุด และตัวเลขใดคือค่ากลาง (Level 2)
#include <stdio.h>
int main() {
    double value[1000];
    printf("Input number :" );
    scanf("%ld%ld%ld",&value[0],&value[1],&value[2]);
    double max = value[0] ;
    double min = value[0];
    for(int i=0;i<3;i++){
        if(value[i]>max){
           max= value[i] ;
           if(value[i]<min) 
           min = value[i];          
        }
    }
	double mid = value[0];
    for(int i=0;i<3;i++){
        if(value[i]<max && value[i]>min){
           mid= value[i] ; 
        }
    }
    printf("max=%ld\nmin=%ld\nmid=%ld",max,min,mid);
}