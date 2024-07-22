class Solution {
public:
  void merge(int left, int mid, int right, vector<pair<int, int>>& v, vector<int>& ans) {
    vector<pair<int, int>> temp(right - left + 1);

    int i = left, j = mid + 1;
    int k = 0;
    while (i <= mid && j <= right) {
        if (v[i].second <= v[j].second) {
            temp[k] = v[j];
            k++;
            j++;
        } else {
            ans[v[i].first] += right - j + 1;
            temp[k] = v[i];
            i++;
            k++;
        }
    }
    while (i <= mid) {
        temp[k] = v[i];
        k++;
        i++;
    }
    while (j <= right) {
        temp[k] = v[j];
        k++;
        j++;
    }

    for (int i = left; i <= right; i++) {
        v[i] = temp[i - left];
    }
}

void mergeSort(int l, int r, vector<pair<int, int>>& v, vector<int>& ans) {
    if (l < r) {
        int mid = (l + r) / 2;
        mergeSort(l, mid, v, ans);
        mergeSort(mid + 1, r, v, ans);
        merge(l, mid, r, v, ans);
    }
}

vector<int> countSmaller(vector<int>& nums) {
    int n = nums.size();
    vector<pair<int, int>> v;
    for (int i = 0; i < n; i++) {
        v.push_back({i, nums[i]});
    }
    
    vector<int> ans(n, 0);
    mergeSort(0, n - 1, v, ans);
    return ans;
}
};
