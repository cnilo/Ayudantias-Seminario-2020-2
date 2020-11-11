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
		void setAngulo(int, float, char);	
		void dispAngulo() const;	
};


void angulo::setAngulo(int gr, float mnt, char dir) { 
	grados = gr;
	minutos = mnt;
	direccion = dir;
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

int main() {	
	int gr;
	float mint;
	char drcc, opcion;
	cout <<endl;
	angulo angulo1(146, 34.6, 'S');	
	angulo1.dispAngulo();	
	cout <<endl;
	angulo angulo2;	

	do {
		cout <<"\nIngresa los grados: ";
		cin >>gr;
		cout <<"Ingrese los minutos: ";
		cin >>mint;
		cout <<"Ingrese la dirección (N, S, E, W): ";
		cin >>drcc;

		angulo2.setAngulo(gr, mint, drcc);	
		angulo2.dispAngulo();	

		cout <<"\n\n¿Desea ingresar otro ángulo de navegación?(S,N): ";
		cin >>opcion;
	} while(opcion == 'S' || opcion == 'S' );	
	cout <<endl;
	return 0;
}
