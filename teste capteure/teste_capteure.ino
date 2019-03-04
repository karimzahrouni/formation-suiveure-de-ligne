int signalPin_Gauche = 2; //premiere capteur de ligne 
int signalPin_Droite = 3; //deuxieme capteur de ligne
int capt1 , capt2 ;

void setup() {
  
pinMode(signalPin_Gauche, INPUT); 
pinMode(signalPin_Droite, INPUT);

Serial.begin(9600);
}


void loop()
{
 
capt1 = digitalRead(signalPin_Gauche) ;
capt2 = digitalRead(signalPin_Droite);

Serial.print("etat de capteure gauche : ");Serial.print(capt1);Serial.print(" || etat de capteure droit : ");Serial.println(capt2);
}
