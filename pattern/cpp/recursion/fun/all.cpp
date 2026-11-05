#include<iostream>
#include<time.h>
#include<string.h>
using namespace std;
int random()
{
    srand( time(NULL) );
    int dice=5;
    int roll=0;
    roll=rand()%6+1;
    return roll;
}

int n,count=0,wrong=0,c=0,k=0,m,q;
    char ch;


void quest(int n)
{
    switch(n)
        {
           case 1:
              if(c==0)
              {
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
                       cout<<endl<<ch <<" is wrong ans here b is right ans";
                       wrong++;
                   }
                   c++;
              }

             else if(c==1)
              {
                 cout<<endl<<"what everyone like the most :"<<endl;
                 cout<<"a)hostel ka khana"<<endl<<"b)ghar ka khana"<<endl<<"c)bahar ka khana"<<endl<<"d)none";
                 cout<<endl<<"enter answer :";
                 cin>>ch;
                 if(ch=='b')
                   {
                       cout<<endl<<ch <<" is correct ans";
                       count++;
                   }
                 else
                   {
                       cout<<endl<<ch <<" is wrong ans here b is right ans";
                       wrong++;
                   }
                   c++;
              }

              else if(c==2)
              {
                 cout<<endl<<"what is the name of your university"<<endl;
                 cout<<"a)HCU"<<endl<<"b)DU"<<endl<<"c)AMU"<<endl<<"d)MANUU";
                 cout<<endl<<"enter answer :";
                 cin>>ch;
                 if(ch=='d')
                   {
                       cout<<endl<<ch <<" is correct ans";
                       count++;
                   }
                 else
                   {
                       cout<<endl<<ch <<" is wrong ans here b is right ans";
                       wrong++;
                   }
                   c++;
              }

              




           break;






           case 2:
           if(k==0)
             {
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
                       cout<<endl<<ch <<" is wrong ans here d is right ans";
                       wrong++;
                   }
                   k++;
             }

             else if(k==1)
             {
                 cout<<endl<<"the smallest unit of display is :"<<endl;
                 cout<<"a)pixel"<<endl<<"b)PPI"<<endl<<"c)DPI"<<endl<<"d)none";
                 cout<<endl<<"enter answer :";
                 cin>>ch;
                 if(c=='a')
                   {
                       cout<<endl<<ch <<" is correct ans";
                       count++;
                   }
                 else
                   {
                       cout<<endl<<ch <<" is wrong ans here d is right ans";
                       wrong++;
                   }
                   k++;
             }

             else if(k==2)
             {
                 cout<<endl<<"who developed C programing language :"<<endl;
                 cout<<"a)pixel"<<endl<<"b)PPI"<<endl<<"c)DPI"<<endl<<"d)Dennis Ritchie";
                 cout<<endl<<"enter answer :";
                 cin>>ch;
                 if(c=='a')
                   {
                       cout<<endl<<ch <<" is correct ans";
                       count++;
                   }
                 else
                   {
                       cout<<endl<<ch <<" is wrong ans here d is right ans";
                       wrong++;
                   }
                   k++;
             }




           break;




           case 3:
                 cout<<endl<<"what everyone liked the most"<<endl;
                 cout<<"a)hostel ka khana"<<endl<<"b)bahar ka khana"<<endl<<"c)ghar ka khana"<<endl<<"d)none";
                 cout<<endl<<"enter answer :";
                 cin>>ch;
                 if(ch=='b'|| ch=='c')
                   {
                       cout<<endl<<ch <<" is correct ans";
                       count++;
                   }
                 else
                   {
                       cout<<endl<<ch <<" is wrong ans here b and c is right ans ";
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
                       cout<<endl<<ch <<" is wrong ans here d is right ans";
                       wrong++;
                   }
           break;


           
        
          default:
          cout<<endl<<"invalid input ";
       }
        cout<<endl<<"your wrong answer :"<<wrong;
        cout<<endl<<"your correct answers :"<<count;
    

}




