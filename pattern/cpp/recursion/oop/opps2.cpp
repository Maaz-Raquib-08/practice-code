#include<iostream>
using namespace std;
class king{
    public:
    king(){
        cout<<" maaz is a king"<<endl;
    }


};
int main(){
    cout<<" hi"<<endl;
    // this called is cereated statically
    king  maaz;
    cout<<" hello"<<endl;
    // this called is cereated dynamically
    // isko adress se dekhte h
    
    king *h=new king;

}