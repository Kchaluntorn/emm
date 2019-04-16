void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  analogReadResolution(12);
}

void loop() {
  // put your main code here, to run repeatedly:

  int keycode;
  keycode = analogRead(A2);
  if((keycode>0)&&(keycode<3000)){
   Serial.println("sw1");
  }else if((keycode>3000)&&(keycode<3813)){
    Serial.println("sw2");
  }else if(keycode>=4063){
    Serial.println("sw3 & sw4 because sw3 and sw4 value = 4064");
  }else if((keycode>3873)&&(keycode<4062)){
    Serial.println("none");
  }
  
  
}







//อ่าน ข้อนี้ a2 ต่อเข้ากับ 25 ของบอร์ด เขียวนะ
//แล้วลบด้วยก่อนส่งจาร ตรง none ควรเปลี่ยนให้เป็นคำอื่น ตรง sw3 & sw4 ควรเปลี่ยนเป็นคำอื่น เช่น
//Serial.println("no put");
//Serial.println("sw3"); หรือ
//Serial.println("sw3 and sw4"); 
//เพื่อความเเนบเนียนในการส่ง
