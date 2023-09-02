#include<iostream>  
using namespace std;

bool equal(int a[26],int b[26]){
    for(int i=0;i<26;i++){
        if(a[i]!=b[i])return false;
    }
    return true;
}

bool calc(string a,string b){

    int window=a.size();
    int a_count[26]={0};
    int b_count[26]={0};

    for(int i=0;i<a.size();i++){
        int index=a[i]-'a';
        a_count[index]++;
    }

    int i;

    for( i=0;i<b.length() && i<window;i++){
        int index=b[i]-'a';
        b_count[index]++;
    }

    if(equal(a_count,b_count))return true;

    //1st window is processed --> if not found slide the window forward to check other possibilities.

    while(i<b.length()){
        //adding new element
        int index=b[i]-'a';
        b_count[index]++;

        //removing old element

        int ind=b[i-window]-'a';
        b_count[ind]--;

        if(equal(a_count,b_count)){
            return true;
        }
        i++;
    }

    return false;



}

int main()  
{  
    string a,b;
    cin>>a>>b;

    //finding any substring of a  in b;

    cout<<calc(a,b)<<endl;


   }