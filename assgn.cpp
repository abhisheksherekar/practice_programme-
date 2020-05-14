 /*   a program, which will print first 100 natural numbers. */ 

#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
	int n,i;

	for(i=1; i<n; i++)
    {
        cout<<i;
    }
  
  return 0;
}

/*  program for summation of all the natural numbers up to and including the given integer. */  

#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
	int n,i;
	int sum=0;


	cout<<" Enter the no ::\n";
	cin>>n;

	for(i=1; i<n; i++)
    {
        sum += i;
    }
    cout<<"sum ="<<sum;

}

/* Write a program which reads and multiplies 20 real numbers (floating point numbers) together. */

#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
	double arr [20];
	int i;
	double ans = 0;

    cout<<" Enter the 20 numbers  ::\n";
for(i=0; i<20; i++)
    {
        cin>>arr[i];
    }

	for(i=1; i<20; i++)
    {
        ans *= i;
    }
    cout<<"ANS IS ="<<ans;

}
/* Write a program, which will print all the alphabets, capital as well as lower case letters with their ASCII values in a tabular form. */


#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
    //int i;
    //char arr[100];
    char ch;
	for(ch ='a'; ch<='z'; ch++)
	{
		cout<<ch<<" = "<<int(ch)<<endl;
	}
	for(ch ='A'; ch<='Z'; ch++)
	{
		cout<<ch<<" = "<<int(ch)<<endl;
	}

}

/* Given a number, write a program using while loop to reverse digits of the number. */

#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
    int i,r=0;
    //char arr[100];
    //char ch;
	cout<<"Enter no to reverse  /n";
	cin>>i;
	while(i!= 0)
	{
		r = r*10;
		r= r + n%10;
		n/=10;
	}
	cout<<r;
	
}

/* 	Write a program to read marks of 100 students and print the number of students who passed in first class. 
The marks are out of 100 and to get first class, one has to obtain minimum 60 marks. Write a program,*/

#include <iostream>

using namespace std;

int main()
{
   int arr[100];
   int count=0;
   
for(int i=0; i<100; i++)
   {
     cin>>arr[i];  
   }
for(int j=0; j<100; j++)
   {
       if(arr[j] > 60)
        count++;
   }
    cout<<" number of students who passed in first class "<<count;
    return 0;
}

/* Write the program to reverse the four-digit number which is given as input. */

#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
    int i,r=0;
    //char arr[100];
    //char ch;
	cout<<"Enter no to reverse  /n";
	cin>>i;
	while(i!= 0)
	{
		r = r*10;
		r= r + i%10;
		i/=10;
	}
	cout<<r;

}

/* 	Modify the above program to separate the individual digits of the four-digit number and display. 
Also, get the sum of separated digits of the same four-digit number.*/


#include <stdio.h>
#include <iostream>
int main()
{
   int n, t, sum = 0, remainder;

cout<<"Enter an integer \n ";
   cin>>n;

   t = n;

   while (t != 0)
   {
      remainder = t % 10;
      sum       = sum + remainder;
      t         = t / 10;
   }

cout<<"Sum of digits "<<sum;

   return 0;
}
/* Write a program, which will read a positive integer number and shall print out*/ whether it’s an armstrong number.
 An armstrong number is one the sum of cubes of whose digits equal the number itself (e.g. 13+53+33=153).*/

#include <stdio.h>
#include <iostream>
 
void main()
{
    int number, sum = 0, rem = 0, cube = 0, temp;
 
    cout<<"enter a number";
    cin>>number;
    temp = number;
    while (number != 0)
    {
        rem = number % 10;
        cube = rem*rem*rem;
        sum = sum + cube;
        number = number / 10;
    }
    if (sum == temp)
        cout<<"The given no is armstrong no";
    else
        cout<<"The given no is not a armstrong no";
	
	
}
/*Suppose Rs.5,000/- is deposited each year in an account which yields 10% interest compounded annually.
 Write a program which prints the amount in the account at the end of each year for 10 years.*/
 
 #include<iostream>
#include<cmath>
using namespace std;


int main()
{
	double p = 5000 , r = 10 , n = 10;
	double amount;
	


	for( int i = 1 ; i <= n ; i++ )
	{
		amount = p * ( 1 + ( r / 100 ) )  ;
		
		cout << " Year = "  << i <<"= "<< amount << endl;
	}
	
	return 0;
}

 /* Write a program, which will read two unequal integer numbers and 
 shall print out both the numbers at the output in descending order.*/
 
 
