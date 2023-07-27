class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        // int l=0, n=arr.size(), r=n-1;
        // while(l<r){
        //     if(r-l==1){
        //         if(x>arr[r]) l=r;
        //         else if(x<arr[l]) break;
        //         else{
        //             if(arr[r]-x<x-arr[l]) l=r;
        //         }
        //         break;
        //     }
        //     int m=(l+r)/2;
        //     if(arr[m]>x) r=m-1;
        //     else if(arr[m]<x) l=m;
        //     else{
        //         l=m;
        //         break;
        //     }
        // }
        // vector<int>ans;
        // int i=l, j=l;
        // while(k--){
        //     ans.push_back(arr[l]);
        //     if(i>0 and j<n-1){
        //         if(abs(arr[i-1]-x)<=abs(arr[j+1]-x)){
        //             i--;
        //             l=i;
        //         }
        //         else{
        //             j++;
        //             l=j;
        //         }
        //     }
        //     else if(i>0){
        //         i--;
        //         l=i;
        //     }
        //     else{
        //         j++;
        //         l=j;
        //     }
        // }
        // sort(ans.begin(), ans.end());
        // return ans;
        int start = 0, endd = arr.size()-1;
        
        while(endd-start >= k) {
            if( abs(arr[start]-x) > abs(arr[endd]-x)){
                start++;}
            else {
                endd--;}

        }
        vector<int> ans;
        for(int i=start;i<=endd;i++){
            ans.push_back(arr[i]);
        }
        return ans;
    }
};