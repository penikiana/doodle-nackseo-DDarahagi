#include <iostream>
#include <string>
/*
using namespace std;


class Image
{
public:
	operator string()
	{
		return "사진을 보냈습니다.";
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
	textmessage*hello = new textmessage(1, "아깽이", "안녕");
	ImageMessage*cat = new ImageMessage(2, "하울이",p_catImage);

	cout << hello->getsendtime() << "시간 전" << endl;
	cout << "보낸 사람 :" << hello->getsendname() << endl;
	cout << hello->gettext() << endl;
	cout << endl;

	cout << cat->getsendtime() << "시간 전" << endl;
	cout << "보낸 사람 :" << cat->getsendname() << endl;
	cout << (string)*cat->getImage() << endl;
	cout << endl;



	delete hello;
	delete cat;
	delete p_catImage;
}
*/