int main()
{
     int y;
    for(int x=0;x<10;x++)
    {
       
        cout<<endl<<"enter 1 to start the quizz or enter 0 to quit the quizz : ";
        cin>>y;
        if(y==0)
        break;
        else if(y!=1 && y!=0)
        cout<<endl<<"INVALID INPUT";
        else if(y==1)
        {
            quest(random());
        }

    
    }
}// #include<iostream>
// #include<time.h>
// #include<string>
// using namespace std;
// int main(){
//   {
//   char play[5];
//   cout<<"written play for start :-"<<endl;
//     cin>>play;
     
//     int count=0,wrong=0;
//     char ch,cha[5];
//   for(int i=0;i<5;i++)
//   {
//    char next[5];
//     cout<<"written next for next question :-"<<endl;
//      cin>>next;
//      if(next!=next){
//       cout<<"invalid word"<<endl;
//      }
//      else{//if(next==next){
//  srand( time(NULL) );
//     int dice=30;
//     int roll=0;
//     roll=rand()%29+1;
//     // cout<<"your number:- "<< roll;
//      cout<<"";
   
//         if (roll==0)
//       break;
        
    
//        switch(roll)
//         {
//            case 1:
//                  cout<<endl<<"who is PM of India"<<endl;
//                  cout<<"a)Amit shah"<<endl<<"b)Narendra Modi"<<endl<<"c)Jaishah"<<endl<<"d)none";
//                  cout<<endl<<"enter answer :";
//                  cin>>ch;
//                  if(ch=='b'||ch=='B')
//                    {
//                        cout<<endl<<ch <<" is correct ans"<<endl;
//                        count++;
//                    }
//                  else
//                    {
//                        cout<<endl<<ch <<" is wrong ans"<<endl;
//                        wrong++;
//                    }
//            break;

//            case 2:
//                  cout<<endl<<"set of program is known as :"<<endl;
//                  cout<<"a)intstruction"<<endl<<"b)high level language"<<endl<<"c)structured program"<<endl<<"d)software";
//                  cout<<endl<<"enter answer :";
//                  cin>>ch;
//                  if(ch=='d'||ch=='D')
//                    {
//                        cout<<endl<<ch <<" is correct ans"<<endl;
//                        count++;
//                    }
//                  else
//                    {
//                        cout<<endl<<ch <<" is wrong ans"<<endl;
//                        wrong++;
//                    }
//            break;

//            case 3:
//                  cout<<endl<<"what everyone liked the most"<<endl;
//                  cout<<"a)hostel ka khana"<<endl<<"b)bahar ka khana"<<endl<<"c)ghar ka khana"<<endl<<"d)none";
//                  cout<<endl<<"enter answer :";
//                  cin>>ch;
//                  if(ch=='b'||ch=='c'||ch=='A'||ch=='C')
//                    {
//                        cout<<endl<<ch <<" is correct ans"<<endl;
//                        count++;
//                    }
//                  else
//                    {
//                        cout<<endl<<ch <<" is wrong ans"<<endl;
//                        wrong++;
//                    }
//            break;

//            case 4:
//                  cout<<endl<<"which is access specifier"<<endl;
//                  cout<<"a) # (hash)"<<endl<<"b)iostream"<<endl<<"c)include"<<endl<<"d)protected:";
//                  cout<<endl<<"enter answer :";
//                  cin>>ch;
//                  if(ch=='d'||ch=='D')
//                    {
//                        cout<<endl<<ch <<" is correct ans"<<endl;
//                        count++;
//                    }
//                  else
//                    {
//                        cout<<endl<<ch <<" is wrong ans"<<endl;
//                        wrong++;
//                    }
//            break;

