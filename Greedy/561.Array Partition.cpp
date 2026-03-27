class Solution {
public:
    int arrayPairSum(vector<int>& nums) {

        vector<int> freq(20001, 0);

        // Count the frequencies
        for(int num : nums){
            freq[num + 10000]++;
        }

        int sum = 0;
        bool take = true;

        // Traverse numbers in sorted order
        for(int i = 0; i < 20001; i++){

            while(freq[i] > 0){

                if(take)
                    sum += (i - 10000);

                take = !take;
                freq[i]--;
            }
        }

        return sum;
    }
};