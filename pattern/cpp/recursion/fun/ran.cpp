#include<iostream>
using namespace std;
int main()
{
    int n,count=0,wrong=0;
    char ch,cha[5];
  for(int i=0;i<10;i++)
  {
       
    
       cout<<endl<<"enteer any number between 1 to 10 or enter zero to quite the quizz :";
       cin>>n;

       if(n==0)
       break;
        
    
       switch(n)
        {
           case 1:
                 cout<<endl<<"who is PM of India"<<endl;
                 cout<<"a)Amit shah"<<endl<<"b)Narendra Modi"<<endl<<"c)Jaishah"<<endl<<"d)none";
                 cout<<endl<<"enter answer :";
                 cin>>ch;
                 if(ch=='b')
                   {
                       cout<<endl<<ch <<" is correct ans";
                       count++;
                   }
                 else
                   {
                       cout<<endl<<ch <<" is wrong ans";
                       wrong++;
                   }
           break;

           case 2:
                 cout<<endl<<"set of program is known as :"<<endl;
                 cout<<"a)intstruction"<<endl<<"b)high level language"<<endl<<"c)structured program"<<endl<<"d)software";
                 cout<<endl<<"enter answer :";
                 cin>>ch;
                 if(ch=='d')
                   {
                       cout<<endl<<ch <<" is correct ans";
                       count++;
                   }
                 else
                   {
                       cout<<endl<<ch <<" is wrong ans";
                       wrong++;
                   }
           break;

           case 3:
                 cout<<endl<<"what everyone liked the most"<<endl;
                 cout<<"a)hostel ka khana"<<endl<<"b)bahar ka khana"<<endl<<"c)ghar ka khana"<<endl<<"d)none";
                 cout<<endl<<"enter answer :";
                 cin>>ch;
                 if(ch=='b')
                   {
                       cout<<endl<<ch <<" is correct ans";
                       count++;
                   }
                 else
                   {
                       cout<<endl<<ch <<" is wrong ans";
                       wrong++;
                   }
           break;

           case 4:
                 cout<<endl<<"which is access specifier"<<endl;
                 cout<<"a) # (hash)"<<endl<<"b)iostream"<<endl<<"c)include"<<endl<<"d)protected:";
                 cout<<endl<<"enter answer :";
                 cin>>ch;
                 if(ch=='d')
                   {
                       cout<<endl<<ch <<" is correct ans";
                       count++;
                   }
                 else
                   {
                       cout<<endl<<ch <<" is wrong ans";
                       wrong++;
                   }
           break;

           
        
          default:
          cout<<endl<<"invalid input ";
       }

   }
 cout<<endl<<"your wrong answer :"<<wrong;
 cout<<endl<<"your correct answers :"<<count;
}