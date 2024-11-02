/*************************************************************************************************************************
**                                            Maruf Ahammed                                            *
**                                            CSE, University of Asia Pacific                                            *
**************************************************************************************************************************/
#include<bits/stdc++.h>
#define ff first
#define ss second
#define ll long long
//#define pb push_back
//#define mp make_pair
#define Y cout << "YES\n"
#define N cout << "NO\n"
#define full(x) x.begin(), x.end()

using namespace std;


void I_Am_Here(){
    int n;
    cin>>n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)cin >> a[i];

    sort(a.begin(), a.end());
    // for(auto i:a)cout<<i<<' ';
    // cout<<endl;

    int answer = INT_MAX;
    for(int i = 0; i  < n-1 ; i++) {
        int left = i + 1, right = n - 1, index = i + 1;

        while(left <= right) {
            int mid = (left + right) / 2;
            if(a[i] + a[i + 1] > a[mid]) {
                index = mid;
                left = mid + 1;
            }
            else right = mid - 1;
        }

        answer = min(answer, n - (index - i + 1));
    }

    cout << answer << "\n";




}
int main(){

    int ts=1;
    cin >> ts;
    for(int xyz=1 ; xyz<=ts ; xyz++){
        I_Am_Here();
        // cout<<endl;
    }
}