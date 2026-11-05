#include <iostream>
#include <vector>
#include <string>
#include <cctype> // for tolower function
#include <algorithm> // for std::remove

struct Question {
    std::string question;
    std::string answer;
};

// Function to remove leading and trailing whitespace from a string
std::string trim(const std::string& str) {
    size_t first = str.find_first_not_of(' ');
    if (std::string::npos == first)
        return str;
    size_t last = str.find_last_not_of(' ');
    return str.substr(first, (last - first + 1));
}

int main() {
    std::vector<Question> questions = {
        {"Who is the PM of India?", "Narendra Modi"},
        {"What is the capital of India?", "New Delhi"},
        // ...
    };

    std::string play;
    std::cout << "written play for start :-" << std::endl;
    std::cin >> play;

    play = trim(play); // remove leading and trailing whitespace
    for(int i = 0; i < play.length(); i++) {
        play[i] = tolower(play[i]); // convert to lowercase
    }

    if(play == "play") {
        int count = 0;
        int wrong = 0;

        for (int i = 0; i < questions.size(); i++) {
            std::cout << questions[i].question << std::endl;
            std::string answer;
            std::cin >> answer;

            if (answer == questions[i].answer) {
                count++;
            } else {
                wrong++;
            }
        }

        std::cout << "Correct answers: " << count << std::endl;
        std::cout << "Incorrect answers: " << wrong << std::endl;
    } else {
        std::cout << "Invalid" << std::endl;
    }

    return 0;
}// #include <iostream>
// #include <ctime>
// #include <cstdlib>

// using namespace std;

// int main() {
//     srand(time(0)); // seed for random number generation

//     int questionType; // variable to store the type of question
//     string question; // variable to store the question
//     string answer; // variable to store the answer

//     // loop to generate multiple questions
//     for (int i = 0; i < 5; i++) {
//         questionType = rand() % 3 + 1; // generate a random question type (1, 2, or 3)

//         switch (questionType) {
//             case 1: // biology question
//                 question = "What is the process by which plants make their own food?";
//                 answer = "Photosynthesis";
//                 break;
//             case 2: // chemistry question
//                 question = "What is the symbol for gold on the periodic table?";
//                 answer = "Au";
//                 break;
//             case 3: // physics question
//                 question = "What is the force that opposes motion?";
//                 answer = "Friction";
//                 break;
//         }

//         // display the question and answer
//         cout << "Question " << i + 1 << ": " << question << endl;
//         cout << "Answer: " << answer << endl << endl;
//     }

//     return 0;
// }// #include<iostream>
// // #include<time.h>
// // #include<string>
// // using namespace std;

// // int main(){
// //   {
// //   char play[5];
// //   cout<<"written play for start :-"<<endl;
// //   cin>>play;
     
// //   int count=0,wrong=0;
// //   char ch,cha[5];
// //   char quit;
// //   bool playAgain = true;

// //   while (playAgain) {
// //     for(int i=0;i<5;i++)
// //     {
// //       char next[5];
// //       cout<<"written next for next question :-"<<endl;
// //       cin>>next;
// //       if(next!=next){
// //         cout<<"invalid word"<<endl;
// //       }
// //       if(next==next){
// //         srand( time(NULL) );
// //         int dice=3;
// //         int roll=0;
// //         roll=rand()%3+1;
// //         // cout<<"your number:- "<< roll;
// //         cout<<"";
       
// //         if (roll==0)
// //           break;
        
// //         switch(roll)
// //         {
// //           case 1:
// //                  cout<<endl<<"who is PM of India"<<endl;
// //                  cout<<"a)Amit shah"<<endl<<"b)Narendra Modi"<<endl<<"c)Jaishah"<<endl<<"d)none";
// //                  cout<<endl<<"enter answer :";
// //                  cin>>ch;
// //                  if(ch=='b')
// //                    {
// //                        cout<<endl<<ch <<" is correct ans";
// //                        count++;
                      
// //                    }
// //                  else
// //                    {
// //                        cout<<endl<<ch <<" is wrong ans";
// //                        wrong++;
// //                    }
// //            break;

// //            case 2:
// //                  cout<<endl<<"set of program is known as :"<<endl;
// //                  cout<<"a)intstruction"<<endl<<"b)high level language"<<endl<<"c)structured program"<<endl<<"d)software";
// //                  cout<<endl<<"enter answer :";
// //                  cin>>ch;
// //                  if(ch=='d')
// //                    {
// //                        cout<<endl<<ch <<" is correct ans";
// //                        count++;
                       
// //                    }
// //                  else
// //                    {
// //                        cout<<endl<<ch <<" is wrong ans";
// //                        wrong++;
// //                    }
// //            break;

// //            case 3:
// //                  cout<<endl<<"what everyone liked the most"<<endl;
// //                  cout<<"a)hostel ka khana"<<endl<<"b)bahar ka khana"<<endl<<"c)ghar ka khana"<<endl<<"d)none";
// //                  cout<<endl<<"enter answer :";
// //                  cin>>ch;
// //                  if(ch=='b'||ch=='c')
// //                    {
// //                        cout<<endl<<ch <<" is correct ans";
// //                        count++;
                       
