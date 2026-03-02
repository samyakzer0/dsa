
class Solution {
  public:
    int getChocolateCost(vector<int> arr, int price) {
      int n = arr.size();
      long long current = 0;
      long long choco=arr[0];
      
      for(int i = 0 ; i < n-1 ; i++){
          int diff = arr[i]-arr[i+1];
          current +=diff;
          
          if(current<0){
              choco +=abs(current);
              current = 0;
          }
      }
        return choco*price;
    }
};