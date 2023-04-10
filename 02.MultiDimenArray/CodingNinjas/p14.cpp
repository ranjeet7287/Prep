#include <bits/stdc++.h> 
using namespace std;
void rotateRightByK(vector<int> &row, int k) {	
	// Reversing the whole vector.
	reverse(row.begin(), row.end());
	// Reversing first 'K' elements.
	reverse(row.begin(), row.begin() + k);
	// Reversing the rest 'N' - 'K' elements.
	reverse(row.begin() + k , row.end());
}
vector<int> rotateMatRight(vector<vector<int>> mat, int n, int m, int k) {
	// Vector to store the answer matrix sequence.
	vector<int> result;
	// Calculating effective rotations.
	k = k % m;
	// Iterating for each row and appending after rotations to the answer sequence.
	for(int i = 0; i < n; i++) {
		// Calling the function to rotate the row 'K' times.
		rotateRightByK(mat[i], k);
		// Append row 'i' to the answer sequence after rotation.
		result.insert(result.end(), mat[i].begin(), mat[i].end());
	}
	// Return the answer sequence.
	return result;
}
vector<int> rotateMatRight(vector<vector<int>> mat, int n, int m, int k){
	vector<int> ans;
	int a=k%m;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			int q=((m-a)+j)%m;
			ans.push_back(mat[i][q]);
		}
	}
	return ans;
}