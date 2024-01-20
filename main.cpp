char getGrade(int a, int b, int c) {
  int score=(a+b+c)/3;
if(score>=90&&score<=100)
return'A';
if(score<90&&score>=80)
return'B';
if(score>=70&&score<80)
return'C';
if(score>=60&&score<70)
return'D';
else{

  return'F';
}
}
