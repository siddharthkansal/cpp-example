#include <iostream>

int for_increment(int incr)
{

for(int cnt=0;cnt<incr;cnt++)
{
std::cout<<"Module#1_for_increment  - Increment Value "<<cnt<<"\n";
}

return 0;

}


int while_increment(int incr)
{
int cnt=0;

while(cnt<incr)
{
std::cout<<"Module#1_while_increment  - Increment Value "<<cnt<<"\n";
cnt++;
}

return 0;

}





int main()
{

int b = 10;
for_increment(b);
while_increment(b);

return 0;

}
