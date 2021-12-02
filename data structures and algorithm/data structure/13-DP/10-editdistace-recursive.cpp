# include<iostream>
using namespace std;
int editdistance(string s,string t)
{
    if(s.length()==0||t.length()==0)
    {
        return max(s.size(),t.size());
    }
    if(s[0]==t[0])
    {
        return editdistance(s.substr(1), t.substr(1));
    }
    else{
        //insert
        int y = editdistance(s.substr(1), t)+1;
        //delete
        int z = editdistance(s, t.substr(1))+1;
        //replace
        int r = editdistance(s.substr(1), t.substr(1)) + 1;
        return min(y, min(z, r));
    }

}
int main ()
{
    string s, t;
    cin >> s >> t;
    int ans = editdistance(s, t);
    cout << ans;

}