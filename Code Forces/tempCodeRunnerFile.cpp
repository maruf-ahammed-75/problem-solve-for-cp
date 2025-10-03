int n;
    cin>>n;
    vector<int> a(n);
    map<int,int> mp;
    for(int i=0;i<n;i++) {
        cin>>a[i];
        mp[a[i]]++;
    }
    sort(full(a));

    for(int i=0 ; i<n ; i++){

        for(int j=a[i] ; j<=a[n-1] ; j+=a[i]){

            if(mp[j] && j != a[i]){
                mp[a[i]]++;
                break;
            }
            
        }

    }
    int ans = 1;
    for(auto i : mp){
        if(i.ss > 1)ans = max(ans,i.ff);
    }
    cout<<ans<<endl;
