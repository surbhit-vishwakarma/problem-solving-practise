class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        if(arr.size()==1 || arr.size()==2)
            return false;
        
//         i
//         0 2 3 3 5 3 2 1
        int i = 0;
        while(i<arr.size()-1)
        {
            if(arr[i] < arr[i+1])
            {
                i++;
                cout << "yes" <<" ";
            }else{
                break;
            }
        }
        
        if(i==0 or i == arr.size()-1)
            return false;
        // cout << i << endl;
        //i++;
        while(i<arr.size()-1){
            if(arr[i] > arr[i+1])
            {
                i++;
                // cout << "no" <<" ";
            }
            else{
                break;
            }
        }
        // cout << i << endl;
        if(i==arr.size() - 1)
            return true;
        else{
            return false;
        }
        
        return false;
    }
};