 #include<iostream>
using namespace std;
int main(){
    int n,m;
    cout<<"enter the number";
    cin>>n;
    cout<<"enter the second number";
    cin>>m;
    int first=n;
    int last=m;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            if((i==first&&i==last)||(j==first&&j==last))
            cout<<"* ";
            else
            cout<<"  ";

        }
        cout<<endl;
    }
}