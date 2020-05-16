#include <bits/stdc++.h>

using namespace std;

int main() {
	
int escolaridade, anos, pontos1, pontos2;
char b,c;

cout << "Qual sua escolaridade?" << endl;
cout << "1) Ensino Fundamental" << endl;
cout << "2) Ensino Medio" << endl;
cout << "3) Ensino Superior" << endl;
cout << "4) Pos-graduacao" << endl;
cout << "Digite uma opcao: "; 
cin >>  escolaridade;

cout << "Voce tem quantos anos de expreriencia profissional?";
cin >> anos;
cout << "Voce tem disponibilidade para viajar? (S/N)";
cin >> b;
cout << "Voce tem habilitacao de motorista? (S/N)";
cin >> c;

if (escolaridade == 1) {
	pontos1 = 10;
}
else if (escolaridade == 2) {
	pontos1 = 20;
}
	else if (escolaridade == 3) {
	pontos1 = 30;
}
else if (escolaridade == 4) {
	pontos1 = 40;
}


if (anos>5) {
	pontos2=40;
}
else if (anos>2 && anos<=5) {
pontos2 = 20;
}
else if (anos>0 && anos<=2) {
pontos2 = 10;
}
else if (anos==0 ) {
pontos2 = 0;
}

cout << "Pontos por escolaridade: " << pontos1 << endl;
cout << "Pontos por experiencia: " << pontos2 << endl;	

return 0;
}

