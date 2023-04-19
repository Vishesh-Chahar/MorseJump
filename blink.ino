#include "library.h"

int led = 4, m=5;
char arr[10];
char c;
void setup()
{
  // put your setup code here, to run once:
  Serial.begin(9600); 
}

void str(String f){
  for (int k=0;k<m;k++){
    if (f.charAt(k)=='.'){
      digitalWrite(led, HIGH);
      delay(1000);
      digitalWrite(led, LOW);
      delay(1000);
      Serial.println(".");
      continue;
    }
    else if (f.charAt(k)=='-'){
      digitalWrite(led, HIGH);
      delay(2000);
      digitalWrite(led, LOW);
      delay(1000);
      Serial.println("-");
      continue;
    }
  }
}

void loop()
{
  //put your main code here,   to run repeatedly:
  Serial.println("How many characters?");
  while (Serial.available() == 0) {}
  int n = Serial.parseInt();
  Serial.println("Give Characters");
  for (int i=0;i<n;i++)
  {
    while (Serial.available() == 0) {}
    arr[i] = Serial.read();
  }
  
  for (int i=0;i<n;i++)
  {
    switch(arr[i]){
      case 'A':
      str(A);
      continue;
      case 'B':
      str(B);
      continue;
      case 'C':
      str(C);
      continue;
      case 'D':
      str(D);
      continue;
      case 'E':
      str(E);
      continue;
      case 'F':
      str(F);
      continue;
      case 'G':
      str(G);
      continue;
      case 'H':
      str(H);
      continue;
      case 'I':
      str(I);
      continue;
      case 'J':
      str(J);
      continue;
      case 'K':
      str(K);
      continue;
      case 'L':
      str(L);
      continue;
      case 'M':
      str(M);
      continue;
      case 'N':
      str(N);
      continue;
      case 'O':
      str(O);
      continue;
      case 'P':
      str(P);
      continue;
      case 'Q':
      str(Q);
      continue;
      case 'R':
      str(R);
      continue;
      case 'S':
      str(S);
      continue;
      case 'T':
      str(T);
      continue;
      case 'U':
      str(U);
      continue;
      case 'V':
      str(V);
      continue;
      case 'W':
      str(W);
      continue;
      case 'X':
      str(X);
      continue;
      case 'Y':
      str(Y);
      continue;
      case 'Z':
      str(Z);
      continue;
      default:
      break;
      
    }
  }
  
}
