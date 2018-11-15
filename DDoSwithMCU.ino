#Author: Francisco Wesley Melo Silva

#include <ESP826WiFi.h> 
#include <ESP8266Ping.h>

const char* ssid = '#####'; // SSID da rede que será conectado
const char* password = '#####'; // Senha da rede que será conectada
const char* remote_host = '#####'; //Endereço IP ou URL do dispositivo alvo

void setup() { 
Serial.begin(115200); // Inicia a comunicação serial
delay(10); // Aguarda 10 milissegundos

// Inicia a conexão à rede sem-fio.

Serial.println(); 
Serial.println("Conectando à rede Wi-Fi"); 
WiFi.begin(ssid, password); 

while (WiFi.status() != WL_CONNECTED) { // verifica se conectado ou não.
delay(100);

Serial.print("."); }
Serial.println(); 
Serial.print("WiFi conectado com IP "); //Exibe o endereço local do dispositivo 
Serial.println(WiFi.localIP());}

void loop() { 
Serial.print("Envio de ping ao host "); 
Serial.println(remote_host); 
if(Ping.ping(remote_host)) //Verifica ping contra o objeto atacado
{ 
Serial.println("Sucesso!!"); } else { 
Serial.println("Erro!:("); 
} 
delay(500);  //Aguarda meio segundo.
}
