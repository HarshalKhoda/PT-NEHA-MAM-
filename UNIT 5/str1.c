//Add Two Complex Numbers Using a Structure and
Function
#include &lt;stdio.h&gt;
struct Complex
{
int real;
int imag;
};
struct Complex add(struct Complex a, struct Complex b)
{
struct Complex c;
c.real = a.real + b.real;
c.imag = a.imag + b.imag;
return c;
}
int main()
{
struct Complex n1, n2, sum;
printf(&quot;Enter real and imaginary parts of first number: &quot;);
scanf(&quot;%d %d&quot;, &amp;n1.real, &amp;n1.imag);
printf(&quot;Enter real and imaginary parts of second number: &quot;);
scanf(&quot;%d %d&quot;, &amp;n2.real, &amp;n2.imag);
sum = add(n1, n2);
printf(&quot;Sum = %d + %di\n&quot;, sum.real, sum.imag);
return 0;
}
