#include<iostream>
#include<vector>
#include<iterator>
#include<set>

using namespace std; 

int longConsecutive(vector<int>& nums) {
    set<int> hashSet;
    for(int num: nums) {
        hashSet.insert(num);
    }

    int longestStreak = 0;
    for (int num: nums) {
        if(!hashSet.count(num-1)) {
            int currentNum = num;
            int currentStreak = 1;
            
            while(hashSet.count(currentNum+1)) {
                currentNum +=1;
                currentStreak +=1;
            }

            longestStreak = max(longestStreak,currentStreak); 

        }
    }

    return longestStreak;


}

int main()
{
    int arr[] = {1,6,44,3,5,100,22};
    vector<int> vec(arr,arr+sizeof(arr) / sizeof(arr[0]) );
    cout<< longConsecutive(vec);

    return 0;
}
