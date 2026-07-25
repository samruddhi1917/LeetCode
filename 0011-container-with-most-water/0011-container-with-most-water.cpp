class Solution {
public:
    int maxArea(vector<int>& height) {
        int left = 0;
        int right = height.size() - 1;
        int max;
        int op=0;

        while (left < right) {

            if (height[left]<height[right]) {
                max=height[left]*(right-left);
                if(max>op)
                    op=max;
                left++;
            } else {
                max=height[right]*(right-left);
                if(max>op)
                    op=max;
                right--;
            }
        }
        return op;
    }
};