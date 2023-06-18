#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void Heading( );
void questions(int choic);
void Introduction();
char Main(int i);
int main()
{
    int sum=0;
    char answer[7];
    for(int i=0;i<7;++i)
    	answer[i]=Main(i);
    for(int i=0;i<7;++i)
    {
        if(answer[i]=='a' || answer[i]=='A')
            sum+=0;
        else if(answer[i]=='b' || answer[i]=='B')
            sum+=1;
        else if(answer[i]=='c' || answer[i]=='C')
            sum+=2;
        else if(answer[i]=='d' || answer[i]=='D')
            sum+=3;
    }
    
    printf("\nScore: %d/21\n",sum);
    if(sum==0)
    {
        printf("Result: No Anxiety");
        printf("\n\nCongratulation!! you do not show any signs of anxiety as per the test but if you still\n");
        printf("feel low you should definitely not take your mental health lightly and immediately\n");
        printf("consult a professional.");
        
    }
    else if(sum>0 && sum<5 )
    {
        printf("Result: Mild Anxiety");
        printf("\n\nAlthough often described as sub-clinical or clinically non-significant, mild anxiety\n");
        printf("can impact emotional, social and professional functioning. Mild anxiety symptoms may\n");
        printf("present as social anxiety or shyness and can be experienced in early childhood through\n"); 
        printf("to adulthood. If left unaddressed, mild anxiety can lead to maladaptive coping strategies\n");
        printf("or more severe mental conditions.");
        
    }    
    else if(sum>=5 && sum<10)
    {
        printf("Result: Moderate Anxiety\n");
        printf("\n\nPeople with moderate level of anxiety have more frequent or persistent symptoms\n");
        printf("but still have better daily functioning than someone with severe panic or anxiety\n");
        printf("disorder.People with moderate anxiety may have success in managing their anxiety\n"); 
        printf("with the help of a doctor or self-help strategies");
        
    }
    else if(sum>=10 && sum<15)
    {
        printf("Result: Moderately Severe Anxiety");
        printf("\n\nPeople with moderately severe anxiety typically score higher on scales of distress\n");
        printf("and lower on functioning. Moderately severe anxiety symptoms also frequently co-occur\n"); 
        printf("with major depression, which can contribute to greater disability.It can also easily\n"); 
        printf("deteriorate to severe anxiet to prevent that you need to contact the doctor immediately\n");
        
    }
    else if(sum>=15 && sum<22)
    {
        printf("Result: Severe Anxiety");
        printf("\n\nPeople with severe anxiety typically score higher on scales of distress and lower\n"); 
        printf("on functioning. Severe anxiety symptoms also frequently co-occur with major depression,\n");
        printf("which can contribute to greater disability. Symptoms of severe anxiety are frequent\n");
        printf("and persistent and may include increased heart rate, feelings of panic and social\n"); 
        printf("withdrawal. These symptoms can result in loss of work and increased health care costs.\n");
        printf("You should consult a doctor for your betterment.");
        
    }
    return 0;
}


void Heading()
{
    char str[3][50],i;
    strcpy(str[1],"| General Anxiety Disorder Analysis |");
    strcpy(str[0]," ");
    strcpy(str[2]," ");
    for(i=0;i<strlen(str[1]);++i)
    {
	strcat(str[0],"-");
	strcat(str[2],"-");
    }
    for(i=0;i<3;++i)
    {
	printf("%60s",str[i]);
	printf("\n");
    }

}

void Introduction()
{
    printf("--------------------------------------------------------------------------------------------\n");
    printf("| We say that we take it seriously just like we take physical health.However,would you     |\n");
    printf("| ever ask someone with a disease like cancer to fight harder or make themselves feel      |\n");
    printf("| better? Its an illness, asking people to cheer up is not a solution.This questionnaire   |\n");
    printf("| called the GAD-7 screening tool can help you find out if you might have an anxiety       |\n");
    printf("| disorder that needs treatment. It calculates how many common symptoms you have and based |\n");
    printf("| on your answers suggests where you might be on a scale, from mild to severe anxiety.     |\n");
    printf("--------------------------------------------------------------------------------------------\n");
    printf("This sheets consists of 7 questions to examine your anxiety level.\nChoose the option most suitable to you:");
    
}

void questions(int choice)
{
    if(choice==0)
	printf("\n\nQ1.Feeling nervous, anxious or on edge:\nA)Not at all   B)Several Days   C)More than half days   D)Nearly every day\n\nAnswers: ");
    else if(choice==1)
	printf("\n\nQ2.Not being able to stop or control worrying:\nA)Not at all   B)Several Days   C)More than half days   D)Nearly every day\n\nAnswers: ");
    else if(choice==2)
	printf("\n\nQ3.Worrying too much about different things:\nA)Not at all   B)Several Days   C)More than half days   D)Nearly every day\n\nAnswers: ");
    else if(choice==3)
	printf("\n\nQ4.Trouble relaxing:\nA)Not at all   B)Several Days   C)More than half days   D)Nearly every day\n\nAnswers: ");
    else if(choice==4)
	printf("\n\nQ5.Being so restless that it's hard to sit still:\nA)Not at all   B)Several Days   C)More than half days   D)Nearly every day\n\nAnswers: ");
    else if(choice==5)
	printf("\n\nQ6.Becoming easily annoyed or irritable:\nA)Not at all   B)Several Days   C)More than half days   D)Nearly every day\n\nAnswers: ");
    else if(choice==6)
	printf("\n\nQ7.Feeling afraid, as if something awful might happen:\nA)Not at all   B)Several Days   C)More than half days   D)Nearly every day\n\nAnswers: ");

}

char Main(int i)
{
    char temp1,temp2,c=0;
    int choice;
    do
    {
        system("clear");
        Heading();
        Introduction();
        questions(i);
        temp1=getchar();
        scanf("%c",&temp2);
        choice=temp1;
        if(choice>=65 && choice<=68 || choice>=97 && choice<=100)
            c=1;
        else
        {
            printf("Option does not exist. Select the option again");
            c=0;
            getchar();
        }
    }while(c==0);
    return temp1;
}






   
