#include <iostream>
#include <vector>
#include <numeric>
using namespace std;

bool canAssign(vector<int> &books, int m , int k ){
    int student = 1;
    int n = books.size();
    int pages = 0;
    for(int i = 0 ; i < n ; i++){
       if(pages+books[i]>k){
        student++;
        pages = books[i];
       }
       else {
        pages = pages + books[i];
       }
    }
    return student <=m;
}

int main() {
    int n,m;
    cin>>n>>m;
    vector<int> books(n);
    for(int i = 0 ; i < n ; i++){
            cin>>books[i];
    }
    int low = *max_element(books.begin(),books.end());
    int high = accumulate(books.begin(),books.end(),0);
    int ans = high;
    while(low<=high){
        int mid = low + (high-low)/2;
        if(canAssign(books,m,mid)){
            ans = mid;
            high = mid-1;
        }
        else {
            low = mid+1;
        }
    }
    cout<<ans<<endl;
    return 0;
}