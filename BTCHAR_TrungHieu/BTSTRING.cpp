#include <bits/stdc++.h>
#include <cstring>
using namespace std;
bool solve (char b)
{
    int n = strlen(b);
    if (n == 1) return true;
    int cnt = 0;
    int lo = 0, hi = n-1;
    while (lo <= (n/2))
    {

        if (S[lo] != S[hi]) cnt++;
        lo++,hi--;
    }
    if (cnt > 2) return false;
    else return true;

}
void SINHOA()
{
    int Max = 1e4 + 1;
    char xau[Max];
    cin.getline(xau,Max);
    for (int i = 0; xau[i]; i++)
    {
        xau[i] = toupper(xau[i]);
    }
    cout << xau;
}

void DAIHON()
{
    int Max = 1e4 + 1;
    char xauA[Max];
    char xauB[Max];
    cin.getline(xauA,Max);
    cin.getline(xauB,Max);
    if (strlen(xauA) > strlen(xauB)) cout << xauA;
    else cout << xauB;
}

void MOVESTRING()
{
    int Max = 1e4 + 1;
    int k;
    char S[Max],ch;
    char add[Max];
    cin >> S >> k >> ch;
    int n = strlen(S);

    if (ch == 'L')
    {
        int j = 0;
        for (int i = n-k;i<n;i++) add[j++] = S[i]; // lay 4 phan tu cuoi add vao mang add
        for (int i = n - 1;i >=

        k;i--) S[i] = S[i-k];
        for (int i = 0; i < k; i++) S[i] = add[i];
    }
    else {
        for (int i =0; i<k;i++) add[n-k+1] = S[i];
        for (int i= 0;i<n-k;i++) S[i] = S[i+k];
        for (int i=n-k;i<n;i++) S[i] = add[i];
    }
    cout << S;
}
void PALINSTR01()
{
    int Max = 1e3 + 1;
    char S[Max];
    while (cin >> S)
    {
        if (solve(S) == true) cout << "YES" << endl;
        else cout << "NO" << endl;
    }

}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    freopen("BTSTRING.inp","r",stdin);
    freopen("BTSTRING.out","w",stdout);
    //SINHOA();
    //DAIHON();
    //MOVESTRING();
    PALINSTR01();
    return 0;
}
