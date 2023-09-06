#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;

    int i=0,j=1;
    int size=s.length();

    while(i<size){
        if(s[i]==s[j]){
            s.erase(i,2);
            i=-1;
            j=0;
            size=size-2;
        }
        i++;
        j++;
    }
    cout<<s<<endl;
}