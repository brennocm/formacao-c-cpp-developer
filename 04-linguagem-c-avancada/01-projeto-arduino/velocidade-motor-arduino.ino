int potPin = A0;      // Define o pino analógico A0 como entrada do potenciômetro
int motorPin = 9;     // Define o pino digital 9 como saída do motor DC
int motorSpeed;       // Variável para armazenar a velocidade do motor

void setup() {
  pinMode(motorPin, OUTPUT);   // Define o pino 9 como saída para o motor
  Serial.begin(9600);          // Inicia a comunicação serial com baud rate de 9600
}

void loop() {
  motorSpeed = map(analogRead(potPin), 0, 1023, 0, 255);  // Lê o valor do potenciômetro e mapeia para a faixa de 0 a 255
  analogWrite(motorPin, motorSpeed);                     // Controla a velocidade do motor com o valor lido do potenciômetro
  Serial.print("Velocidade do motor: ");                 // Imprime a velocidade do motor no monitor serial
  Serial.println(motorSpeed);
  delay(100);                                            // Espera 100 milissegundos
}

