#include<iostream>

#include<conio.h>

#include<cstdlib>

#include<windows.h>

using namespace std;

struct student{

	char nam[20],rollno[20];

	int marks,random;

};

student st;
void cppp(){

	int i=0,arr[6];

	st.marks=0;

	char choice;

	while(i<5){

	back:	

	st.random=rand()%6;

	for(int j=0;j<=6;j++){

		if(st.random==arr[j]){

			goto back;

		}

	}

	arr[i]=st.random;

	switch(st.random)

    {

    case 0:

	cout<<i+1<<") What is a correct syntax to output \"Hello World\" in C++?"<<endl;

	cout<<"A. System.out.println(\"Hello world\");"<<endl;

	cout<<"B. Console.WriteLine(\"Hello world\");"<<endl;

	cout<<"C. print(\"Hello world\");"<<endl;

	cout<<"D. cout<<\"Hello world\";"<<endl;

	choice=getch();

	if(choice=='D'||choice=='d'){

		cout<<choice<<" is correct Answer"<<endl<<endl;

		st.marks++;

	}

	else{

		cout<<choice<<" is incorrect Answer"<<endl;

		cout<<"The corrent answer is d"<<endl<<endl;

	}

	break;

	case 1:

	cout<<i+1<<") Which of the following is called address operator?"<<endl;

	cout<<"a) *"<<endl;

	cout<<"b) &"<<endl;

	cout<<"c) _"<<endl;

	cout<<"d) %"<<endl;

	choice=getch();

	if(choice=='B'||choice=='b'){

		cout<<choice<<" is correct Answer"<<endl<<endl;

		st.marks++;

	}

	else{

		cout<<choice<<" is incorrect Answer"<<endl;

		cout<<"The corrent answer is b"<<endl<<endl;

	}

	break;

	case 2:

	cout<<i+1<<") Which of the following is used for comments in C++?"<<endl;

	cout<<"a) // comment"<<endl;

	cout<<"b) /* comment */"<<endl;

	cout<<"c) both // comment or /* comment */"<<endl;

	cout<<"d) // comment */"<<endl;

	choice=getch();

	if(choice=='c'||choice=='C'){

		cout<<choice<<" is correct Answer"<<endl<<endl;

		st.marks++;

	}

	else{

		cout<<choice<<" is incorrect Answer"<<endl;

		cout<<"The corrent answer is c"<<endl<<endl;

	}

	break;

	case 3:

	cout<<i+1<<") Who created C++?"<<endl;

	cout<<"a) Bjarne Stroustrup"<<endl;

	cout<<"b) Dennis Ritchie"<<endl;

	cout<<"c) Ken Thompson"<<endl;

	cout<<"d) Brian Kernighan"<<endl;

	choice=getch();

	if(choice=='A'||choice=='a'){

		cout<<choice<<" is correct Answer"<<endl<<endl;

		st.marks++;

	}

	else{

		cout<<choice<<" is incorrect Answer"<<endl;

		cout<<"The corrent answer is a"<<endl<<endl;

	}

	break;

	case 4:

	cout<<i+1<<")  A language which has the capability to generate new data types are called"<<endl;

	cout<<"a) Extensible"<<endl;

	cout<<"b) Overloaded"<<endl;

	cout<<"c) Encapsulated"<<endl;

	cout<<"d) Reprehensible"<<endl;

	choice=getch();

	if(choice=='A'||choice=='a'){

		cout<<choice<<" is correct Answer"<<endl<<endl;

		st.marks++;

	}

	else{

		cout<<choice<<" is incorrect Answer"<<endl;

		cout<<"The corrent answer is a"<<endl<<endl;

	}

	break;

	case 5:

	cout<<i+1<<") Which of the following is called insertion/put to operator?"<<endl;

	cout<<"a) <"<<endl;

	cout<<"b) >"<<endl;

	cout<<"c) <<"<<endl;

	cout<<"d) >>"<<endl;

	choice=getch();

	if(choice=='c'||choice=='C'){

		cout<<choice<<" is correct Answer"<<endl<<endl;

		st.marks++;

	}

	else{

		cout<<choice<<" is incorrect Answer"<<endl<<endl;

		cout<<"The corrent answer is c"<<endl;

	}

	break;

	case 6:

	cout<<i+1<<") Which of the following is called extraction/get from operator?"<<endl;

	cout<<"a) <"<<endl;

	cout<<"b) >"<<endl;

	cout<<"c) <<"<<endl;

	cout<<"d) >>"<<endl;

	choice=getch();

	if(choice=='d'||choice=='D'){

		cout<<choice<<" is correct Answer"<<endl<<endl;

		st.marks++;

	}

	else{

		cout<<choice<<" is incorrect Answer"<<endl;

		cout<<"The corrent answer is d"<<endl<<endl;

	}

	break;

    }

    i++;

    

}

	

}

void java(){

	//just copy cppp function code, paste here

	//repace cpp questions to java questions 

}

void html(){

	//just copy cppp function code, paste here

	//repace cpp questions to html questions 

}

