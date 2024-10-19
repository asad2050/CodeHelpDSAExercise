#include <bits/stdc++.h> 
string replaceSpaces(string &str){
	// Write your code here.
	string ans;
	for(int i=0;i<str.length();i++){
		if(str[i]==' '){
		ans.append("@40");
		}
		else{
			ans.push_back(str[i]);
		}
	}
	return ans;
}