#include<iostream>
#include<cmath>
using namespace std;

int main()
{

	int a,b;
	
	cout << "Enter two Numbers: " << endl;
	cin >> a >> b;
		
	if(a == b)
		
		cout << "Numbers are equal." ;
	
	else
	
	{
		if( a > b )
			cout << a << " " << b ;
		else
		    cout << b << " " << a ;
	}	
	
	return 0;
}
/* Write a program, which will read three unequal numbers and shall output the largest of the three. */

#include <stdio.h>

int main() {
    double n1, n2, n3;
    cout<<"Enter three numbers:";
    cin>> n1>>n2>>n3; 

    if (n1 >= n2 && n1 >= n3)
        cout<<n1<<" is the largest number.";
    else if (n2 >= n1 && n2 >= n3)
        cout<<n2<<" is the largest number.";
    else
        cout<<n3<<" is the largest number.";

    return 0;
}

/* Develop a program to accept a year as input and printif it is a leap year or not. 
A year is a leap year if it is divisible by 4 and centennial years 
(years divisible by 100 are leap years only when they are also divisible by 400.) */

#include<iostream>
#include<cmath>
using namespace std;
int main()
{

	int n;
	
	cout << "Enter a year: " << endl;
	cin >> n;
	
	if(( n % 400 == 0 ) || ( n % 4 == 0 && n % 100 != 0 ))
		cout << "Leap year" ;
	else
		cout << "Not a leap year" ;	
	
	return 0;
}
/* Write a program to display month in words (input:month number).*/

#include<iostream>
#include<cmath>
using namespace std;


int main()
{

	int month;
	
	cout << "Enter a month no: " << endl;
	cin >> month;
	
	switch(month)
	{
		case 1:
			cout << "January";
			break;
		
		case 2:
			cout << "February";
			break;
		
		case 3:
			cout << "March";
			break;
		
		case 4:
			cout << "April";
			break;
		
		case 5:
			cout << "May";
			break;
		
		case 6:
			cout << "June";
			break;
		
		case 7:
			cout << "July";
			break;
		
		case 8:
			cout << "August";
			break;
		
		case 9:
			cout << "September";
			break;
		
		case 10:
			cout << "October";
			break;
		
		case 11:
			cout << "November";
			break;
		
		case 12:
			cout << "December";
			break;
		
	 	default:
			cout << "Not a valid month no.";
		
	}	
	
	
}
/* 	A company manufactures three products, namely, music systems, television sets and refrigerators. The following codes are used to indicate them.
Product			Code
Music system	1
Television set	2
Refrigerator	3

The company has a discount policy as follows :

Product		   Order amount		     Discount rate
Music system	Rs.15,000 or more	1   2%
				Rs.8,000 or more	8%
				Less than Rs.8,000	2%
Television set	Rs.70,000 or more	    11%
				Rs.40,000 or more	6%
Refrigerator	Rs.50,000 or more	10%
			 	Rs.30,000 or more	5%
For a given product, use appropriate control structure. Using this policy, write a program to calculate the discount amount on an order amount. 
*/




#include<iostream>
#include<cmath>
using namespace std;

int main()
{	
	int prodCode;
	double orderAmt;
	
	cout << "Enter a product code: " ;
	cin >> prodCode;	
	
	cout << "Enter order amount: " ;
	cin >> orderAmt;
	
	switch(prodCode)
	{
		case 1:
		{
			if( orderAmt >= 15000 ) 
			{
				cout << "Discount : " << orderAmt * 12 / 100;
			}
			else if( orderAmt >= 8000 )
			{
				cout << "Discount : " << orderAmt * 8 / 100;
			}
			else if( orderAmt < 8000 )
			{
				cout << "Discount : " << orderAmt * 2 / 100;
			}	
	
		}
		//else if( prodCode == 2 )
		case 2:
		{
			if( orderAmt >= 70000 ) 
			{
				cout << "Discount : " << orderAmt * 11 / 100;
			}
			else if( orderAmt >= 40000 )
			{
				cout << "Discount : " << orderAmt * 6 / 100;
			}
			else
				cout << "No discount";
		}
		//else if( prodCode == 3 )
		case 3:
		{
			if( orderAmt >= 50000 ) 
			{
				cout << "Discount : " << orderAmt * 10 / 100;
			}
			else if( orderAmt >= 30000 )
			{
				cout << "Discount : " << orderAmt * 5 /100;
			}
			else
				cout << "No discount";	
		}
		
	}
	return 0;
}