void result(){

	

	float percentage=0;

	cout<<"Student Name: "<<st.nam<<endl;

	cout<<"Roll no: "<<st.rollno<<endl;

	cout<<"Marks: "<<st.marks<<" out of 6"<<endl;

	percentage=100*st.marks/6;

	cout<<"Percentage: "<<percentage<<"%"<<endl;

	if(percentage>=50){

		cout<<"Status: Pass"<<endl;

	}

	else {

	cout<<"Status: Fail"<<endl;

    }

}



main(){

	char press,select;

	do

	{

	cout<<"\n\n\t\t****************"<<endl;

	cout<<"\t\t  QUIZ SYSTEM"<<endl;

	cout<<"\t\t****************"<<endl;

	cout<<"\t\tEnter name: ";

	gets(st.nam);

	cout<<"\t\tEnter rollno: ";

	gets(st.rollno);

	system("CLS");

	cout<<"\t\tMarks less than 50% will be fail"<<endl;

	cout<<"\n\nSelect option which subject's quiz you want to perform"<<endl;

	cout<<"1) C++"<<endl;

	cout<<"2) Java"<<endl;

	cout<<"3) Html"<<endl;

	select=getch();

	system("CLS");

	switch(select){

		case '1':

			cout<<"\t\tC++ Quiz"<<endl;

			cppp();

			system("CLS");

			cout<<"\t\tC++ Quiz Result"<<endl;

			result();

			break;

		case '2':

			cout<<"\t\tJava Quiz"<<endl;

		    java();

		    system("CLS");

		    cout<<"\t\tJava Quiz Result"<<endl;

		    result();

		    break;

		case '3':

			cout<<"\t\tHtml Quiz"<<endl;

			html();

			system("CLS");

			cout<<"\t\tHtml Quiz Result"<<endl;

			result();

			break;

		default:

			cout<<"Invalid input"<<endl;

			break;

	}

	cout<<"Press y if you want to continue or any key to terminate"<<endl;

	press=getch();

	system("CLS");

   }while(press=='y'||press=='Y');

}



























































































































































































































































































































// #include<iostream>
// #include<time.h>
// using namespace std;
// int main(){
//    int n;
//    char play;
//     cout<<"writeen 00 for start :-";
//      cin>>n;
//      if(n!=0){
//       cout<<"wrong word";
//      }
//      else{
// //  srand( time(NULL) );
// //     int dice=3;
// //     int roll=0;
// //     roll=rand()%3+1;
// //      cout<<"your number:- "<< roll;
    
     

// {
//     int count=0,wrong=0;
//     char ch,cha[5];
//   for(int i=0;i<10;i++)
//   {
       
    
//     //    cout<<endl<<"enter any number between 1 to 10 for enter the quiz" << endl<<"             or "<<endl ;
//     //    cout<<"enter zero to quite the quiz :";
//     //    cin>>n;

//        if (roll==0)
//        break;
        
    
//        switch(roll)
//         {
//            case 1:
//                  cout<<endl<<"who is PM of India"<<endl;
//                  cout<<"a)Amit shah"<<endl<<"b)Narendra Modi"<<endl<<"c)Jaishah"<<endl<<"d)none";
//                  cout<<endl<<"enter answer :";
//                  cin>>ch;
//                  if(ch=='b')
//                    {
//                        cout<<endl<<ch <<" is correct ans";
//                        count++;
                      
//                    }
//                  else
//                    {
//                        cout<<endl<<ch <<" is wrong ans";
//                        wrong++;
//                    }
//            break;

//            case 2:
//                  cout<<endl<<"set of program is known as :"<<endl;
//                  cout<<"a)intstruction"<<endl<<"b)high level language"<<endl<<"c)structured program"<<endl<<"d)software";
//                  cout<<endl<<"enter answer :";
//                  cin>>ch;
//                  if(ch=='d')
//                    {
//                        cout<<endl<<ch <<" is correct ans";
//                        count++;
                       
//                    }
//                  else
//                    {
//                        cout<<endl<<ch <<" is wrong ans";
//                        wrong++;
//                    }
//            break;

//            case 3:
//                  cout<<endl<<"what everyone liked the most"<<endl;
//                  cout<<"a)hostel ka khana"<<endl<<"b)bahar ka khana"<<endl<<"c)ghar ka khana"<<endl<<"d)none";
//                  cout<<endl<<"enter answer :";
//                  cin>>ch;
//                  if(ch=='b'||ch=='c')
//                    {
//                        cout<<endl<<ch <<" is correct ans";
//                        count++;
                       
//                    }
//                  else
//                    {
//                        cout<<endl<<ch <<" is wrong ans";
//                        wrong++;
//                    }
//            break;

//            case 4:
//                  cout<<endl<<"which is access specifier"<<endl;
//                  cout<<"a) # (hash)"<<endl<<"b)iostream"<<endl<<"c)include"<<endl<<"d)protected:";
//                  cout<<endl<<"enter answer :";
//                  cin>>ch;
//                  if(ch=='d')
//                    {
//                        cout<<endl<<ch <<" is correct ans";
//                        count++;
                       
//                    }
//                  else
//                    {
//                        cout<<endl<<ch <<" is wrong ans";
//                        wrong++;
//                    }
          
           
        
//           default:
//           cout<<endl<<"invalid input ";
          
//        }

//    }
//  cout<<endl<<"your wrong answer :"<<wrong;
//  cout<<endl<<"your correct answers :"<<count;

// }
// }

// }
