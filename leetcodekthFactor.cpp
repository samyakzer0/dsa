class Solution {
public:
   int kthFactor(int n, int k){
    vector<int> factors;
    for (int i = 1 ; i<=n ; i++){
        if (n%i==0){
            factors.push_back(i);
        }
    }
for (int i = 0 ; i< factors.size() ; i++){
    if (i+1==k){
        return factors[i];
    }
}
return -1;

}
};