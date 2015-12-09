int potPin = 4;             //设置模拟口A4为传感器的信号输入端口
 int val=0;
 void setup()
 {
   Serial.begin(9600);
 }
 void loop ()                
 {  
   val=analogRead(A4);//val值从potPin信号口读取 
   Serial.print("Moisture Sensor Value:");  
   Serial.println(val);       
   delay(300);//延时1S
   }
