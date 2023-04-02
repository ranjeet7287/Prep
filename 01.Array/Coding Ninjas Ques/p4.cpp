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
int maxArea(int *height){
  int l=0;
  int r=height.size()-1;
  int maxarea=0;
  while(l<r){
    int lh=height[l];
    int rh=height[r];
    int min_h=min(lh,rh);
    maxarea=max(maxarea,min_h*(r-l));
    if(lh<rh){
      l++;
    }else{
      r--;
    }
  }
  return maxarea;
}