#include<iostream>
using namespace std;
int main(){
    char name[20];
    cout<<"Enter a string"<<endl;
    cin>>name;
    int length=0;
    for(int i=0;i<20;i++){
        if(name[i]=='\0'){
            break;
        }
        length++;
    }
    cout<<length;

    return 0;
}