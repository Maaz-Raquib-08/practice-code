#include <stdio.h>
#include<math.h>
int main() {
    double a,b,result,k;
    int arr1[50],arr2[20][20],arr3[20][20],arr4[20][20],size,r,c,sum=0,n,i,j;
    
    printf("welcome to calculator\n ");
    
     int ch;
    printf("13: magtrix addtion\n");
    printf("14: EXIT\n");
    
    do
    {
       
        printf("enter your choice ");
        scanf("%d",&ch);
       
        switch(ch)
    {
        case 1: printf("enter first number and second number\n");
                scanf("%lf%lf",&a,&b);
                result=a+b;
                printf("sum of the number=%lf\n",result);
                break;
         case 2:
                printf("enter first number and second number\n");
                scanf("%lf%lf",&a,&b);
                //printf("the addition is : ",addition(a,b));
                result=a-b;
                printf("subtraction of the number=%lf\n",result);
                break;
         case 3:
                printf("enter first number and second number\n");
                scanf("%lf%lf",&a,&b);
                result=a*b;
                printf("multiplication of the number=%lf\n",result);
                break;
         case 4: 
                printf("enter first number and second number\n");
                scanf("%lf%lf",&a,&b);
                result=a/b;
                printf("division of the number=%lf\n",result);
                break;
        case 5:
                printf("enter first number and second number\n");
                scanf("%lf%lf",&a,&b);
                result=pow(a,b);
                //printf("the power of %lf ",&a," to the power %lf",&b,"is : %lf",&result,);
                printf("power of the number=%lf\n",result);
                break;
         case 6:
                printf("enter value of a: \n");
                scanf("%lf",&a);
                result=sqrt(a);
                printf("squart root of the number=%lf",result);
                break;
         case 7:
                printf("enter value of a: ");
                scanf("%lf",&a);
                k =a*M_PI/180;
                result=sin(k);
                printf("value of the sin a =%lf",result);
                break;     
          case 8:
                printf("enter value of a: ");
                scanf("%lf",&a);
                k =a*M_PI/180;
                result=cos(k);
                printf("value of the cos a =%lf",result);
                break;     
         case 9:
                printf("enter value of a: ");
                scanf("%lf",&a);
                k =a*M_PI/180;
                result=tan(k);
                printf("value of the tan a =%lf",result);
                break;     
        case 10:
                printf("enter value of a: ");
                scanf("%lf",&a);
                result=log10(a);
                printf("value of log a =%lf",result);
                break; 
         case 11:
                 printf("input size of array");
                 scanf("%d",&size);
                 printf("input array element");
                 for(i=0;i<size;i++){
                 scanf("%d",&arr1[i]);
                 }
                 for(i=0;i<size;i++){
                     sum+=arr1[i];
                 }
                 printf("the sum of array element=%d",sum);
                 break;
           case 12:
                   printf("enter the matrix row and column");
                   scanf("%d%d",&r,&c);
                   printf("enter the matrix element");
                   for(i=0;i<r;i++){
                       for(j=0;j<c;j++){
                           scanf("%d",&arr2[i][j]);
                       }
                   }
                   for(i=0;i<r;i++){
                       for(j=0;j<c;j++){
                           sum+=arr2[i][j];
                       }
                   }
                     printf("the sum of array element=%d",sum);
                     
                     break;
             case 13:
                    printf("enter the matrix row and column\n");
                    scanf("%d%d",&r,&c);
                    printf("enter the matrix element");
                      for(int i=0;i<r;i++){
                        for(int j=0;j<c;j++){
                           scanf("%d",&arr2[i][j]);
                       }
                   }
                        printf("\n");
                       
                         printf("enter the 2nd  matrix element");
                          for(i=0;i<r;i++){
                             for(j=0;j<c;j++){
                               scanf("%d",&arr3[i][j]);
                       }
                   }  
                 
                   //addtion
                for(i=0;i<r;i++){
                      for(j=0;j<c;j++){
                          arr4[i][j]=arr2[i][j]+arr3[i][j];
                      }
                  }
                  printf("\n");
                for(i=0;i<r;i++)
                    {
                      for(j=0;j<c;j++)
                    {
                          printf("%d ",arr4[i][j]);
                          
                      }
                      printf("\n");
                    }
                  break; 
                   
            case 14: printf("EXIT\n");
                    
    }
    
    } while (ch!=14);
        
    return 0;
}