 //somewhat correct not all testcases checked 
 
 
 
 class Solution {
    public:
        string longestCommonPrefix(vector<string>& strs) {
            string answer; 
            sort(strs.begin() , strs.end());

   
    if(strs.size() == 1 && strs[0] != "") {
        for(int i = 0 ; i < strs[0].size() ; i++){
        answer.push_back(strs[0][i]);}
        return answer;
        if(strs.size() == 1  ) return answer;
    }
           int i = 0;
            while(1){
               bool flag = false;
                char matching = strs[0][i];

               for(int j = 0 ; j < strs.size() ; j++ ){
                if(strs[j][i] == strs[0][i]){
                    flag = true;
                }
                else{
                    flag = false;
                    break;
                }
               }
               
               
               if(flag){
               answer.push_back(strs[0][i]);
               i++;}
               else{
                   break;
               }

            
           }
        return answer;
        }
};