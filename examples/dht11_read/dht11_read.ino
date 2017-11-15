#include <dht11.h>

DHT11 dht11 = DHT11(D0);

char airTemperature;
uint8_t airHumidity;

void setup()
{
    dht11.begin();
    Serial.begin(115200);
    delay(500);
}


void loop()
{
    airTemperature = dht11.ReadTemperature(0);

    Serial.print(airTemperature);
    Serial.print("\t");

    airHumidity = dht11.ReadHumidity();
    Serial.print(airHumidity);
    Serial.print("\t");

    Serial.print("\r\n");

}
