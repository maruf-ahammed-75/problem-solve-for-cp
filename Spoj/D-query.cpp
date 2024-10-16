// DQUERY - D-query
///sqrt ar thake sqrtl is more efficient
#include<bits/stdc++.h>

using namespace std;
const int N = 1000009;
int a[N],n,q;
int block_size = 0;
int distinct_element =0;
int ans[N],cnt[N];
//array structer
struct Array{
    int idx, l, r;
                        //q1
    bool operator<(const Array & q2){
        return l/block_size<q2.l/block_size||(l/block_size==q2.l/block_size && r<q2.r);
    }
};
Array query[N];//struct array declear korsi

// bool compare(Array q1,Array q2){
//     if(q1.l/block_size == q2.l/block_size){
//         return q1.r > q2.r;
//     }
//     return q1.l/block_size<q2.l/block_size;
// }



void add(int x){
    cnt[a[x]]++;
    if(cnt[a[x]]==1){
        distinct_element++;
    }
}

void del(int x){
    cnt[a[x]]--;
    if(cnt[a[x]]==0){
        distinct_element--;
    }
}

int main(){
    cin>>n;
    for(int i=0 ; i<n ; i++){
        cin>>a[i];
    }
    block_size = sqrt(n);
    cin>>q;
    for(int i=0 ; i<q ; i++){
        int left,right;
        cin>>left>>right;
        query[i].l=(left-1);
        query[i].r=(right-1);
        query[i].idx=i;
    }


    sort(query,query+q);
    // for(int i=0 ; i<q ; i++){
    //     cout<<query[i].l<<' '<<query[i].r<<' '<<query[i].idx<<endl;
    // }


    int curL=0,curR=-1;
    distinct_element=0;

    for(int i=0 ; i<q ; i++){
        int qin = query[i].idx;
        int L = query[i].l;
        int R = query[i].r;
        while(L>curL){
            del(curL++);
        }
        while(L<curL){
            add(--curL);
        }
        while(R>curR){
            add(++curR);
        }
        while(R<curR){
            del(curR--);
        }
        ans[qin]=distinct_element;
    }
    for(int i=0 ; i<q ; i++){
        cout<<ans[i]<<endl;
    }
}