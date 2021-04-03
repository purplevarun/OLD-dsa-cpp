class bigint {
    public:
    vector<int> arr;
    bool positive = true;
    bigint(string s){
        if (s[0]=='-')
            positive = false;
        for (char ch:s){
            if (ch == '-') continue;
            arr.push_back(ch-'0');
        }
    }
    bigint(vector<int> v){
        this->arr = v;
    }
    bigint(int x){
        string s = to_string(x);
        if (s[0]=='-')
            positive = false;
        for (char ch:s){
            if (ch == '-') continue;
            arr.push_back(ch-'0');
        }
    }
    string print () {
        string ans = "";
        if (!positive)
            ans+="-";
        for (int i:arr)
            ans+=to_string(i);
        return ans;
    }
    bigint add (bigint b) {
        vector <int> second = b.arr;
        int carry = 0;
        vector <int> first = this->arr;
        reverse (first.begin(),first.end());
        reverse (second.begin(),second.end());
        int len =  min (first.size(),second.size());
        vector <int> ans;
        for (int i=0;i<len;i++){
            int A = first[i], B = second[i];
            int sum = A+B+carry;
            ans.push_back(sum%10);
            carry = sum/10;
        }
        if (carry!=0)ans.push_back(carry);
        reverse(ans.begin(),ans.end());
        bigint C(ans);
        return C;
        
    }   
    
};