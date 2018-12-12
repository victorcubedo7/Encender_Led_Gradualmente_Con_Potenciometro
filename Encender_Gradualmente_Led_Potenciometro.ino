int led = 3;  //¡¡¡Es necesario colocar el led en este pin!!!
int poten = 0; //Potenciometro conectado a A0
int brillo;


void setup() {

  pinMode(led, OUTPUT);
  //El `potenciometro se declara automaticamente
}

void loop() {

  brillo = analogRead(poten) / 4; //se divide entre 4 para poder usarlo 1023/4=255, que es hasta donde lee el analog Write

  analogWrite(led, brillo);



}
