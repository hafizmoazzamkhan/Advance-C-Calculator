#include<iostream>
#include<cmath>
#include<limits>
using namespace std;

int main()
{  
    cout<<"\t\t\t\t..............................................\n";
    cout<<"\t\t\t\t..............................................\n";
	cout<<"\t\t\t\t\tWELCOME TO MY CALCULATOR\n";
	cout<<"\t\t\t\t..............................................\n";
	cout<<"\t\t\t\t..............................................\n";
	
	long long choice;
	do
	{	
	cout << "\n\n\t\t\t\tSelect an operation\n\n:" <<endl;
	cout << "\t\t\t\tPRESS 1   FOR ARITHEMATIC OPERATIONS" <<endl;
	cout << "\t\t\t\tPRESS 2   FOR SQAURE OF A NUMBER" <<endl;
	cout << "\t\t\t\tPRESS 3   FOR CUBE OF A NUMBER" <<endl;
	cout << "\t\t\t\tPRESS 4   FOR POWER OF A NUMBER" <<endl;
	cout << "\t\t\t\tPRESS 5   FOR SQUARE ROOT OF A NUMBER" <<endl;
	cout << "\t\t\t\tPRESS 6   FOR CUBE ROOT OF A NUMBER" <<endl;
	cout << "\t\t\t\tPRESS 7   FOR LCM OF TWO NUMBERS" <<endl;
	cout << "\t\t\t\tPRESS 8   FOR HCF OF TWO NUMBERS" <<endl;
	cout << "\t\t\t\tPRESS 9   FOR PRIME NUMBER OR COMPOSITE NUMBER" <<endl;
	cout << "\t\t\t\tPRESS 10  FOR ABSOLUTE OF A NUMBER" <<endl;
	cout << "\t\t\t\tPRESS 11  FOR INVERSE OF A NUMBER" <<endl;
	cout << "\t\t\t\tPRESS 12  FOR FACTORIAL  OF A NUMBER" <<endl;
	cout << "\t\t\t\tPRESS 13  FOR CHECK A NUMBER IS EVEN OR ODD" <<endl;
	cout << "\t\t\t\tPRESS 14  FOR LOGRITHIM OF A NUMBER" <<endl;
	cout << "\t\t\t\tPRESS 15  FOR TRIGONOMETRIC FUNCTIONS" <<endl;
    cout << "\t\t\t\tPRESS 16  FOR ALGEBRAIC FORMULAS" <<endl;	
    cout << "\t\t\t\tPRESS 17  FOR TABLE OF ANY NUMBER" <<endl;
    cout << "\t\t\t\tPRESS 18  FOR AREA OF CIRCLE AND SPHERE" <<endl;
    cout << "\t\t\t\tPRESS 19  FOR CONVERSION OF TEMPRATURE UNITS" <<endl;
    cout << "\t\t\t\tPRESS 20  FOR BMI CALCULATOR" <<endl;
    cout << "\t\t\t\tPRESS 21  FOR AGE CALCULATOR" <<endl;
    cout << "\t\t\t\tPRESS 22  FOR FINDING AREA OF TRIANGLE" <<endl;
    cout << "\t\t\t\tPRESS 23  FOR PERCENTAGE OF NUMBER" <<endl;
    cout << "\t\t\t\tPRESS 24  FOR Exit " <<endl;
    
   //THESE FUNCTIONS USED FOR  TO PREVENT FROM INFINITE LOOP WHILE ENTERING  INVALID NUMBER OR CHARACTER//
   
    if (!(cin>>choice))              
	  {
            cout << "Invalid input. Please enter a valid number.\n";
            cin.clear();                                                        // Clear the error state
            cin.ignore(numeric_limits<streamsize>::max(), '\n');               // Ignore invalid input
            
    } 
	
	switch(choice)
	{
	 
	  case 1LL:
	 {
	 	
	 	
	//FUNCTION TO CALCULATE ARITHEMATIC OPERATIONS//
	
	char operation;		
	int num1,num2;
	cout<<"Enter the Ist number\n";
	cin>>num1;
	cout<<"Enter The Operater which you want i.e (+ , - , * , / , % ) \n";
	cin>>operation;
	cout<<"Enter the 2nd Number\n";
	cin>>num2;
	switch(operation)
	{
	 case '+': 
	 cout<<num1<<" + "<<num2<<" = "<<num1+num2<<endl;
	 break;
	 
	 case '-':
	 	cout<<num1<<" - "<<num2<<" = "<<num1-num2<<endl;
	 break;
	 
	 case '*':
	 	cout<<num1<<" * "<<num2<<" = "<<num1*num2<<endl;
	 break;
	 
	 case '/':
	 	if(num2!=0)
	 	{
	 	cout<<num1<<" / "<<num2<<" = "<<num1/num2<<endl;
	    }
	    else
	    { 
	    cout<<"Undefined\n";
		}
	break;
	 
	 case '%':
	 	cout<<num1<<" % "<<num2<<" = "<<num1%num2<<endl;
	 break;
	 default:
	cout<< "Invalid Operator!" <<endl;
	break;
	}
	break;
    }
    
    
	//NOW WE CALCULATING  SQUARE OF A NUMBER//
    
    
	 case 2LL:  
	{
	
	double n;
	cout<<"ENTER A NUMBER FOR SQUARE\n";
	cin>>n;
	cout<<"square of "<<n<<" = "<<n*n<<endl<<endl;
	break;
   }
   
   
   	// CALCULATING  CUBE OF A NUMBER//
   
   
   
   case 3LL:
   

   {
	double n;
	cout<<"ENTER A NUMBER FOR CUBE\n";
	cin>>n;
	cout<<"Cube  of "<<n<<" = "<<n*n*n<<endl<<endl;
	break;
   }
   
   
   //NOW  CALCULATING POWER OF A NUMBER//
   
   
   
   case 4LL:
   	

    {
	{
  double base,exponent,result=1;
  cout<<"ENTER THE BASE\n";
  cin>>base;
  cout<<"ENTER THE POWER\n";
  cin>>exponent;
  for(double i=1;i<exponent;i++)
  {
  	result=result*base;
  } 
  cout<<base<<" Raised to the power "<<exponent<<" = "<<result;
}
   break;
   }
   
   
   
   //NOW WE  CALCULATE SQUARE ROOT OF A NUMBER//
   
   
   case 5LL:
   	

   {
    double number,x,y,precision;
    cout<<"Enter the number for square Root\n";
    cin>>number;
    if(number<0)
    {
     cout<<"cannot find square Root of Negative Number\n";
	}
	else
	{
		x=number;
		y=1.0;
		precision=0.00001;
		while(x-y>precision)
		{
		 x=(x+y)/2;
		 y=number/x;
		}
		cout<<"Square Root of "<<number<<" is = "<<x;
	}
    break;
    } 
    
    
    //NOW WE  CALCULATE CUBE ROOT OF A NUMBER//
    
    
    case 6LL:
    	
	{
   double number,x,precision;
   cout<<"Enter the NUmber for cube Roort\n";
   cin>>number;
   if(number<0)
   {
   	cout<<"cannot find the cube Root of Negative Number\n";
   }
   else
   {
   	x=number;
   	precision=0.0000000001;
   	while((x*x*x - number)>precision)
   	{
   	 x=(2*x+number/(x*x))/3;
	}
	cout<<"cube Root of "<<number<<" is = "<<x;
   }
   break;
   }
   
   
   
   //NOW WE CALCULATE L.C.M  OF A NUMBER//
   
   
   case 7LL:
   	
   {
    int num1,num2;

    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter second number: ";
    cin >> num2;

    int larger;
    if (num1 > num2)
	 {
        larger = num1;
    } else 
	{
        larger = num2;
    }

    int lcm = larger;

    while (lcm % num1 != 0 || lcm % num2!=0) 
	{
        lcm =lcm+larger;
    }

   cout<<"LCM of " <<num1<< " and " <<num2 << " is: " <<lcm <<endl<<endl;
   break;
  }
  
  
  
  //NOW WE CALCULATE H.C.F  OF A NUMBER//
  
  
  case 8LL:
  	

{
    int num1, num2;

    cout << "Enter first number: ";
    cin >> num1;

   cout << "Enter second number: ";
    cin >> num2;

    int hcf = 1;
    int smaller;

    if (num1 < num2) 
	{
        smaller = num1;
    } else 
	{
        smaller = num2;
    }

    for (int i = 2; i<=smaller; ++i) 
	{
        if (num1 % i == 0 && num2 % i == 0)
		 {
            hcf = i;               // Update HCF when a common factor is found
        }
    }

    cout << "HCF of " << num1 << " and " << num2 << " is: " << hcf <<endl<<endl;  
	break;  
    }



    //NOW WE FIND  THAT GIVEN NUMBER IS PRIME OR COMPOSITE//  



   case 9LL:
   	
   {
    int n;

    cout<< "Enter a positive integer: ";
    cin >>n;

    if (n <= 1) 
	{
        cout <<n<< " is not a prime number." <<endl;
        
    }

    for (int i = 2; i * i <= n; ++i)
	 {
        if (n % i == 0) 
		{
            cout <<n<< " is not a prime number."<<endl;
            
        }
    }
    cout <<n<< " is a prime number." <<endl<<endl;
    break;
   }
   
   
   
   //NOW WE MAKE ABSOLUTE OF A NUMBER//
   
   
   
   case 10LL:
   	
   {
 	int x,c;
	cout<<"Enter the no for it,s Absolute\n";
	cin>>x;
	if(x<0)
	{
	 cout<<"The Absolute of "<<x<<" =  "<<-x<<endl<<endl;
	}
	else
	{
	 cout<<"The Absolute of "<<x<<" =  "<<x<<endl<<endl;
	}
	break;
   }
   
   //NOW WE CALCULATING THE INVERSE OF A NUMBER//
   
   
   
   case 11LL:
{
    double number;

    cout << "Enter a number to find its inverse: ";
    cin >> number;

    // Check if the entered number is zero to avoid division by zero
    
    if (number == 0)
	{
        cout << "Inverse is undefined for zero." << endl;
    } else 
	{
        double inverse = 1 / number;
        cout << "The inverse of " << number << " is: " << inverse << endl;
    }
    
}
    break;
    
    
    
    
    
    //NOW WE CALCULATING FACTORIAL OF A NUMBER//
    
    

    case 12LL:
   {
    int num,fac;
	fac=1;
	cout<<"Enter the number for Factorial\n";
	cin>>num;
	while(num>=1)
	{
		fac=fac*num;
		cout<<num<<" * ";
		num--;
	}
	cout<<"\b\b = "<<fac;
	
	}
	break;
    
    
    
   //NOW WE FIND  THE GIVEN NUMBER IS EVEN OR ODD//
    
    
    

    case 13LL:
	{
     int num;
	 cout<<"Enter the Number for checking It,s Even Or Odd\n";
	 cin>>num;
	 if(num%2==0)
	 {
	  cout<<num<<" is Even Number\n";
	 }	
	 else
	 {
	  cout<<num<<" is ODD Number\n";	
	 }	
	 
	}
	break;




//NOW WE CALCULATING THE LOG OF A NUMBER//



    case 14LL:
    {
    	double num;

    cout << "Enter a number to find its logarithm: ";
    cin >> num;

    if (num <= 0) 
    {
        cout << "Logarithm is undefined for non-positive numbers." << endl;
    } else
	{
        double logarithm = log(num);
        cout << "The logarithm of " << num << " is: " << logarithm << endl;
	}
	
    }
    break;
    
    
    
    
    
    //NOW WE CALCULATING THE VALUES OF TRIGONOMETRIC FUNCTION//
  
  

  
  case 15LL:
   {
    int trigonometery;

    cout<< "Enter the trigonometric function you want to calculate\n";
        cout<< " PRESS 1   FOR SIN"<<endl;
        cout<< " PRESS 2   FOR COSINE"<<endl;
        cout<< " PRESS 3   FOR TANGENT"<<endl;
        cout<< " PRESS 4   FOR COSECANT"<<endl;
        cout<< " PRESS 5   FOR SECANT"<<endl;
        cout<< " PRESS 6   FOR COTANGENT"<<endl;
        cout<< " PRESS 7   FOR EXIT"<<endl;
        cout << "Enter your choice (1-7): ";
    cin>>trigonometery;

    if (trigonometery== 7)
	{
        cout << "Exiting the program.\n";
    }

    double angle,radians;

    cout << "Enter the angle in degrees: ";
    cin>>angle;
	 
    // Converting degrees to radians 
    radians = angle*3.1416/180.0; 

    switch (trigonometery) 
	{
        case 1:
            cout << "Sine: " << sin(radians) << endl;
            break;
        case 2:
            cout << "Cosine: " << cos(radians) << endl;
            break;
        case 3:
            cout << "Tangent: " << tan(radians) << endl;
            break;
        case 4:
            cout << "Cosecant: " << 1 / sin(radians) << endl;
            break;
        case 5:
            cout << "Secant: " << 1 / cos(radians) << endl;
            break;
        case 6:
            cout << "Cotangent: " << 1 / tan(radians) << endl;
            break;
        default:
            cout << "Invalid choice! Please enter a number between 1 to 7.\n";
            break;
    }
    break;
}
    

    //6 ALGEBRAIC FORMULAS//



    
    case 16LL:
    	
    {
	char formulas;
	cout<<"ENTER THE NUMBER FOR FORMULA\n";
	cout<<"1 for (A + B)^2\n";
	cout<<"2 for (A - B)^2\n";
	cout<<"3 for (A + B)^3\n";
	cout<<"4 for (A - B)^3\n";
	cout<<"5 for A^2 - B^2\n";
	cout<<"6 for A^3 - B^3\n";
	cout<<"7 for A^3 + B^3\n";
	cin>>formulas;
	switch(formulas)
	{
		
		
	//NOW WE FINDING THE VALUES OF (A + B)^2//
		
		
		
	case'1':
	{
	double a,b,sqrA,sqrB,product,wholesqr,result;
	cout<<"Enter the Value of A and B \n";
	cin>>a>>b;
	sqrA=a*a;
	sqrB=b*b;
	product=2*a*b;
	result=sqrA+sqrB+product;
	cout<<"("<<a<<" + "<<b<<")"<<"^2 = "<<result<<endl;
	
	break;
	
   }
   
   
   
   //NOW WE FINDING THE VALUES OF (A - B)^2//




	case'2':
	{
	double a,b,sqrA,sqrB,product,wholesqr,result;
	cout<<"Enter the Value of A and B \n";
	cin>>a>>b;
	sqrA=a*a;
	sqrB=b*b;
	product=2*a*b;
	result=sqrA+sqrB-product;
	cout<<"("<<a<<" - "<<b<<")"<<"^2 = "<<result<<endl;
	break;
   }
		
		
		//NOW WE FINDING THE VALUES OF (A + B)^3//
		
		
		
			
	case'3':
	{
	double a,b,sumAB,result;
	cout<<"Enter The Value of A and B\n";
	cin>>a>>b;
	sumAB=a+b;
	result=sumAB*sumAB*sumAB;
	cout<<"("<<a<<" + "<<b<<")"<<"^3 = "<<result;
	
	break;
    }	
	
	
	//NOW WE FINDING THE VALUES OF (A - B)^2//
	
	
	
	case'4':
	{
	double a,b,subAB,result;
	cout<<"Enter The Value of A and B\n";
	cin>>a>>b;
	subAB=a-b;
	result=subAB*subAB*subAB;
	cout<<"("<<a<<" - "<<b<<")"<<"^3 = "<<result;
	
	break;
    }	
	
	
	//NOW WE FINDING THE VALUES OF (A + B)^2//
		
		
		
	case'5':
	{
	double a,b,absum,abdif,result;
	cout<<"Enter the value of A and B\n";
	cin>>a>>b;
	absum=a+b;
	abdif=a-b;
	result=(absum)*(abdif);
	cout<<a<<"^2 "<<" - "<<b<<"^2 = "<<result;	
	
	break;
    }
	
	
	//NOW WE FINDING THE VALUES OF (A + B)^2//
		
			
	case'6':
	{
		double a,b,subAB,sqrA,sqrB,prodAB,result;
	cout<<"Enter The Value of A and B for Equation\n\t  A^3 + B^3\n";
	cin>>a>>b;
	subAB=a-b;
	sqrA=a*a;
	sqrB=b*b;
	prodAB=a*b;
	result=(subAB)*(sqrA+prodAB+sqrB);
	cout<<a<<"^3"<<" - "<<b<<"^3"<<" = "<<result;
	
	break;
    }
    
    
    //NOW WE FINDING THE VALUES OF (A + B)^2//
    
    
    
	case'7':
	{
	double a,b,sumAB,sqrA,sqrB,prodAB,result;
	cout<<"Enter The Value of A and B for Equation\n\t  A^3 + B^3\n";
	cin>>a>>b;
	sumAB=a+b;
	sqrA=a*a;
	sqrB=b*b;
	prodAB=a*b;
	result=(sumAB)*(sqrA-prodAB+sqrB);
	cout<<a<<"^3"<<" + "<<b<<"^3"<<" = "<<result;
	
	break;
    }
			
    }
    break;
    
    
    
    ////APROGRAM WHICH CALCULATE THE TABLE OF ANY NUMBER //
    
    
    
    case 17LL:
    {
	int x,y,z;
	cout<<"Enter the number for which you want a table\n";
	cin>>x;
	cout<<"Enter the number upto which you want a table\n";
	cin>>y;
	for(z=1;z<=y;z++)
	{
	 cout<<x<<" * "<<z<<"="<<x*z<<endl;
	}
	
    }
    break;
	}
	
	
	
	
	//NOW WE FINDING THE VALUES OF AREA OF CIRCLE AND SPHERE//
	
	
	
	//FOR AREA OF CIRCLE//
	
	case 18LL:
	{
	char area;
	cout<<"PRESS 1 FOR FINDING THE AREA OF CIRCLE\n";
	cout<<"PRESS 2 FOR FINDING THE AREA OF SPHERE\n";
	cin>>area;
	switch(area)
	{
	 case'1':
	{
		
	double radius,area;
	cout<<"Enter the Radius of the circle\n";
	cin>>radius;
	area=3.1416*radius*radius;
	cout<<"Area of circle having radius"<<radius<<" = "<<area;
	}
	
    }
    break;
    
    //FOR AREA OF SPHERE//
    
	case'2':
	{
	
	double radius,area;
	cout<<"Enter the Radius of the circle\n";
	cin>>radius;
	area=4*3.1416*radius*radius;
	cout<<"Area of sphere having "<<radius<<" = "<<area;
	break;	
    }
    break;
	}
	
	
	
	//PROGRAM WHICH CONVERTS THE UNIT OF TEMPRATURE//
	
	
	
	case 19LL:
	{

    int temprature;
    double value;

    cout << "Choose conversion:\n";
    cout << "1. Celsius to Fahrenheit\n";
    cout << "2. Fahrenheit to Celsius\n";
    cout << "Enter your choice : ";
    cin >> temprature;

    switch (temprature)
	 {
        case 1:
        	{
            cout << "Enter temperature in Celsius: ";
            cin >> value;
            cout << "Temperature in Fahrenheit: " << (value * 9 / 5) + 32 <<" F\n";
            break;
            }
        case 2:
            {
			cout << "Enter temperature in Fahrenheit: ";
            cin >> value;
            cout << "Temperature in Celsius: " << (value - 32) * 5 / 9 <<" C\n";
            break;
            }
        default:
            cout << "Invalid choice\n";
            break;
    }
    
	}
	break;
    
    
    
    //BODY MASS PER INDEX CALCULATOR//
    //NOW WE WILL MAKE A PROGRAM WHICH CALCULATE BMI(BODY MASS PER INDEX) OF HUMANS//
    
    
    case 20LL:
   	{
   	cout<<"\t\t\t\tWELCOME TO BMI CALCULATOR\n";
	double BMI,weight,height,height_in_meter;
	cout<<"Enter your weight in kilogram\n";
	cin>>weight;
	cout<<"Enter your Height in feets\n";
	cin>>height;
	height_in_meter=height*0.3048;
	BMI=weight/(height_in_meter*height_in_meter);    
	cout<<"your BMI Rate is "<<BMI;
	
	if (BMI < 18.5) 
	{
        cout << "\nYou Are Underweight\n" << endl;
    } 
	else if (BMI >= 18.5 && BMI <= 24.9) 
	{
        cout << "\nNormal weight And Good BMI Rate\n" << endl;
    } 
	else if (BMI >= 25 && BMI <= 29.9) 
	{
        cout << "\nYou Are Overweight\n" << endl;
    } 
	else 
	{
        cout << "\nObesity you have to work on your weight \n" << endl;
    }
     break;
    }
    
    //PROGRAM WHICH CALCULATES AGE//
    
    
    case 21LL:
    	
    {
    	
    	cout<<"\t\t\t\tWELCOME TO AGE CALCULATOR"<<endl;
    	
    // Get the current year, month, and day
    int currentYear = 2024; // You can update this to the current year
    int currentMonth = 1;   // Assuming the current month is January
         

    // Input birth year, month, and day
    int birthYear,birthMonth,age;
    cout << "Enter your birth year: ";
    cin >> birthYear;
    cout << "Enter your birth month (1-12): ";
    cin >> birthMonth;
    

    //CALCULATING YEARS //
    age = currentYear - birthYear;



    //CALCULATING MONTHS//
    int months = currentMonth - birthMonth;
    if (months < 0) 
	{
        
        age--;
        months= months + 12;
    }

   

    //NOW WE DISPLYING AGE OF YEARS AND MONTHS//
    cout << "Your age is: " <<age << " years, " <<months-1 << " months"<< endl;

   break;
   
}

   
   
   
   //CALCULATING AREA OF TRIANGLE//
   
   
    
    
    case 22LL:
    {
    double base,height;

    cout << "Enter the base of the triangle in meters: ";
    cin >> base;

    cout << "Enter the height of the triangle in meters: ";
    cin >> height;

    // Calculating the area of the triangle using the formula: (1/2) * base * height
    double triangleArea = 0.5 * base * height;

    cout << "The area of the triangle is: " <<triangleArea <<" square meters m^2" << endl;
    break;
    }
    
    
    //CALCULATING PERCENTAGE OF MARKS OR NUMBERS//
    
    case 23LL:
	{
    	 
    double number,percentage,total;

    cout <<"Enter Obtained numbers or Marks\n";
    cin >>number;
    cout <<"Enter Total numbers or Marks\n";
    cin>>total;
    if(number<0)
	{
    cout <<"Invalid input. Please enter positive number"<<endl;
        
    }

    percentage = (number/total) * 100;                                   // Assuming the input is out of 100

    cout << "Percentage of " <<number << " is: " <<percentage<< "%" <<endl;

    break;
    }



		
    //EXITING CALCULATOR//
    
    
    
    case 24LL:
	{
	cout<<" Goodbye! See you next time\n";
    
    break;
    }
default:
	{
	
	    cout << "Invalid choice please check you Have a choice from 1 to 21" << endl;    
	}

}
}

	while(choice !=24LL);
}

	
	




