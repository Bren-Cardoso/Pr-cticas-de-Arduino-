const int pinLED = 13;
const int pinSensor = 3;

//variable para guardar el estado de la led
volatile bool estadoLED = false;

void setup() {
  pinMode(pinLED, OUTPUT);
  pinMode(pinSensor, INPUT);

  //activar la interrupci`n en el pin del sensor
  attachInterrupt(digitalPinToInterrupt(pinSensor), cambiarEstado, FALLING);
}

void loop(){
  //encender o apagar led según el estado
  digitalWrite(pinLED, estadoLED);
}

//esta función se llama cuando el sensor detecta vibración
void cambiarEstado(){
  estadoLED = !estadoLED; //cambia de true a false y viceversa
}
