class Solution {
public:
        // int n=nums.size();
        // int Si=0;
        // int Ei=n-1;
//         bool Search(vector<int> &nums,int Si,int Ei,int target)
//         {
//             if(Si>Ei)
//             {
//                 return false;
//             }
//             int mid=Si+(Ei-Si)/2;
//             if(nums[mid]==target)
//             {
//                return true;
//             }
//             if(nums[mid]>=nums[Si])
//             {
//               if(nums[Si]<=target && target<=nums[mid])
//               {
//                  return  Search(nums,Si,mid-1,target);
//               }
//               else{
//                   return Search(nums,mid+1,Ei,target);
//               }
//             }
//             else
//               {
//                if(nums[Si]<=target && target<=nums[mid])
//                {
//                  return Search(nums,mid+1,Ei,target);
//                }
//                else{
//                  return Search(nums,Si,mid-1,target);
//                }
//                }
// }
bool search(vector<int>& nums, int target) {
        for(int i=0;i<=nums.size()-1;i++)
        {
            if(nums[i]==target)
            {
                return true;
            }
        }
        return false;
    }
};