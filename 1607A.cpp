#include<iostream>
#include<bits/stdc++.h>

using namespace std;
int main(){
    int n;
    cin>>n;
     
    for(int i=0;i<n;i++){
        string s,s1;
        cin>>s;
        cin>>s1;
        int a,b;
        a=s.length();
        b=s1.length();
        int d[b];
        int q=0;
        for(int j=0;j<b;j++){
            for(int k=0;k<a;k++){
                if(s1[j]==s[k]){             
                    d[q]=k+1;
                    q++;
                    break;
                }
                
            }
        }
        int sum=0;
        for(int e=0;e<b-1;e++){
            sum+=abs(d[e]-d[e+1]);
        }
        cout<<sum<<endl;
    }
}