//            case 5:
//                  cout<<endl<<"Development expenditure of the Central government does not include"<<endl;
//                  cout<<"a) defence expenditure"<<endl<<"b)expenditure on economic services"<<endl<<"c)expenditure on social and community services"<<endl<<"d)grant to states";
//                  cout<<endl<<"enter answer :";
//                  cin>>ch;
//                  if(ch=='a'||ch=='A')
//                    {
//                        cout<<endl<<ch <<" is correct ans"<<endl;
//                        count++;
//                    }
//                  else
//                    {
//                        cout<<endl<<ch <<" is wrong ans"<<endl;
//                        wrong++;
//                    }
//            break;
           
//            case 6:
//                  cout<<endl<<"ICICI is the name of a"<<endl;
//                  cout<<"a)chemical industry"<<endl<<"b)bureau"<<endl<<"c)corporation"<<endl<<"d)financial institution";
//                  cout<<endl<<"enter answer :";
//                  cin>>ch;
//                  if(ch=='d'||ch=='D')
//                    {
//                        cout<<endl<<ch <<" is correct ans"<<endl;
//                        count++;
//                    }
//                  else
//                    {
//                        cout<<endl<<ch <<" is wrong ans"<<endl;
//                        wrong++;
//                    }
//            break; 
           
//            case 7:
//                  cout<<endl<<"The Battle of Plassey was fought in"<<endl;
//                  cout<<"a) 1757"<<endl<<"b)1782"<<endl<<"c)1748"<<endl<<"d)1764:";
//                  cout<<endl<<"enter answer :";
//                  cin>>ch;
//                  if(ch=='a'||ch=='A')
//                    {
//                        cout<<endl<<ch <<" is correct ans"<<endl;
//                        count++;
//                    }
//                  else
//                    {
//                        cout<<endl<<ch <<" is wrong ans"<<endl;
//                        wrong++;
//                    }
//            break;
           
//            case 8:
//                  cout<<endl<<"Which of the following is a non metal that remains liquid at room temperature ?"<<endl;
//                  cout<<"a)Phosphorous"<<endl<<"b)Bromine"<<endl<<"c)Chlorine"<<endl<<"d)Helium";
//                  cout<<endl<<"enter answer :";
//                  cin>>ch;
//                  if(ch=='b'||ch=='B')
//                    {
//                        cout<<endl<<ch <<" is correct ans"<<endl;
//                        count++;
//                    }
//                  else
//                    {
//                        cout<<endl<<ch <<" is wrong ans"<<endl;
//                        wrong++;
//                    }
//            break; 
           
//            case 9:
//                  cout<<endl<<"Which of the following is used in pencils ?"<<endl;
//                  cout<<"a) Graphite"<<endl<<"b)Silicon"<<endl<<"c)Charcoal"<<endl<<"d)Phosphorous:";
//                  cout<<endl<<"enter answer :";
//                  cin>>ch;
//                  if(ch=='a'||ch=='A')
//                    {
//                        cout<<endl<<ch <<" is correct ans"<<endl;
//                        count++;
//                    }
//                  else
//                    {
//                        cout<<endl<<ch <<" is wrong ans"<<endl;
//                        wrong++;
//                    }
//            break;
           
//            case 10:
//                  cout<<endl<<"The gas usually filled in the electric bulb is"<<endl;
//                  cout<<"a) nitrogen"<<endl<<"b)hydrogen"<<endl<<"c)carbon dioxide"<<endl<<"d)oxygen:";
//                  cout<<endl<<"enter answer :";
//                  cin>>ch;
//                  if(ch=='a'||ch=='A')
//                    {
//                        cout<<endl<<ch <<" is correct ans"<<endl;
//                        count++;
//                    }
//                  else
//                    {
//                        cout<<endl<<ch <<" is wrong ans"<<endl;
//                        wrong++;
//                    }
//            break;
           
