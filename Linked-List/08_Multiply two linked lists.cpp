// T.C = O(2*n)
/*
class solution {
  public:
    long long multiplyTwoLists(Node *first, Node *second) {
        long long  v1 =0;
        long long v2 = 0;
        long long mod = 1e9+7;
        while(first){
            long long val = first->data;
            v1= (v1*10+val)%mod;
            first=first->next;
        }
        while(second){
            long long val = second->data;
            v2= (v2*10+val)%mod;
            second=second->next;
        }
        long long result = (v1 * v2 ) % mod;
        return result%mod;
    }
};
*/