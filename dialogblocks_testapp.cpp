#include <wx/wx.h>

// Главное окно приложения
class MyFrame : public wxFrame {
public:
	MyFrame() : wxFrame(nullptr, wxID_ANY, "Test") {
		Bind(wxEVT_CLOSE_WINDOW, &MyFrame::OnClose, this);
	}

private:
	void OnClose(wxCloseEvent&) { Destroy(); }
};

// Класс приложения
class MyApp : public wxApp {
public:
	virtual bool OnInit() override {
		MyFrame* frame = new MyFrame();
		frame->Show(true);
		return true;
	}
};

wxIMPLEMENT_APP_NO_MAIN(MyApp); // Имя класса

// Точка входа
int main(int argc, char** argv)
{
	return wxEntry(argc, argv);
}
