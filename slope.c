#include<stdio.h>
int main()
{
    double x1,x2,x3,y1,y2,y3;
    printf("enter the first point");
    scanf("%f %f",&x1,&y1);
    printf("enter the second point\n");
    scanf("%f %f",&x2,&y2);
    printf("eneter the third poimt\n");
    scanf("%f %f",&x3,&y3);
    double m1 =(y2-y1)/(x2-x1);
    double m2 =(y3-y2)/(x3-x2);
    if(m1==m2){
    printf("they lia on a straight line \n");}
    else{
    printf("they no lia on a straight line \n");}
     return 0;

}