// //                    }
// //                  else
// //                    {
// //                        cout<<endl<<ch <<" is wrong ans";
// //                        wrong++;
// //                    }
// //            break;

// //            case 4:
// //                  cout<<endl<<"which is access specifier"<<endl;
// //                  cout<<"a) # (hash)"<<endl<<"b)iostream"<<endl<<"c)include"<<endl<<"d)protected:";
// //                  cout<<endl<<"enter answer :";
// //                  cin>>ch;
// //                  if(ch=='d')
// //                    {
// //                        cout<<endl<<ch <<" is correct ans";
// //                        count++;
                       
// //                    }
// //                  else
// //                    {
// //                        cout<<endl<<ch <<" is wrong ans";
// //                        wrong++;
// //                    }
// //            break;

           
        
// //           default:
// //           cout<<endl<<"invalid input ";
          
// //         }  

// //       }
// //     }
// //     cout<<endl<<"your wrong answer :"<<wrong;
// //     cout<<endl<<"your correct answers :"<<count;

// //     cout << "Do you want to play again? (y/n): ";
// //     cin >> quit;
// //     if (quit == 'n' || quit == 'N') {
// //       playAgain = false;
// //     } else {
// //       count = 0;
// //       wrong = 0;
// //     }
// //   }

// //   return 0;
// // }
// // }// #include<iostream>
// // // #include<time.h>
// // // #include<string>
// // // using namespace std;

// // // int main(){
// // //   {
// // //   char play[5];
// // //   cout<<"written play for start :-"<<endl;
// // //   cin>>play;
     
// // //   int count=0,wrong=0;
// // //   char ch,cha[5];
// // //   char quit;
// // //   bool playAgain = true;

// // //   while (playAgain) {
// // //     for(int i=0;i<5;i++)
// // //     {
// // //       char next[5];
// // //       cout<<"written next for next question :-"<<endl;
// // //       cin>>next;
// // //       if(next!=next){
// // //         cout<<"invalid word"<<endl;
// // //       }
// // //       if(next==next){
// // //         srand( time(NULL) );
// // //         int dice=3;
// // //         int roll=0;
// // //         roll=rand()%3+1;
// // //         // cout<<"your number:- "<< roll;
// // //         cout<<"";
       
// // //         if (roll==0)
// // //           break;
        
// // //         switch(roll)
// // //         {
// // //           case 1:
// // //                  cout<<endl<<"who is PM of India"<<endl;
// // //                  cout<<"a)Amit shah"<<endl<<"b)Narendra Modi"<<endl<<"c)Jaishah"<<endl<<"d)none";
// // //                  cout<<endl<<"enter answer :";
// // //                  cin>>ch;
// // //                  if(ch=='b')
// // //                    {
// // //                        cout<<endl<<ch <<" is correct ans";
// // //                        count++;
                      
// // //                    }
// // //                  else
// // //                    {
// // //                        cout<<endl<<ch <<" is wrong ans";
// // //                        wrong++;
// // //                    }
// // //            break;

// // //            case 2:
// // //                  cout<<endl<<"set of program is known as :"<<endl;
// // //                  cout<<"a)intstruction"<<endl<<"b)high level language"<<endl<<"c)structured program"<<endl<<"d)software";
// // //                  cout<<endl<<"enter answer :";
// // //                  cin>>ch;
// // //                  if(ch=='d')
// // //                    {
// // //                        cout<<endl<<ch <<" is correct ans";
// // //                        count++;
                       
// // //                    }
// // //                  else
// // //                    {
// // //                        cout<<endl<<ch <<" is wrong ans";
// // //                        wrong++;
// // //                    }
// // //            break;

// // //            case 3:
// // //                  cout<<endl<<"what everyone liked the most"<<endl;
// // //                  cout<<"a)hostel ka khana"<<endl<<"b)bahar ka khana"<<endl<<"c)ghar ka khana"<<endl<<"d)none";
// // //                  cout<<endl<<"enter answer :";
// // //                  cin>>ch;
// // //                  if(ch=='b'||ch=='c')
// // //                    {
// // //                        cout<<endl<<ch <<" is correct ans";
// // //                        count++;
                       
// // //                    }
// // //                  else
// // //                    {
// // //                        cout<<endl<<ch <<" is wrong ans";
// // //                        wrong++;
// // //                    }
// // //            break;

// // //            case 4:
// // //                  cout<<endl<<"which is access specifier"<<endl;
// // //                  cout<<"a) # (hash)"<<endl<<"b)iostream"<<endl<<"c)include"<<endl<<"d)protected:";
// // //                  cout<<endl<<"enter answer :";
// // //                  cin>>ch;
// // //                  if(ch=='d')
// // //                    {
// // //                        cout<<endl<<ch <<" is correct ans";
// // //                        count++;
                       
