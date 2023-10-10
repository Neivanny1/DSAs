# include <iostream>
using namespace std;
int main()
{
	int N,choice,ELEM,POS,arr[N];
	char ch;
	
	while(1)
	{
	cout<<"--------MENU--------\n";
	cout<<"    1. Performs insertion\n";
	cout<<"    2. Performs Display\n";
	cout<<"    3. Performs  Delete\n";
	cout<<"    4. perform  \n";
	cout<<"    5.      Exit\n";
	
	 cout<<"\nENTER YOUR CHOICE\n";
	cin>>choice;
		switch(choice){
			case 1://create
			cout<<"Enter arrray size\n";
			cin>>N;
			cout<<"Enter elements\n";
			for (int i=0;i<N;i++){
				cin>>arr[i];
			}
			break;//DISPLAY
			case 2:
				cout<<"Elements are\n";
				for(int i=0;i<N;i++){cout<<arr[i]<<" ";
				}
			break;// INSERT
			case 3:
				cout<<"Enter the position to insert the element\n";
				cin>>POS;
				cout<<" enter the element\n";
				cin>>ELEM;
				N++;
		 for (int i = N-1;i>=POS-1; i--){
        arr[i]=arr[i-1];}
     	arr[POS-1] = ELEM;	
     	break ;
     	case 4:
     		cout<<"Enter the position of the element to be deleted\n";
     		cin>>POS;
     		for( int i =POS-1;i<N-1;i++)
			 { arr[i] = arr[i+1];
			 }
			 N--;
			 break ;
			 case 5:
			 	exit(1);
		}
	}
	
return 1;	
}
