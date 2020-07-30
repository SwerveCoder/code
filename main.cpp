#include <iostream>
#include <map>
using namespace std;

int main()
{
    //cout << "Hello world!" << endl;
    map <int,string> customer;

    customer[100]="tony";
    customer[123]="chan";

    customer.insert(pair<int,string>(309,"chandan"));
   // map <int,string> v{{100,"chandan"},(123,"kumar");
   // }
   /*cout<<customer[100]<<endl;
    cout<<customer[123];
*/

    map <int,string>::iterator p= customer.begin();    //map<datatype>
    while(p!=customer.end()){
        cout<<p->second<<endl;
        p++;
    } //iterator

    cout<<customer.size();  // for size
    cout<<customer.empty();

    customer.insert(pair<int,string>(309,"chandan")); // pair of int and string
    return 0;
}
