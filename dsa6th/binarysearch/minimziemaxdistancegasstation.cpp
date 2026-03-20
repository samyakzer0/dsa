class Solution {
  public:
  bool isPossible(double mid, vector<int>& stations, int K) {
        int addedStations = 0;
        int current = 0;
        for (int i = 0; i < stations.size() - 1; i++) {
            double gap = stations[i+1]-stations[i];
            
            addedStations+=(int)gap/mid;
        }
            
        return addedStations <= K;
    }

 
    double minMaxDist(vector<int> &stations, int K) {
       
       int n = stations.size();
        double low = 0;
        double high = stations[n-1] - stations[0];
    
        for (int i = 0; i < 100; i++) {
            double mid = low + (high - low) / 2.0;
            if (isPossible(mid, stations, K)) {
                high = mid; 
            } else {
                low = mid;  
            }
        }
    
         return high;
    }
       
};