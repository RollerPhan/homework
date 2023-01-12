#include <bits/stdc++.h>

using namespace std;
void chuanhoa(string &s)
{
    s[0] = toupper(s[0]);
    for (int i=1;i<s.length();i++) s[i] = tolower(s[i]);
}
void bai1()
{
    string s;
    cin >> s;
    for (int i=0;i<s.length();i++)
    {
        s[i]=tolower(s[i]);
        cout << s[i];
    }
}

void bai2()
{
    string s;
    getline(cin,s);
    stringstream ss(s);
    string phantu;
    while (ss >> phantu) cout << phantu << " ";
}


void bai3()
{
    string s;
    getline(cin,s);
    for(int i=0;i<s.length();i++) s[i] = tolower(s[i]);
    stringstream ss (s);
    string phantu;
    while (ss >> phantu)
    {
        phantu[0] = toupper(phantu[0]);
        cout << phantu << " ";
    }
}

void bai4()
{
    string s;
    getline(cin,s);
    for (int i=0;i<s.length();i++)
    {
        s[i] = toupper(s[i]);
        cout << s[i];
    }

}

void bai5()
{
    string s;
    getline(cin,s);
    stringstream ss (s);
    string phantu;
    while (ss >> phantu)
    {
        string chu;
        for (int i=0;i<phantu.length();i++)
        {
            if (phantu[i] >= 'a' && phantu[i] <= 'z' || phantu[i] >= 'A' && phantu[i] <='Z')
            {
                chu += phantu[i];
            }
        }
        chu[0] = toupper(chu[0]);
        for (int i=1;i<chu.length();i++) chu[i] = tolower(chu[i]);
        cout << chu << " ";
    }
}

void bai6()
{
    string s;
    getline(cin,s);
    stringstream ss (s);
    string phantu;
    while (ss >> phantu)
    {
        string chu;
        for (int i=0;i<phantu.length();i++)
        {
            if (phantu[i] >= 'a' && phantu[i] <= 'z' || phantu[i] >= 'A' && phantu[i] <='Z')
            {
                chu += phantu[i];
            }
        }
        for (int i=0;i<chu.length();i++) chu[i] = tolower(chu[i]);
        chu[chu.length()-1] = toupper(chu[chu.length()-1]);
        cout << chu << " ";
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    freopen("baitapvenha.inp","r",stdin);
    freopen("baitapvenha.out","w",stdout);
    //bai1();
    //bai2();
    //bai3();
    //bai4();
    //bai5();
    bai6();
    return 0;
}
