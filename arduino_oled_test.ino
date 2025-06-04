#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

Adafruit_SSD1306 oled_1(128,64, &Wire,-1);
bool oled_1_autoshow=true;

void setup()
{


	oled_1.begin(SSD1306_SWITCHCAPVCC,0x3C);
	oled_1.clearDisplay();
	if(oled_1_autoshow)oled_1.display();
	oled_1.setTextSize(1);
	oled_1.setTextColor(WHITE);
	oled_1.setCursor(0,0);
	oled_1.print(String("Hello World"));
	if(oled_1_autoshow)oled_1.display();
	oled_1.drawRect(50,20,64,32,WHITE);
	if(oled_1_autoshow)oled_1.display();
	oled_1.fillCircle(15,50,10,WHITE);
	if(oled_1_autoshow)oled_1.display();
	oled_1.drawLine(50,60,90,60,WHITE);
	if(oled_1_autoshow)oled_1.display();

}


void loop()
{

  	oled_1.fillCircle(15,20,10,WHITE);
  	if(oled_1_autoshow)oled_1.display();
  	delay(500);
  	oled_1.fillCircle(15,20,10,BLACK);
  	if(oled_1_autoshow)oled_1.display();
  	delay(500);

}
