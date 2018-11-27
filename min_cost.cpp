#include <iostream>
#include <vector>

using namespace std;

typedef vector<vector<int> > matrix;

const int row = 3;
const int col = 3;

int main(){
	int i, j ;

	matrix m(row, vector<int>(col));

	cout << "Enter the Cost Matrix\n";

	for(i =0;i<row;i++){
		for(j =0 ;j<col ;j++){
			cin >> m[i][j] ;
		}
	}


	matrix min_cost( row, vector <int>(col) );

	min_cost[0][0] = m[0][0] ;

	for ( i=1 ;i< col ;i++){
		min_cost[0][i] = min_cost[0][i-1] + m[0][i] ;
	}


	for( j = 1 ;j< row ;j++){
		min_cost[j][0] = min_cost[j-1][0] + m[j][0] ;
	}


	for( i = 1 ;i < row ;i++){
		for ( j = 1;j< col ;j++){
			min_cost[i][j] = min( min_cost[i-1][j-1],min( min_cost[i-1][j] , min_cost[i][j-1] )) + m[i][j] ;
		}
	}

	cout << min_cost[i-1][j-1] <<endl ;

	return 0;
}
