#include <iostream>
#include <string>
/*
using namespace std;


class Image
{
public:
	operator string()
	{
		return "������ ���½��ϴ�.";
	}
};

class message
{
public:
	message(int sendtime, string sendname)
	{
		this->sendtime = sendtime;
		this->sendname = sendname;
	}

	int getsendtime() const { return sendtime; }
	string getsendname() const { return sendname; }

private:
	int sendtime;
	string sendname;
};

class textmessage :public message
{
public:
	textmessage(int sendtime, string sendname, string text)
		:message(sendtime, sendname)
	{
		this->text = text;
	}
	

	string gettext() const { return text; }

private:
	int sendtime;
	string sendname;
	string text;
};

class ImageMessage : public message
{
public:
	ImageMessage(int sendtime, string sendname, Image* image)
		: message(sendtime, sendname)
	{
		this->image = image;
	}


	Image* getImage() const { return image; }

private:
	Image* image;
};

int main()
{
	Image*p_catImage = new Image();
	textmessage*hello = new textmessage(1, "�Ʋ���", "�ȳ�");
	ImageMessage*cat = new ImageMessage(2, "�Ͽ���",p_catImage);

	cout << hello->getsendtime() << "�ð� ��" << endl;
	cout << "���� ��� :" << hello->getsendname() << endl;
	cout << hello->gettext() << endl;
	cout << endl;

	cout << cat->getsendtime() << "�ð� ��" << endl;
	cout << "���� ��� :" << cat->getsendname() << endl;
	cout << (string)*cat->getImage() << endl;
	cout << endl;



	delete hello;
	delete cat;
	delete p_catImage;
}
*/