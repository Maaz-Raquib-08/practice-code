#include<iostream>
#include<time.h>
#include<string>
using namespace std;
int main(){
  {
  char play[5];
  cout<<"written play for start :-"<<endl;
    cin>>play;
     
    int count=0,wrong=0;
    char ch,cha[5];
  for(int i=0;i<5;i++)
  {
   char next[5];
    cout<<"written next for next question :-"<<endl;
     cin>>next;
     if(next!=next){
      cout<<"invalid word"<<endl;
     }
     if(next==next){
 srand( time(NULL) );
    int dice=3;
    int roll=0;
    roll=rand()%3+1;
    // cout<<"your number:- "<< roll;
     cout<<"";
   
        if (roll==0)
      break;
        
    
       switch(roll)
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
                 if(ch=='b'||ch=='c')
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
  }

}
