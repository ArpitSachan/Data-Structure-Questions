#include <bits/stdc++.h>

using namespace std;

void toh(int N, int a, int c, int b, long long &moves) {
   if(N==1)
    {
        cout<<"move disk " <<N<< " from rod "<<from<< " to rod "<< to<<endl;
        moves++;
    }
    else{
   toh(N-1, a, b, c, moves);
   {
   cout<<"move disk "<<N<<" from rod "<<from<<" to rod "<<to<<endl;
   moves++;
   }
   toh(N-1, b, c, a, moves);
    }
    if(N==0)
     cout<<moves<<endl;
}
int main() {

    int T;
    cin >> T;
    while (T--) {
        long long moves = 0;
        int N;
        cin >> N;
        toh(N, 1, 3, 2, moves);
        cout << moves << endl;
    }
    return 0;
}

