#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str;
    cin>>str;
    int n=str.length();
    int luckynCount=0;
    for(int i=0;i<n;i++)
    {
        if(str[i]=='4' || str[i]=='7')
        {
            luckynCount++;
        }
    }
    if(luckynCount<10)
    {
        if(luckynCount==4 || luckynCount==7){
            cout<<"YES"<<endl;
            return 0;
        }
        else{
            cout<<"NO"<<endl;
            return 0;
        }
    }
    string count=to_string(luckynCount);
    int l=count.length();
    int match=1;
    for(int i=0;i<l;i++){
        if(count[i]!='4' && count[i]!='7'){
            match=0;
            break;
        }
    }
    if(match) cout<<"YES"<<endl;
    else cout <<"NO"<<endl;
    return 0;
}