// LEDの点滅サンプルコード

// LEDが接続されているデジタルピン
const int ledPin = 13;

void setup() {
  // LEDのピンを出力に設定
  pinMode(ledPin, OUTPUT);
}

void loop() {
  // LEDを点灯
  digitalWrite(ledPin, HIGH);
  delay(1000);  // 1秒待つ

  // LEDを消灯
  digitalWrite(ledPin, LOW);
  delay(1000);  // 1秒待つ
}