//            case 11:
//                  cout<<endl<<"Washing soda is the common name for"<<endl;
//                  cout<<"a) Sodium carbonate"<<endl<<"b)Calcium bicarbonate"<<endl<<"c)Sodium bicarbonate"<<endl<<"d)Calcium carbonate";
//                  cout<<endl<<"enter answer :";
//                  cin>>ch;
//                  if(ch=='a'||ch=='A')
//                    {
//                        cout<<endl<<ch <<" is correct ans"<<endl;
//                        count++;
//                    }
//                  else
//                    {
//                        cout<<endl<<ch <<" is wrong ans"<<endl;
//                        wrong++;
//                    }
//            break;
           
//            case 12:
//                  cout<<endl<<"The group of metals Fe, Co, Ni may best called as"<<endl;
//                  cout<<"a) transition metals"<<endl<<"b)main group metals"<<endl<<"c)alkali metals"<<endl<<"d)rare metals";
//                  cout<<endl<<"enter answer :";
//                  cin>>ch;
//                  if(ch=='a'||ch=='A')
//                    {
//                        cout<<endl<<ch <<" is correct ans"<<endl;
//                        count++;
//                    }
//                  else
//                    {
//                        cout<<endl<<ch <<" is wrong ans"<<endl;
//                        wrong++;
//                    }
//            break;
          
//            case 13:
//                  cout<<endl<<"Which was the 1st non Test playing country to beat India in an international match?"<<endl;
//                  cout<<"a)Canada"<<endl<<"b)Sri Lanka"<<endl<<"c)Zimbabwe"<<endl<<"d)East Africa";
//                  cout<<endl<<"enter answer :";
//                  cin>>ch;
//                  if(ch=='b'||ch=='B')
//                    {
//                        cout<<endl<<ch <<" is correct ans"<<endl;
//                        count++;
//                    }
//                  else
//                    {
//                        cout<<endl<<ch <<" is wrong ans"<<endl;
//                        wrong++;
//                    }
//            break;
//            case 14:
//                  cout<<endl<<"Who is the first Indian woman to win an Asian Games gold in 400m run?"<<endl;
//                  cout<<"a)M.L.Valsamma"<<endl<<"b)P.T.Usha"<<endl<<"c)Kamaljit Sandhu"<<endl<<"d)K.Malleshwari";
//                  cout<<endl<<"enter answer :";
//                  cin>>ch;
//                  if(ch=='c'||ch=='C')
//                    {
//                        cout<<endl<<ch <<" is correct ans"<<endl;
//                        count++;
//                    }
//                  else
//                    {
//                        cout<<endl<<ch <<" is wrong ans"<<endl;
//                        wrong++;
//                    }
//            break;
           
//            case 15:
//                  cout<<endl<<"How long are professional Golf Tour players allotted per shot?"<<endl;
//                  cout<<"a)25 seconds"<<endl<<"b)1 minute"<<endl<<"c)2 minutes"<<endl<<"d)45 seconds";
//                  cout<<endl<<"enter answer :";
//                  cin>>ch;
//                  if(ch=='d'||ch=='D')
//                    {
//                        cout<<endl<<ch <<" is correct ans"<<endl;
//                        count++;
//                    }
//                  else
//                    {
//                        cout<<endl<<ch <<" is wrong ans"<<endl;
//                        wrong++;
//                    }
//            break;
           
//            case 16:
//                  cout<<endl<<"India won its first Olympic hockey gold in...?"<<endl;
//                  cout<<"a)1928"<<endl<<"b)1932"<<endl<<"c)1936"<<endl<<"d)1948";
//                  cout<<endl<<"enter answer :";
//                  cin>>ch;
//                  if(ch=='a'||ch=='A')
//                    {
//                        cout<<endl<<ch <<" is correct ans"<<endl;
//                        count++;
//                    }
//                  else
//                    {
//                        cout<<endl<<ch <<" is wrong ans"<<endl;
//                        wrong++;
//                    }
//            break;
           
