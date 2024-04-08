// 2つのLEDを制御するサンプルコード

// LEDが接続されているデジタルピン
const int ledPin1 = 13;
const int ledPin2 = 12;

void setup() {
  // LEDのピンを出力に設定
  pinMode(ledPin1, OUTPUT);
  pinMode(ledPin2, OUTPUT);
}

void loop() {
  // LED1を点灯、LED2を消灯
  digitalWrite(ledPin1, HIGH);
  digitalWrite(ledPin2, LOW);
  delay(1000);  // 1秒待つ

  // LED1を消灯、LED2を点灯
  digitalWrite(ledPin1, LOW);
  digitalWrite(ledPin2, HIGH);
  delay(1000);  // 1秒待つ
}
