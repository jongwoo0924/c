#include <stdio.h>
#include <stdlib.h>
#include <string.h>//문자
struct point
{
  int x;
  int y;
};
struct circle
{
  struct point center;
  float r;
};
struct person
{
  char name[20];
  int age;
  float height;
};

int main(void)
{
  struct point p1;
  struct point p2 = {3,4};
  struct circle c1;
  struct circle c2 = { {4,5} ,10.0};
  struct circle c3 = c2;
  p1.x = 2;// p1.x 에서 '.'은 멤버변수 접근 연산자
  p1.y = 1;
  c1.center.x = 10;
  c1.center.y = 20;
  c1.r = 3.0;
  printf("%d %d\n",p1.x, p1.y);
  printf("%d %d\n",p2.x, p2.y);
  printf("%d %d %.1lf\n", c1.center.x, c1.center.y, c1.r);
  printf("%d %d %.1lf\n", c2.center.x, c2.center.y, c2.r);
  printf("%d %d %.1lf\n", c3.center.x, c3.center.y, c3.r);

  struct person jw;
  struct person group[500];// struct 는 배열도 가능
  jw.age = 14;
  jw.height = 160;
  strcpy(jw.name, "jong woo");// strcpy  = string copy
  printf("%d %.1f %s", jw.age, jw.height, jw.name);
  return 0;
}
