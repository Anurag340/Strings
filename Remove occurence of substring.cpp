#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    string part;
    cin>>s>>part;
    int size=s.length();
    for(int i=0;i<size;i++){
        
        string n=s.substr(i,part.length());
        if(n==part){
            s.erase(i,part.length());
            size=size-part.length();
            i=0;
           
            

        }
    }
    cout<<s<<endl;
}