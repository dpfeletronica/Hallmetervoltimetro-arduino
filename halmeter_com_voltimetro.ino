///Hallmeter
///Dpf Eletrônica
///26/06/2020
#include <Wire.h> //INCLUSÃO DE BIBLIOTECA
#include <Adafruit_GFX.h> //INCLUSÃO DE BIBLIOTECA
#include <Adafruit_SSD1306.h> //INCLUSÃO DE BIBLIOTECA
 
Adafruit_SSD1306 display = Adafruit_SSD1306(); //OBJETO DO TIPO Adafruit_SSD1306
 
int analogPin = A0; //  connected to analog pin 3
int voltimetro = A1; //  connected to analog pin 4
int sel = A2; //  connected to analog pin 4                    // 
int val = 0, valb=0, volt=0, seleciona=0, op=0;  // variable 

void setup() {
  Wire.begin(); //INICIALIZA A BIBLIOTECA WIRE
  display.begin(SSD1306_SWITCHCAPVCC, 0x3C); //INICIALIZA O DISPLAY COM ENDEREÇO I2C 0x3C
 display.setTextColor(WHITE); //DEFINE A COR DO TEXTO
  display.setTextSize(3); //DEFINE O TAMANHO DA FONTE DO TEXTO
  display.clearDisplay(); //LIMPA AS INFORMAÇÕES DO DISPLAY
  
  
  Serial.begin(9600);           //  setup serial
   pinMode(A2, INPUT);   // configura o pino digital 13 como saída
  pinMode(13, OUTPUT);   // configura o pino digital 13 como saída
  pinMode(12, OUTPUT);   // configura o pino digital 12 como saída
  pinMode(11, OUTPUT);   // configura o pino digital 11 como saída  
  pinMode(10, OUTPUT);  // configura o pino digital 13 como saída
  pinMode(9, OUTPUT);    // configura o pino digital 12 como saída
  pinMode(8, OUTPUT);    // configura o pino digital 11 como saída  
  pinMode(7, OUTPUT);   // configura o pino digital 13 como saída
  pinMode(6, OUTPUT);    // configura o pino digital 12 como saída
  pinMode(5, OUTPUT);    // configura o pino digital 11 como saída  
  pinMode(4, OUTPUT);    // configura o pino digital 13 como saída
  pinMode(3, OUTPUT);    // configura o pino digital 12 como saída
  pinMode(2, OUTPUT);    // configura o pino digital 11 como saída  
 
  
////Firula do incio
 digitalWrite(2,HIGH);
  delay(50);
  digitalWrite(2,LOW);
  delay(50);
   digitalWrite(3,HIGH);
   delay(50);
     digitalWrite(3,LOW);
     delay(50);
       digitalWrite(4,HIGH);
       delay(50);
        digitalWrite(4,LOW);
        delay(50);
          digitalWrite(5,HIGH);
          delay(50);
            digitalWrite(5,LOW);
            delay(50);
             digitalWrite(6,HIGH);
             delay(50);
              digitalWrite(6,LOW);
              delay(50);
               digitalWrite(7,HIGH);
               delay(50);
                digitalWrite(7,LOW);
                delay(50);
                digitalWrite(8,HIGH);
  delay(50);
  digitalWrite(8,LOW);
  delay(50);
   digitalWrite(9,HIGH);
   delay(50);
     digitalWrite(9,LOW);
     delay(50);
       digitalWrite(10,HIGH);
       delay(50);
        digitalWrite(10,LOW);
        delay(50);
          digitalWrite(11,HIGH);
          delay(50);
            digitalWrite(11,LOW);
            delay(50);
             digitalWrite(12,HIGH);
             delay(50);
              digitalWrite(12,LOW);
              delay(50);
               digitalWrite(13,HIGH);
               delay(50);
                digitalWrite(13,LOW);
                delay(50);
             digitalWrite(12,HIGH);
             delay(50);
              digitalWrite(12,LOW);
              delay(50);
             digitalWrite(11,HIGH);
             delay(50);
              digitalWrite(11,LOW);
              delay(50);
             digitalWrite(10,HIGH);
             delay(50);
              digitalWrite(10,LOW);
              delay(50);
             digitalWrite(9,HIGH);
             delay(50);
              digitalWrite(9,LOW);
              delay(50);
             digitalWrite(8,HIGH);
             delay(50);
              digitalWrite(8,LOW);
              delay(50);
             digitalWrite(7,HIGH);
             delay(50);
              digitalWrite(7,LOW);
              delay(50);
             digitalWrite(6,HIGH);
             delay(50);
              digitalWrite(6,LOW);
              delay(50);
             digitalWrite(5,HIGH);
             delay(50);
              digitalWrite(5,LOW);
              delay(50);
             digitalWrite(4,HIGH);
             delay(50);
              digitalWrite(4,LOW);
              delay(50);
             digitalWrite(3,HIGH);
             delay(50);
              digitalWrite(3,LOW);
              ///fim da firula
              
}

