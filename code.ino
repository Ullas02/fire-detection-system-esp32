#define BLYNK_TEMPLATE_ID "YOUR_BLYNK_TEMPLATE_ID"
#define BLYNK_TEMPLATE_NAME "YOUR_BLYNK_TEMPLATE_NAME"
#define BLYNK_AUTH_TOKEN "YOUR_BLYNK_AUTH_TOKEN"
#define BLYNK_PRINT Serial

#include <WiFi.h>
#include <WiFiClient.h>
#include <BlynkSimpleEsp32.h>

char auth[] = "YOUR_BLYNK_TEMPLATE_NAME";
char ssid[] = "YOUR_SSID";
char pass[] = "YOUR_WIFI_PASSWORD";

BlynkTimer timer;

#define fire 18  // connected fire sensor pin number to ESP-32
#define buzzer  14  // connected buzzer pin number to ESP-32
int fire_Val = 0;

WidgetLED led(V1);

void setup() 
{
  Serial.begin(9600); 
  pinMode(fire, INPUT);
  pinMode(buzzer, OUTPUT);
  pinMode(19, OUTPUT);
  pinMode(2, OUTPUT);
  Blynk.begin(auth, ssid, pass); 
  delay(2000);
  timer.setInterval(500L, mySensor);
}

void loop() 
{
  Blynk.run();
  timer.run();
}
void mySensor()
{
  fire_Val = digitalRead(fire);
   
  if (fire_Val == LOW)
  {
    digitalWrite(buzzer, HIGH);
    digitalWrite(2, HIGH);
    digitalWrite(19, LOW);
    Blynk.virtualWrite(V0, 1);
    Blynk.notify("Fire detected!");
    Blynk.email("YOUR_EMAIL@email.com","Alert","Fire detected!!");
    Blynk.logEvent("fire_alert");
    Serial.println("FIRE DETECTED!!");
    led.on();
  }

  else
  {
    digitalWrite(buzzer, LOW);
    digitalWrite(2, LOW);
    digitalWrite(19, HIGH);
    Blynk.virtualWrite(V0, 0);
    Serial.println("NO FIRE DETECTED!!");
    led.off();
  }  
}
