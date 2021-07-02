class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        priority_queue<pair<int,int>,vector<pair<int,int>>, greater<pair<int,int>>> pq; // Min Heap
        int n = arr.size();
        for(int i=0;i<n;i++){
            pair<int,int> temp;
            temp.first = abs(arr[i]-x);
            temp.second = arr[i];
            pq.push(temp);
        }
        vector<int> v;
        //rt(pq.begin(),pq.end());
        for(int i=0;i<k;i++){
            pair<int,int> p = pq.top();
            //cout << p.first << " " << p.second << "\n";
            v.push_back(p.second);
            pq.pop();
        }
        sort(v.begin(),v.end());
        return v;
    }
};
