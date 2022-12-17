#include <iostream>
#include <stdlib.h>
#include <unistd.h>
using namespace std;
void imprimir_pokemon (int x);
void batalha (int x);
int op_pokemon, vida_pokemon, cura_pokemon, ataque_pokemon;
char opcao;
int main() {
	
	string nome_jogador;

	cout << "BEM VINDO A BATALHA POKEMON!!" << endl;
	cout << "Digite seu nome: ";
	cin >> nome_jogador;
	
	cout << "\nOla " << nome_jogador << " seja bem vindo!" << endl;
	cout << "\nConfira as opcoes de pokemon disponiveis para a batalha: " << endl;
	cout << " 1 - Charmander\n 2 - Bulbassaur \n 3 - Squirtle" << endl;
	cout << "\nDigite o numero do pokemon que voce quer selecionar" << endl;
	cin >> op_pokemon;
	if(op_pokemon != 1 and op_pokemon!= 2 and op_pokemon!= 3) {
		cout << "Voce digitou um nome que nao esta entre as opcoes, por favor digite novamente" << endl;
		
		while (op_pokemon != 1 and op_pokemon!= 2 and op_pokemon!= 3) {
			cin >> op_pokemon;
		}
	}
	imprimir_pokemon (op_pokemon);
	
	cout << "\nESTA NA HORA DA BATALHAA!!!!! \nPREPARE-SE!!!" << endl;
	cout << "\nAdvesario: Mewtwo\nVida: 250\nAtaque:40" << endl;
	batalha (op_pokemon);

}

