#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
#define ll long long

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin>>t;
    while(t--) {

        string m, n;
        cin >> m;
        cin >> n;
        unsigned ll mlen = m.length();
        unsigned ll nlen = n.length();

        if(mlen + nlen < 5000){

            int pos[nlen+1][mlen+1];
            for(ll i = 0;i<mlen;i++) {
                if (i == 0) {
                    if (m[i] == '0' || n[0] == '0')
                        pos[0][0] = 1;
                    else
                        pos[0][0] = 0;
                    if (n[1] == '0' || pos[0][0] == 0)
                        pos[1][0] = 1;
                    else
                        pos[1][0] = 0;
                } else {
                    if (pos[0][i - 1] == 0 || m[i] == '0')
                        pos[0][i] = 1;
                    else
                        pos[0][i] = 0;
                    if (pos[1][i - 1] == 0 || pos[0][i] == 0)
                        pos[1][i] = 1;
                    else
                        pos[1][i] = 0;

                }
            }

            for(ll j = 1; j < nlen; j++)
            {
                if(pos[j-1][0] == 0 or n[j] == '0')
                    pos[j][0] = 1;
                else
                    pos[j][0] = 0;
                if(pos[j-1][1] == 0 || pos[j][0] == 0)
                pos[j][1] = 1;
                else
                    pos[j][1] = 0;

            }
            ll q;
            cin>>q;

            string s2 = "";
            while(q--)
            {
                ll x,y;
                cin>>x>>y;
                x--;
                y--;
                if(x == 0 || y == 0)
                    s2.append(to_string(abs(pos[x - min(x, y) ][y - min(x, y)])));
                else
                    s2.append(to_string(abs(pos[x-min(x,y)+1][y-min(x,y)+1])));
                    pos1[1][0] = 0;
                            } else {
                                if (pos1[0][i - 1] == 0 || m[i] == '0')
                                    pos1[0][i] = 1;
                                else
                                    pos1[0][i] = 0;
                                if (pos1[1][i - 1] == 0 || pos1[0][i] == 0)
                                    pos1[1][i] = 1;
                                else
                                    pos1[1][i] = 0;

                            }

                        }
                        for (ll j = 0; j < nlen; j++) {
                            if (j == 0) {

                                if (n[0] == '0' || m[0] == '0')
                                    pos2[0][0] = 1;
                                else
                                    pos2[0][0] = 0;
                                if (m[1] == '0' || pos2[0][0] == 0)
                                    pos2[0][1] = 1;
                                else
                                    pos2[0][1] = 0;


                            }
                            if (j != 0) {
                                if (pos2[j - 1][0] == 0 or n[j] == '0')
                                    pos2[j][0] = 1;
                                else
                                    pos2[j][0] = 0;
                                if (pos2[j - 1][1] == 0 || pos2[j][0] == 0)
                                    pos2[j][1] = 1;
                                else
                                    pos2[j][1] = 0;
                            }
                        }


                    ll q;
                    cin >> q;

                    string s2 = "";
                    while (q--) {
                        ll x, y;
                        cin >> x >> y;
                        x--;
                        y--;
                        if (x == y)
                            s2.append(to_string(abs(pos1[0][0])));
                        else if (x == 0)
                            s2.append(to_string(abs(pos1[x][y])));
                        else if (y == 0)
                            s2.append(to_string(abs(pos2[x][y])));
                        else if (x > y)
                            s2.append(to_string(abs(pos2[x - y + 1][1])));
                        else
                            s2.append(to_string(abs(pos1[1][y - x + 1])));

                    }

                    cout << s2 << endl;

        }
    }


}



            }

            cout<<s2<<endl;




        }

        else
        {
                        int pos2[nlen+1][2];
                        int pos1[2][mlen+1];


                        for (ll i = 0; i < mlen; i++) {
                            if (i == 0) {
                                if (m[i] == '0' || n[0] == '0')
                                    pos1[0][0] = 1;
                                else
                                    pos1[0][0] = 0;
                                if (n[1] == '0' || pos1[0][0] == 0)
                                    pos1[1][0] = 1;
                                else
                                    pos1[1][0] = 0;
                                if (n[2] == '0' || pos1[0][0] == 0)
                                    pos1[1][0] = 1;
                                else
