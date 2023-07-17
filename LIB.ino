// PROGRAMA PARA LER LETRAS E SÍLABAS

// INCLUSÃO DE BIBLIOTECAS
#include "SoftwareSerial.h"
#include "DFRobotDFPlayerMini.h"

// DEFINIÇÕES DE PINOS
#define pinRx 10 //informe aqui qual porta Rx está sendo utilizada.
#define pinTx 11 //informe aqui qual porta Tx está sendo utilizada.

// DEFINIÇÕES
#define volumeMP3 30 //definimos o volume, entre 0 e 30.

#define DEBUG
// INSTANCIANDO OBJETOS
SoftwareSerial playerMP3Serial(pinRx, pinTx);

DFRobotDFPlayerMini playerMP3;


// DECLARAÇÃO DE FUNÇÕES


// DECLARAÇÃO DE VARIÁVEIS  
int in1Pin = 1;
int in2Pin = 2;
int in3Pin = 3;
int in4Pin = 4;
int in5Pin = 5;
int in6Pin = 6;

int in7Pin = 7;
int in8Pin = 8;
int in9Pin = 9;
int in10Pin = 10;
int in11Pin = 11;
int in12Pin = 12;

int StartPin = 13;
int StopPin = 14;

//int som = 15;

int var1 = 0;
int var2 = 0;
int var3 = 0;
int var4 = 0;
int var5 = 0;
int var6 = 0;
int var7 = 0;
int var8 = 0;
int var9 = 0;
int var10 = 0;
int var11 = 0;
int var12 = 0;
int var13 = 0;
int var14 = 0;
int var15 = 0;
int var16 = 0;
int var17 = 0;
int var18 = 0;
int var19 = 0;
int var20 = 0;
int var21 = 0;
int var22 = 0;
int var23 = 0;

int start = 0;
int stop = 0;

void setup() {
  pinMode (in1Pin, INPUT_PULLUP);
	pinMode (in2Pin, INPUT_PULLUP);
	pinMode (in3Pin, INPUT_PULLUP);
	pinMode (in4Pin, INPUT_PULLUP);
	pinMode (in5Pin, INPUT_PULLUP);
	pinMode (in6Pin, INPUT_PULLUP);
	pinMode (in7Pin, INPUT_PULLUP);
	pinMode (in8Pin, INPUT_PULLUP);
	pinMode (in9Pin, INPUT_PULLUP);
	pinMode (in10Pin, INPUT_PULLUP);
	pinMode (in11Pin, INPUT_PULLUP);
	pinMode (in12Pin, INPUT_PULLUP);
  pinMode (StartPin, INPUT);
  pinMode (StopPin, INPUT);
	//pinMode (som, OUTPUT);

  Serial.begin(9600);
  playerMP3Serial.begin(9600);

  playerMP3.volume(volumeMP3);
 
}

