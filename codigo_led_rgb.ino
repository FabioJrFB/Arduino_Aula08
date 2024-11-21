  int ledr1 = 11; int ledg1 = 10; int ledb1 = 9;
  int ledr2 = 6;  int ledg2 = 5;  int ledb2 = 3;

void setup() {
  pinMode (ledr1, OUTPUT); pinMode (ledg1, OUTPUT); pinMode (ledb1, OUTPUT);
  pinMode (ledr2, OUTPUT); pinMode (ledg2, OUTPUT); pinMode (ledb2, OUTPUT);
  Serial.begin (9600);
}

void loop() {
  int valorpot = analogRead (A0);
  Serial.println (valorpot);

  if (valorpot > 0 && valorpot <= 250){     //1° combinação
    analogWrite (ledr1, 75); analogWrite (ledg1, 0);   analogWrite (ledb1, 130);
    analogWrite (ledr2, 0);  analogWrite (ledg2, 150); analogWrite (ledb2, 0);
  }

  if (valorpot > 251 && valorpot <= 500){   //2° combinação
    analogWrite (ledr1, 0); analogWrite (ledg1, 0);   analogWrite (ledb1, 255);
    analogWrite (ledr2, 0); analogWrite (ledg2, 255); analogWrite (ledb2, 255);
  }

  if (valorpot > 501 && valorpot <= 750){   //3° combinação
    analogWrite (ledr1, 0); analogWrite (ledg1, 255); analogWrite (ledb1, 255);
    analogWrite (ledr2, 0); analogWrite (ledg2, 0);   analogWrite (ledb2, 255);
  }

  if (valorpot > 751 && valorpot <= 1024){   //4° combinação
    analogWrite (ledr1, 0);  analogWrite (ledg1, 150); analogWrite (ledb1, 0);
    analogWrite (ledr2, 75); analogWrite (ledg2, 0);   analogWrite (ledb2, 130);
  }
}
