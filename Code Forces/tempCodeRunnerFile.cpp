for(int i=2 ; i*i<=n ; i++){
        int count=0;
        cout<<i;
        while(n%i==0){
            n/=i;
            count++;
        }
        cout<<' '<<count<<' '<<n<<endl;
        int j=1;
        while(count>=j){
            ans++;
            count-=j;
            j++;
        }
        cout<<n<<' '<<i<<' '<<ans<<endl;
    }