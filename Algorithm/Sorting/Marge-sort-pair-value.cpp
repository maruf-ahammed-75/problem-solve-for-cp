#include<bits/stdc++.h>
using namespace std;
int n;
void marge(vector<pair<int,int>>&a , int l , int r){

    if(l>=r)return;

    int mid = (l+r)/2;
    marge(a,l,mid);
    marge(a,mid+1,r);


    vector<pair<int,int>>temp;
    int ll = l;
    int rr = mid+1;

    while(temp.size() != r-l+1){
        if(ll <= mid && (rr > r || a[ll].first<a[rr].first)){
            temp.push_back({a[ll].first,a[ll].second});
            ll++;
        }
        else {
            if(ll<=mid && a[ll].first==a[rr].first){
                if(a[ll].second<a[rr].second){
                    temp.push_back({a[ll].first,a[ll].second});
                    ll++;
                }
                else{
                    temp.push_back({a[rr].first,a[rr].second});
                    rr++;
                }
            }
            else {
                temp.push_back({a[rr].first,a[rr].second});
                rr++;
            }
        }
    }

    for(int i=l,j=0 ; i<=r ; i++,j++){
        // cout<<temp[j]<<' ';
        a[i].first = temp[j].first;
        a[i].second = temp[j].second;
    }
    // cout<<endl;

}

int main(){
    cin>>n;
    vector<pair<int,int>>a(n);
    for(int i=0 ; i<n ; i++){
        cin>>a[i].first>>a[i].second;
    }
    marge(a,0,n-1);
    cout<<endl;
    for(int i=0 ; i<n ; i++){
        cout<<a[i].first<<' '<<a[i].second<<endl;
    }
    cout<<endl;
}