int longestSuccessiveElements(vector<int>& a) {
    if (a.empty()) {
        return 0;
    }

    sort(a.begin(), a.end());

    int cnt = 1, longestcount = 1;

    for (int i = 1; i < a.size(); i++) {
        if ((a[i] - a[i - 1]) == 1) {
            cnt++;
            longestcount = max(cnt, longestcount);
        } else if (a[i] != a[i - 1]) {
            cnt = 1;  // Reset the count if the sequence breaks and the elements are not equal
        }
    }

    return longestcount;
}
