/*���ͼ���
��1��ʹ�ù������������Ϊ�������ֵ
��2��ʹ�ù������������Ϊ�����������ø�ֵ
��3��ʹ�ù�������������ָ��Ϊ����ָ�븳ֵ
��4����������Ĳ����ǻ�����󡢻����������á�����ָ�룬�����ڵ���ʱ��
����ʹ�ù�����������󡢹������������ĵ�ַ��Ϊʵ�Ρ�*/
/*#include <iostream>
using namespace std;
class Base
{
public:
	Base();
	void show();
protected:
	string _name;
};
Base::Base()
{
	_name = "base";
}
void Base::show()
{
	cout << _name << "base show()" << endl;
}
class Derive :public Base
{
public:
	Derive();
	void display();
};
Derive::Derive()
{
	_name = "derive";
}
void Derive::display()
{
	cout << _name << "derive show()" << endl;
}
void fun(Base* p1)
{
	p1->show();
}int main()
{
	Derive derive;
	Base base = derive;
	Base& q1 = derive;
	Base* p1 = &derive;
	base.show();//Base��������show����
	q1.show();//Base���������õ���show����
	p1->show();//Base��ָ�����show����
	fun(&derive);
	return 0;
}*******************************/
/*#include<iostream>//������Ĺ��캯������������
using namespace std;
class Engine//���巢������
{
public:
	Engine(string type, int power);//���巢�������캯�����������ͺţ�����
	void show();//��������ͨ��Ա����
	~Engine();//����������������
private:
	string _type;//��Ա_type
	int _power;//��Ա_power
};
Engine::Engine(string type, int power)//����ʵ�ַ������Ĺ��캯��
{
	_type = type;
	_power = power;
}
void Engine::show()//����ʵ��show����
{
	cout << "�������ͺţ�" << _type << "���������ʣ�" << _power << endl;
}
Engine::~Engine()
{
	cout << "������������" << endl;
}
class Vehicle//���彻ͨ������
{
public:
	Vehicle(string name);//��ͨ���ߵĹ��캯��
	void run();//��ͨ���ߵ���ͨ��Ա����
	string getname();//��ͨ���ߵ���ͨ��Ա����
private:
	string _name;//��Ա_name��ʾ��ͨ���ߵ�����
};
Vehicle::Vehicle(string name)//����ʵ�ֽ�ͨ���ߵĹ��캯��
{
	cout << "���ù��캯��" << endl;
	_name = name;
}
void Vehicle::run()//����ʵ����ͨ��Ա���������˶�״̬
{
	cout << _name << "������ʻ" << endl;
}
string Vehicle::getname()
{
	return _name;
}
//Vehicle::~Vehicle(){}
class Car :public Vehicle//������Car���м̳���Vehicle
{//С�����๹�캯��������������Ա���󣬻����Ա������������Ա����
public:
	Car(int seats, string color, string type, int power, string name);
	void brake();//������ͨ��Ա����ɲ��
	void display();
	~Car();
	Engine engine;//���г�Ա����Engine�Ķ���
private:
	int _seats;//��Ա_seats��ʾ��λ����
	string _color;//��Ա_color��ʾ������ɫ
};
Car::Car(int seats, string color, string type, int power, string name):engine(type, power), Vehicle(name)
{
	_seats = seats;
	_color = color;
}
void Car::brake()
{
	cout << getname() << "ͣ��" << endl;
}
void Car::display()
{
	cout << getname() << "��" << _seats << "��λ" << "��ɫΪ��" << _color << endl;
}
Car::~Car(){}
int main()
{
	Car car(10, "yellow", "EA12138", 1200,"��Ʒ�");
	car.run();
	car.brake();
	car.display();
	car.engine.show();
	return 0;
}*/
/*sofa�Ĺ��캯��
bed�Ĺ��캯��
ľ�ĵĹ��캯��
sofabed�Ĺ��캯��
sofa����������
bed������˯����
soabed����������
ľ�ĵ���������
bed����������
sofa����������
*/
/*#include<iostream>
using namespace std;
class wood
{
public:
	wood(){ cout << "ľ�ĵĹ��캯��" << endl; }
	~wood() { cout << "ľ�ĵ���������" << endl; }
};
class sofa
{
public:
	sofa() { cout << "sofa�Ĺ��캯��" << endl; }
	~sofa() { cout << "sofa����������" << endl; }
	void seat() { cout << "sofa����������" << endl; }
};
class bed
{
public:
	bed() { cout << "bed�Ĺ��캯��" << endl; }
	~bed() { cout << "bed����������" << endl; }
	void sleep() { cout << "bed������˯����" << endl; }
};
class sofabed :public sofa, public bed//��̳�
{
public:
	sofabed(){ cout << "sofabed�Ĺ��캯��" << endl; }
	~sofabed() { cout << "soabed����������" << endl; }
	wood pearwood;
};
int main()
{
	sofabed sbed;
	sbed.seat();
	sbed.sleep();
	return 0;
}*/