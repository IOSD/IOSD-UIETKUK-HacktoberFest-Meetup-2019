using namespace std;

int main() {
	//code
	int T;
	cin>>T;
	while(T--)
	{

	    int N,D;
	    cin>>N>>D;

	    int* a = new int[N];

	    for(int i=0 ;i<N; i++)
	    {
	        cin>>a[i];
	    }

	    int* b = new int[N];
	    for(int i=0;i<N;i++)
	    {
	        b[(i+N-D)%N] = a[i];

	    }
	    for(int i=0;i<N;i++)
	    {
	        cout<<b[i]<<" ";
	    }
	    cout<<endl;

	}




	return 0;
}
