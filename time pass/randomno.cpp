#include<iostream>
#include<time.h>
using namespace std;
int main()
{
    srand( time(NULL) );
    int dice=5;
    int roll=0;
    roll=rand()%6+1;
    cout<<"your number:- "<<  roll;
}