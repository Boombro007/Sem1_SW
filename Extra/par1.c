
 #include <stdio.h>
 void main()
 { 
    int i =-5;
 while (i <= 5)
 {
 printf("PPS- I\n");
 if (i >= 0)
 break;
 else
 {
 i++; continue; }
 printf("PPS- II\n");
 }
}
 