//            case 17:
//                  cout<<endl<<"In which year did Milkha Singh win the first National title in the 400 m race?"<<endl;
//                  cout<<"a)1956"<<endl<<"b)1955"<<endl<<"c)1957"<<endl<<"d)1970";
//                  cout<<endl<<"enter answer :";
//                  cin>>ch;
//                  if(ch=='c'||ch=='C')
//                    {
//                        cout<<endl<<ch <<" is correct ans"<<endl;
//                        count++;
//                    }
//                  else
//                    {
//                        cout<<endl<<ch <<" is wrong ans"<<endl;
//                        wrong++;
//                    }
//            break;
           
//            case 18:
//                  cout<<endl<<"How many times did Geet Sethi win the lBSF World Billiards title?"<<endl;
//                  cout<<"a) 2"<<endl<<"b)3"<<endl<<"c)4"<<endl<<"d)6";
//                  cout<<endl<<"enter answer :";
//                  cin>>ch;
//                  if(ch=='b'||ch=='B')
//                    {
//                        cout<<endl<<ch <<" is correct ans"<<endl;
//                        count++;
//                    }
//                  else
//                    {
//                        cout<<endl<<ch <<" is wrong ans"<<endl;
//                        wrong++;
//                    }
//            break;
           
//            case 19:
//                  cout<<endl<<"Who was the 1st ODI captain for India?"<<endl;
//                  cout<<"a) Ajit Wadekar"<<endl<<"b)Bishen Singh Bedi"<<endl<<"c)Nawab Pataudi"<<endl<<"d)Vinoo Mankad";
//                  cout<<endl<<"enter answer :";
//                  cin>>ch;
//                  if(ch=='a'||ch=='A')
//                    {
//                        cout<<endl<<ch <<" is correct ans"<<endl;
//                        count++;
//                    }
//                  else
//                    {
//                        cout<<endl<<ch <<" is wrong ans"<<endl;
//                        wrong++;
//                    }
//            break;
           
//            case 20:
//                  cout<<endl<<"Which of the following is NOT written by Munshi Premchand?"<<endl;
//                  cout<<"a)Gaban"<<endl<<"b)Godan"<<endl<<"c)Guide"<<endl<<"d)Manasorovar";
//                  cout<<endl<<"enter answer :";
//                  cin>>ch;
//                  if(ch=='c'||ch=='C')
//                    {
//                        cout<<endl<<ch <<" is correct ans"<<endl;
//                        count++;
//                    }
//                  else
//                    {
//                        cout<<endl<<ch <<" is wrong ans"<<endl;
//                        wrong++;
//                    }
//            break;
           
//            case 21:
//                  cout<<endl<<"In India the first television programme was broadcasted in"<<endl;
//                  cout<<"a)1959"<<endl<<"b)1965"<<endl<<"c)1976"<<endl<<"d)1957";
//                  cout<<endl<<"enter answer :";
//                  cin>>ch;
//                  if(ch=='a'||ch=='A')
//                    {
//                        cout<<endl<<ch <<" is correct ans"<<endl;
//                        count++;
//                    }
//                  else
//                    {
//                        cout<<endl<<ch <<" is wrong ans"<<endl;
//                        wrong++;
//                    }
//            break;
           
//            case 22:
//                  cout<<endl<<"Who wrote 'War and Peace'?"<<endl;
//                  cout<<"a) Leo Tolstoy"<<endl<<"b)Mahatma Gandhi"<<endl<<"c)Charles Dickens"<<endl<<"d)Kipling";
//                  cout<<endl<<"enter answer :";
//                  cin>>ch;
//                  if(ch=='b'||ch=='B')
//                    {
//                        cout<<endl<<ch <<" is correct ans"<<endl;
//                        count++;
//                    }
//                  else
//                    {
//                        cout<<endl<<ch <<" is wrong ans"<<endl;
//                        wrong++;
//                    }
//            break;
           
