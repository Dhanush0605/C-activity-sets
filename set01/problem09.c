#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float input();
float square_root(float n);
void output(float n, float sqrroot);

int main()
{
<<<<<<< HEAD
    float n, sqrrt;
    n=input();
    sqrrt=square_root(n);
    output(n,sqrrt);
    return 0;
=======
    float inp, sqrrt;
    inp=input();
    sqrrt=square_root(inp);
    output(inp,sqrrt);
    
>>>>>>> c1ffc74eeaa9059431174949411a077e37e8890d
}

float input()
{
<<<<<<< HEAD
    float n;
    printf("enter the number :\n");
    scanf("%f", &n);
    return n;
=======
    float inp;
    printf("enter the number\n");
    scanf("%f", &inp);
    return inp;
>>>>>>> c1ffc74eeaa9059431174949411a077e37e8890d
}

float square_root(float n) 
{
   

  float x_old=1,x_new=n/2;
  float precision=0.000001;
  while(fabs(x_new-x_old)>precision)
    {
      x_old=x_new;
      x_new=(x_old+n/x_old)/2;
    }
  return x_new;
}

void output(float n, float sqrroot)
{
<<<<<<< HEAD
   printf("the squareroot of %f is %f", n,sqrroot);
=======
   printf("the squareroot of %f", n);
   printf("  is  %f", sqrroot);
 
>>>>>>> c1ffc74eeaa9059431174949411a077e37e8890d
}
