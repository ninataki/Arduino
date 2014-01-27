// example blink led

const int LED=13;  //pin接続

void setup (){
  pinMode(LED, OUTPUT);  // デジタルピンを出力設定
}

void loop(){
  digitalWrite(LED, HIGH);
  delay(2000);  // 2000msec
  digitalWrite(LED, LOW);
  delay(2000);
}

