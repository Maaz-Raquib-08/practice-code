#include <stdio.h>
#include<math.h>
int main() {
    double a,b,result,k;
    int arr1[50],arr2[20][20],arr3[20][20],arr4[20][20],size,r,c,sum=0,n,i,j;
    
    printf("\n\n\t\t*******WELCOME TO SCIENCTIFIC CALCULATOR******\n ");
    printf("\t\t____________________________________________________\n\n\n");
    
     int ch;
     printf(" 1: additiion of the number\n ");
     printf("2: subtraction of the number\n ");
     printf("3: multiplication of the number\n ");
     printf("4: division of the number\n");
     printf(" 5: value of the power\n ");
     printf("6: sqare root of the number\n ");
     printf("7: value of sin a\n ");
     printf("8: value of cos a\n ");
     printf("9: value of tan a\n ");
     printf("10: value of log a\n ");
     printf("11: adding array element\n ");
     printf("12: additiion of matrix element\n ");
     printf("13: additiion of matrix\n");
     printf(" 14: substraction of matrix\n");
     printf(" 15: division of matrix element\n\n");
     
     
     printf("       16: EXIT\n");
    
    do
    {
       
        printf("\nEnter your choice:");
        scanf("%d",&ch);
        
        
       
        switch(ch)
    {
        case 1: printf("enter first number and second number\n");
                scanf("%lf%lf",&a,&b);
                result=a+b;
                printf("sum of the number=%.2lf\n",result);
                break;
         case 2:
                printf("enter first number and second number\n");
                scanf("%lf%lf",&a,&b);
                //printf("the addition is : ",addition(a,b));
                result=a-b;
                printf("subtraction of the number=%.2lf\n",result);
                break;
         case 3:
                printf("enter first number and second number\n");
                scanf("%lf%lf",&a,&b);
                result=a*b;
                printf("multiplication of the number=%.2lf\n",result);
                break;
         case 4: 
                printf("enter first number and second number\n");
                scanf("%lf%lf",&a,&b);
                result=a/b;
                printf("division of the number=%.2lf\n",result);
                break;
                
        case 5:
                printf("enter first number and second number\n");
                scanf("%lf%lf",&a,&b);
                result=pow(a,b);
                //printf("the power of %lf ",&a," to the power %lf",&b,"is : %lf",&result,);
                printf("power of the number=%.2lf\n",result);
                break;
         case 6:
                printf("enter value of a: \n");
                scanf("%lf",&a);
                result=sqrt(a);
                printf("squart root of the number=%.2lf\n",result);
                break;
         case 7:
                printf("enter value of a: ");
                scanf("%lf",&a);
                k =a*M_PI/180;
                result=sin(k);
                printf("value of the sin a =%.2lf\n",result);
                break;     
          case 8:
                printf("enter value of a: ");
                scanf("%lf",&a);
                k =a*M_PI/180;
                result=cos(k);
                printf("value of the cos a =%.2lf\n",result);
                break;     
         case 9:
                printf("enter value of a: ");
                scanf("%lf",&a);
                k =a*M_PI/180;
                result=tan(k);
                printf("value of the tan a =%.2lf\n",result);
                break;     
        case 10:
                printf("enter value of a: ");
                scanf("%lf",&a);
                result=log10(a);
                printf("value of log a =%.2lf\n",result);
                break; 
         case 11:
                 printf("input size of array");
                 scanf("%d",&size);
                 printf("input array element\n");
                 for(i=0;i<size;i++){
                 scanf("%d",&arr1[i]);
                 }
                 for(i=0;i<size;i++){
                     sum+=arr1[i];
                 }
                 printf("the sum of array element=%d\n",sum);
                 break;
           case 12:
                   printf("enter the matrix row and column=");
                   scanf("%d%d",&r,&c);
                   printf("enter the  matrix element\n");
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
                     printf("the sum of matrix element=%d\n",sum);
                     
                     break;
             case 13:
                    printf("enter the matrix row and column:-\n");
                    scanf("%d%d",&r,&c);
                    printf("enter the 1st matrix element\n");
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
                  
              case 14: printf("enter the matrix row and column:-\n");
                    scanf("%d%d",&r,&c);
                    printf("enter the matrix element\n");
                      for(int i=0;i<r;i++){
                        for(int j=0;j<c;j++){
                           scanf("%d",&arr2[i][j]);
                       }
                   }
                        printf("\n");
                       
                         printf("enter the 2nd  matrix element\n1");
                          for(i=0;i<r;i++){
                             for(j=0;j<c;j++){
                               scanf("%d",&arr3[i][j]);
                       }
                   }  
                 
                   //substraction
                for(i=0;i<r;i++){
                      for(j=0;j<c;j++){
                          arr4[i][j]=arr2[i][j]-arr3[i][j];
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
            case 15:
                   printf("enter the matrix row and column:-\n");
                    scanf("%d%d",&r,&c);
                    printf("enter the matrix element\n");
                      for(int i=0;i<r;i++){
                        for(int j=0;j<c;j++){
                           scanf("%d",&arr2[i][j]);
                       }
                   }
                        printf("\n");
                       
                         printf("enter the 2nd  matrix element\n");
                          for(i=0;i<r;i++){
                             for(j=0;j<c;j++){
                               scanf("%d",&arr3[i][j]);
                       }
                   }  
                 
                  //division of matrix element
                for(i=0;i<r;i++){
                      for(j=0;j<c;j++){
                          arr4[i][j]=arr2[i][j]/arr3[i][j];
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
        
                   
            case 16: printf("EXIT\n");
                    
    }
    
    } while (ch!=16);
        
    return 0;
}