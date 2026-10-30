//Demonstrate a Nested Structure
A nested structure means one structure is used as a member inside another structure.
#include &lt;stdio.h&gt;
struct Date
{
int day;
int month;
int year;
};
struct Student
{
int roll;
char name[30];
struct Date dob;
};
int main()
{
struct Student s;

printf(&quot;Enter roll number: &quot;);
scanf(&quot;%d&quot;, &amp;s.roll);
printf(&quot;Enter name: &quot;);
scanf(&quot;%29s&quot;, s.name);
printf(&quot;Enter date of birth (dd mm yyyy): &quot;);
scanf(&quot;%d %d %d&quot;,
&amp;s.dob.day, &amp;s.dob.month, &amp;s.dob.year);
printf(&quot;\nStudent Details\n&quot;);
printf(&quot;Roll Number: %d\n&quot;, s.roll);
printf(&quot;Name: %s\n&quot;, s.name);
printf(&quot;Date of Birth: %02d-%02d-%04d\n&quot;,
s.dob.day, s.dob.month, s.dob.year);
return 0;
}
