#include <iostream>
using namespace std;

int main(){
	int arr1[3][3]={{2,5,7},{1,8,2},{3,4,6}};
	int arr2[3][3]={{7,2,5},{8,1,7},{5,2,1}};
	int result [3][3];
	
	for (int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			result[i][j]=arr1[i][j] +arr2[i][j];
			cout<<result[i][j]<<" ";
			
		}
		cout<<endl;
	}
	return 0;
	}