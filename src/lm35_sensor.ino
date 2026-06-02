// LM35 Temperature Sensor Interface

const int LM35_PIN = A0;

float readTemperature()
{
  int sensorValue = analogRead(LM35_PIN);

  float voltage = sensorValue * (5.0 / 1023.0);

  float temperature = voltage * 100.0;

  return temperature;
}

void setup()
{
  Serial.begin(9600);

  Serial.println("LM35 Temperature Monitoring Started");
}

void loop()
{
  float temperature = readTemperature();

  Serial.print("Temperature: ");
  Serial.print(temperature);
  Serial.println(" °C");

  delay(1000);
}
