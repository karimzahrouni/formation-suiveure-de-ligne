int signalPin_Gauche = 2; //premiere capteur de ligne 
int signalPin_Droite = 3; //deuxieme capteur de ligne
int Motor1 = 4; // premier moteur 1 pina 
int Motor2 = 5; // premier moteur 1 pinb 
int Motor3 = 6; // second moteur 2 pina 
int Motor4 = 7; //  second moteur 2 pinb 

void setup() {
  
pinMode(signalPin_Gauche, INPUT); 
pinMode(signalPin_Droite, INPUT);
pinMode(Motor1, OUTPUT); // motor1_pina
pinMode(Motor2, OUTPUT); // motor1_pinb
pinMode(Motor3, OUTPUT); // motor2_pina
pinMode(Motor4, OUTPUT); // motor2_pinb

Serial.begin(9600);
}


void loop()
{
 
if(HIGH == digitalRead(signalPin_Gauche)) // si le capteur de gauche se met en etat HIGH le robot doit se deplacer ver la droite
{
digitalWrite(Motor3, LOW); 
digitalWrite(Motor4, LOW);  
digitalWrite(Motor1, HIGH); 
digitalWrite(Motor2, HIGH); 
}

else // sinon on allume les 2 moteurs et le robot va tout droit
{
digitalWrite(Motor1, HIGH); 
digitalWrite(Motor2, HIGH); 
digitalWrite(Motor3, HIGH); 
digitalWrite(Motor4, HIGH); 
}

if(HIGH == digitalRead(signalPin_Droite)) // si le capteur de droite se met en etat HIGH le robot doit se deplacer ver la gauche
{
digitalWrite(Motor3, HIGH); 
digitalWrite(Motor4, HIGH);
digitalWrite(Motor1, LOW); 
digitalWrite(Motor2, LOW); 
}

else // sinon on allume les 2 moteurs et le robot va tout droit
{
digitalWrite(Motor1, HIGH); 
digitalWrite(Motor2, HIGH); 
digitalWrite(Motor3, HIGH); 
digitalWrite(Motor4, HIGH); 
}

}
