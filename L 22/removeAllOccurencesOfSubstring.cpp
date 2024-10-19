 #include<string>
#include<iostream>
 using namespace std;

      string removeOccurrences(string s, string part) {
        int i=0;
        int j=0;
        int n= s.length();
        int m = part.length( );
        cout<<n <<" "<<m<<endl;
        int start =0;
        while(s.length()!=0){
              cout<<s[i]<<i<<' '<<part[j]<<j<<endl;
            if(s[i]==part[j]){
                if(j==0){
                    start=i;

                }
                 if (j<m){
                    i++;
                    j++;
                }  if(j==m){
                 s=       s.erase(start,m);  

                        j=0;
                        i=0;
                }
            }
            if(s[i]!=part[j]){
                if(j>0){
                j=0;

                }
                else if(j){
                    i++;
                }
            }
         
        }
         s;
    }
int main(){
    string s="kpygkivtlqoockpygkivtlqoocssnextkqzjpycbylkaondsskpygkpygkivtlqoocssnextkqzjpkpygkivtlqoocssnextkqzjpycbylkaondsycbylkaondskivtlqoocssnextkqzjpycbylkaondssnextkqzjpycbylkaondshijzgaovndkjiiuwjtcpdpbkrfsi";
    string part="kpygkivtlqoocssnextkqzjpycbylkaonds";
    removeOccurrences(s,part);
    return 0;
}
