#include<iostream>
using namespace std;
const unsigned n = 3;
struct Magazun{
	char a_name[128];
	unsigned  b_cod;
	unsigned c_kilkist; 
	unsigned var;
	}M[n];
void sortMag(struct Magazun *p);
int main(){
	
	int sum = 0;
	for(int i = 0; i < n; ++i)
	{
		cout << "Vvedit Cod Tovaru"<<endl;
		cin >> M[i].b_cod;
		cout << "Vvedit Nazvu Tovaru"<<endl;
		cin >> M[i].a_name;
		cout << "Vvedit Kilcist Tovaru"<<endl;
		cin >> M[i].c_kilkist;
		cout << "Vvedit Vartist Tovaru"<<endl;
		cin >>M[i].var;

		if(i < (n-1))
		{
			cout <<"-----------"<<endl;
			cout << "Vvedit Nastupnuj Tovar"<<endl;
			cout <<endl;
		}else
		{
			cout <<"-----------"<<endl;
		}

	}

		 sortMag(M);

		for(int i = 0; i < n; ++i)
		{
		     cout <<"-----------"<<endl;
			 cout << "Cod Tovaru : ";
			 cout << M[i].b_cod <<endl;
			 cout << "Nazva Tovaru : ";
			 cout << M[i].a_name <<endl;
			 cout << "Kilkist Tovaru : ";
			 cout << M[i].c_kilkist <<endl;
			 cout << "Vartist Tovaru : ";
			 cout << M[i].var <<endl;
			
		  sum += M[i].var;
		
	}
	cout <<"-----------"<<endl;
	cout << "Sumarna Vartist Tovariv : ";
	cout << sum ;
	cout <<" UAH"<<endl;
	cout <<"-----------"<<endl;
	system("pause");
return 0;
}


void sortMag(struct Magazun *p)
{
	
	Magazun tmp;

	for(unsigned j = 0 ; j < n ; ++j)
	{ 
	

		for( unsigned i = 0 ; i < n - 1 ; ++i)
		{

		if((p + i) ->b_cod > (p + i + 1)->b_cod)
		{
			tmp = p[i + 1];
            p[i + 1] = p[i];
            p[i] = tmp;
		};
	   
	
	 }
}
	
	return ;
}