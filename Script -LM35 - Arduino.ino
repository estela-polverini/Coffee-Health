// Codigo para Testar Sensor LM35

const int sensorPin = A0; // Esse é o pino do Arduino que irá ler a saída do sensor
float valorSensor;        // Essa variável irá ser usada para armazenar o input do sensor
float tensaoSaida;        // Essa variável irá ser usada para armazenar a tensão do sensor

float temperaturaC, temperaturaF;       // Variável que será usada para armazenar a temperatura em graus

// Descomentar se estiver usando o LM335
//float temperaturaK;      


void setup() {
 
  pinMode(sensorPin, INPUT); // Declare o tipo de pino que está conectado na placa
  Serial.begin(9600);        // Inicialize a comunicação serial em 9600 bits por segundo
   
}

void loop() {

  // Insira seu código principal aqui, para rodar repetidamente:
  valorSensor = analogRead(sensorPin);          // Leia o sensor analógico e armazene seu valor
  tensaoSaida = (valorSensor * 5000) / 1024;    //Cálculo para obter a tensão de saída do sensor
 
  // Calculando a temperatura para o LM35
  temperaturaC = tensaoSaida / 10;             // Convertendo a tensão em graus Celsius
  temperaturaF = (temperaturaC * 1.8) + 32;    // Convertendo para graus Fahrenheit
 
  // Calculando a temperatura para o LM335
  //temperaturaK = tensaoSaida / 10;
  //temperaturaC = temperaturaK - 273;
  //temperaturaF = (temperaturaC * 1.8) + 32;

  // Calculando a temperatura para o LM34
  //temperaturaF = tensaoSaida / 10;
  //temperaturaC = (temperaturaF - 32.0)*(5.0/9.0);

  Serial.print("Temperatura(ºC): ");           // Printando em graus Celsius
  Serial.print(temperaturaC);
  Serial.print("  Temperatura(ºF): ");         // Printando em graus Fahrenheit
  Serial.print(temperaturaF);
  Serial.print("  Tensão(mV): ");              // Printando a tensão em miliVolts
  Serial.println(tensaoSaida);
  delay(1000);                                 // Uma pequena pausa para não exibir dados errôneos
}