//            case 23:
//                  cout<<endl<<"Who directed the film '1942: A love story'?"<<endl;
//                  cout<<"a)Yash Chopra"<<endl<<"b)Mahesh Bhatt"<<endl<<"c)Vidhu Vinod Chopra"<<endl<<"d)Ketan Mehta";
//                  cout<<endl<<"enter answer :";
//                  cin>>ch;
//                  if(ch=='c'||ch=='C')
//                    {
//                        cout<<endl<<ch <<" is correct ans"<<endl;
//                        count++;
//                    }
//                  else
//                    {
//                        cout<<endl<<ch <<" is wrong ans"<<endl;
//                        wrong++;
//                    }
//            break;
           
//            case 24:
//                  cout<<endl<<"'OS' computer abbreviation usually means ?"<<endl;
//                  cout<<"a)Order of Significance"<<endl<<"b)Open Software"<<endl<<"c)Optical Sensor"<<endl<<"d)Operating System";
//                  cout<<endl<<"enter answer :";
//                  cin>>ch;
//                  if(ch=='d'||ch=='D')
//                    {
//                        cout<<endl<<ch <<" is correct ans"<<endl;
//                        count++;
//                    }
//                  else
//                    {
//                        cout<<endl<<ch <<" is wrong ans"<<endl;
//                        wrong++;
//                    }
//            break;
           
//            case 25:
//                  cout<<endl<<"Who developed Yahoo mail?"<<endl;
//                  cout<<"a) Dennis Ritchie & Ken Thompson"<<endl<<"b)David Filo & Jerry Yang"<<endl;
//                  cout<<"c)Vint Cerf & Robert Kahn"<<endl<<"d)Steve Case & Jeff Bezos";
//                  cout<<endl<<"enter answer :";
//                  cin>>ch;
//                  if(ch=='b'||ch=='B')
//                    {
//                        cout<<endl<<ch <<" is correct ans"<<endl;
//                        count++;
//                    }
//                  else
//                    {
//                        cout<<endl<<ch <<" is wrong ans"<<endl;
//                        wrong++;
//                    }
//            break;
           
//            case 26:
//                  cout<<endl<<"The headquarters of the UNESCO is at"<<endl;
//                  cout<<"a) Rome"<<endl<<"b)Geneva"<<endl<<"c)New York"<<endl<<"d)Paris";
//                  cout<<endl<<"enter answer :";
//                  cin>>ch;
//                  if(ch=='d'||ch=='D')
//                    {
//                        cout<<endl<<ch <<" is correct ans"<<endl;
//                        count++;
//                    }
//                  else
//                    {
//                        cout<<endl<<ch <<" is wrong ans"<<endl;
//                        wrong++;
//                    }
//            break;
           
//            case 27:
//                  cout<<endl<<"Journalist Day was celebrated for the first time all over the country on"<<endl;
//                  cout<<"a) Oct. 20, 1984"<<endl<<"b)Oct 28, 1984"<<endl<<"c)Oct. 1, 1984"<<endl<<"d)Oct. 8, 1984";
//                  cout<<endl<<"enter answer :";
//                  cin>>ch;
//                  if(ch=='b'||ch=='B')
//                    {
//                        cout<<endl<<ch <<" is correct ans"<<endl;
//                        count++;
//                    }
//                  else
//                    {
//                        cout<<endl<<ch <<" is wrong ans"<<endl;
//                        wrong++;
//                    }
//            break;
           
//            case 28:
//                  cout<<endl<<"Who is the first Asian Winner of Nobel Prize?"<<endl;
//                  cout<<"a) Rabindranath Tagore"<<endl<<"b)Rajiv Gandhi"<<endl<<"c)Mother Teresa"<<endl<<"d)C. V. Raman";
//                  cout<<endl<<"enter answer :";
//                  cin>>ch;
//                  if(ch=='a'||ch=='A')
//                    {
//                        cout<<endl<<ch <<" is correct ans"<<endl;
//                        count++;
//                    }
//                  else
//                    {
//                        cout<<endl<<ch <<" is wrong ans"<<endl;
//                        wrong++;
//                    }
//            break;
           
