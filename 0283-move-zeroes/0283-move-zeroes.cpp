class Solution {
public:
    void moveZeroes(vector<int>& arr) {
        int n = arr.size(), count=0;

        for(int i=0;i<n;i++){
            if(arr[i]!=0){
            arr[count] = arr[i];
            count++;
           }
        }

        while(count<n){
            arr[count]=0;
            count++;
        }

    }
};