#include<iostream>
#include<conio.h>

using namespace std;

	int menu,platos;
	float costo_platos,costo_propina,igv;	
	float precio,propina,suma,suma_total;

void mostrarmenu();
void resumen();
void procesocompra();
void masopciones(int opcion);
void multiplicacion();

	void mostrarmenu(){
	cout<<"------------------------------------------------"<<endl;	
	cout<<"Elija un numero para elegir un plato de la carta:"<<endl;
	cout<<"------------------------------------------------"<<endl;	
	cout<<" 1  -  Ceviche de pescado \t\tS/. 10.00"<<endl;
	cout<<" 2  -  Ceviche mixto \t\t\tS/. 20.00"<<endl;
	cout<<" 3  -  Leche de Tigre \t\t\tS/. 15.00"<<endl;
	cout<<" 4  -  Conchitas a la Parmesana \tS/. 12.00"<<endl;
	cout<<" 5  -  Choritos a la Chalaca \t\tS/. 16.00"<<endl;
	cout<<" 6  -  Pulpo al Olivo \t\t\tS/. 14.00"<<endl;
	cout<<" 7  -  Wantán de Pescado \t\tS/. 12.00"<<endl;
	cout<<" 8  -  Pulpo emparrillado \t\tS/. 22.00"<<endl;
	cout<<" 9  -  Ceviche de Conchas Negras \tS/. 12.00"<<endl;
	cout<<" 10 -  Ceviche Oriental \t\tS/. 15.00"<<endl;			
				
	}

void masopciones();
void masopciones(){
 int opcion;
 
cout<<"------------------------------------------------"<<endl;	
cout<<"¿Desea algo adicional?"<<endl;
cout<<"1  -  Si"<<endl;		
cout<<"2  -  No"<<endl;		
cout<<"------------------------------------------------"<<endl;	

cin>>opcion;

	if(opcion == 1){
		procesocompra();
	}else if(opcion == 2){
		resumen();
	}else{
		cout<<"Disculpe, no le he entendido. Elija una opcion correcta"<<endl;
		masopciones();
	}
	
	
}


void resumen(){
	
	igv=suma*0.18;
	propina=suma*0.10;
	suma_total=suma+igv+propina;
	
	cout<<"------------------------------------------------"<<endl;	
	cout<<"Su consumo total es de: \tS/. "<<suma<<" soles"<<endl;
	cout<<"El IGV por su consumo es de: \tS/. "<<igv<<" soles"<<endl;
	cout<<"Se agradece su propina de: \tS/. "<<propina<<" soles"<<endl;
	cout<<"-----------------"<<endl;	
	cout<<"La Factura total asciende a: \tS/. "<<suma_total<<" soles"<<endl;
	
	cout<<"------------------------------------------------"<<endl;			
	cout<<"GRACIAS POR SU VISITA"<<endl;
}

int main(){

	
	int saludo=0;	
	
	if(saludo==0){
		cout<<"---------------------------------------------"<<endl;	
	cout<<"Bienvenidos a la Cevicheria 'La Concha Marina'"<<endl;
		saludo=1;
	}

	procesocompra();
		
	getch();
	return 0; 
}



void procesocompra(){

	mostrarmenu();
	
	cout<<"------------------------------------------------"<<endl;		
	cout<<"Escriba el numero de su opcion: ";	
	cin>>menu;
	cout<<"------------------------------------------------"<<endl;

if(menu>0 && menu<=10){
		cout<<"¿Cuantos platos?: ";
	cin>>platos;
	
	
	switch (menu){
		case 1: precio=10;	break;
		case 2: precio=20; break;	
		case 3: precio=15;	break;
		case 4: precio=12;	break;
		case 5: precio=16;	break;
		case 6: precio=14;	break;
		case 7: precio=12;	break;
		case 8: precio=22;	break;
		case 9: precio=12;	break;
		case 10: precio=15; break;
				
		default: cout<<"Elija correctamente, por favor"<<endl;mostrarmenu();	break;	
		
	}

	costo_platos=precio*platos;
	suma=suma+costo_platos;
	cout<<"------------------------------------------------"<<endl;
	cout<<"El precio hasta ahora es de: S/. "<<suma<<" soles."<<endl;

	masopciones();	

	
	
}else{
	cout<<"XXX - Elija correctamente, por favor - XXX"<<endl;procesocompra();
	
}


}

