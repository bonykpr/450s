//https://ide.geeksforgeeks.org/A9cM19WrWQ

#include <bits/stdc++.h>
using namespace std;

bool AreRotations(string str1, string str2)
{
    if(str1.length()!=str2.length())
        return false;
        
    string temp=str1+str1;
    return (temp.find(str2)!=string::npos);
}

int main() {
	//code
	string str1="AACD", str2="ACDA";
	if(AreRotations(str1,str2))
	    cout<<"Strings are rotation";
	   else
	    cout<<"NO";
	return 0;
}