void loop() {

//delay(20);
//display.display(); //EFETIVA A ESCRITA NO DISPLAY

if(op==0){
if(val*45/10<350){
display.setTextSize(1); //DEFINE O TAMANHO DA FONTE DO TEXTO
display.setCursor(25,25); //POSIÇÃO EM QUE O CURSOR IRÁ FAZER A ESCRITA
display.print("Mistura Pobre"); //ESCREVE O TEXTO NO DISPLAY
//display.clearDisplay(); //LIMPA AS INFORMAÇÕES DO DISPLAY 

} 
 if(val*45/10>750){
display.setTextSize(1); //DEFINE O TAMANHO DA FONTE DO TEXTO
display.setCursor(25,25); //POSIÇÃO EM QUE O CURSOR IRÁ FAZER A ESCRITA
display.print("Mistura Rica"); //ESCREVE O TEXTO NO DISPLAY
}  
if(val*45/10>350){
  if(val*45/10<750){
 display.setTextSize(1); //DEFINE O TAMANHO DA FONTE DO TEXTO
display.setCursor(25,25); //POSIÇÃO EM QUE O CURSOR IRÁ FAZER A ESCRITA
display.print("Mistura Ideal"); //ESCREVE O TEXTO NO DISPLAY 

}}
  display.setTextSize(3); //DEFINE O TAMANHO DA FONTE DO TEXTO
 display.setCursor(00,1); //POSIÇÃO EM QUE O CURSOR IRÁ FAZER A ESCRITA
  display.print(val*45/10); //ESCREVE O TEXTO NO DISPLAY
  display.setCursor(70,1); //POSIÇÃO EM QUE O CURSOR IRÁ FAZER A ESCRITA
 display.print("Mv"); //ESCREVE O TEXTO NO DISPLAY
 display.display(); //EFETIVA A ESCRITA NO DISPLAY
 display.clearDisplay(); //LIMPA AS INFORMAÇÕES DO DISPLAY 

}if(op==1){
  
  if(volt*24.5/1024.0<12){
display.setTextSize(1); //DEFINE O TAMANHO DA FONTE DO TEXTO
display.setCursor(25,25); //POSIÇÃO EM QUE O CURSOR IRÁ FAZER A ESCRITA
display.print("Bateria Baixa"); //ESCREVE O TEXTO NO DISPLAY
//display.clearDisplay(); //LIMPA AS INFORMAÇÕES DO DISPLAY 

} 
 if(volt*24.5/1024.0>13.5){
display.setTextSize(1); //DEFINE O TAMANHO DA FONTE DO TEXTO
display.setCursor(10,25); //POSIÇÃO EM QUE O CURSOR IRÁ FAZER A ESCRITA
display.print("Bateria Carregando"); //ESCREVE O TEXTO NO DISPLAY
}  
if(volt*24.5/1024.0>12){
  if(volt*24.5/1024.0<13.5){
 display.setTextSize(1); //DEFINE O TAMANHO DA FONTE DO TEXTO
display.setCursor(25,25); //POSIÇÃO EM QUE O CURSOR IRÁ FAZER A ESCRITA
display.print("Bateria Normal"); //ESCREVE O TEXTO NO DISPLAY 

}}
  
  display.setTextSize(3); //DEFINE O TAMANHO DA FONTE DO TEXTO
 display.setCursor(00,1); //POSIÇÃO EM QUE O CURSOR IRÁ FAZER A ESCRITA
  display.print(volt*24.5/1024.0); //ESCREVE O TEXTO NO DISPLAY
display.setCursor(90,1); //POSIÇÃO EM QUE O CURSOR IRÁ FAZER A ESCRITA
  display.print("V"); //ESCREVE O TEXTO NO DISPLAY
  display.display(); //EFETIVA A ESCRITA NO DISPLAY
 display.clearDisplay(); //LIMPA AS INFORMAÇÕES DO DISPLAY 
}

 if(op==2){
 display.setTextSize(3); //DEFINE O TAMANHO DA FONTE DO TEXTO
 display.setCursor(30,1); //POSIÇÃO EM QUE O CURSOR IRÁ FAZER A ESCRITA
  display.print("DPF"); //ESCREVE O TEXTO NO DISPLAY
   display.setTextSize(1); //DEFINE O TAMANHO DA FONTE DO TEXTO
display.setCursor(25,25); //POSIÇÃO EM QUE O CURSOR IRÁ FAZER A ESCRITA
display.print("Eletronica"); //ESCREVE O TEXTO NO DISPLAY 
   display.display(); //EFETIVA A ESCRITA NO DISPLAY
    display.clearDisplay(); //LIMPA AS INFORMAÇÕES DO DISPLAY
 }

  
  
  val = analogRead(analogPin);  // read the input pin
//1
  if(val>0){if(val<17){
       digitalWrite(2,HIGH);
       digitalWrite(3,LOW);
        digitalWrite(4,LOW);
         digitalWrite(5,LOW);
          digitalWrite(6,LOW);
           digitalWrite(7,LOW);
            digitalWrite(8,LOW);
             digitalWrite(9,LOW);
              digitalWrite(10,LOW);
               digitalWrite(11,LOW);
                digitalWrite(12,LOW);
                 digitalWrite(13,LOW);
    }}
//2
     if(val>17){if(val<34){
       digitalWrite(2,LOW);
       digitalWrite(3,HIGH);
        digitalWrite(4,LOW);
         digitalWrite(5,LOW);
          digitalWrite(6,LOW);
           digitalWrite(7,LOW);
            digitalWrite(8,LOW);
             digitalWrite(9,LOW);
              digitalWrite(10,LOW);
               digitalWrite(11,LOW);
                digitalWrite(12,LOW);
                 digitalWrite(13,LOW);
    }}
//3
     if(val>34){if(val<51){
       digitalWrite(2,LOW);
       digitalWrite(3,LOW);
        digitalWrite(4,HIGH);
         digitalWrite(5,LOW);
          digitalWrite(6,LOW);
           digitalWrite(7,LOW);
            digitalWrite(8,LOW);
             digitalWrite(9,LOW);
              digitalWrite(10,LOW);
               digitalWrite(11,LOW);
                digitalWrite(12,LOW);
                 digitalWrite(13,LOW);
    }}
    //4
     if(val>51){if(val<68){
       digitalWrite(2,LOW);
       digitalWrite(3,LOW);
        digitalWrite(4,LOW);
         digitalWrite(5,HIGH);
          digitalWrite(6,LOW);
           digitalWrite(7,LOW);
            digitalWrite(8,LOW);
             digitalWrite(9,LOW);
              digitalWrite(10,LOW);
               digitalWrite(11,LOW);
                digitalWrite(12,LOW);
                 digitalWrite(13,LOW);
     }}
  //5  
   if(val>68){if(val<100){
       digitalWrite(2,LOW);
       digitalWrite(3,LOW);
        digitalWrite(4,LOW);
         digitalWrite(5,LOW);
          digitalWrite(6,HIGH);
           digitalWrite(7,LOW);
            digitalWrite(8,LOW);
             digitalWrite(9,LOW);
              digitalWrite(10,LOW);
               digitalWrite(11,LOW);
                digitalWrite(12,LOW);
                 digitalWrite(13,LOW);
     }} 
  //6  
  if(val>100){if(val<117){
       digitalWrite(2,LOW);
       digitalWrite(3,LOW);
        digitalWrite(4,LOW);
         digitalWrite(5,LOW);
          digitalWrite(6,LOW);
           digitalWrite(7,HIGH);
            digitalWrite(8,LOW);
             digitalWrite(9,LOW);
              digitalWrite(10,LOW);
               digitalWrite(11,LOW);
                digitalWrite(12,LOW);
                 digitalWrite(13,LOW);
     }}
     //7  
      if(val>117){if(val<134){
       digitalWrite(2,LOW);
       digitalWrite(3,LOW);
        digitalWrite(4,LOW);
         digitalWrite(5,LOW);
          digitalWrite(6,LOW);
           digitalWrite(7,LOW);
            digitalWrite(8,HIGH);
             digitalWrite(9,LOW);
              digitalWrite(10,LOW);
               digitalWrite(11,LOW);
                digitalWrite(12,LOW);
                 digitalWrite(13,LOW);
     }} 
   //8
   if(val>119){if(val<156){
       digitalWrite(2,LOW);
       digitalWrite(3,LOW);
        digitalWrite(4,LOW);
         digitalWrite(5,LOW);
          digitalWrite(6,LOW);
           digitalWrite(7,LOW);
            digitalWrite(8,LOW);
             digitalWrite(9,HIGH);
              digitalWrite(10,LOW);
               digitalWrite(11,LOW);
                digitalWrite(12,LOW);
                 digitalWrite(13,LOW);
     }} 
     //9
     if(val>156){if(val<163){
       digitalWrite(2,LOW);
       digitalWrite(3,LOW);
        digitalWrite(4,LOW);
         digitalWrite(5,LOW);
          digitalWrite(6,LOW);
           digitalWrite(7,LOW);
            digitalWrite(8,LOW);
             digitalWrite(9,LOW);
              digitalWrite(10,HIGH);
               digitalWrite(11,LOW);
                digitalWrite(12,LOW);
                 digitalWrite(13,LOW);
     }}
     //10
      if(val>163){if(val<170){
       digitalWrite(2,LOW);
       digitalWrite(3,LOW);
        digitalWrite(4,LOW);
         digitalWrite(5,LOW);
          digitalWrite(6,LOW);
           digitalWrite(7,LOW);
            digitalWrite(8,LOW);
             digitalWrite(9,LOW);
              digitalWrite(10,LOW);
               digitalWrite(11,HIGH);
                digitalWrite(12,LOW);
                 digitalWrite(13,LOW);
     }} 
     //11 
     if(val>180){if(val<190){
       digitalWrite(2,LOW);
       digitalWrite(3,LOW);
        digitalWrite(4,LOW);
         digitalWrite(5,LOW);
          digitalWrite(6,LOW);
           digitalWrite(7,LOW);
            digitalWrite(8,LOW);
             digitalWrite(9,LOW);
              digitalWrite(10,LOW);
               digitalWrite(11,LOW);
                digitalWrite(12,HIGH);
                 digitalWrite(13,LOW);
     }} 
     //12
      if(val>190){if(val<205){
       digitalWrite(2,LOW);
       digitalWrite(3,LOW);
        digitalWrite(4,LOW);
         digitalWrite(5,LOW);
          digitalWrite(6,LOW);
           digitalWrite(7,LOW);
            digitalWrite(8,LOW);
             digitalWrite(9,LOW);
              digitalWrite(10,LOW);
               digitalWrite(11,LOW);
                digitalWrite(12,LOW);
                 digitalWrite(13,HIGH);
     }} 
      delay(50);          
  valb = analogRead(analogPin);  // read the input pin
  volt = analogRead(voltimetro);  // read the input pin
  seleciona = analogRead(A2);  // read the input pin
  //delay(200);
  if(digitalRead(A2)== LOW){  ///teclado
    op=op+1;
    delay(200);
      }
      if(op>2){
      op=0;
    }
  //Serial.println(op);          // debug value
}