//            case 29:
//                  cout<<endl<<"Who among the following has received a Nobel Prize in literature 1953?"<<endl;
//                  cout<<"a)Ernest Hemingway"<<endl<<"b)Derek Walcott"<<endl<<"c)Winston Churchill"<<endl<<"d)Pablo Neruda";
//                  cout<<endl<<"enter answer :";
//                  cin>>ch;
//                  if(ch=='c'||ch=='C')
//                    {
//                        cout<<endl<<ch <<" is correct ans"<<endl;
//                        count++;
//                    }
//                  else
//                    {
//                        cout<<endl<<ch <<" is wrong ans"<<endl;
//                        wrong++;
//                    }
//            break;
           
//            case 30:
//                  cout<<endl<<"The Nobel peace prize is awarded in which city?"<<endl;
//                  cout<<"a) Oslo"<<endl<<"b)Stockholm"<<endl<<"c)Brussels"<<endl<<"d)Geneva";
//                  cout<<endl<<"enter answer :";
//                  cin>>ch;
//                  if(ch=='a'||ch=='A')
//                    {
//                        cout<<endl<<ch <<" is correct ans"<<endl;
//                        count++;
//                    }
//                  else
//                    {
//                        cout<<endl<<ch <<" is wrong ans"<<endl;
//                        wrong++;
//                    }
//            break;
    
//           default:
//           cout<<endl<<"invalid input ";
//        }

//    }
 
// }cout<<endl<<"your wrong answer :"<<wrong;
//  cout<<endl<<"your correct answers :"<<count<<endl;

// }

// }































































































































































































// // #include<iostream>
// // #include<time.h>
// // using namespace std;
// // int main()
// // {   int ch ,n;
// //     char play; 
// //     cout<<"writeen paly for start :-";
// //      cin>>n;
// //      if(n!=0){
// //       cout<<"wrong word";
// //      }
// //      else{
// //     // srand( time(0) );
// //     srand(50);
// //     for( int i=0;i<5;i++)
// //      int dice;
// //     int roll;
// //     roll=rand()%26+1;
// //     cout<<"your number:- "<<  roll;
// //      }
// // }
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
// //  // // int main() {
// // // //     // Define our quiz questions#include <string>

// // // // struct QuizQuestion {
// // // //     std::string question;
// // // //     std::string answer;
// // // // };
// // // //     QuizQuestion questions[] = {
// // // //         {"What is the capital of France?", "Paris"},
// // // //         {"What is the largest planet in our solar system?", "Jupiter"},
// // // //         // Add more questions here...
// // // //     };
// // // //     int numQuestions = sizeof(questions) / sizeof(questions[0]);

// // //     // Shuffle the questions
// // //     shuffleQuestions(questions, numQuestions);

// // //     // Display the quiz questions
// // //     for (int i = 0; i < numQuestions; i++) {
// // //         std::cout << "Question: " << questions[i].question << std::endl;
// // //         std::cout << "Answer: " << questions[i].answer << std::endl;
// // //         std::cout << std::endl;
// // //     }

// // //     return 0;
// // // }int main() {
// // //     // Define our quiz questions
// // //     QuizQuestion questions[] = {
// // //         {"What is the capital of France?", "Paris"},
// // //         {"What is the largest planet in our solar system?", "Jupiter"},
// // //         // Add more questions here...
// // //     };
// // //     int numQuestions = sizeof(questions) / sizeof(questions[0]);

// // //     // Shuffle the questions
// // //     shuffleQuestions(questions, numQuestions);

// // //     // Display the quiz questions
// // //     for (int i = 0; i < numQuestions; i++) {
// // //         std::cout << "Question: " << questions[i].question << std::endl;
// // //         std::cout << "Answer: " << questions[i].answer << std::endl;
// // //         std::cout << std::endl;
// // //     }

// // //     return 0;
// // // }