void imprimir_pokemon (int x) {
	if ( x == 1) {
		cout << "Pokemon escolhido: Charmander\n";
		sleep(1);
		cout << "\nVida: 200" << endl;
		sleep(1);
		cout << "Ataque: 50" << endl;
		sleep(1);
		cout << "Cura: 60" << endl;
		sleep(1);
	
	}
	else if ( x == 2) {
		cout << "Pokemon escolhido: Bulbassaur \n";
		sleep(1);
		cout << "Vida: 180" << endl;
		sleep(1);
		cout << "Ataque: 45" << endl;
		sleep(1);	
		cout << "Cura: 55" << endl;
		
	}
	else if ( x == 3) {
		cout << "Pokemon escolhido: Squirtle\n";
		sleep(1);	
		cout << "Vida: 170" << endl;
		sleep(1);	
		cout << "Ataque: 40" << endl;
		sleep(1);	
		cout << "Cura: 50" << endl;
	
	}
}
void batalha (int x) {
	 int vida_mewtwo =250, ataque_mewtwo = 40;
	if (x == 1) {
		vida_pokemon = 200;
		cura_pokemon = 60;
		ataque_pokemon = 50;
		sleep(1);	
		while (vida_pokemon != 0 and vida_mewtwo !=0) {
			cout << "---------------------------------------------------------------------";
			cout << "\nEh o seu turno, escolha o que deseja fazer\n" << endl;
			cout << "A - Atacar\nB - Curar\n";
			cin >> opcao;
			
			if (opcao == 'a' or opcao == 'A') {
				sleep(1);
				cout << "\nVoce atacou mewtwo ";
				vida_mewtwo = vida_mewtwo - ataque_pokemon;
				cout << "\nVoce deu: " << ataque_pokemon << " de dano em mewtwo.\n";
				cout << "\nA vida dele agora esta em: " << vida_mewtwo << endl;
				sleep(1);
				cout << "\nMewtwo atacou voce" << endl;
				cout << "\nAtaque do mewtwo: " << ataque_mewtwo;
				sleep(1);
				vida_pokemon = vida_pokemon - ataque_mewtwo;
				cout << "\n\nSua vida agora estar em: " << vida_pokemon << endl;
				
				cout << "-------------------------------------------------------";
 			}
 			else if (opcao == 'b' or opcao == 'B') {
 				cout << "\nVoce escolheu curar!" << endl;
 				sleep(1);
 				cout << "Sua vida era: " << vida_pokemon << endl;
 				vida_pokemon = vida_pokemon + cura_pokemon;
 				cout << "\nSua vida agora eh: " << vida_pokemon << endl;
 				cout << "\nMewtwo atacou voce" << endl;
				cout << "\nAtaque do mewtwo: " << ataque_mewtwo;
				sleep(1);
				vida_pokemon = vida_pokemon - ataque_mewtwo;
				cout << "\n\nSua vida agora estar em: " << vida_pokemon << endl;
				
				cout << "-------------------------------------------------------";
			 }
			else {
			 	cout << "\nVoce digitou uma opcao incorreta, perdeu a vez." << endl;
			 	cout << "\nMewtwo atacou voce" << endl;
				cout << "\nAtaque do mewtwo: " << ataque_mewtwo;
				sleep(1);
				vida_pokemon = vida_pokemon - ataque_mewtwo;
				cout << "\n\nSua vida agora estar em: " << vida_pokemon << endl;
				cout << "-------------------------------------------------------";
			 }
			sleep(2);	
			system("clear||cls");
 			
		}
		system("clear||cls");
		if (vida_pokemon == 0) {
			cout << "\n\nQue pena, voce perdeu a batalha :(" << endl;
	}
		else if (vida_mewtwo == 0) { 
			cout << "\n Parabens, voce venceu a batalha!!!! :D";
	}
	
}
	else if (x == 2) {
		vida_pokemon = 180;
		cura_pokemon = 55;
		ataque_pokemon = 45;
		sleep(1);

		while (vida_pokemon != 0 and vida_mewtwo !=0) {
			cout << "---------------------------------------------------------------------";
			cout << "\nEh o seu turno, escolha o que deseja fazer\n" << endl;
			cout << "A - Atacar\nB - Curar\n";
			cin >> opcao;
			
			if (opcao == 'a' or opcao == 'A') {
				sleep(1);
				cout << "\nVoce atacou mewtwo ";
				vida_mewtwo = vida_mewtwo - ataque_pokemon;
				cout << "\nVoce deu: " << ataque_pokemon << " de dano em mewtwo.\n";
				cout << "\nA vida dele agora este em: " << vida_mewtwo << endl;
				sleep(1);
				cout << "\nMewtwo atacou voce" << endl;
				cout << "\nAtaque do mewtwo: " << ataque_mewtwo;
				sleep(1);
				vida_pokemon = vida_pokemon - ataque_mewtwo;
				cout << "\n\nSua vida agora estar em: " << vida_pokemon << endl;
				cout << "-------------------------------------------------------";
 			}
 			else if (opcao == 'b' or opcao == 'B') {
 				cout << "\nVoce escolheu curar!" << endl;
 				sleep(1);
 				cout << "Sua vida era: " << vida_pokemon << endl;
 				vida_pokemon = vida_pokemon + cura_pokemon;
 				cout << "\nSua vida agora eh: " << vida_pokemon << endl;
 				cout << "\nMewtwo atacou voce" << endl;
				cout << "\nAtaque do mewtwo: " << ataque_mewtwo;
				sleep(1);
				vida_pokemon = vida_pokemon - ataque_mewtwo;
				cout << "\n\nSua vida agora estar em: " << vida_pokemon << endl;
				cout << "-------------------------------------------------------";
			 }
			else {
				cout << "\nVoce digitou uma opcao incorreta, perdeu a vez." << endl;
			 	cout << "\nMewtwo atacou voce" << endl;
				cout << "\nAtaque do mewtwo: " << ataque_mewtwo;
				sleep(1);
				vida_pokemon = vida_pokemon - ataque_mewtwo;
				cout << "\n\nSua vida agora estar em: " << vida_pokemon << endl;
				cout << "-------------------------------------------------------";
			 }
			sleep(2);
 			system("clear||cls");
		}
		sleep(2);
		system("clear||cls");
		if (vida_pokemon == 0) {
			cout << "\n\nQue pena, voce perdeu a batalha :(" << endl;
	}
		else if (vida_mewtwo == 0) { 
			cout << "\n Parabens, voce venceu a batalha!!!! :D";
	}
}
	else if (x == 3) {
		
		vida_pokemon = 170;
		cura_pokemon = 50;
		ataque_pokemon = 40;
		sleep(1);
		while (vida_pokemon != 0 and vida_mewtwo !=0) {
			cout << "---------------------------------------------------------------------";
			cout << "\nEh o seu turno, escolha o que deseja fazer\n" << endl;
			cout << "A - Atacar\nB - Curar\n";
			cin >> opcao;
			
			if (opcao == 'a' or opcao == 'A') {
				sleep(1);
				cout << "\nVoce atacou mewtwo ";
				vida_mewtwo = vida_mewtwo - ataque_pokemon;
				cout << "\nVoce deu: " << ataque_pokemon << " de dano em mewtwo.\n";
				cout << "\nA vida dele agora este em: " << vida_mewtwo << endl;
				sleep(1);
				cout << "\nMewtwo atacou voce" << endl;
				cout << "\nAtaque do mewtwo: " << ataque_mewtwo;
				sleep(1);
				vida_pokemon = vida_pokemon - ataque_mewtwo;
				cout << "\n\nSua vida agora estar em: " << vida_pokemon << endl;
				cout << "-------------------------------------------------------";
 			}
 			else if (opcao == 'b' or opcao == 'B') {
 				cout << "\nVoce escolheu curar!" << endl;
 				sleep(1);
 				cout << "Sua vida era: " << vida_pokemon << endl;
 				vida_pokemon = vida_pokemon + cura_pokemon;
 				cout << "\nSua vida agora eh: " << vida_pokemon << endl;
 				cout << "\nMewtwo atacou voce" << endl;
				cout << "\nAtaque do mewtwo: " << ataque_mewtwo;
				sleep(1);
				vida_pokemon = vida_pokemon - ataque_mewtwo;
				cout << "\n\nSua vida agora estar em: " << vida_pokemon << endl;
				cout << "-------------------------------------------------------";
			 }
			else {
				cout << "\nVoce digitou uma opcao incorreta, perdeu a vez." << endl;
			 	cout << "\nMewtwo atacou voce" << endl;
				cout << "\nAtaque do mewtwo: " << ataque_mewtwo;
				sleep(1);
				vida_pokemon = vida_pokemon - ataque_mewtwo;
				cout << "\n\nSua vida agora estar em: " << vida_pokemon << endl;
				cout << "-------------------------------------------------------";
			 }
			sleep(2);	 
 			system("clear||cls");
		}
		system("clear||cls");
		if (vida_pokemon == 0) {
			cout << "\n\nQue pena, voce perdeu a batalha :(" << endl;
	}
		else if (vida_mewtwo == 0) { 
			cout << "\n Parabens, voce venceu a batalha!!!! :D";
	}
}
}
		
