#include <iostream>
		using namespace std;
		
		int main()
		{
			float Al_A,Al_B;
			cout<<"INGRESE LOS VALORES A y B";
			cin>> Al_a,Al_B;
		if(Al_A==Al_B){
			cout<<"el valor"<<Al_A<<"es igual a"<<Al_B;
		}else{
			if(Al_A<Al_B){
				cout<<"el valor"<<Al_A<<"es menor que"<<Al_B;
		}else{
			cout<<"el valor de"<<Al_A<<"es mayor que"<<Al_B;
		}
		}
		return 0;
		}
