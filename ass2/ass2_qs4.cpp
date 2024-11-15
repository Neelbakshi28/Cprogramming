void main() {
  List<int> marks = [95, 99, 88, 99, 76, 99, 85];  // Example array of marks
  int count = 0;

  // Loop through the marks array and count how many times 99 appears
  for (int mark in marks) {
    if (mark == 99) {
      count++;
    }
  }

  print("Number of students who scored 99: $count");
}
