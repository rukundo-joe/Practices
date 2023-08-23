#include <iostream>
using namespace std;

class Joe{
public:
string name;
string cname;
};

int main(){
    Joe lisa;
    lisa.name = 'Teto';
    lisa.cname = 'Rukundo';

    cout<<lisa.name << " " << lisa.cname << "\n";
    return 0;
}
