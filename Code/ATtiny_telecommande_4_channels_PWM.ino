 int lecture= 0;
void setup() {
  pinMode(7, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(2, INPUT);
  pinMode(3, INPUT);
  pinMode(4, INPUT);
}
void loop() {
  lecture = pulseIn(2, HIGH, 3000); 
if (lecture >0) {
  analogWrite(7,map(lecture, 900, 2000, 0, 255));
}
lecture = pulseIn(3, HIGH, 3000);
if (lecture >0) {
  analogWrite(11,map(lecture, 900, 2000, 0, 255));
}
lecture = pulseIn(4, HIGH, 3000);
if (lecture >0) {
  analogWrite(12,map(lecture, 900, 2000, 0, 255));
}
}