void loop() {
//Sobre as vogais (célula 1)
playerMP3.playFolder(3,1); //Tocando pasta 3, arquivo 1 ("Digite uma letra, um número ou uma sílaba.")
delay (30000);
  if (digitalRead(in1Pin && StartPin) == HIGH){
    playerMP3.playFolder(1, 1); //Tocando pasta 01, arquivo 001 (LETRA A)
    delay(500);
  }
  if (digitalRead(in1Pin && in5Pin && StartPin) == HIGH){
    playerMP3.playFolder(1, 2); //Tocando pasta 01, arquivo 002 (LETRA E)
    delay(500);
  }
  if (digitalRead(in2Pin && in4Pin && StartPin) == HIGH){
    playerMP3.playFolder(1, 3); //Tocando pasta 01, arquivo 003 (LETRA I)
    delay(500);
  }
  if (digitalRead(in1Pin && in3Pin && in5Pin && StartPin) == HIGH){
    playerMP3.playFolder(1, 4); //Tocando pasta 01, arquivo 004 (LETRA O)
    delay(500);
  }
  if (digitalRead(in1Pin && in3Pin && in6Pin && StartPin) == HIGH){
    playerMP3.playFolder(1, 5); //Tocando pasta 01, arquivo 005 (LETRA U)
    delay(500);
  }

//Sobre as consoantes (célula 2)
  if (digitalRead(in1Pin && in2Pin && StartPin) == HIGH){
    playerMP3.playFolder(2, 1); //Tocando pasta 02, arquivo 001 (LETRA B)
    delay(500);
  }
  if (digitalRead(in7Pin && in10Pin && StartPin) == HIGH){
    playerMP3.playFolder(2, 2); //Tocando pasta 02, arquivo 002 (LETRA C)
    delay(500);
  }
  if (digitalRead(in7Pin && in10Pin && in11Pin && StartPin) == HIGH){
    playerMP3.playFolder(2, 3); //Tocando pasta 02, arquivo 003 (LETRA D)
    delay(500);
  }
  if (digitalRead(in7Pin && in8Pin && in10Pin && StartPin) == HIGH){
    playerMP3.playFolder(2, 4); //Tocando pasta 02, arquivo 004 (LETRA F)
    delay(500);
  }
  if (digitalRead(in7Pin && in8Pin && in9Pin && in10Pin && StartPin) == HIGH){
    playerMP3.playFolder(2, 5); //Tocando pasta 02, arquivo 005 (LETRA G)
    delay(500);
  }
  if (digitalRead(in7Pin && in8Pin && in11Pin && StartPin) == HIGH){
    playerMP3.playFolder(2, 6); //Tocando pasta 01, arquivo 001 (LETRA H)
    delay(500);
  }
  if (digitalRead(in8Pin && in10Pin && in11Pin && StartPin) == HIGH){
    playerMP3.playFolder(2, 7); //Tocando pasta 02, arquivo 007 (LETRA J)
    delay(500);
  }
  if (digitalRead(in7Pin && in9Pin && StartPin) == HIGH){
    playerMP3.playFolder(2, 8); //Tocando pasta 02, arquivo 008 (LETRA K)
    delay(500);
  }
  if (digitalRead(in7Pin && in8Pin && in9Pin && StartPin) == HIGH){
    playerMP3.playFolder(2, 9); //Tocando pasta 02, musica 009 (LETRA L)
    delay(500);
  }
  if (digitalRead(in7Pin && in9Pin && in10Pin && StartPin) == HIGH){
    playerMP3.playFolder(2, 10); //Tocando pasta 02, arquivo 010 (LETRA M)
    delay(500);
  }
  if (digitalRead(in7Pin && in9Pin && in10Pin && in11Pin && StartPin) == HIGH){
    playerMP3.playFolder(2, 11); //Tocando pasta 02, arquivo 011 (LETRA N)
    delay(500);
  }
  if (digitalRead(in7Pin && in8Pin && in9Pin && in10Pin && StartPin) == HIGH){
    playerMP3.playFolder(2, 12); //Tocando pasta 02, arquivo 012 (LETRA P)
    delay(500);
  }
  if (digitalRead(in7Pin && in8Pin && in9Pin && in11Pin && StartPin) == HIGH){
    playerMP3.playFolder(2, 13); //Tocando pasta 02, arquivo 013 (LETRA R)
    delay(500);
  }
  if (digitalRead(in8Pin && in9Pin && in10Pin && StartPin) == HIGH){
    playerMP3.playFolder(2, 14); //Tocando pasta 02, arquivo 014 (LETRA S)
    delay(500);
  }
  if (digitalRead(in8Pin && in9Pin && in10Pin && in11Pin && StartPin) == HIGH){
    playerMP3.playFolder(2, 15); //Tocando pasta 02, arquivo 015 (LETRA T)
    delay(500);
  }
  if (digitalRead(in7Pin && in8Pin && in9Pin && in12Pin && StartPin) == HIGH){
    playerMP3.playFolder(2, 16); //Tocando pasta 02, arquivo 016 (LETRA V)
    delay(500);
  }
  if (digitalRead(in7Pin && in9Pin && in10Pin && in12Pin && StartPin) == HIGH){
    playerMP3.playFolder(2, 17); //Tocando pasta 02, arquivo 017 (LETRA X)
    delay(500);
  }
  if (digitalRead(in7Pin && in9Pin && in11Pin && in12Pin && StartPin) == HIGH){
    playerMP3.playFolder(2, 18); //Tocando pasta 02, arquivo 018 (LETRA Z)
    delay(500);
  }
  //Erro na leitura dos pinos
  else {
    playerMP3.playFolder(3, 2); //Tocando pasta 03, arquivo 02 ("Erro na leitura.")
    delay(3000);
  }
}