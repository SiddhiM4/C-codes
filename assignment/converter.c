//speed converter
#include<stdio.h>
int main()
{
   // float mile,kilo,foot,meter,knot,mach;
    float input,output;
    int ch1,ch2;
    int a,b,c,d,e,f,z;

    main:
    printf("\n1.mile/hour\n2.kilometer/hour\n3.foot/second\n4.meter/second\n5.knot\n6.mach");
    printf("\nEnter your choice:");
    scanf("%d",&ch1);
    
    //for mile/hr conversion
    if(ch1==1)
    {
        mile:
        printf("\nConvert to what\n");
        printf("\n1.mile/hour\n2.kilometer/hour\n3.foot/second\n4.meter/second\n5.knot\n6.mach");
        scanf("%d",&ch2);
        printf("\nValue to convert:");
        scanf("%f",&input);
       
        if(ch2==1)
        {
            //mile to mile
            output=input;
            printf("\n%.2f mile = %.2f mile",input,output);
        }
        else if(ch2==2)
        {
            //mile to kilo
            output=input*1.609344;
            printf("\n%.2f mile = %f kilometer",input,output);
        }
        else if(ch2==3)
        {
            //mile to foot
            output=input*1.466666;
            printf("\n%.2f mile = %f foot",input,output);
        }
        else if(ch2==4)
        {
            //mile to meter 
            output=input/2.236936;
            printf("\n%.2f mile = %f meter",input,output);
        }
        else if(ch2==5)
        {
            //mile to foot
            output=input/1.1507794;
            printf("\n%.2f mile = %f knot",input,output);
        }
        else if(ch2==6)
        {
            //mile to foot
            output=input/767.269148;
            printf("\n%.2f mile = %f mach",input,output);
        }
        else 
        {
            printf("\nInvalid choice");
        }
        printf("\nDo you want to continue with mile conversion, if yes, then press 1:");
        scanf("%d",&a);
        if(a==1)
        {
            goto mile;
        }
    }//end of mile conversion
    else if(ch1==2)
    //for kilometer conversion
    {
        kilo:
        printf("\nConvert to what\n");
        printf("\n1.mile/hour\n2.kilometer/hour\n3.foot/second\n4.meter/second\n5.knot\n6.mach");
        scanf("%d",&ch2);
        printf("\nValue to convert:");
        scanf("%f",&input);
        if(ch2==1)//kilo to mile
        {
            output=input/1.609344;
            printf("\n%.2f kilo = %f mile",input,output);
        }
        else if(ch2==2)//kilo to kilo
        {
            output=input;
            printf("\n%.2f kilo = %f kilo",input,output);
        }
       else if(ch2==3)//kilo to foot
        {
            output=input/1.09728;
            printf("\n%.2f kilo = %f foot",input,output);
        }
        else if(ch2==4)//kilo to meter
        {
            output=input/3.6;
            printf("\n%.2f kilo = %f meter",input,output);
        }
        else if(ch2==5)//kilo to knot
        {
            output=input/1.852;
            printf("\n%.2f kilo = %f knot",input,output);
        }
        else if(ch2==6)//kilo to mach
        {
            output=input/1234.8;
            printf("\n%.2f kilo = %f mach",input,output);
        }
        else 
        {
            printf("\nInvalid choice");
        }
        printf("\nDo you want to continue with kilometer conversion, if yes, press 1:");
        scanf("%d",&b);
        if(b==1)
        {
            goto kilo;
        }
        //end of kilo
    }
    else if(ch1==3)
    //for foot conversion
    {
        foot:
        printf("\nConvert to what\n");
        printf("\n1.mile/hour\n2.kilometer/hour\n3.foot/second\n4.meter/second\n5.knot\n6.mach");
        scanf("%d",&ch2);
        printf("\nValue to convert:");
        scanf("%f",&input);
        
        if(ch2==1)//foot to mile
        {
            output=input/1.46666667;
            printf("\n%.2f foot = %f mile",input,output);
        }
        else if(ch2==2)//foot to kilo
        {
            output=input*1.09728;
            printf("\n%.2f foot = %f kilo",input,output);
        }
        else if(ch2==3)//foot to foot
        {
            output=input;
            printf("\n%.2f foot = %f foot",input,output);
        }
        else if(ch2==4)//foot to meter
        {
            output=input/3.2808399;
            printf("\n%.2f foot = %f meter",input,output);
        }
        else if(ch2==5)//foot to knot
        {
            output=input/1.68780986;
            printf("\n%.2f foot = %f knot",input,output);
        }
        else if(ch2==6)//foot to mach
        {
            output=input/1125.32808;
            printf("\n%.2f foot = %f mach",input,output);
        }
        printf("\nDo you want to continue with foot conversion, if yes, press 1:");
        scanf("%d",&c);
        if(c==1)
        {
            goto foot;
        }
        //end of foot
    }
    else if(ch1==4)
    //for meter conversion
    {
        meter:
        printf("\nConvert to what\n");
        printf("\n1.mile/hour\n2.kilometer/hour\n3.foot/second\n4.meter/second\n5.knot\n6.mach");
        scanf("%d",&ch2);
        printf("\nValue to convert:");
        scanf("%f",&input);
        if(ch2==1)//meter to mile
        {
            output=input*2.23693629;
            printf("\n%.2f meter = %f mile",input,output);
        }
        else if(ch2==2)//meter to kilo
        {
            output=input*3.6;
            printf("\n%.2f meter = %f kilo",input,output);
        }
        else if(ch2==3)//meter to foot
        {
            output=input*3.2808399;
            printf("\n%.2f meter = %f foot",input,output);
        }
        else if(ch2==4)//meter to meter
        {
            output=input;
            printf("\n%.2f meter = %f meter",input,output);
        }
        else if(ch2==5)//meter to knot
        {
            output=input*1.943844499;
            printf("\n%.2f meter = %f knot",input,output);
        }
        else if(ch2==6)//meter to mach
        {
            output=input/343;
            printf("\n%.2f meter = %f mach",input,output);
        }
        else 
        {
            printf("\nInvalid choice!");
        }
        printf("\nDo you want to continue with meter conversion, if yes, press 1:");
        scanf("%d",&d);
        if(d==1)
        {
            goto meter;
        }
        //end of meter
    }
    else if(ch1==5)
    //for knot conversion
    {
        knot:
        printf("\nConvert to what\n");
        printf("\n1.mile/hour\n2.kilometer/hour\n3.foot/second\n4.meter/second\n5.knot\n6.mach");
        scanf("%d",&ch2);
        printf("\nValue to convert:");
        scanf("%f",&input);
        if(ch2==1)//knot to mile
        {
            output=input*1.15077945;
            printf("\n%.2f knot =%f mile",input,output);
        }
        else if(ch2==2)//knot to kilo
        {
            output=input*1.852;
            printf("\n%.2f knot =%f kilo",input,output);
        }
        else if(ch2==3)//knot to foot
        {
            output=input*1.68780986;
            printf("\n%.2f knot =%f foot",input,output);
        }
        else if(ch2==4)//knot to meter
        {
            output=input/1.94384449;
            printf("\n%.2f knot =%f meter",input,output);
        }
        else if(ch2==5)//knot to knot
        {
            output=input;
            printf("\n%.2f knot =%f knot",input,output);
        }
        else if(ch2==6)//knot to mach
        {
            output=input/666.738661;
            printf("\n%.2f knot =%f mach",input,output);
        }
        else 
        {
            printf("\nInvalid choice!");
        }
        printf("\nDo you want to continue with knot conversion, if yes, press 1:");
        scanf("%d",&e);
        if(e==1)
        {
            goto knot;
        }
    //end of knot
    }
    else if(ch1==6)
    //for mach conversion
    {
        mach:
        printf("\nConvert to what\n");
        printf("\n1.mile/hour\n2.kilometer/hour\n3.foot/second\n4.meter/second\n5.knot\n6.mach");
        scanf("%d",&ch2);
        printf("\nValue to convert:");
        scanf("%f",&input);

        if(ch2==1)//mach to mile
        {
            output=input*767.269148;
            printf("\n%.2f mach = %f mile",input,output);
        }
        else if(ch2==2)//mach to kilo
        {
            output=input*123.8;
            printf("\n%.2f mach = %f kilo",input,output);
        }
        else if(ch2==3)//mach to foot
        {
            output=input*1125.32808;
            printf("\n%.2f mach = %f foot",input,output);
        }
        else if(ch2==4)//mach to meter
        {
            output=input*343;
            printf("\n%.2f mach = %f meter",input,output);
        }
        else if(ch2==5)//mach to knot
        {
            output=input*666.738661;
            printf("\n%.2f mach = %f knot",input,output);
        }
        else if(ch2==2)//mach to mach
        {
            output=input;
            printf("\n%.2f mach = %f mach",input,output);
        }
        else 
        {
            printf("\nInvalid choice!");
        }
        printf("\nDo you want to continue with mach conversion, if yes, press 1:");
        scanf("%d",&f);
        if(f==1)
        {
            goto mach;
        }
        //end of mach
    }
    else
    {
        printf("\nInvalid input!");
    }
    printf("\n Do you want to continue with speed conversion, if yes, press 1:");
    scanf("%d",&z);
    if(z==1)
    {
        goto main;
    }
}