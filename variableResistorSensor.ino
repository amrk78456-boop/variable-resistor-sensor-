const int sensor =A0 ;
const int led =12 ;
int sensorValue ;
void setup ( ) 
{ 
  pinMode ( led , OUTPUT) ;

}
void loop ( ) 
{ 
  sensorValue = analogRead (sensor) ;
  digitalWrite( led , HIGH) ;
  delay ( sensorValue) ;
  digitalWrite( led , LOW) ;
  delay ( sensorValue) ; 
}