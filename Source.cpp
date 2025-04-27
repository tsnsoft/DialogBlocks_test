#include <wx/wx.h>
#include "tsnsoft.xpm" // Иконка в формате xpm

// Определяем уникальные идентификаторы для кнопок
enum {
    ID_BUTTON1 = wxID_HIGHEST + 1,
    ID_BUTTON2 = wxID_HIGHEST + 2
};

// Главное окно приложения
class MyFrame : public wxFrame {
public:
    MyFrame() : wxFrame(nullptr, wxID_ANY, "Test", wxDefaultPosition, wxSize(300, 250)) {
        SetIcon(tsnsoft_xpm); // Установка иконки

        new wxStaticText(this, wxID_ANY, wxT("Текстовая метка"), wxPoint(100, 30));

        new wxButton(this, ID_BUTTON1, wxT("Нажми меня!"),
            wxPoint(100, 70), wxSize(100, 30)); // Первая кнопка

        new wxButton(this, ID_BUTTON2, wxT("Нажми ещё!"),
            wxPoint(100, 110), wxSize(100, 30)); // Вторая кнопка
    }

private:
    void OnButton1Click(wxCommandEvent&) {
        wxMessageBox(wxT("Привет! Это моя фраза!"), wxT("Сообщение"), wxOK | wxICON_INFORMATION, this);
    }

    void OnButton2Click(wxCommandEvent&) {
        wxMessageBox(wxT("Ого! Это другая фраза!"), wxT("Сообщение"), wxOK | wxICON_INFORMATION, this);
    }

    // Объявляем таблицу событий
    DECLARE_EVENT_TABLE()
};

// Определяем таблицу событий
BEGIN_EVENT_TABLE(MyFrame, wxFrame)
    EVT_BUTTON(ID_BUTTON1, MyFrame::OnButton1Click)
    EVT_BUTTON(ID_BUTTON2, MyFrame::OnButton2Click)
END_EVENT_TABLE()

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