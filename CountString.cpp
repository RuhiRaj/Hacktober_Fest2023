#include<bits/stdc++.h>
int countSubStrings(string str, int k){
    int n = str.size();
    int ans = 0;
    for(int i = 0; i < n; i++){
        int cnt[26] = {0};
        int distinct = 0;
        for(int j = i; j < n; j++){
            if(cnt[str[j] - 'a'] == 0)
                distinct++;
            cnt[str[j] - 'a']++;
            if(distinct == k)
                ans++;
            if(distinct > k)
                break;
        }
    }
    return ans;
}

