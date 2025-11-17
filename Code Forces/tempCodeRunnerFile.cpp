void I_Am_Here() {
    int n;
    cin>>n;
    vector<int>a(n);
    stack<int>s;
    for(int i=0 ; i<n ; i++){
        cin>>a[i];
    }
    int i=0;
    int j=n-1;
    int sum=0;
    while(i<j){

        int x = max(a[i],a[i+1]);
        int y = max(a[j],a[j-1]);
        int z = max(a[i],a[j]);

        if(x < min(y,z)){
            sum+=x;
            if(a[i]<a[i+1]){
                swap(a[i],a[i+1]);
            }
            i++;
        }
        else if(y < min(x,z)){
            sum+=y;
            if(a[j]>a[j-1]){
                swap(a[j],a[j-1]);
            }
            j--;
        }
        else{
            sum+=z;
            if(a[i]<a[j]){
                swap(a[i],a[j]);
            }
            i++;
        }

    }
    cout<<sum<<endl;
}