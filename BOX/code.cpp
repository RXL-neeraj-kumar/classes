#include<bits/stdc++.h>

using namespace std;
class Box{
private:
    long l,b,h;
public:
    Box(){
    l=0;
    b=0;
    h=0;
    }
    Box(int length,int breadth,int height){
    l=length;
    b=breadth;
    h=height;
    }
    Box(const Box &bo){
    l=bo.l;
    b=bo.b;
    h=bo.h;
    }

    int getLength(){
    return l;
    }
    int getBreadth(){
    return b;
    }
    int getHeight(){
    return h;
    }

    long long CalculateVolume(){
        long long v=l*b*h;
    return v;
    }

    bool operator <(const Box &bx){
    if(this->l<bx.l)
        return true;
    else if (this->b<bx.b && this->l==bx.l)
        return true;
    else if(this->h<bx.h && this->b==bx.b && this->l==bx.l)
        return true;
    else
        return false;
    }

    friend ostream& operator <<(ostream & out,const Box &bx){
    out<<bx.l<<" "<<bx.b<<" "<<bx.h;
    return out;
    }
};

void check2()
{
	int n;
	cin>>n;
	Box temp;
	for(int i=0;i<n;i++)
	{
		int type;
		cin>>type;
		if(type ==1)
		{
			cout<<temp<<endl;
		}
		if(type == 2)
		{
			int l,b,h;
			cin>>l>>b>>h;
			Box NewBox(l,b,h);
			temp=NewBox;
			cout<<temp<<endl;
		}
		if(type==3)
		{
			int l,b,h;
			cin>>l>>b>>h;
			Box NewBox(l,b,h);
			if(NewBox<temp)
			{
				cout<<"Lesser\n";
			}
			else
			{
				cout<<"Greater\n";
			}
		}
		if(type==4)
		{
			cout<<temp.CalculateVolume()<<endl;
		}
		if(type==5)
		{
			Box NewBox(temp);
			cout<<NewBox<<endl;
		}

	}
}

int main()
{       clrscr();
	check2();
        getch();
        return 0;

}
