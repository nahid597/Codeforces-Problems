#include <bits/stdc++.h>
using namespace std;


bool CMP(const pair<string, int>& a, const pair<string, int>& b){
    return a.first.size() < b.first.size();
}

int n;
pair<string, int> s[250];

bool Pre(const string& str, const string& s){
    for(int i=0; i<s.size(); i++)
        if(str[i]!=s[i])
            return false;
    return true;
}

bool Suf(const string& str, const string& s){
    for(int i=s.size()-1, j=str.size()-1; i>=0; i--, j--)
        if(str[j]!=s[i])
            return false;
    return true;
}

bool Ch(const string& str){
    for(int i=0; i<2*n-2; i+=2)
        if(!(Pre(str, s[i].first) && Suf(str, s[i+1].first)) && !(Suf(str, s[i].first) && Pre(str, s[i+1].first)))
            return false;
    return true;
}

string vap(){
    string str = s[2*n-3].first + s[0].first;
    if(Ch(str)){
        return str;
    }

    str = s[2*n-3].first + s[1].first;
    if(Ch(str)){
        return str;
    }

    str = s[2*n-4].first + s[0].first;
    if(Ch(str)){
        return str;
    }

    str = s[2*n-4].first + s[1].first;
    if(Ch(str)){
        return str;
    }
}

int main(){

    cin >> n;

    for(int i=0, j=0; i<2*n-2; i++)
    {
        cin>>s[i].first;
        s[i].second = i;
    }

    string ans(2*n-2, 0);

    sort(s, s+2*n-2, CMP);

    string str = vap();

    for(int i=0; i<2*n-2; i+=2)
    {
        if(Pre(str, s[i].first))
            ans[s[i].second] = 'P', ans[s[i+1].second] = 'S';
        else
            ans[s[i].second] = 'S', ans[s[i+1].second] = 'P';
    }

    cout<<ans<<endl;

    return 0;
}
