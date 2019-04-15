#include <cstdio>
#include <iostream>
#include <vector>
// #define LOCAL
using namespace std;

int T, n, i, j,k,r;
int main(){
    // #ifdef LOCAL
    //     freopen("input1.txt","r",stdin);
    //     freopen("output1.txt","w",stdout);
    // #endif
    scanf("%d",&T);
    for(i = 0; i < T; i++){
        vector<int> nums;
        scanf("%d",&n);
        int pre = 0, max = 0;
        for(j=0; j < n; j++){
            scanf("%d",&r);
            if(j==0){
                nums.push_back(r);
                pre = r;
                max = r;
            }
            else{
                nums.push_back(r-pre);
                if(r-pre > max)
                    max = r-pre;
                pre = r;
            }
        }
        int res = max;
        for(k = 0; k < nums.size(); k++){
            if(k!=0 && nums[k]>max){
                // cout << "k is " << k << "and max is " << max << "and nums[k] is " << nums[k] << endl;
                res++;
                break;
            }
            if(nums[k] == max)
                max--;
        }
        printf("Case %d: %d\n",i+1,res);
    }
}