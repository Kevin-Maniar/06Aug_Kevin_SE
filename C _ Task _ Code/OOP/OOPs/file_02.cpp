/* #include<iostream>
using namespace std;

int main()
{
    FILE *ob; 

    ob = fopen ("file_01.txt","a");
    fprintf(ob,"Hello World");

    return 0;
} */

/* #include<iostream>
using namespace std;

int main()
{
    FILE *ob; 

    ob = fopen ("file_01.txt","a");
    
    int id;
    char  name[10];

    cout<<"Enter id and name";
    cin>>id>>name;

    fprintf(ob,"%d",id);
    fprintf(ob,"%s",name);

    return 0;
} */

/* #include<iostream>
using namespace std;

int main()
{
    FILE *ob;
    ob = fopen("file_01.txt","a");

    int n;
    int id;
    char name[10];

    cout<<"How many number of information you want to enter??";
    cin>>n;

    for(int i=0;i<n;i++)
    {
        cout<<"Enter ID:-";
        cin>>id;

        cout<<"Enter Name:-";
        cin>>name;

        fprintf(ob,"ID:-%d\n",id);
        fprintf(ob,"Name:-%s\n",name);
        fprintf(ob,"-----------\n");
    }

    return 0;
} */


#include<iostream>
using namespace std;

int main()
{

    FILE *ob;
    char str[100];

    ob = fopen("file_01.txt","r");

   while(fscanf(ob,"%s",&str)!=EOF)
   {    
       cout<<str<<endl;
   }
 
}