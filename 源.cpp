/*类型兼容
（1）使用公有派生类对象为基类对象赋值
（2）使用公有派生类对象为基类对象的引用赋值
（3）使用公有派生类对象的指针为基类指针赋值
（4）如果函数的参数是基类对象、基类对象的引用、基类指针，则函数在调用时，
可以使用公有派生类对象、公有派生类对象的地址作为实参。*/
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
	base.show();//Base类对象调用show函数
	q1.show();//Base类对象的引用调用show函数
	p1->show();//Base类指针调用show函数
	fun(&derive);
	return 0;
}*******************************/
/*#include<iostream>//派生类的构造函数和析构函数
using namespace std;
class Engine//定义发动机类
{
public:
	Engine(string type, int power);//定义发动机构造函数参数含义型号，功率
	void show();//发动机普通成员函数
	~Engine();//发动机的析构函数
private:
	string _type;//成员_type
	int _power;//成员_power
};
Engine::Engine(string type, int power)//类外实现发动机的构造函数
{
	_type = type;
	_power = power;
}
void Engine::show()//类外实现show函数
{
	cout << "发动机型号：" << _type << "发动机功率：" << _power << endl;
}
Engine::~Engine()
{
	cout << "调用析构函数" << endl;
}
class Vehicle//定义交通工具类
{
public:
	Vehicle(string name);//交通工具的构造函数
	void run();//交通工具的普通成员函数
	string getname();//交通工具的普通成员函数
private:
	string _name;//成员_name表示交通工具的名字
};
Vehicle::Vehicle(string name)//类外实现交通工具的构造函数
{
	cout << "调用构造函数" << endl;
	_name = name;
}
void Vehicle::run()//类外实现普通成员函数表明运动状态
{
	cout << _name << "正在行驶" << endl;
}
string Vehicle::getname()
{
	return _name;
}
//Vehicle::~Vehicle(){}
class Car :public Vehicle//创建类Car公有继承类Vehicle
{//小汽车类构造函数，参数包括成员对象，基类成员参数，新增成员参数
public:
	Car(int seats, string color, string type, int power, string name);
	void brake();//定义普通成员函数刹车
	void display();
	~Car();
	Engine engine;//公有成员变量Engine的对象
private:
	int _seats;//成员_seats表示座位数量
	string _color;//成员_color表示车的颜色
};
Car::Car(int seats, string color, string type, int power, string name):engine(type, power), Vehicle(name)
{
	_seats = seats;
	_color = color;
}
void Car::brake()
{
	cout << getname() << "停车" << endl;
}
void Car::display()
{
	cout << getname() << "有" << _seats << "座位" << "颜色为：" << _color << endl;
}
Car::~Car(){}
int main()
{
	Car car(10, "yellow", "EA12138", 1200,"大黄蜂");
	car.run();
	car.brake();
	car.display();
	car.engine.show();
	return 0;
}*/
/*sofa的构造函数
bed的构造函数
木材的构造函数
sofabed的构造函数
sofa是用来坐的
bed是用来睡觉的
soabed的析构函数
木材的析构函数
bed的析构函数
sofa的析构函数
*/
/*#include<iostream>
using namespace std;
class wood
{
public:
	wood(){ cout << "木材的构造函数" << endl; }
	~wood() { cout << "木材的析构函数" << endl; }
};
class sofa
{
public:
	sofa() { cout << "sofa的构造函数" << endl; }
	~sofa() { cout << "sofa的析构函数" << endl; }
	void seat() { cout << "sofa是用来坐的" << endl; }
};
class bed
{
public:
	bed() { cout << "bed的构造函数" << endl; }
	~bed() { cout << "bed的析构函数" << endl; }
	void sleep() { cout << "bed是用来睡觉的" << endl; }
};
class sofabed :public sofa, public bed//多继承
{
public:
	sofabed(){ cout << "sofabed的构造函数" << endl; }
	~sofabed() { cout << "soabed的析构函数" << endl; }
	wood pearwood;
};
int main()
{
	sofabed sbed;
	sbed.seat();
	sbed.sleep();
	return 0;
}*/