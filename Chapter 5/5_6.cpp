/*6. Do Programming Exercise 5 but use a two-dimensional array to store input for 3 years of monthly sales.
Report the total sales for each individual year and for the combined years.
*/

#include <iostream>
#include <cstring>

int main(void){

struct arr{
int y[3];
char** m;
int n_b[3][12];
};

arr *q=new arr;
q->m=new char*[12];
//q->n_b=new int[36];
int sum=0;
int sum_year[3];
char mont[15];
int i,j;

for(j=0;j<12;j++){
std::cout<<"Please enter the month: ";
std::cin>>mont;
int n=strlen(mont);
    q->m[j]=new char[n+1];
    strcpy(q->m[j],mont);
    std::cout<<j<<" "<<&q->m[j]<<" "<<q->m[j]<<std::endl;
}
/*
for(j=0;j<12;j++)
std::cout<<(j+1)<<"month: "<<q->m[j]<<" "<<&q->m[j]<<std::endl;
*/
for(i=0;i<3;i++){
  //  int sum;
  sum_year[i]=0;
    std::cout<<(i+1)<<"year:\n";
    for(j=0;j<12;j++){
    std::cout<<"Enter the number of book in month "<<q->m[j]<<"  ";
    std::cin>>q->n_b[i][j];

    sum+=(q->n_b[i][j]);//total summa
    sum_year[i]+=q->n_b[i][j];//summa for year
 //   std::cout<<i<<"."<<j<<"n_b[i][j]: "<<q->n_b[i][j]<<"  sum: "<<sum<<std::endl;
   // std::cout<<i<<"."<<j<<" 0|sum: "<<&sum<<std::endl;
    }
    std::cout<<"summa for year: "<<sum_year[i]<<std::endl;
 //   std::cout<<"Total summa: "<<sum<<std::endl;
}
 std::cout<<"Total summa: "<<sum<<std::endl;
 /*
for(i=0;i<3;i++){
std::cout<<"\n"<<(i+1)<<"year"<<std::endl;
    for(j=0;j<12;j++)
std::cout<<q->m[j]<<" "<<q->n_b[i][j]<<"   ";
}
*/
for(j=0;j<12;j++)
    delete []q->m[j];//delete character array
delete []q->m;//delete array of pointers
return 0;
}
