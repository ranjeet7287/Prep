int maxArea(vector<int>& height) {
    // Write your code here
    int start=0;
    int end=height.size()-1;
    int area;
    int maxArea=0;
    while(start<end)
    {
        area=min(height[start],height[end])*(end-start);
        if(area > maxArea) {
          maxArea = area;
        }else if(min(height[start], height[end]) == height[start]) {
          start++;
        }else {
          end--;
        }
    }
    return maxArea;
}