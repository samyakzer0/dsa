class Solution {
  public:
  
    bool allowed(vector<int> &arr , vector<int> &dep , int mid){
       int platforms_in_use = 0;
        int i = 0, j = 0;
        int n = arr.size();

        while (i < n) {
            if (arr[i] <= dep[j]) {
                platforms_in_use++;
                i++;
            } else {
                platforms_in_use--;
                j++;
            }
            if(platforms_in_use>mid) {
                return false;
        }
        }
        return true;
    
    }
  
  
    int minPlatform(vector<int>& arr, vector<int>& dep) {
        int low = 1;
        int n = arr.size();
        int high = n;
        int ans = n;
        sort(arr.begin(), arr.end());
        sort(dep.begin(), dep.end());
        while(low<=high){
            int mid = low + (high-low)/2;
            if(allowed(arr,dep,mid)){
                ans = mid;
                high = mid-1 ;
            }
            else {
                low = mid + 1;
            }
        }
        return ans ;
    }
};
