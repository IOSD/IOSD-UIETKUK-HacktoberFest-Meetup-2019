#include<iostream>
using namespace std;


int count = 0;

//Checking the position for next queen is safe or not
bool isSafe(int board[][11],int i,int j,int n){
	//Check for the row
	for(int row=0;row<i;row++){
		if(board[row][j]==1){
			return false;
		}
	}
	//Check for left diagonal
	int x =i;
	int y =j;
	while(x>=0 && y>=0){
		if(board[x][y]==1){
			return false;
		}
		x--;
		y--;
	}
	// check for left diagonal
	x =i;
	y =j;
	while(x>=0 && y<n){
		if(board[x][y]==1){
			return false;
		}
		x--;
		y++;
	}
	return true;
}


bool Nqueen(int board[][11],int i,int n){
	
	//Base case
	if(i==n){
		for(int i=0;i<n;i++){
			for(int j =0;j<n;j++){
				if(board[i][j]==1){
					cout<<" Q ";
				}
					else{
						cout<<" _ ";
					}
				
			}
			cout<<endl;
		}
	
		cout<<endl;
    count++;

	
	return false;	
	}

	//Recursive Case
	for(int j=0;j<n;j++){
		if(isSafe(board,i,j,n)){
			board[i][j]=1;
		
		
    
      bool NextQueen = Nqueen(board,i+1,n);
      if(NextQueen){
      	return true;
      }
      //Backtracking step
      board[i][j]=0;
	}
}
return false;
}




int main(){
	int n;
	cin>>n;
	int board[11][11] = {0};

	Nqueen(board,0,n);

	cout<<endl<<count;
}
