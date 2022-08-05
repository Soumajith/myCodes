/*The next greater element of some element x in an array is the first greater element that is to the right of x in the same array.

You are given two distinct 0-indexed integer arrays nums1 and nums2, where nums1 is a subset of nums2.

For each 0 <= i < nums1.length, find the index j such that nums1[i] == nums2[j] and determine the next greater element of nums2[j] in nums2. If there is no next greater element, then the answer for this query is -1.

Return an array ans of length nums1.length such that ans[i] is the next greater element as described above.

 

Example 1:

Input: nums1 = [4,1,2], nums2 = [1,3,4,2]
Output: [-1,3,-1]
Explanation: The next greater element for each value of nums1 is as follows:
- 4 is underlined in nums2 = [1,3,4,2]. There is no next greater element, so the answer is -1.
- 1 is underlined in nums2 = [1,3,4,2]. The next greater element is 3.
- 2 is underlined in nums2 = [1,3,4,2]. There is no next greater element, so the answer is -1.

Example 2:

Input: nums1 = [2,4], nums2 = [1,2,3,4]
Output: [3,-1]
Explanation: The next greater element for each value of nums1 is as follows:
- 2 is underlined in nums2 = [1,2,3,4]. The next greater element is 3.
- 4 is underlined in nums2 = [1,2,3,4]. There is no next greater element, so the answer is -1
*/
#include <bits/stdc++.h>
using namespace std;
vector<int> NGE(vector<int>v, vector<int>indx){
    vector<int>nge(indx.size());
    stack<int>st;
    for (int i = 0; i < indx.size(); i++)
    {
        while(!st.empty() &&  v[indx[i]] > v[st.top()]){
            nge[st.top()] = i;
            st.pop();    
        }
        st.push(i);
    }
    while(!st.empty()){
        nge[st.top()] = -1;
    }
    return nge;
}
int main(){
    int n, m;
    cin>>n>>m;
    vector<int>v1(n);
    vector<int>v2(m);
    for (int i = 0; i < n; i++)
    {
        cin>>v1[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin>>v2[i];
    }
    vector<int>indx(n);
    for (int i = 0; i < n; i++)
    {
        for(int j = 0; j<m; j++){
            if(v1[i] == v2[j]){
                indx[i] = j;
                break;
            } 
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout<<indx[i]<<" ";
    }
    
    vector<int>nge = NGE(v2,indx);
    for (int i = 0; i < n; i++)
    {
        cout<<(nge[i]== -1? -1 : v2[nge[i]])<<endl;
    }
    
}
//incomplete hai 