#include <iostream>


//1번문제 답
//0, 10, 10(0), 20 세번째꺼 틀림. 컴파일러는 아직 b안에 n이 있다는걸 모른다!

//2번문제 답
/*
using namespace std;

class GameWindow
{
public:
	GameWindow();
	GameWindow(const int, const int);

	int GetWidth() const;
	int GetHeight()const;
	
	void ResizeWindow(const int, const int);

private:
	int width;
	int height;
};

GameWindow::GameWindow() : width(800), height(600) {}
GameWindow::GameWindow(const int w, const int h) 
{
	ResizeWindow(w, h);
}

int GameWindow::GetWidth() const{ return width; }
int GameWindow::GetHeight() const{ return height; }

void GameWindow::ResizeWindow(const int w, const int h)
{
	if (w < 800) width = 800;
	else width = w;

	if (h < 600) height = 600;
	else height = h;
}

int main()
{
	GameWindow mainWindow;
	mainWindow.ResizeWindow(450, 768);
	cout << mainWindow.GetWidth() << "x" << mainWindow.GetHeight() << endl;
}
*/