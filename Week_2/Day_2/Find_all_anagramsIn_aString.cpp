class Solution {
public:
    string smallestGoodBase(string n){
        long long num = stoll(n);
        for (int m = log2(num); m >= 1; --m) {
            long long k = pow(num, 1.0/m);
            __int128 sum =1;
            __int128 term =1;
            for (int i= 1; i<= m;i++) {
                term *=k;
                sum +=term;
            }
            if(sum ==num){
                return to_string(k);
            }
        }
        return to_string(num - 1);
    }
};
