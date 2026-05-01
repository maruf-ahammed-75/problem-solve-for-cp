class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        vector<int>a = nums;
        int i=0,j=0;
        int n = nums.size();
        int sum=0;
        int ans = INT_MAX;
        while(i!=n || sum>=target){
           if(sum<target){
                sum+=a[i];
                cout<<"if sum = "<<sum<<endl;
                cout<<i<<' '<<j<<" "<<ans<<endl;
                i++;
           }
           else{
                ans = min(ans,i-1-j+1);
                sum-=a[j];
                cout<<"else sum = "<<sum<<endl;
                cout<<i<<' '<<j<<" "<<ans<<endl;
                j++;
           }
           cout<<endl;
        }
        return (ans==INT_MAX) ? 0 : ans;
    }
};