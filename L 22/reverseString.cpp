#include<iostream>
using namespace std;

void rev(char name[],int n){
    int s=0;
    int e=n-1;
    while(s<e){
        int temp = name[s];
        name[s]= name[e];
        name[e]=temp;
        s++;
        e--;
    }

}   
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
    cout<<length<<endl;
    // char rev[length+1];

    // for(int i=0;i<length;i++){
    //     rev[i]= name[length-1-i];
    // }
    // rev[length]='\0';
    // cout<<rev;
    rev(name,length);
    cout<<name;
    return 0;
}
