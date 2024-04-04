class Solution {
public:

    int fact(int i){
        if(i <=1) return 1;
        return i *fact(i - 1);
    }
    int combination(int i , int j ){
        return fact(i)/(fact(j)*fact(i-j));
    }
    vector<vector<int> > generate(int numRows) {
        int n = numRows;
        vector<vector<int>> pascal;

        for(int i = 0 ; i < n ; i++){
                vector<int> hmm;
                
            for(int j = 0 ; j <= i ; j++){
                int t = combination(i , j);
                hmm.push_back(t);


            }

            pascal.push_back(hmm);
        }
        
        return pascal;

    }
};