// // //                    }
// // //                  else
// // //                    {
// // //                        cout<<endl<<ch <<" is wrong ans";
// // //                        wrong++;
// // //                    }
// // //            break;

           
        
// // //           default:
// // //           cout<<endl<<"invalid input ";
          
// // //         }  

// // //       }
// // //     }
// // //     cout<<endl<<"your wrong answer :"<<wrong;
// // //     cout<<endl<<"your correct answers :"<<count;

// // //     cout << "Do you want to play again? (y/n): ";
// // //     cin >> quit;
// // //     if (quit == 'n' || quit == 'N') {
// // //       playAgain = false;
// // //     } else {
// // //       count = 0;
// // //       wrong = 0;
// // //     }
// // //   }

// // //   return 0;
// // // }
// // // }// #include <iostream>
// // // // #include <cstdlib>
// // // // #include <ctime>
// // // // #include <string>

// // // // // Structure to represent a science question
// // // // struct ScienceQuestion {
// // // //     std::string question;
// // // //     std::string answer;
// // // // };

// // // // // Function to generate a random number between min and max
// // // // int getRandomNumber(int min, int max) {
// // // //     return min + (rand() % (max - min + 1));
// // // // }

// // // // // Function to generate a random science question
// // // // void generateQuestion(ScienceQuestion questions[], int size) {
// // // //     int questionIndex = getRandomNumber(0, size - 1);
// // // //     std::cout << questions[questionIndex].question << " ";
// // // // }

// // // // int main() {
// // // //     srand(time(0)); // Seed the random number generator

// // // //     // Predefined set of science questions and answers
// // // //     ScienceQuestion questions[] = {
// // // //         {"What is the largest planet in our solar system?", "Jupiter"},
// // // //         {"What is the process by which plants make their own food?", "Photosynthesis"},
// // // //         {"What is the largest living species of lizard?", "Komodo dragon"},
// // // //         {"What is the scientific term for the study of the structure of the Earth?", "Geology"},
// // // //         {"What is the process by which water moves through a plant?", "Transpiration"}
// // // //     };

// // // //     int size = sizeof(questions) / sizeof(questions[0]);

// // // //     int numQuestions;
// // // //     std::cout << "How many questions would you like to generate? ";
// // // //     std::cin >> numQuestions;

// // // //     for (int i = 0; i < numQuestions; i++) {
// // // //         generateQuestion(questions, size);
// // // //         std::string answer;
// // // //         std::cin >> answer;

// // // //         // Check if the user's answer is correct
// // // //         int questionIndex = getRandomNumber(0, size - 1);
// // // //         if (answer == questions[questionIndex].answer) {
// // // //             std::cout << "Correct!" << std::endl;
// // // //         } else {
// // // //             std::cout << "Incorrect. The correct answer is " << questions[questionIndex].answer << std::endl;
// // // //         }
// // // //     }

// // // //     return 0;
// // // // }// #include <iostream>
// // // // // #include <cstdlib>
// // // // // #include <ctime>
// // // // // #include <string>
// // // // // #include <vector>

// // // // // // Structure to represent a science question
// // // // // struct ScienceQuestion {
// // // // //     std::string question;
// // // // //     std::string answer;
// // // // // };

// // // // // // Function to generate a random number between min and max
// // // // // int getRandomNumber(int min, int max) {
// // // // //     return min + (rand() % (max - min + 1));
// // // // // }

// // // // // // Function to generate a random science question
// // // // // void generateQuestion(std::vector<ScienceQuestion>& questions) {
// // // // //     int questionIndex = getRandomNumber(0, questions.size() - 1);
// // // // //     std::cout << questions[questionIndex].question << " ";
// // // // // }

// // // // // int main() {
// // // // //     srand(time(0)); // Seed the random number generator

// // // // //     // Predefined set of science questions and answers
// // // // //     std::vector<ScienceQuestion> questions = {
// // // // //         {"What is the largest planet in our solar system?", "Jupiter"},
// // // // //         {"What is the process by which plants make their own food?", "Photosynthesis"},
// // // // //         {"What is the largest living species of lizard?", "Komodo dragon"},
// // // // //         {"What is the scientific term for the study of the structure of the Earth?", "Geology"},
// // // // //         {"What is the process by which water moves through a plant?", "Transpiration"}
// // // // //     };

// // // // //     int numQuestions;
// // // // //     std::cout << "How many questions would you like to generate? ";
// // // // //     std::cin >> numQuestions;

// // // // //     for (int i = 0; i < numQuestions; i++) {
// // // // //         generateQuestion(questions);
// // // // //         std::string answer;
// // // // //         std::cin >> answer;

// // // // //         // Check if the user's answer is correct
// // // // //         int questionIndex = getRandomNumber(0, questions.size() - 1);
// // // // //         if (answer == questions[questionIndex].answer) {
// // // // //             std::cout << "Correct!" << std::endl;
// // // // //         } else {
// // // // //             std::cout << "Incorrect. The correct answer is " << questions[questionIndex].answer << std::endl;
// // // // //         }
// // // // //     }

// // // // //     return 0;
// // // // // }