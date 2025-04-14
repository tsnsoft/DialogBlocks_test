#include <wx/wx.h>
#include "tsnsoft.xpm" // Иконка в формате xpm

// Главное окно приложения
class MyFrame : public wxFrame {
public:
	MyFrame() : wxFrame(nullptr, wxID_ANY, "Test", wxDefaultPosition, wxSize(300, 200)) {
		SetIcon(tsnsoft_xpm); // Установка иконки

		new wxStaticText(this, wxID_ANY, wxT("Текстовая метка"), wxPoint(100, 30));

		wxButton* button = new wxButton(this, wxID_ANY, wxT("Нажми меня!"),
			wxPoint(100, 70), wxSize(100, 30)); // Создаём кнопку

		button->Bind(wxEVT_BUTTON, &MyFrame::OnButtonClick, this); // Обработчик нажатия кнопки
	}

private:
	void OnButtonClick(wxCommandEvent&) {
		wxMessageBox(wxT("Привет! Это моя фраза!"), wxT("Сообщение"), wxOK | wxICON_INFORMATION, this);
	}
};

// Класс приложения
class MyApp : public wxApp {
public:
	virtual bool OnInit() override {
		MyFrame* frame = new MyFrame();
		frame->Show(true);
		frame->Centre();
		return true;
	}
};

wxIMPLEMENT_APP(MyApp); // Создание точки входа в приложение
