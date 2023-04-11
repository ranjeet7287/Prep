int findKthElement(vector<vector<int>> matrix, int k) 
{            
    int N =  matrix.size(); 
    int M = matrix[0].size();  
    int startRow = 0;
    int endRow = N-1;     
    int startCol = 0;   
    int endCol = M-1;    
    vector<int> ans;   
    while(startRow <= endRow && startCol <= endCol){
    for(int i = startCol; i <= endCol ; i++){
        ans.push_back(matrix[startRow][i]); 
    } 
    startRow++; 
    for(int i = startRow ; i <= endRow ; i++){
    ans.push_back(matrix[i][endCol]);   
    }
    endCol--; 
    if(startRow <= endRow){
    for(int i = endCol ; i>= startCol ; i--)         
    {
    ans.push_back(matrix[endRow][i]);
    }
    }
    endRow--;                         if(startCol <= endCol)            {                for(int i = endRow ; i >= startRow ; i--)                {                    ans.push_back(matrix[i][startCol]);                }            }            startCol++;        }        for(int i=0;i<ans.size();i++)      {          if((i+1)==k)          {              return ans[i];          }      }         }