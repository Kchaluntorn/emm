void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(A3,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int a3 = analogRead(A3);

  if((a3>=3683)&&(a3<=3700)){
    Serial.println("Dip Switch off");
    delay (500);
  }else
  if((a3>0)&&(a3<3000)){
    Serial.println("Dip Switch 1 ON");
    delay (200);
  }else if((a3>3000)&&(a3<3800)){
    Serial.println("Dip Switch 2 ON");
    delay (200);
  }else if ((a3>3800)&&(a3<3906)){
    Serial.println("Dip Switch 4 ON");
    delay (200);
  }else if(a3>4050) {
     Serial.println("Dip Switch 3 ON");
    delay (200);
  }else {
    Serial.print("Somting Wrong!!");
  }
  
}







//อ่าน ข้อนี้ a3 ต่อเข้ากับ 26 ของบอร์ด เขียวนะ
//แล้วลบด้วยก่อนส่งจาร ตรง  dip switch 1 2 3 4 on ควรเปลี่ยนเป็นคำอื่น เช่น 
// 1 2 3 4 เฉยๆ ก็ได้ อย่าซ้ำกันนะ 
// ตรงข้อความใน println ควรเปลี่ยนนะ 
