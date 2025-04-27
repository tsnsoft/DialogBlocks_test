#include <wx/wx.h>
#include "tsnsoft.xpm" // Подключаем файл иконки в формате XPM для окна приложения

// Определяем уникальные идентификаторы для кнопок, чтобы избежать конфликтов с wxWidgets
enum {
    ID_BUTTON1 = wxID_HIGHEST + 1, // Уникальный ID для первой кнопки
    ID_BUTTON2 = wxID_HIGHEST + 2  // Уникальный ID для второй кнопки
};

// Главное окно приложения, наследуем от wxFrame
class MyFrame : public wxFrame {
public:
    // Конструктор главного окна
    MyFrame() : wxFrame(nullptr, wxID_ANY, "Test", wxDefaultPosition, wxSize(300, 250)) {
        // Устанавливаем иконку окна из файла tsnsoft.xpm
        SetIcon(tsnsoft_xpm);

        // Создаем текстовую метку (статический текст) в окне
        new wxStaticText(this, wxID_ANY, wxT("Текстовая метка"), wxPoint(100, 30));

        // Создаем первую кнопку с идентификатором ID_BUTTON1
        new wxButton(this, ID_BUTTON1, wxT("Нажми меня!"), wxPoint(100, 70), wxSize(100, 30));

        // Создаем вторую кнопку с идентификатором ID_BUTTON2
        new wxButton(this, ID_BUTTON2, wxT("Нажми ещё!"), wxPoint(100, 110), wxSize(100, 30));

        /*
         * Вариант с использованием Bind для привязки событий вместо таблицы событий:
         * Bind позволяет динамически связывать события с обработчиками во время выполнения.
         * Это более гибкий подход, чем статическая таблица событий.
         *
         * Пример:
         * Bind(wxEVT_BUTTON, &MyFrame::OnButton1Click, this, ID_BUTTON1);
         * Bind(wxEVT_BUTTON, &MyFrame::OnButton2Click, this, ID_BUTTON2);
         *
         * В данном коде используется таблица событий (DECLARE_EVENT_TABLE),
         * но Bind можно использовать как альтернативу, особенно если нужно
         * динамически добавлять или изменять обработчики событий.
         */
    }

private:
    // Обработчик события для первой кнопки
    void OnButton1Click(wxCommandEvent& event) {
        // Выводим диалоговое окно с сообщением
        wxMessageBox(wxT("Привет! Это моя фраза!"), wxT("Сообщение"), wxOK | wxICON_INFORMATION, this);
    }

    // Обработчик события для второй кнопки
    void OnButton2Click(wxCommandEvent& event) {
        // Выводим диалоговое окно с другим сообщением
        wxMessageBox(wxT("Ого! Это другая фраза!"), wxT("Сообщение"), wxOK | wxICON_INFORMATION, this);
    }

    // Объявляем таблицу событий для связи событий с обработчиками
    DECLARE_EVENT_TABLE()
};

// Определяем таблицу событий, связывающую события кнопок с их обработчиками
BEGIN_EVENT_TABLE(MyFrame, wxFrame)
    EVT_BUTTON(ID_BUTTON1, MyFrame::OnButton1Click) // Событие для первой кнопки
    EVT_BUTTON(ID_BUTTON2, MyFrame::OnButton2Click) // Событие для второй кнопки
END_EVENT_TABLE()

// Класс приложения, наследуем от wxApp
class MyApp : public wxApp {
public:
    // Метод инициализации приложения, вызывается при запуске
    virtual bool OnInit() override {
        // Создаем экземпляр главного окна
        MyFrame* frame = new MyFrame();
        // Показываем окно
        frame->Show(true);
        // Центрируем окно на экране
        frame->Centre();
        // Возвращаем true, чтобы приложение продолжило работу
        return true;
    }
};

// Создаем точку входа в приложение, запуская MyApp
wxIMPLEMENT_APP(MyApp);