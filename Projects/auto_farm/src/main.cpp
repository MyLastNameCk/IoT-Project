#include <Arduino.h>

#define buzzer_pin 18
#define sensor_soil 2
#define sensor_water 32
#define led_merah 21
#define led_hijau 19

//const int sensor_soil = 2;
//const int sensor_water = 32;
//const int led_merah = 21;
//const int led_hijau = 19;

void setup() {
  Serial.begin(115200);
  Serial.println("Project autofarm by deva");
  pinMode(buzzer_pin, OUTPUT);
  pinMode(led_merah, OUTPUT);
  pinMode(led_hijau, OUTPUT);

  digitalWrite(led_merah, LOW);
  digitalWrite(buzzer_pin, LOW);
  digitalWrite(led_hijau, HIGH);
} 

void loop() {
  int nilaisensor_soil_moisure = analogRead(sensor_soil);
  int nilaisensor_water = analogRead(sensor_water);

  float kelembapan = map(nilaisensor_soil_moisure, 0, 4095, 0, 100);
  kelembapan = constrain(kelembapan, 0, 100);

  Serial.printf("Nilai Soil Moisure : %d\n", nilaisensor_soil_moisure);
  Serial.printf("Persentase Kelembapan : %d %%\n", kelembapan);
  Serial.printf("Nilai Water Sensor : %d\n", nilaisensor_water);

  delay(1000);

 // if (nilaisensor_soil_moisure < 50 and nilaisensor_water > 300) {
 //   digitalWrite(led_merah, HIGH);
 //   digitalWrite(buzzer_pin, HIGH);
 //   Serial.println("Harus Disiram Bang");
 // } else {
 //   digitalWrite(led_hijau, HIGH);
 // }

  if () {
    digitalWrite(led_merah, HIGH);
    digitalWrite(buzzer_pin, HIGH);
    digitalWrite(led_hijau, LOW)
    Serial.println("Kandungan air pada tanah kering!")
  } else if() {
    digitalWrite(led_merah, LOW);
    digitalWrite(buzzer_pin, LOW);
    digitalWrite(led_hijau, HIGH)
    Serial.println("Air sudah mecukupi kebutuhan tanaman")
  } else {
    digitalWrite(led_merah, LOW);
    digitalWrite(buzzer_pin, LOW);
    digitalWrite(led_hijau, LOW)
    Serial.println("Kondisi tidak valid!")
  }

}
