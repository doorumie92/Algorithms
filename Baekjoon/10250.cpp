#include <iostream>

using namespace std;


int main()
{
    int guest,width,height;
    int room=101;
    int loop=0;
    cin >> loop;

    for(int i=0; i<loop; i++)
    {
        cin >> height >> width >> guest;
        while(1)
        {
            if(guest > height)
            {
                guest -= height;
                room++;
            }
            else if(guest <= height && guest != 0)
            {
                guest--;
                room += 100;
            }

            if(guest == 0)
                break;
        }
        if(room > 200)
            room -= 100;
        cout<<room<<endl;
        room = 101;
    }
    return 0;
}
