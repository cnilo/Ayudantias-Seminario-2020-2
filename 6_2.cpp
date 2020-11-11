#include <iostream>
using namespace std;


class angulo{	
	private:
		int grados;
		float minutos;
		char direccion;
	public:
		angulo():grados(0), minutos(0), direccion(0)	
			{	}
		angulo(int deg, float min, char dir):grados(deg), minutos(min), direccion(dir)	
			{	}
		void setAngulo();	
		void dispAngulo() const;	
};


void angulo::setAngulo() {	//getAngle() #defination
	cout <<"\nIngrese Grados: ";
	cin >>grados;
	cout <<"Ingrese minutos: ";
	cin >>minutos;
	cout <<"Ingrese Direccion(N,S,E,W): ";
	cin >>direccion;
}

void angulo::dispAngulo() const{	
	cout <<"Angulo: " <<grados <<"\xF8 " <<minutos <<"\' " <<direccion;

	switch(direccion) {	
		case 'N':
			cout <<" Latitud";
			break;
		case 'n':
			cout <<" Latitud";
			break;
		case 'S':
			cout <<" Latitud";
			break;
		case 's':
			cout <<" Latitud";
			break;
		case 'E':
			cout <<" Longitud";
			break;
		case 'e':
			cout <<" Longitud";
			break;
		case 'W':
			cout <<" Longitud";
			break;
		case 'w':
			cout <<" Longitud";
			break;
	}
}


class barco {	
	private:
		angulo latitud, longitud;
		static int contador;
		unsigned int idBarco;
	public:
		barco() {	
			contador++;
			idBarco = contador;
		}
		void getPosicion();	
		void mostrar() const;	
};

int barco::contador = 0;

void barco::getPosicion() {	
	cout <<"\nIngrese la Longitud del barco: ";
	longitud.setAngulo();
	cout <<"\nIngrese la Latitud del barco: ";
	latitud.setAngulo();
}

void barco::mostrar() const{	
	cout <<"ID del barco: " <<idBarco <<endl;
	longitud.dispAngulo();
	cout <<"\n";
	latitud.dispAngulo();
}

int main() {
	barco barco1, barco2, barco3;	
	cout <<"\nIngrese la posición del primer barco: ";
	barco1.getPosicion();	
	cout <<"\nIngrese la posición del segundo barco: ";
	barco2.getPosicion();	
	cout <<"\nIngrese la posición del tercer barco: ";
	barco3.getPosicion();	

	cout <<"\nLa posición del primer barco es: \n";
	barco1.mostrar();	
	cout <<endl;
	cout <<"\nLa posición del segundo barco es: \n";
	barco2.mostrar();	
	cout <<endl;
	cout <<"\nLa posición del tercer barco es: \n";
	barco3.mostrar();	
	cout <<endl <<endl;

	return 0;
}