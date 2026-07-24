// Christian Girón - 23233 
//Lab 1 
// 24/07/26

#include <Arduino.h>

// LED
int led1 = 12;
int led2 = 14;
int led3 = 27;
int led4 = 26;

// Botones
int sumar = 32;
int restar = 35;
int modo = 34;

int contador = 0;
int tipo = 1; // 1 = Binario, 0 = Décadas

void setup()
{
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);

  pinMode(sumar, INPUT);
  pinMode(restar, INPUT);
  pinMode(modo, INPUT);
}

void loop()
{
  // Cambiar modo
  if (digitalRead(modo) == HIGH)
  {
    if (tipo == 1)
    {
      tipo = 0;
    }
    else
    {
      tipo = 1;
    }

    contador = 0;
    delay(300);
  }

  // Boton sumar 
  if (digitalRead(sumar) == HIGH)
  {
    contador++;

    if (tipo == 1) // Binario
    {
      if (contador > 15)
      {
        contador = 0;
      }
    }
    else // Décadas
    {
      if (contador > 4)
      {
        contador = 1;
      }
    }

    delay(300);
  }

  // Boton restar 
  if (digitalRead(restar) == HIGH)
  {
    contador--;

    if (tipo == 1) // Binario
    {
      if (contador < 0)
      {
        contador = 15;
      }
    }
    else // Décadas
    {
      if (contador < 0)
      {
        contador = 4;
      }
    }

    delay(300);
  }

  // ==========================
  // MODO BINARIO
  // ==========================
  if (tipo == 1)
  {

    if (contador == 0)
    {
      digitalWrite(led1, LOW);
      digitalWrite(led2, LOW);
      digitalWrite(led3, LOW);
      digitalWrite(led4, LOW);
    }

    if (contador == 1)
    {
      digitalWrite(led1, HIGH);
      digitalWrite(led2, LOW);
      digitalWrite(led3, LOW);
      digitalWrite(led4, LOW);
    }

    if (contador == 2)
    {
      digitalWrite(led1, LOW);
      digitalWrite(led2, HIGH);
      digitalWrite(led3, LOW);
      digitalWrite(led4, LOW);
    }

    if (contador == 3)
    {
      digitalWrite(led1, HIGH);
      digitalWrite(led2, HIGH);
      digitalWrite(led3, LOW);
      digitalWrite(led4, LOW);
    }

    if (contador == 4)
    {
      digitalWrite(led1, LOW);
      digitalWrite(led2, LOW);
      digitalWrite(led3, HIGH);
      digitalWrite(led4, LOW);
    }

    if (contador == 5)
    {
      digitalWrite(led1, HIGH);
      digitalWrite(led2, LOW);
      digitalWrite(led3, HIGH);
      digitalWrite(led4, LOW);
    }

    if (contador == 6)
    {
      digitalWrite(led1, LOW);
      digitalWrite(led2, HIGH);
      digitalWrite(led3, HIGH);
      digitalWrite(led4, LOW);
    }

    if (contador == 7)
    {
      digitalWrite(led1, HIGH);
      digitalWrite(led2, HIGH);
      digitalWrite(led3, HIGH);
      digitalWrite(led4, LOW);
    }

    if (contador == 8)
    {
      digitalWrite(led1, LOW);
      digitalWrite(led2, LOW);
      digitalWrite(led3, LOW);
      digitalWrite(led4, HIGH);
    }

    if (contador == 9)
    {
      digitalWrite(led1, HIGH);
      digitalWrite(led2, LOW);
      digitalWrite(led3, LOW);
      digitalWrite(led4, HIGH);
    }

    if (contador == 10)
    {
      digitalWrite(led1, LOW);
      digitalWrite(led2, HIGH);
      digitalWrite(led3, LOW);
      digitalWrite(led4, HIGH);
    }

    if (contador == 11)
    {
      digitalWrite(led1, HIGH);
      digitalWrite(led2, HIGH);
      digitalWrite(led3, LOW);
      digitalWrite(led4, HIGH);
    }

    if (contador == 12)
    {
      digitalWrite(led1, LOW);
      digitalWrite(led2, LOW);
      digitalWrite(led3, HIGH);
      digitalWrite(led4, HIGH);
    }

    if (contador == 13)
    {
      digitalWrite(led1, HIGH);
      digitalWrite(led2, LOW);
      digitalWrite(led3, HIGH);
      digitalWrite(led4, HIGH);
    }

    if (contador == 14)
    {
      digitalWrite(led1, LOW);
      digitalWrite(led2, HIGH);
      digitalWrite(led3, HIGH);
      digitalWrite(led4, HIGH);
    }

    if (contador == 15)
    {
      digitalWrite(led1, HIGH);
      digitalWrite(led2, HIGH);
      digitalWrite(led3, HIGH);
      digitalWrite(led4, HIGH);
    }
  }

  // ==========================
  // MODO DÉCADAS
  // ==========================
  if (tipo == 0)
  {
    if (contador == 0)
    {
      digitalWrite(led1, LOW);
      digitalWrite(led2, LOW);
      digitalWrite(led3, LOW);
      digitalWrite(led4, LOW);
    }

    if (contador == 1)
    {
      digitalWrite(led1, HIGH);
      digitalWrite(led2, LOW);
      digitalWrite(led3, LOW);
      digitalWrite(led4, LOW);
    }

    if (contador == 2)
    {
      digitalWrite(led1, LOW);
      digitalWrite(led2, HIGH);
      digitalWrite(led3, LOW);
      digitalWrite(led4, LOW);
    }

    if (contador == 3)
    {
      digitalWrite(led1, LOW);
      digitalWrite(led2, LOW);
      digitalWrite(led3, HIGH);
      digitalWrite(led4, LOW);
    }

    if (contador == 4)
    {
      digitalWrite(led1, LOW);
      digitalWrite(led2, LOW);
      digitalWrite(led3, LOW);
      digitalWrite(led4, HIGH);
    }
  }
}