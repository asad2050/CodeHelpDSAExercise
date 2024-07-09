#include<iostream>
using namespace std;
int main(){
    int amt;
 cout<<"Enter the total amount";
    cin>>amt;
    int hCount=0,fCount=0,tCount=0,oCount=0;
        switch (1)
        {
        case 1:  
                if(amt%100!=amt){
                    hCount= amt/100;
                amt=amt%100;
                }
         case 2:  
                if(amt%50!=amt){
                fCount= amt/50;
                amt=amt%50;
                }
       case 3: 
                    
                if(amt%20!=amt){
                    tCount= amt/20;
                    amt=amt%20;
                }
        case 4:  oCount = amt;
                     amt%=1;

        default:
            break;
        }
        cout<<"100 notes :"<<hCount<<endl;
        cout<<"50 note :"<<fCount<<endl;
        cout<<"20 notes :"<<tCount<<endl;
        cout<<"1 notes :"<<oCount<<endl;
    return 0;
}