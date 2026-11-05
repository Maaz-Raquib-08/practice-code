#include<iostream>
using namespace std;
class maaz{
     private:
    int highet;

    public:
    char name;
    // private:
    // int highet;
     int gethighet(){
       return highet;
      }
     // void setname(char ch){
      //  name= ch;
     // }
     void sethighet(int h){
       highet=h;
     }
       void setname(char ch){
        name= ch;
     }
   };
    int main(){
        maaz b;
        b.sethighet(90);
        b.setname ('r');
        cout<<"name is"<<b.name<<endl;
        cout<<" highet is"<<b.gethighet()<<endl;
         
         maaz *c =new maaz;
        //  c->sethighet('70');
         c->setname('m');
         c->sethighet(70);
         cout<<" name is "<<(*c).name<<endl;
         cout<<" highet is"<<(*c).gethighet()<<endl;
    }

