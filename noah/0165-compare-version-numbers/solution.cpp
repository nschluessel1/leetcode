class Solution {
public:
    vector<int> splitUp(string version){
        string curr = "";
        vector<int> vers;
        for (char c : version){
            if (c == '.'){
                vers.push_back(stoi(curr));
                curr = "";
            }
            else curr += c;
        }
        vers.push_back(stoi(curr));
        return vers;
    }
    int compareVersion(string version1, string version2) {
        vector<int> vers1_vec = splitUp(version1);
        vector<int> vers2_vec = splitUp(version2);
        int max_n = max(vers1_vec.size(), vers2_vec.size());
        for(int i=0; i < max_n;i++){
            int vers1_curr = 0;
            int vers2_curr = 0;
            if (i < vers1_vec.size()){
                vers1_curr = vers1_vec[i];
            }
            if (i < vers2_vec.size()){
                vers2_curr = vers2_vec[i];
            }
            if (vers1_curr < vers2_curr){
                return -1;
            }
            else if (vers2_curr < vers1_curr){
                return 1;
            }
        }
        return 0;
    }
};