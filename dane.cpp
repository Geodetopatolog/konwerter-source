#include "dane.h"
#include <wx/dcclient.h>
#include <wx/grid.h>

//(*InternalHeaders(dane)
#include <wx/artprov.h>
#include <wx/bitmap.h>
#include <wx/settings.h>
#include <wx/intl.h>
#include <wx/image.h>
#include <wx/string.h>
//*)

//(*IdInit(dane)
const long dane::ID_STATICBOX1 = wxNewId();
const long dane::ID_TEXTCTRL1 = wxNewId();
const long dane::ID_PANEL2 = wxNewId();
const long dane::ID_GRID1 = wxNewId();
const long dane::ID_BUTTON4 = wxNewId();
const long dane::ID_BUTTON5 = wxNewId();
const long dane::ID_BUTTON6 = wxNewId();
const long dane::ID_PANEL1 = wxNewId();
const long dane::ID_STATICBOX5 = wxNewId();
const long dane::ID_STATICBOX4 = wxNewId();
const long dane::ID_STATICBOX3 = wxNewId();
const long dane::ID_STATICBOX2 = wxNewId();
const long dane::ID_LISTBOX1 = wxNewId();
const long dane::ID_BITMAPBUTTON1 = wxNewId();
const long dane::ID_BITMAPBUTTON2 = wxNewId();
const long dane::ID_LISTBOX2 = wxNewId();
const long dane::ID_BITMAPBUTTON3 = wxNewId();
const long dane::ID_BITMAPBUTTON4 = wxNewId();
const long dane::ID_BITMAPBUTTON5 = wxNewId();
const long dane::ID_BITMAPBUTTON6 = wxNewId();
const long dane::ID_LISTBOX3 = wxNewId();
const long dane::ID_STATICTEXT19 = wxNewId();
const long dane::ID_TEXTCTRL22 = wxNewId();
const long dane::ID_STATICTEXT20 = wxNewId();
const long dane::ID_TEXTCTRL23 = wxNewId();
const long dane::ID_STATICTEXT21 = wxNewId();
const long dane::ID_TEXTCTRL24 = wxNewId();
const long dane::ID_BUTTON11 = wxNewId();
const long dane::ID_PANEL6 = wxNewId();
const long dane::ID_NOTEBOOK1 = wxNewId();
const long dane::ID_STATICTEXT1 = wxNewId();
const long dane::ID_STATICTEXT2 = wxNewId();
const long dane::ID_TEXTCTRL2 = wxNewId();
const long dane::ID_TEXTCTRL3 = wxNewId();
const long dane::ID_STATICTEXT3 = wxNewId();
const long dane::ID_STATICTEXT4 = wxNewId();
const long dane::ID_TEXTCTRL4 = wxNewId();
const long dane::ID_STATICTEXT5 = wxNewId();
const long dane::ID_TEXTCTRL5 = wxNewId();
const long dane::ID_TEXTCTRL6 = wxNewId();
const long dane::ID_STATICTEXT6 = wxNewId();
const long dane::ID_RADIOBUTTON1 = wxNewId();
const long dane::ID_RADIOBUTTON2 = wxNewId();
const long dane::ID_RADIOBUTTON3 = wxNewId();
const long dane::ID_RADIOBUTTON4 = wxNewId();
const long dane::ID_RADIOBUTTON5 = wxNewId();
const long dane::ID_TEXTCTRL7 = wxNewId();
const long dane::ID_BUTTON1 = wxNewId();
const long dane::ID_CHECKBOX9 = wxNewId();
const long dane::ID_PANEL3 = wxNewId();
const long dane::ID_RADIOBUTTON6 = wxNewId();
const long dane::ID_RADIOBUTTON7 = wxNewId();
const long dane::ID_RADIOBUTTON8 = wxNewId();
const long dane::ID_RADIOBUTTON9 = wxNewId();
const long dane::ID_RADIOBUTTON10 = wxNewId();
const long dane::ID_STATICTEXT16 = wxNewId();
const long dane::ID_TEXTCTRL18 = wxNewId();
const long dane::ID_BUTTON7 = wxNewId();
const long dane::ID_TEXTCTRL19 = wxNewId();
const long dane::ID_TEXTCTRL9 = wxNewId();
const long dane::ID_STATICTEXT9 = wxNewId();
const long dane::ID_CHECKBOX10 = wxNewId();
const long dane::ID_PANEL4 = wxNewId();
const long dane::ID_TEXTCTRL10 = wxNewId();
const long dane::ID_TEXTCTRL11 = wxNewId();
const long dane::ID_STATICTEXT10 = wxNewId();
const long dane::ID_STATICTEXT11 = wxNewId();
const long dane::ID_STATICTEXT12 = wxNewId();
const long dane::ID_TEXTCTRL12 = wxNewId();
const long dane::ID_TEXTCTRL13 = wxNewId();
const long dane::ID_STATICTEXT13 = wxNewId();
const long dane::ID_TEXTCTRL14 = wxNewId();
const long dane::ID_TEXTCTRL15 = wxNewId();
const long dane::ID_CHECKBOX1 = wxNewId();
const long dane::ID_STATICTEXT14 = wxNewId();
const long dane::ID_STATICTEXT15 = wxNewId();
const long dane::ID_TEXTCTRL16 = wxNewId();
const long dane::ID_TEXTCTRL17 = wxNewId();
const long dane::ID_CHECKBOX2 = wxNewId();
const long dane::ID_CHECKBOX3 = wxNewId();
const long dane::ID_STATICTEXT17 = wxNewId();
const long dane::ID_STATICTEXT18 = wxNewId();
const long dane::ID_TEXTCTRL20 = wxNewId();
const long dane::ID_TEXTCTRL21 = wxNewId();
const long dane::ID_BUTTON8 = wxNewId();
const long dane::ID_STATICLINE1 = wxNewId();
const long dane::ID_CHECKBOX4 = wxNewId();
const long dane::ID_CHECKBOX5 = wxNewId();
const long dane::ID_BUTTON9 = wxNewId();
const long dane::ID_BUTTON10 = wxNewId();
const long dane::ID_RADIOBUTTON11 = wxNewId();
const long dane::ID_RADIOBUTTON12 = wxNewId();
const long dane::ID_CHECKBOX6 = wxNewId();
const long dane::ID_CHECKBOX7 = wxNewId();
const long dane::ID_CHECKBOX8 = wxNewId();
const long dane::ID_PANEL5 = wxNewId();
const long dane::ID_NOTEBOOK2 = wxNewId();
const long dane::ID_STATICTEXT7 = wxNewId();
const long dane::ID_TEXTCTRL8 = wxNewId();
const long dane::ID_STATICTEXT8 = wxNewId();
const long dane::ID_BUTTON2 = wxNewId();
const long dane::ID_BUTTON3 = wxNewId();
const long dane::ID_TOOLBARITEM5 = wxNewId();
const long dane::ID_TOOLBARITEM6 = wxNewId();
const long dane::ID_TOOLBARITEM4 = wxNewId();
const long dane::ID_TOOLBARITEM1 = wxNewId();
const long dane::ID_TOOLBARITEM2 = wxNewId();
const long dane::ID_TOOLBARITEM3 = wxNewId();
const long dane::ID_TOOLBAR1 = wxNewId();
const long dane::ID_TEXTENTRYDIALOG1 = wxNewId();
//*)

BEGIN_EVENT_TABLE(dane,wxFrame)
	//(*EventTable(dane)
	//*)
END_EVENT_TABLE()

dane::dane(wxWindow* parent,wxWindowID id,const wxPoint& pos,const wxSize& size)
{
	//(*Initialize(dane)
	Create(parent, wxID_ANY, _("Pozosta³e dane"), wxDefaultPosition, wxDefaultSize, wxDEFAULT_FRAME_STYLE|wxFRAME_NO_TASKBAR|wxFRAME_FLOAT_ON_PARENT, _T("wxID_ANY"));
	SetClientSize(wxSize(1300,700));
	SetBackgroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_MENU));
	StaticBox1 = new wxStaticBox(this, ID_STATICBOX1, _("Podstawowe informacje"), wxPoint(4,40), wxSize(364,224), 0, _T("ID_STATICBOX1"));
	TextCtrl1 = new wxTextCtrl(this, ID_TEXTCTRL1, _("0"), wxPoint(16,96), wxSize(56,24), 0, wxDefaultValidator, _T("ID_TEXTCTRL1"));
	TextCtrl1->Disable();
	Notebook1 = new wxNotebook(this, ID_NOTEBOOK1, wxPoint(376,32), wxSize(920,664), 0, _T("ID_NOTEBOOK1"));
	Panel1 = new wxPanel(Notebook1, ID_PANEL2, wxPoint(15,25), wxSize(909,635), wxTAB_TRAVERSAL, _T("ID_PANEL2"));
	Panel1->SetBackgroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_WINDOW));
	Panel2 = new wxPanel(Notebook1, ID_PANEL1, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL, _T("ID_PANEL1"));
	Grid1 = new wxGrid(Panel2, ID_GRID1, wxPoint(0,0), wxSize(688,632), 0, _T("ID_GRID1"));
	Grid1->CreateGrid(0,5);
	Grid1->EnableEditing(true);
	Grid1->EnableGridLines(true);
	Grid1->SetDefaultColSize(120, true);
	Grid1->SetColLabelValue(0, _("X [m]"));
	Grid1->SetColLabelValue(1, _("Y [m]"));
	Grid1->SetColLabelValue(2, _("h [m]"));
	Grid1->SetColLabelValue(3, _("g [m]"));
	Grid1->SetColLabelValue(4, _("Zp [m]"));
	Grid1->SetDefaultCellFont( Grid1->GetFont() );
	Grid1->SetDefaultCellTextColour( Grid1->GetForegroundColour() );
	Button4 = new wxButton(Panel2, ID_BUTTON4, _("Usuñ"), wxPoint(712,72), wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON4"));
	Button5 = new wxButton(Panel2, ID_BUTTON5, _("Zapisz"), wxPoint(712,152), wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON5"));
	Button6 = new wxButton(Panel2, ID_BUTTON6, _("Anuluj"), wxPoint(712,112), wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON6"));
	Panel6 = new wxPanel(Notebook1, ID_PANEL6, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL, _T("ID_PANEL6"));
	StaticBox5 = new wxStaticBox(Panel6, ID_STATICBOX5, _("Label"), wxPoint(688,8), wxSize(208,408), 0, _T("ID_STATICBOX5"));
	StaticBox4 = new wxStaticBox(Panel6, ID_STATICBOX4, _("Parcele w zbiorze"), wxPoint(488,8), wxSize(192,456), 0, _T("ID_STATICBOX4"));
	StaticBox3 = new wxStaticBox(Panel6, ID_STATICBOX3, _("Nieprzypisane parcele"), wxPoint(208,8), wxSize(192,456), 0, _T("ID_STATICBOX3"));
	StaticBox2 = new wxStaticBox(Panel6, ID_STATICBOX2, _("Lista zbiorów"), wxPoint(8,8), wxSize(192,456), 0, _T("ID_STATICBOX2"));
	ListBox1 = new wxListBox(Panel6, ID_LISTBOX1, wxPoint(16,80), wxSize(176,376), 0, 0, 0, wxDefaultValidator, _T("ID_LISTBOX1"));
	BitmapButton1 = new wxBitmapButton(Panel6, ID_BITMAPBUTTON1, wxBitmap(wxImage(_T("C:\\Users\\Lenovo\\Desktop\\Konwerter\\Program\\Ikony\\dodaj.ico"))), wxPoint(40,40), wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON1"));
	BitmapButton2 = new wxBitmapButton(Panel6, ID_BITMAPBUTTON2, wxBitmap(wxImage(_T("C:\\Users\\Lenovo\\Desktop\\Konwerter\\Program\\Ikony\\usun.ico"))), wxPoint(128,40), wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON2"));
	ListBox2 = new wxListBox(Panel6, ID_LISTBOX2, wxPoint(216,40), wxSize(176,416), 0, 0, 0, wxDefaultValidator, _T("ID_LISTBOX2"));
	BitmapButton3 = new wxBitmapButton(Panel6, ID_BITMAPBUTTON3, wxBitmap(wxImage(_T("C:\\Users\\Lenovo\\Desktop\\Konwerter\\Program\\Ikony\\1p.ico"))), wxPoint(448,120), wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON3"));
	BitmapButton4 = new wxBitmapButton(Panel6, ID_BITMAPBUTTON4, wxBitmap(wxImage(_T("C:\\Users\\Lenovo\\Desktop\\Konwerter\\Program\\Ikony\\2p.ico"))), wxPoint(448,160), wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON4"));
	BitmapButton5 = new wxBitmapButton(Panel6, ID_BITMAPBUTTON5, wxBitmap(wxImage(_T("C:\\Users\\Lenovo\\Desktop\\Konwerter\\Program\\Ikony\\2l.ico"))), wxPoint(408,160), wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON5"));
	BitmapButton6 = new wxBitmapButton(Panel6, ID_BITMAPBUTTON6, wxBitmap(wxImage(_T("C:\\Users\\Lenovo\\Desktop\\Konwerter\\Program\\Ikony\\1l.ico"))), wxPoint(408,120), wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON6"));
	ListBox3 = new wxListBox(Panel6, ID_LISTBOX3, wxPoint(496,40), wxSize(176,416), 0, 0, 0, wxDefaultValidator, _T("ID_LISTBOX3"));
	StaticText19 = new wxStaticText(Panel6, ID_STATICTEXT19, _("Data utworzenia"), wxPoint(744,48), wxDefaultSize, 0, _T("ID_STATICTEXT19"));
	TextCtrl22 = new wxTextCtrl(Panel6, ID_TEXTCTRL22, wxEmptyString, wxPoint(744,72), wxDefaultSize, 0, wxDefaultValidator, _T("ID_TEXTCTRL22"));
	StaticText20 = new wxStaticText(Panel6, ID_STATICTEXT20, _("Komentarz"), wxPoint(760,112), wxDefaultSize, 0, _T("ID_STATICTEXT20"));
	TextCtrl23 = new wxTextCtrl(Panel6, ID_TEXTCTRL23, wxEmptyString, wxPoint(696,136), wxSize(192,72), wxTE_MULTILINE, wxDefaultValidator, _T("ID_TEXTCTRL23"));
	StaticText21 = new wxStaticText(Panel6, ID_STATICTEXT21, _("Autor"), wxPoint(776,224), wxDefaultSize, 0, _T("ID_STATICTEXT21"));
	TextCtrl24 = new wxTextCtrl(Panel6, ID_TEXTCTRL24, wxEmptyString, wxPoint(744,248), wxDefaultSize, 0, wxDefaultValidator, _T("ID_TEXTCTRL24"));
	Button11 = new wxButton(Panel6, ID_BUTTON11, _("Zapisz"), wxPoint(752,368), wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON11"));
	Notebook1->AddPage(Panel1, _("Podgl¹d"), false);
	Notebook1->AddPage(Panel2, _("Tabela"), false);
	Notebook1->AddPage(Panel6, _("Grupy parcel"), false);
	StaticText1 = new wxStaticText(this, ID_STATICTEXT1, _("Parcele"), wxPoint(24,72), wxDefaultSize, 0, _T("ID_STATICTEXT1"));
	StaticText2 = new wxStaticText(this, ID_STATICTEXT2, _("Numer parceli"), wxPoint(84,72), wxDefaultSize, 0, _T("ID_STATICTEXT2"));
	TextCtrl2 = new wxTextCtrl(this, ID_TEXTCTRL2, _("0"), wxPoint(80,96), wxSize(88,24), 0, wxDefaultValidator, _T("ID_TEXTCTRL2"));
	TextCtrl2->Disable();
	TextCtrl3 = new wxTextCtrl(this, ID_TEXTCTRL3, wxEmptyString, wxPoint(176,96), wxSize(180,24), 0, wxDefaultValidator, _T("ID_TEXTCTRL3"));
	StaticText3 = new wxStaticText(this, ID_STATICTEXT3, _("Nazwa Parceli"), wxPoint(224,72), wxDefaultSize, 0, _T("ID_STATICTEXT3"));
	StaticText4 = new wxStaticText(this, ID_STATICTEXT4, _("Wierzcho³ki"), wxPoint(32,136), wxDefaultSize, 0, _T("ID_STATICTEXT4"));
	TextCtrl4 = new wxTextCtrl(this, ID_TEXTCTRL4, _("0"), wxPoint(16,160), wxDefaultSize, 0, wxDefaultValidator, _T("ID_TEXTCTRL4"));
	TextCtrl4->Disable();
	StaticText5 = new wxStaticText(this, ID_STATICTEXT5, _("Pole pow [m^2]"), wxPoint(136,136), wxDefaultSize, 0, _T("ID_STATICTEXT5"));
	TextCtrl5 = new wxTextCtrl(this, ID_TEXTCTRL5, _("0"), wxPoint(136,160), wxDefaultSize, 0, wxDefaultValidator, _T("ID_TEXTCTRL5"));
	TextCtrl5->Disable();
	TextCtrl6 = new wxTextCtrl(this, ID_TEXTCTRL6, _("0"), wxPoint(256,160), wxDefaultSize, 0, wxDefaultValidator, _T("ID_TEXTCTRL6"));
	TextCtrl6->Disable();
	StaticText6 = new wxStaticText(this, ID_STATICTEXT6, _("Obwód [m]"), wxPoint(264,136), wxDefaultSize, 0, _T("ID_STATICTEXT6"));
	Notebook2 = new wxNotebook(this, ID_NOTEBOOK2, wxPoint(4,264), wxSize(372,432), 0, _T("ID_NOTEBOOK2"));
	Panel3 = new wxPanel(Notebook2, ID_PANEL3, wxPoint(4,26), wxSize(410,403), wxTAB_TRAVERSAL, _T("ID_PANEL3"));
	RadioButton1 = new wxRadioButton(Panel3, ID_RADIOBUTTON1, _("Rêcznie"), wxPoint(8,8), wxDefaultSize, wxRB_GROUP, wxDefaultValidator, _T("ID_RADIOBUTTON1"));
	RadioButton1->SetValue(true);
	RadioButton1->SetToolTip(_("Wysokoœæ furty wpisana przez u¿ytownika"));
	RadioButton2 = new wxRadioButton(Panel3, ID_RADIOBUTTON2, _("Do najbli¿szego"), wxPoint(8,32), wxDefaultSize, 0, wxDefaultValidator, _T("ID_RADIOBUTTON2"));
	RadioButton2->SetToolTip(_("Przyporz¹dkowanie wysokoœci furty w danym wierzcho³ku do najbli¿szej wysokoœci uwidocznionej na mapie (np. proste parcele z du¿¹ iloœci¹ podanych wysokoœci)"));
	RadioButton3 = new wxRadioButton(Panel3, ID_RADIOBUTTON3, _("Œrednia"), wxPoint(8,56), wxDefaultSize, 0, wxDefaultValidator, _T("ID_RADIOBUTTON3"));
	RadioButton3->SetToolTip(_("Obliczenie œredniej wysokoœci furty dla danej parceli.\nPrzydatne dla parceli o ma³ej ró¿norodnoœci mi¹¿szoœci\n(np. z³o¿a pok³adowe bez trendu zmian)"));
	RadioButton4 = new wxRadioButton(Panel3, ID_RADIOBUTTON4, _("Wpisanie p³aszczyzny 1"), wxPoint(8,80), wxDefaultSize, 0, wxDefaultValidator, _T("ID_RADIOBUTTON4"));
	RadioButton4->SetToolTip(_("Dla parceli wyd³u¿onych, w których wysokoœci furt\nwpisano w osi (np. system œcianowy).\nWynik podobny do interpolacji."));
	RadioButton5 = new wxRadioButton(Panel3, ID_RADIOBUTTON5, _("Wpisanie p³aszczyzny 2"), wxPoint(8,104), wxDefaultSize, 0, wxDefaultValidator, _T("ID_RADIOBUTTON5"));
	RadioButton5->SetToolTip(_("Dla parceli o skomplikowanej geometrii i wyraŸniemu trendowi zmian wysokoœci furt."));
	TextCtrl7 = new wxTextCtrl(Panel3, ID_TEXTCTRL7, _("0"), wxPoint(88,6), wxSize(40,22), 0, wxDefaultValidator, _T("ID_TEXTCTRL7"));
	Button1 = new wxButton(Panel3, ID_BUTTON1, _("Wyznacz"), wxPoint(32,168), wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON1"));
	CheckBox9 = new wxCheckBox(Panel3, ID_CHECKBOX9, _("Wyznacz globalnie"), wxPoint(8,144), wxDefaultSize, wxALIGN_RIGHT, wxDefaultValidator, _T("ID_CHECKBOX9"));
	CheckBox9->SetValue(false);
	Panel4 = new wxPanel(Notebook2, ID_PANEL4, wxPoint(88,6), wxDefaultSize, wxTAB_TRAVERSAL, _T("ID_PANEL4"));
	RadioButton6 = new wxRadioButton(Panel4, ID_RADIOBUTTON6, _("Rêcznie"), wxPoint(16,16), wxDefaultSize, wxRB_GROUP, wxDefaultValidator, _T("ID_RADIOBUTTON6"));
	RadioButton7 = new wxRadioButton(Panel4, ID_RADIOBUTTON7, _("Do najbli¿szego"), wxPoint(16,40), wxDefaultSize, 0, wxDefaultValidator, _T("ID_RADIOBUTTON7"));
	RadioButton8 = new wxRadioButton(Panel4, ID_RADIOBUTTON8, _("Œrednia"), wxPoint(16,64), wxDefaultSize, 0, wxDefaultValidator, _T("ID_RADIOBUTTON8"));
	RadioButton9 = new wxRadioButton(Panel4, ID_RADIOBUTTON9, _("P³aszczyzna"), wxPoint(16,88), wxDefaultSize, 0, wxDefaultValidator, _T("ID_RADIOBUTTON9"));
	RadioButton10 = new wxRadioButton(Panel4, ID_RADIOBUTTON10, _("Funkcja wielomianowa"), wxPoint(16,112), wxDefaultSize, 0, wxDefaultValidator, _T("ID_RADIOBUTTON10"));
	StaticText16 = new wxStaticText(Panel4, ID_STATICTEXT16, _("Bufor selekcji [m]"), wxPoint(200,16), wxDefaultSize, 0, _T("ID_STATICTEXT16"));
	TextCtrl18 = new wxTextCtrl(Panel4, ID_TEXTCTRL18, _("10"), wxPoint(200,40), wxDefaultSize, 0, wxDefaultValidator, _T("ID_TEXTCTRL18"));
	Button7 = new wxButton(Panel4, ID_BUTTON7, _("Wyznacz"), wxPoint(32,184), wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON7"));
	TextCtrl19 = new wxTextCtrl(Panel4, ID_TEXTCTRL19, _("0"), wxPoint(96,16), wxSize(44,22), 0, wxDefaultValidator, _T("ID_TEXTCTRL19"));
	TextCtrl9 = new wxTextCtrl(Panel4, ID_TEXTCTRL9, _("-1"), wxPoint(200,112), wxDefaultSize, 0, wxDefaultValidator, _T("ID_TEXTCTRL9"));
	StaticText9 = new wxStaticText(Panel4, ID_STATICTEXT9, _("Œrednie H [m]"), wxPoint(208,88), wxDefaultSize, 0, _T("ID_STATICTEXT9"));
	CheckBox10 = new wxCheckBox(Panel4, ID_CHECKBOX10, _("Wyznacz globalnie"), wxPoint(16,160), wxDefaultSize, wxALIGN_RIGHT, wxDefaultValidator, _T("ID_CHECKBOX10"));
	CheckBox10->SetValue(false);
	Panel5 = new wxPanel(Notebook2, ID_PANEL5, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL, _T("ID_PANEL5"));
	TextCtrl10 = new wxTextCtrl(Panel5, ID_TEXTCTRL10, _("-1"), wxPoint(128,32), wxDefaultSize, 0, wxDefaultValidator, _T("ID_TEXTCTRL10"));
	TextCtrl11 = new wxTextCtrl(Panel5, ID_TEXTCTRL11, _("-1"), wxPoint(248,32), wxDefaultSize, 0, wxDefaultValidator, _T("ID_TEXTCTRL11"));
	StaticText10 = new wxStaticText(Panel5, ID_STATICTEXT10, _("Pocz¹tek [data]"), wxPoint(128,8), wxDefaultSize, 0, _T("ID_STATICTEXT10"));
	StaticText11 = new wxStaticText(Panel5, ID_STATICTEXT11, _("Koniec [data]"), wxPoint(256,8), wxDefaultSize, 0, _T("ID_STATICTEXT11"));
	StaticText12 = new wxStaticText(Panel5, ID_STATICTEXT12, _("Pocz¹tek [linia]"), wxPoint(128,64), wxDefaultSize, 0, _T("ID_STATICTEXT12"));
	TextCtrl12 = new wxTextCtrl(Panel5, ID_TEXTCTRL12, _("-1"), wxPoint(128,88), wxSize(42,24), 0, wxDefaultValidator, _T("ID_TEXTCTRL12"));
	TextCtrl13 = new wxTextCtrl(Panel5, ID_TEXTCTRL13, _("-1"), wxPoint(184,88), wxSize(42,24), 0, wxDefaultValidator, _T("ID_TEXTCTRL13"));
	StaticText13 = new wxStaticText(Panel5, ID_STATICTEXT13, _("Koniec [linia]"), wxPoint(256,64), wxDefaultSize, 0, _T("ID_STATICTEXT13"));
	TextCtrl14 = new wxTextCtrl(Panel5, ID_TEXTCTRL14, _("-1"), wxPoint(248,88), wxSize(42,24), 0, wxDefaultValidator, _T("ID_TEXTCTRL14"));
	TextCtrl15 = new wxTextCtrl(Panel5, ID_TEXTCTRL15, _("-1"), wxPoint(304,88), wxSize(42,24), 0, wxDefaultValidator, _T("ID_TEXTCTRL15"));
	CheckBox1 = new wxCheckBox(Panel5, ID_CHECKBOX1, _("Czy eksploatowana"), wxPoint(128,200), wxDefaultSize, wxALIGN_RIGHT, wxDefaultValidator, _T("ID_CHECKBOX1"));
	CheckBox1->SetValue(true);
	StaticText14 = new wxStaticText(Panel5, ID_STATICTEXT14, _("a"), wxPoint(24,8), wxSize(32,16), 0, _T("ID_STATICTEXT14"));
	StaticText15 = new wxStaticText(Panel5, ID_STATICTEXT15, _("Beta"), wxPoint(72,8), wxDefaultSize, 0, _T("ID_STATICTEXT15"));
	TextCtrl16 = new wxTextCtrl(Panel5, ID_TEXTCTRL16, _("-1"), wxPoint(8,32), wxSize(42,24), 0, wxDefaultValidator, _T("ID_TEXTCTRL16"));
	TextCtrl17 = new wxTextCtrl(Panel5, ID_TEXTCTRL17, _("-1"), wxPoint(64,32), wxSize(42,24), 0, wxDefaultValidator, _T("ID_TEXTCTRL17"));
	CheckBox2 = new wxCheckBox(Panel5, ID_CHECKBOX2, wxEmptyString, wxPoint(16,64), wxDefaultSize, 0, wxDefaultValidator, _T("ID_CHECKBOX2"));
	CheckBox2->SetValue(true);
	CheckBox3 = new wxCheckBox(Panel5, ID_CHECKBOX3, wxEmptyString, wxPoint(72,64), wxDefaultSize, 0, wxDefaultValidator, _T("ID_CHECKBOX3"));
	CheckBox3->SetValue(false);
	StaticText17 = new wxStaticText(Panel5, ID_STATICTEXT17, _("Prom RS"), wxPoint(8,96), wxDefaultSize, 0, _T("ID_STATICTEXT17"));
	StaticText18 = new wxStaticText(Panel5, ID_STATICTEXT18, _("ksi"), wxPoint(80,96), wxDefaultSize, 0, _T("ID_STATICTEXT18"));
	TextCtrl20 = new wxTextCtrl(Panel5, ID_TEXTCTRL20, _("-1"), wxPoint(8,120), wxSize(42,24), 0, wxDefaultValidator, _T("ID_TEXTCTRL20"));
	TextCtrl21 = new wxTextCtrl(Panel5, ID_TEXTCTRL21, _("-1"), wxPoint(64,120), wxSize(42,24), 0, wxDefaultValidator, _T("ID_TEXTCTRL21"));
	Button8 = new wxButton(Panel5, ID_BUTTON8, _("Zapisz zmiany"), wxPoint(8,176), wxSize(100,28), 0, wxDefaultValidator, _T("ID_BUTTON8"));
	StaticLine1 = new wxStaticLine(Panel5, ID_STATICLINE1, wxPoint(120,8), wxSize(2,390), wxLI_HORIZONTAL, _T("ID_STATICLINE1"));
	CheckBox4 = new wxCheckBox(Panel5, ID_CHECKBOX4, wxEmptyString, wxPoint(16,152), wxDefaultSize, 0, wxDefaultValidator, _T("ID_CHECKBOX4"));
	CheckBox4->SetValue(false);
	CheckBox5 = new wxCheckBox(Panel5, ID_CHECKBOX5, wxEmptyString, wxPoint(72,152), wxDefaultSize, 0, wxDefaultValidator, _T("ID_CHECKBOX5"));
	CheckBox5->SetValue(false);
	Button9 = new wxButton(Panel5, ID_BUTTON9, _("Wyznacz"), wxPoint(136,280), wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON9"));
	Button10 = new wxButton(Panel5, ID_BUTTON10, _("Zapisz"), wxPoint(248,280), wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON10"));
	RadioButton11 = new wxRadioButton(Panel5, ID_RADIOBUTTON11, _("Pe³ne kwarta³y"), wxPoint(136,120), wxDefaultSize, wxRB_GROUP, wxDefaultValidator, _T("ID_RADIOBUTTON11"));
	RadioButton11->SetValue(true);
	RadioButton12 = new wxRadioButton(Panel5, ID_RADIOBUTTON12, _("Dok³adna data"), wxPoint(136,144), wxDefaultSize, 0, wxDefaultValidator, _T("ID_RADIOBUTTON12"));
	CheckBox6 = new wxCheckBox(Panel5, ID_CHECKBOX6, _("Pocz¹tek"), wxPoint(272,144), wxDefaultSize, 0, wxDefaultValidator, _T("ID_CHECKBOX6"));
	CheckBox6->SetValue(true);
	CheckBox6->Disable();
	CheckBox7 = new wxCheckBox(Panel5, ID_CHECKBOX7, _("Koniec"), wxPoint(272,168), wxDefaultSize, 0, wxDefaultValidator, _T("ID_CHECKBOX7"));
	CheckBox7->SetValue(true);
	CheckBox7->Disable();
	CheckBox8 = new wxCheckBox(Panel5, ID_CHECKBOX8, _("Wyznacz globalnie"), wxPoint(128,256), wxDefaultSize, wxALIGN_RIGHT, wxDefaultValidator, _T("ID_CHECKBOX8"));
	CheckBox8->SetValue(false);
	Notebook2->AddPage(Panel3, _("Wysokoœci furt"), false);
	Notebook2->AddPage(Panel4, _("Rzêdne wysokoœciowe"), false);
	Notebook2->AddPage(Panel5, _("Wydobycie"), false);
	StaticText7 = new wxStaticText(this, ID_STATICTEXT7, _("Numer zadania"), wxPoint(24,200), wxDefaultSize, 0, _T("ID_STATICTEXT7"));
	TextCtrl8 = new wxTextCtrl(this, ID_TEXTCTRL8, _("0"), wxPoint(16,224), wxDefaultSize, 0, wxDefaultValidator, _T("ID_TEXTCTRL8"));
	TextCtrl8->Disable();
	StaticText8 = new wxStaticText(this, ID_STATICTEXT8, _("Komentarz"), wxPoint(152,200), wxDefaultSize, 0, _T("ID_STATICTEXT8"));
	Button2 = new wxButton(this, ID_BUTTON2, _("Dodaj"), wxPoint(136,224), wxSize(100,27), 0, wxDefaultValidator, _T("ID_BUTTON2"));
	Button2->Disable();
	Button3 = new wxButton(this, ID_BUTTON3, _("Zapisz zmiany"), wxPoint(256,224), wxSize(100,27), 0, wxDefaultValidator, _T("ID_BUTTON3"));
	ToolBar1 = new wxToolBar(this, ID_TOOLBAR1, wxDefaultPosition, wxDefaultSize, wxTB_HORIZONTAL|wxNO_BORDER, _T("ID_TOOLBAR1"));
	ToolBarItem5 = ToolBar1->AddTool(ID_TOOLBARITEM5, _("Furty"), wxBitmap(wxImage(_T("C:\\Users\\Lenovo\\Desktop\\Konwerter\\Program\\Ikony\\furty.ico"))), wxNullBitmap, wxITEM_CHECK, wxEmptyString, wxEmptyString);
	ToolBarItem6 = ToolBar1->AddTool(ID_TOOLBARITEM6, _("Rzedne"), wxBitmap(wxImage(_T("C:\\Users\\Lenovo\\Desktop\\Konwerter\\Program\\Ikony\\rzedne.ico"))), wxNullBitmap, wxITEM_CHECK, wxEmptyString, wxEmptyString);
	ToolBarItem4 = ToolBar1->AddTool(ID_TOOLBARITEM4, _("Okresy"), wxBitmap(wxImage(_T("C:\\Users\\Lenovo\\Desktop\\Konwerter\\Program\\Ikony\\okresy daty.ico"))), wxNullBitmap, wxITEM_CHECK, _("Okresy wydobywcze"), wxEmptyString);
	ToolBar1->AddSeparator();
	ToolBarItem1 = ToolBar1->AddTool(ID_TOOLBARITEM1, _("Poprzednia"), wxArtProvider::GetBitmap(wxART_MAKE_ART_ID_FROM_STR(_T("wxART_GO_BACK")),wxART_TOOLBAR), wxNullBitmap, wxITEM_NORMAL, wxEmptyString, wxEmptyString);
	ToolBarItem2 = ToolBar1->AddTool(ID_TOOLBARITEM2, _("Nastêpna"), wxArtProvider::GetBitmap(wxART_MAKE_ART_ID_FROM_STR(_T("wxART_GO_FORWARD")),wxART_TOOLBAR), wxNullBitmap, wxITEM_NORMAL, wxEmptyString, wxEmptyString);
	ToolBar1->AddSeparator();
	ToolBarItem3 = ToolBar1->AddTool(ID_TOOLBARITEM3, _("Zoom"), wxArtProvider::GetBitmap(wxART_MAKE_ART_ID_FROM_STR(_T("wxART_FIND")),wxART_TOOLBAR), wxNullBitmap, wxITEM_NORMAL, _("Zoom ca³oœæ"), wxEmptyString);
	ToolBar1->Realize();
	SetToolBar(ToolBar1);
	TextEntryDialog1 = new wxTextEntryDialog(this, _("WprowadŸ nazwê zbioru parcel"), _("WprowadŸ nazwê"), wxEmptyString, wxOK|wxCANCEL|wxCENTRE|wxWS_EX_VALIDATE_RECURSIVELY, wxDefaultPosition);

	Panel1->Connect(wxEVT_RIGHT_DOWN,(wxObjectEventFunction)&dane::OnPanel1RightDown,0,this);
	Panel1->Connect(wxEVT_RIGHT_UP,(wxObjectEventFunction)&dane::OnPanel1RightUp,0,this);
	Panel1->Connect(wxEVT_MOTION,(wxObjectEventFunction)&dane::OnPanel1MouseMove,0,this);
	Panel1->Connect(wxEVT_MOUSEWHEEL,(wxObjectEventFunction)&dane::OnPanel1MouseWheel,0,this);
	Connect(ID_BUTTON4,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&dane::OnButton4Click);
	Connect(ID_BUTTON5,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&dane::OnButton5Click);
	Connect(ID_BUTTON6,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&dane::OnButton6Click);
	Connect(ID_LISTBOX1,wxEVT_COMMAND_LISTBOX_SELECTED,(wxObjectEventFunction)&dane::OnListBox1Select);
	Connect(ID_BITMAPBUTTON1,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&dane::OnBitmapButton1Click);
	Connect(ID_BITMAPBUTTON2,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&dane::OnBitmapButton2Click);
	Connect(ID_BITMAPBUTTON3,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&dane::OnBitmapButton3Click);
	Connect(ID_BITMAPBUTTON6,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&dane::OnBitmapButton6Click);
	Connect(ID_BUTTON11,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&dane::OnButton11Click);
	Connect(ID_BUTTON1,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&dane::OnButton1Click);
	Connect(ID_BUTTON7,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&dane::OnButton7Click);
	Connect(ID_BUTTON8,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&dane::OnButton8Click);
	Connect(ID_BUTTON9,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&dane::OnButton9Click);
	Connect(ID_BUTTON10,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&dane::OnButton10Click);
	Connect(ID_RADIOBUTTON11,wxEVT_COMMAND_RADIOBUTTON_SELECTED,(wxObjectEventFunction)&dane::OnRadioButton11Select);
	Connect(ID_RADIOBUTTON12,wxEVT_COMMAND_RADIOBUTTON_SELECTED,(wxObjectEventFunction)&dane::OnRadioButton12Select);
	Connect(ID_BUTTON3,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&dane::OnButton3Click);
	Connect(ID_TOOLBARITEM5,wxEVT_COMMAND_TOOL_CLICKED,(wxObjectEventFunction)&dane::OnToolBarItem5Clicked);
	Connect(ID_TOOLBARITEM6,wxEVT_COMMAND_TOOL_CLICKED,(wxObjectEventFunction)&dane::OnToolBarItem6Clicked);
	Connect(ID_TOOLBARITEM4,wxEVT_COMMAND_TOOL_CLICKED,(wxObjectEventFunction)&dane::OnToolBarItem4Clicked);
	Connect(ID_TOOLBARITEM1,wxEVT_COMMAND_TOOL_CLICKED,(wxObjectEventFunction)&dane::OnToolBarItem1Clicked);
	Connect(ID_TOOLBARITEM2,wxEVT_COMMAND_TOOL_CLICKED,(wxObjectEventFunction)&dane::OnToolBarItem2Clicked);
	Connect(ID_TOOLBARITEM3,wxEVT_COMMAND_TOOL_CLICKED,(wxObjectEventFunction)&dane::OnToolBarItem3Clicked);
	//*)


	wstep();
    funkcja();
    wpisanie(parceletab[ktorapar]);
    wybranie();
    wybbezster(0);
}

void dane::wstep()
{//funkcja wykonuj¹ca czynnoœci podstawowe

	war=false; //przypisanie parametrów rysowania
	prd=false;
	ppx=ppy=0;
	skalaglob=1000000;

	ktorapar=0; //wynranie "zerowej" parceli

	//nazwy.clear(); //czyszczenie i okreœlenie wymiarów wektorów
    parceletab.clear();
    opisstr.clear();

    vector<string> opis;

	linie.resize(1);
    for(unsigned int i=0; i<linie.size(); i++)
    linie[i].resize(8);
    linie.pop_back();

	opisstr.resize(1);
    for(unsigned int i=0; i<opisstr.size(); i++)
    opisstr[i].resize(32);
    opisstr.pop_back();

    vector<int> linia;
    linia.resize(8);
    opis.resize(32);

	proj.open("konfig/k.konf", ios::in); //pozyskanie œcie¿ki do projektu
        getline(proj, projekt);
    proj.close();

    plik.open(""+projekt+"/p.par", ios::in);  //otwarcie pliku i wczytanie parcel

    int ile, ilep; //deklaracje zmiennych
    wxString napis;
    double liczba2;
	string napis2;

    plik>>ile; //wczytanie iloœci parcel

    for (int i=0;i<ile;i++) //pêtla wczytuj¹ca parcele
    {
        plik>>opis[0];
        plik>>opis[1];
        plik>>opis[2];
        plik>>opis[3];
        plik>>opis[4];
        plik>>opis[5];
        plik>>opis[6];
        plik>>opis[7];
        plik>>opis[8];
        plik>>opis[9];
        plik>>opis[10];
        plik>>opis[11];
        plik>>opis[12];
        plik>>opis[13];
        plik>>opis[14];
        plik>>opis[15];
        plik>>opis[16];
        plik>>opis[17];
        plik>>opis[18];
        plik>>opis[19];
        plik>>opis[20];
        plik>>opis[21];
        plik>>opis[22];
        plik>>opis[23];
        plik>>opis[24];
        plik>>opis[25];
        plik>>opis[26];
        plik>>opis[27];
        plik>>opis[28];
        plik>>opis[29];
        plik>>opis[30];
        plik>>opis[31];

            opisstr.push_back(opis);

        plik>>ilep; //wczytanie iloœci wierzcho³ków

        linie.clear();
        for (int j=0;j<ilep;j++)
        {
            plik>>linia[0];
            plik>>linia[1];
            plik>>linia[4];
            plik>>linia[5];
            plik>>linia[6];
            plik>>linia[2];
            plik>>linia[3];
            linie.push_back(linia);
        }
        parceletab.push_back(linie);
    }

    plik.close(); //zamkniêcie pliku

//-----WCZYTANIE LINII POSTÊPU ŒCIANOWEGO----------------------------------------
    liniepost.resize(1); //okreslenie wymiarów tabeli ze wspó³rzêdnymi linii
    for(unsigned int i=0; i<liniepost.size(); i++)
    liniepost[i].resize(7);
    liniepost.pop_back();

plik.open(""+projekt+"/l.okr", ios::in);  //otwarcie pliku i wczytanie danych

    while (!plik.eof())
    {
    plik>>linia[0];
    if (!plik.fail())
        {
        plik>>linia[1];
        plik>>linia[2];
        plik>>linia[3];

        liniepost.push_back(linia);
        }
    }
plik.close();

//--------POSTÊP ŒCIANOWY DATY------------
    postwsp.resize(1); //okreslenie wymiarów tabeli ze wspó³rzêdnymi linii
    for(unsigned int i=0; i<postwsp.size(); i++)
    postwsp[i].resize(7);
    postwsp.pop_back();
    post.clear();

plik.open(""+projekt+"/o.okr", ios::in);  //otwarcie pliku i wczytanie danych

    while (!plik.eof())
    {
    plik>>linia[0];
    if (!plik.fail())
        {
        plik>>linia[1];
        plik>>napis2;

        postwsp.push_back(linia);
        post.push_back(napis2);
        }
    }
plik.close();


//---------FURTY--------------------------------------------------
    furtywsp.resize(1); //okreslenie wymiarów tabeli ze wspó³rzêdnymi linii
    for(unsigned int i=0; i<furtywsp.size(); i++)
    furtywsp[i].resize(7);
    furtywsp.pop_back();
    furty.clear();

plik.open(""+projekt+"/w.wfr", ios::in);  //otwarcie pliku i wczytanie danych

    while (!plik.eof())
    {
    plik>>linia[0];
    if (!plik.fail())
        {
        plik>>linia[1];
        plik>>liczba2;
        linia[2]=liczba2;

        liczba2=liczba2/100;
        napis.Printf(wxT("%.2f"),liczba2);
        napis2=napis;

        furtywsp.push_back(linia);
        furty.push_back(napis2);
        }
    }
plik.close();

//--------------WCZYTANIE RZÊDNYCH WYSOKOŒCIOWYCH-------------------
    rzednewsp.resize(1); //okreslenie wymiarów tabeli ze wspó³rzêdnymi linii
    for(unsigned int i=0; i<rzednewsp.size(); i++)
    rzednewsp[i].resize(7);
    rzednewsp.pop_back();
    rzedne.clear();

plik.open(""+projekt+"/k.kot", ios::in);  //otwarcie pliku i wczytanie danych

    while (!plik.eof())
    {
    plik>>linia[0];
    if (!plik.fail())
        {
        plik>>linia[1];
        plik>>liczba2;
        linia[2]=liczba2;

        liczba2=liczba2/100;
        napis.Printf(wxT("%.2f"),liczba2);
        napis2=napis;

        rzednewsp.push_back(linia);
        rzedne.push_back(napis2);
        }
    }
plik.close();

//---ZBIORY STERUJ¥CE--------------------------------------------------

    ster.resize(6);
   // ster.clear();

    stery.resize(1); //okreslenie wymiarów tabeli ze wspó³rzêdnymi linii
    for(unsigned int i=0; i<stery.size(); i++)
    stery[i].resize(6);
    stery.pop_back();


plik.open(""+projekt+"/s.str", ios::in);  //otwarcie pliku i wczytanie parcel

while (!plik.eof())
    {
    plik>>ster[0];
    if (!plik.fail())
    {
     plik>>ster[1];
     plik>>ster[2];
     plik>>ster[3];
     plik>>ster[4];
     plik>>ster[5];
     stery.push_back(ster);
    }
    }

plik.close();

//---NAZWY PARCEL----------------------------------------------
nazwy.clear();
for (unsigned int i=0;i<opisstr.size();i++)
{
    nazwy.push_back(opisstr[i][2]);

    if (opisstr[i][1]=="0")
    {
        nazwyn.push_back(opisstr[i][2]);
    }
}


ListBox1->Clear();

for (unsigned int i=0;i<stery.size();i++)
    {
        ListBox1->Append(stery[i][1]);
    }

rysowanie(parceletab[ktorapar]);

}

void dane::wybbezster(int ktster)
{
    wxString napis, napis2;
    double zmienna;

    napis2="0";

    zmienna=ktster;
    napis.Printf(wxT("%.0f"),zmienna);

    wybrane.clear();
    niewybrane.clear();

    for (unsigned int i=0;i<opisstr.size();i++)
    {
      if (opisstr[i][1]==napis2)
        {
        niewybrane.push_back(i);
        }
        else
        {
        if (opisstr[i][1]==napis)
        {
        wybrane.push_back(i);
        }
        }
    }
}

void dane::wpisanie(vector<vector<int> >& parcela)
{//wpisanie wartoœci do tabeli
    int wiersze=0; //deklaracje zmiennych
    wxString napis;
    wxDouble zmienna;

    Grid1->ClearGrid(); //wyczyszczenie tabeli
    if (Grid1->GetNumberRows()!=0)
    Grid1->DeleteRows(0, Grid1->GetNumberRows(),true);

    for (unsigned int i=0; i<parcela.size(); i++) //pêtla wpisuj¹ca kolejne wiersze
    {
         Grid1->InsertRows(wiersze,1,true);

                zmienna=parcela[i][0];
                zmienna=zmienna/1000;
                napis.Printf(wxT("%.3f"),zmienna);
                Grid1->SetCellValue(wiersze,0,napis);

                zmienna=parcela[i][1];
                zmienna=zmienna/1000;
                napis.Printf(wxT("%.3f"),zmienna);
                Grid1->SetCellValue(wiersze,1,napis);

                zmienna=parcela[i][4];
                zmienna=zmienna/100;
                napis.Printf(wxT("%.3f"),zmienna);
                Grid1->SetCellValue(wiersze,2,napis);

                zmienna=parcela[i][5];
                zmienna=zmienna/100;
                napis.Printf(wxT("%.2f"),zmienna);
                Grid1->SetCellValue(wiersze,3,napis);

                zmienna=parcela[i][6];
                zmienna=zmienna/1000;
                napis.Printf(wxT("%.3f"),zmienna);
                Grid1->SetCellValue(wiersze,4,napis);

                wiersze++;
    }
}

void dane::wszyst()
{//funkcja wybieraj¹ca wszystkie linie
    wszystkie.clear();

    for (unsigned int i=0; i<parceletab.size();i++)
    {
        for (unsigned int j=0; j<parceletab[i].size();j++)
        {
            wszystkie.push_back(parceletab[i][j]);
        }
    }

}

void dane::wybranie()
{//funkcja wybieraj¹ca rzêdne oraz wysokoœci furt dla danej parceli
//---WYBRANIE WYSOKOŒCI FURT-----------------------------------------------------------------
    int xp, yp, xk, yk, ktorei,  xprz, yprz, war; //deklaracje zmiennych
    int odl;
    int stometrow=10000000;

    vector<int> linia, linia2; //deklaracje i wymiarowanie wektorów
    linia.resize(4);
    linia.clear();
    linia2.resize(4);
    linia2.clear();

    for (unsigned int j=0;j<furtywsp.size();j++)
    {
    war=0;

    xp=furtywsp[j][0]; //okreslenie odcinka do przeciecia
    yp=furtywsp[j][1];
    xk=furtywsp[j][0]-stometrow;
    yk=furtywsp[j][1];

    linia[0]=xp; //linia, zeby przekazac do funkcji
    linia[1]=yp;
    linia[2]=xk;
    linia[3]=yk;
    int licz=0;

    for (unsigned int i=0;i<parceletab[ktorapar].size();i++) //funkcia liczaca przeciecia
    {   //sprawdzenie czy siê przecinaj¹
         if (przecinanie(xp,yp,xk,yk,parceletab[ktorapar][i][0],parceletab[ktorapar][i][1],parceletab[ktorapar][i][2],parceletab[ktorapar][i][3]))
         {  licz++;
             war=1;

             linia2[0]=parceletab[ktorapar][i][0];
             linia2[1]=parceletab[ktorapar][i][1];
             linia2[2]=parceletab[ktorapar][i][2];
             linia2[3]=parceletab[ktorapar][i][3];

             przeciecie(linia,linia2,xprz,yprz);
             if (licz==1)
             {
                 odl=odleglosc(xprz,yprz,xp,yp);
                 ktorei=i;
             }else
             {
                 if (odl>odleglosc(xprz,yprz,xp,yp))
                 {
                     odl=odleglosc(xprz,yprz,xp,yp);
                     ktorei=i;
                 }
             }
         }
    }
    //sprawdzenie czy siê przeciê³o oraz czy azymut jest odpowiedni
    if (war==1 && azymut(parceletab[ktorapar][ktorei][0], parceletab[ktorapar][ktorei][1], parceletab[ktorapar][ktorei][2], parceletab[ktorapar][ktorei][3])<2000000)
    {
       furtywsp[j][3]=1;
    }
    else
        furtywsp[j][3]=0;
    }

    furtywyb.clear(); //dodanie do odpowiedniej tablicy wybranych furt
    for (unsigned int i=0;i<furtywsp.size();i++)
    {
        if (furtywsp[i][3]==1)
            furtywyb.push_back(furtywsp[i]);
    }
//---WYBRANIE RZÊDNYCH WYSOKOŒCIOWYCH-----------------------------------------------------------
//---WYBRANIE ZNAJDUJ¥CYCH SIÊ W ŒRODKU---------------------------------------------------------
    for (unsigned int j=0; j<rzednewsp.size(); j++)
    {
    war=0;

    xp=rzednewsp[j][0]; //okreslenie odcinka do przeciecia
    yp=rzednewsp[j][1];
    xk=rzednewsp[j][0]-stometrow;
    yk=rzednewsp[j][1];

    linia[0]=xp; //linia, zeby przekazac do funkcji
    linia[1]=yp;
    linia[2]=xk;
    linia[3]=yk;
    int licz=0;

    for (unsigned int i=0;i<parceletab[ktorapar].size();i++) //funkcia liczaca przeciecia
    {
         if (przecinanie(xp,yp,xk,yk,parceletab[ktorapar][i][0],parceletab[ktorapar][i][1],parceletab[ktorapar][i][2],parceletab[ktorapar][i][3]))
         {  licz++;
             war=1;

             linia2[0]=parceletab[ktorapar][i][0];
             linia2[1]=parceletab[ktorapar][i][1];
             linia2[2]=parceletab[ktorapar][i][2];
             linia2[3]=parceletab[ktorapar][i][3];

             przeciecie(linia,linia2,xprz,yprz);
             if (licz==1)
             {
                 odl=odleglosc(xprz,yprz,xp,yp);
                 ktorei=i;
             }else
             {
                 if (odl>odleglosc(xprz,yprz,xp,yp))
                 {
                     odl=odleglosc(xprz,yprz,xp,yp);
                     ktorei=i;
                 }
             }
         }
    }

    if (war==1 && azymut(parceletab[ktorapar][ktorei][0], parceletab[ktorapar][ktorei][1], parceletab[ktorapar][ktorei][2], parceletab[ktorapar][ktorei][3])<2000000)
    {
        rzednewsp[j][3]=1;
    }
    else
        rzednewsp[j][3]=0;
    }
//---WYBRANIE ZNAJDUJACYCH SIÊ W BUFORZE----------------------------------------------------------
     double A, B, C, odl2, odl3, odld, odld2, odl4; //deklaracje zmiennych

    TextCtrl18->GetValue().ToDouble(&odld); //pozyskanie wybranego buforu
    odld=odld*1000;

    for (unsigned int j=0;j<rzednewsp.size();j++)
    {
        for (unsigned int i=0;i<parceletab[ktorapar].size();i++)
        {   //okreœlenie parametrów funkcji prostej oraz odleg³oœci punktu od prostej
            parametry(parceletab[ktorapar][i][0], parceletab[ktorapar][i][1], parceletab[ktorapar][i][2], parceletab[ktorapar][i][3], A, B, C);
            odl=odlodpros(rzednewsp[j][0], rzednewsp[j][1], A, C);
            //sprawdzenie czy punkt znajduje siê przy linii
            odl2=odleglosc(parceletab[ktorapar][i][0], parceletab[ktorapar][i][1], rzednewsp[j][0], rzednewsp[j][1]);
            odl3=odleglosc(parceletab[ktorapar][i][2], parceletab[ktorapar][i][3], rzednewsp[j][0], rzednewsp[j][1]);
            odl4=odl2+odl3;

            odld2=(2*odld)+odleglosc(parceletab[ktorapar][i][0], parceletab[ktorapar][i][1], parceletab[ktorapar][i][2], parceletab[ktorapar][i][3]);

            if (odl<0)
            {
                odl=odl*(-1);
            }

            if (odl<odld && odl4<odld2)
            {
               rzednewsp[j][3]=1;
            }
        }
    }

    rzednewyb.clear();//dodanie do odpowiedniej tablicy wybranych rzêdnych
    for (unsigned int i=0;i<rzednewsp.size();i++)
    {
        if (rzednewsp[i][3]==1)
            rzednewyb.push_back(rzednewsp[i]);
    }

//---WYBRANIE LINII OKRESÓW-------------------------------------------------------

//---WYBRANIE ZNAJDUJ¥CYCH SIÊ WEWN¥TRZ

int sx, sy;

    for (unsigned int j=0; j<liniepost.size(); j++)
    {
    war=0;
    sx=(liniepost[j][0]+liniepost[j][2])/2;
    sy=(liniepost[j][1]+liniepost[j][3])/2;

    xp=sx; //okreslenie odcinka do przeciecia
    yp=sy;
    xk=sx-stometrow;
    yk=sy;

    linia[0]=xp; //linia, zeby przekazac do funkcji
    linia[1]=yp;
    linia[2]=xk;
    linia[3]=yk;
    int licz=0;

    for (unsigned int i=0;i<parceletab[ktorapar].size();i++) //funkcia liczaca przeciecia
    {
         if (przecinanie(xp,yp,xk,yk,parceletab[ktorapar][i][0],parceletab[ktorapar][i][1],parceletab[ktorapar][i][2],parceletab[ktorapar][i][3]))
         {  licz++;
             war=1;

             linia2[0]=parceletab[ktorapar][i][0];
             linia2[1]=parceletab[ktorapar][i][1];
             linia2[2]=parceletab[ktorapar][i][2];
             linia2[3]=parceletab[ktorapar][i][3];

             przeciecie(linia,linia2,xprz,yprz);
             if (licz==1)
             {
                 odl=odleglosc(xprz,yprz,xp,yp);
                 ktorei=i;
             }else
             {
                 if (odl>odleglosc(xprz,yprz,xp,yp))
                 {
                     odl=odleglosc(xprz,yprz,xp,yp);
                     ktorei=i;
                 }
             }
         }
    }

    if (war==1 && azymut(parceletab[ktorapar][ktorei][0], parceletab[ktorapar][ktorei][1], parceletab[ktorapar][ktorei][2], parceletab[ktorapar][ktorei][3])<2000000)
    {
        liniepost[j][4]=1;
    }
    else
        liniepost[j][4]=0;
    }

    liniepostwyb.clear(); //dodanie do odpowiedniej tablicy wybranych linii
    for (unsigned int i=0;i<liniepost.size();i++)
    {
        if (liniepost[i][4]==1)
        {
            liniepostwyb.push_back(liniepost[i]);

        }
    }


//---WYBRANIE DAT OKRESÓW-----------------------------------------------------------

    for (unsigned int j=0; j<postwsp.size(); j++)
    {
    war=0;

    xp=postwsp[j][0]; //okreslenie odcinka do przeciecia
    yp=postwsp[j][1];
    xk=postwsp[j][0]-stometrow;
    yk=postwsp[j][1];

    linia[0]=xp; //linia, zeby przekazac do funkcji
    linia[1]=yp;
    linia[2]=xk;
    linia[3]=yk;
    int licz=0;

    for (unsigned int i=0;i<parceletab[ktorapar].size();i++) //funkcia liczaca przeciecia
    {
         if (przecinanie(xp,yp,xk,yk,parceletab[ktorapar][i][0],parceletab[ktorapar][i][1],parceletab[ktorapar][i][2],parceletab[ktorapar][i][3]))
         {  licz++;
             war=1;

             linia2[0]=parceletab[ktorapar][i][0];
             linia2[1]=parceletab[ktorapar][i][1];
             linia2[2]=parceletab[ktorapar][i][2];
             linia2[3]=parceletab[ktorapar][i][3];

             przeciecie(linia,linia2,xprz,yprz);
             if (licz==1)
             {
                 odl=odleglosc(xprz,yprz,xp,yp);
                 ktorei=i;
             }else
             {
                 if (odl>odleglosc(xprz,yprz,xp,yp))
                 {
                     odl=odleglosc(xprz,yprz,xp,yp);
                     ktorei=i;
                 }
             }
         }
    }

    if (war==1 && azymut(parceletab[ktorapar][ktorei][0], parceletab[ktorapar][ktorei][1], parceletab[ktorapar][ktorei][2], parceletab[ktorapar][ktorei][3])<2000000)
    {
        postwsp[j][3]=1;
    }
    else
        postwsp[j][3]=0;
    }

    postwspwyb.clear();
    postwyb.clear();
    for (unsigned int i=0;i<postwsp.size();i++) //dodanie do odpowiedniej tablicy wybranych dat
    {
        if (postwsp[i][3]==1)
        {
            postwspwyb.push_back(postwsp[i]);
            postwyb.push_back(post[i]);
        }
    }
}

void dane::funkcja()
{//uzupe³nienie okienek z podstawowymi informacjami
    TextCtrl1->Clear();TextCtrl2->Clear();TextCtrl3->Clear();TextCtrl4->Clear();TextCtrl5->Clear();TextCtrl6->Clear();TextCtrl8->Clear();
    TextCtrl16->Clear();TextCtrl17->Clear();TextCtrl20->Clear();TextCtrl21->Clear();TextCtrl10->Clear();TextCtrl11->Clear();TextCtrl11->Clear();TextCtrl12->Clear();
    TextCtrl13->Clear();TextCtrl14->Clear();TextCtrl15->Clear();

    wxDouble liczba;
    wxString napisstr;

    liczba=ktorapar+1;
    napisstr.Printf(wxT("%.0f"),liczba); //która parcela
    TextCtrl1->AppendText(napisstr);
    TextCtrl1->AppendText("z");

    liczba=parceletab.size();
    napisstr.Printf(wxT("%.0f"),liczba);
    TextCtrl1->AppendText(napisstr);

    TextCtrl2->AppendText(opisstr[ktorapar][0]);   //numer parceli
    TextCtrl3->AppendText(opisstr[ktorapar][2]); //nazwa
    TextCtrl4->AppendText(opisstr[ktorapar][16]); //iloœæ wierzcho³ków
    TextCtrl8->AppendText(opisstr[ktorapar][1]); //numer zadania
    TextCtrl10->AppendText(opisstr[ktorapar][7]);//data pocz¹tku U
    TextCtrl11->AppendText(opisstr[ktorapar][9]);//data koñca U
    TextCtrl12->AppendText(opisstr[ktorapar][21]); //front start1 U
    TextCtrl13->AppendText(opisstr[ktorapar][22]);//front start2 U
    TextCtrl14->AppendText(opisstr[ktorapar][23]);//front koniec1 U
    TextCtrl15->AppendText(opisstr[ktorapar][24]);//front koniec2 U

    TextCtrl16->AppendText(opisstr[ktorapar][5]); //wsp a
    TextCtrl17->AppendText(opisstr[ktorapar][10]); //wsp beta
    TextCtrl20->AppendText(opisstr[ktorapar][13]); //promien RS
    TextCtrl21->AppendText(opisstr[ktorapar][14]); //ksi U

}

void dane::rysowanie(vector<vector<int> >& linie)
{//funkcja wykonuj¹ca rysowanie
    int najmx, najmy, najwx, najwy, sredx, sredy;
    double skalax,skalay,skala;

    wxDouble liczba;
    wxString napisstr;

    wxPen pen1(wxColor(0,0,0),1);
    wxPen pen2(wxColor(255,0,0),2);
    wxPen pen3(wxColor(0,0,255),2);
    wxPen pen4(wxColor(0,255,0),2);

    wxBrush pedzel(wxColor(0,0,0),wxBRUSHSTYLE_TRANSPARENT);

    wxCoord maxx, maxy;

    wxClientDC ClientDC(Panel1); //ustawiamy panel jako narzêdzie do rysowania

    ClientDC.Clear();

    ClientDC.SetBrush(pedzel);

    ClientDC.GetSize(&maxx,&maxy);

    vector<vector<int> > nowelinie, nowerzednewsp, nowefurtywsp, noweliniepost, nowepostwsp;

        nowelinie.resize(linie.size()); //okreslenie wymiarow tabeli linii
    for(unsigned int i=0; i<nowelinie.size(); i++)
        nowelinie[i].resize(7);

        nowerzednewsp.resize(rzednewsp.size()); //okreslenie wymiarow tabeli linii
    for(unsigned int i=0; i<nowerzednewsp.size(); i++)
        nowerzednewsp[i].resize(7);

        nowefurtywsp.resize(furtywsp.size()); //okreslenie wymiarow tabeli linii
    for(unsigned int i=0; i<nowefurtywsp.size(); i++)
        nowefurtywsp[i].resize(7);

        noweliniepost.resize(liniepost.size()); //okreslenie wymiarow tabeli linii
    for(unsigned int i=0; i<noweliniepost.size(); i++)
        noweliniepost[i].resize(7);

        nowepostwsp.resize(postwsp.size()); //okreslenie wymiarow tabeli linii
    for(unsigned int i=0; i<nowepostwsp.size(); i++)
        nowepostwsp[i].resize(7);


//-------------OBLICZENIE PARAMETRÓW PRZESKALOWANIA--------------------------------------------------------
 //podstawienie wartoœci pocz¹tkowych do wyboru wartoœci skrajnych
    {
    najmx=najwx=linie[0][0];
    najmy=najwy=linie[0][1];
    }

    for (unsigned int i=0; i<linie.size(); i++) //znalezienie zakresu danych
    {
        if (linie[i][0]<najmx)
            najmx=linie[i][0];
        if (linie[i][2]<najmx)
            najmx=linie[i][2];

        if (linie[i][0]>najwx)
            najwx=linie[i][0];
        if (linie[i][2]>najwx)
            najwx=linie[i][2];

        if (linie[i][1]<najmy)
            najmy=linie[i][1];
        if (linie[i][3]<najmy)
            najmy=linie[i][3];

        if (linie[i][1]>najwy)
            najwy=linie[i][1];
        if (linie[i][3]>najwy)
            najwy=linie[i][3];
    }

    skalax=(najwx-najmx)/(maxy); //wyznaczenie skali lokalnej
    skalay=(najwy-najmy)/(maxx);

    if (skalax<skalay)
    {
        skala=skalay*skalaglob/1000000;
    }
    else
    {
        skala=skalax*skalaglob/1000000;
    }

//-------------OBLICZENIE WSPÓ£RZÊDNYCH PO PRZESKALOWANIU------------------------------------------------------------------

    for (unsigned int i=0; i<nowelinie.size(); i++) //przeskalowane wspó³rzêdne
    {
        nowelinie[i][0]=linie[i][0]/skala;
        nowelinie[i][2]=linie[i][2]/skala;
        nowelinie[i][1]=linie[i][1]/skala;
        nowelinie[i][3]=linie[i][3]/skala;
    }

    if (ToolBarItem6->IsToggled())
        for (unsigned int i=0; i<rzednewsp.size(); i++) //przeskalowane wspó³rzêdne
        {
            nowerzednewsp[i][0]=rzednewsp[i][0]/skala;
            nowerzednewsp[i][1]=rzednewsp[i][1]/skala;
        }

                    if (ToolBarItem5->IsToggled())
                        for (unsigned int i=0; i<nowefurtywsp.size(); i++) //przeskalowane wspó³rzêdne
                        {
                            nowefurtywsp[i][0]=furtywsp[i][0]/skala;
                            nowefurtywsp[i][1]=furtywsp[i][1]/skala;

                        }

                        if (ToolBarItem4->IsToggled() && noweliniepost.size()>0)
                        {
                           for (unsigned int i=0; i<noweliniepost.size(); i++) //przeskalowane wspó³rzêdne
                            {
                                noweliniepost[i][0]=liniepost[i][0]/skala;
                                noweliniepost[i][2]=liniepost[i][2]/skala;
                                noweliniepost[i][1]=liniepost[i][1]/skala;
                                noweliniepost[i][3]=liniepost[i][3]/skala;
                            }
                                for (unsigned int i=0; i<nowepostwsp.size(); i++) //przeskalowane wspó³rzêdne
                                {
                                    nowepostwsp[i][0]=postwsp[i][0]/skala;
                                    nowepostwsp[i][1]=postwsp[i][1]/skala;
                                }
                        }


//-------------OBLICZENIE PARAMETRÓW TRANSLACJI------------------------------------------------------------------

 //podstawienie wartoœci pocz¹tkowych do wyboru wartoœci skrajnych
    {
    najmx=najwx=nowelinie[0][0];
    najmy=najwy=nowelinie[0][1];
    }

    for (unsigned int i=0; i<nowelinie.size(); i++)
    {
        if (nowelinie[i][0]<najmx)
            najmx=nowelinie[i][0];
        if (nowelinie[i][2]<najmx)
            najmx=nowelinie[i][2];

        if (nowelinie[i][0]>najwx)
            najwx=nowelinie[i][0];
        if (nowelinie[i][2]>najwx)
            najwx=nowelinie[i][2];

        if (nowelinie[i][1]<najmy)
            najmy=nowelinie[i][1];
        if (nowelinie[i][3]<najmy)
            najmy=nowelinie[i][3];

        if (nowelinie[i][1]>najwy)
            najwy=nowelinie[i][1];
        if (nowelinie[i][3]>najwy)
            najwy=nowelinie[i][3];
    }

    sredx=(maxx-(najwy-najmy))/2;
    sredy=(maxy-(najwx-najmx))/2;

//-------------OBLICZENIE OSTATECZNYCH WSPÓ£RZÊDNYCH------------------------------------------------------------------
    for (unsigned int i=0; i<nowelinie.size(); i++)
    {
        nowelinie[i][0]=nowelinie[i][0]-najmx+sredy-ppy;
        nowelinie[i][2]=nowelinie[i][2]-najmx+sredy-ppy;
        nowelinie[i][1]=nowelinie[i][1]-najmy+sredx+ppx;
        nowelinie[i][3]=nowelinie[i][3]-najmy+sredx+ppx;
    }

        if (ToolBarItem6->IsToggled())
        for (unsigned int i=0; i<nowerzednewsp.size(); i++)
        {
            nowerzednewsp[i][0]=nowerzednewsp[i][0]-najmx+sredy-ppy;
            nowerzednewsp[i][1]=nowerzednewsp[i][1]-najmy+sredx+ppx;
        }

                        if (ToolBarItem5->IsToggled())
                        for (unsigned int i=0; i<nowefurtywsp.size(); i++)
                        {
                            nowefurtywsp[i][0]=nowefurtywsp[i][0]-najmx+sredy-ppy;
                            nowefurtywsp[i][1]=nowefurtywsp[i][1]-najmy+sredx+ppx;
                        }

                            if (ToolBarItem4->IsToggled() && noweliniepost.size()>0)
                            {
                                for (unsigned int i=0; i<noweliniepost.size(); i++)
                                {
                                    noweliniepost[i][0]=noweliniepost[i][0]-najmx+sredy-ppy;
                                    noweliniepost[i][2]=noweliniepost[i][2]-najmx+sredy-ppy;
                                    noweliniepost[i][1]=noweliniepost[i][1]-najmy+sredx+ppx;
                                    noweliniepost[i][3]=noweliniepost[i][3]-najmy+sredx+ppx;
                                }
                                    for (unsigned int i=0; i<nowepostwsp.size(); i++)
                                    {
                                        nowepostwsp[i][0]=nowepostwsp[i][0]-najmx+sredy-ppy;
                                        nowepostwsp[i][1]=nowepostwsp[i][1]-najmy+sredx+ppx;
                                    }
                            }



//-------------RYSOWANIE------------------------------------------------------------------
    for (unsigned int i=0; i<nowelinie.size(); i++)
    {
            if (linie[i][7]==1 || linie[i][7]==2)
            {
                if (linie[i][7]==1)
                {
                    ClientDC.SetPen(pen4);
                }
                else
                {
                    ClientDC.SetPen(pen2);
                }

            ClientDC.DrawLine(nowelinie[i][1],maxy-nowelinie[i][0],nowelinie[i][3],maxy-nowelinie[i][2]);
            liczba=i+1;
            napisstr.Printf(wxT("%.0f"),liczba);
            ClientDC.DrawText(napisstr,nowelinie[i][1]+4, maxy-nowelinie[i][0]-4);
            ClientDC.SetPen(pen1);
            ClientDC.DrawCircle(nowelinie[i][1],maxy-nowelinie[i][0],3);
            }
            else
            {
            ClientDC.DrawLine(nowelinie[i][1],maxy-nowelinie[i][0],nowelinie[i][3],maxy-nowelinie[i][2]);
            ClientDC.DrawCircle(nowelinie[i][1],maxy-nowelinie[i][0],3);
            liczba=i+1;
            napisstr.Printf(wxT("%.0f"),liczba);
            ClientDC.DrawText(napisstr,nowelinie[i][1]+4, maxy-nowelinie[i][0]-4);
            }

    }

        if (ToolBarItem6->IsToggled())
        for (unsigned int i=0; i<rzedne.size(); i++)
        {
            if  (rzednewsp[i][3]==1)
            {
                ClientDC.SetTextForeground(wxColor(255,0,0));
                ClientDC.DrawCircle(nowerzednewsp[i][1],maxy-nowerzednewsp[i][0],3);
                ClientDC.DrawText(rzedne[i],nowerzednewsp[i][1]+4, maxy-nowerzednewsp[i][0]-4);
                ClientDC.SetTextForeground(wxColor(0,0,0));
            }
            else
            {
                ClientDC.DrawCircle(nowerzednewsp[i][1],maxy-nowerzednewsp[i][0],3);
                ClientDC.DrawText(rzedne[i],nowerzednewsp[i][1]+4, maxy-nowerzednewsp[i][0]-4);
            }


        }


                        if (ToolBarItem5->IsToggled())
                        for (unsigned int i=0; i<nowefurtywsp.size(); i++)
                        {
                            if (furtywsp[i][3]==1)
                            {
                                ClientDC.SetPen(pen2);
                                ClientDC.DrawCircle(nowefurtywsp[i][1]+14,maxy-nowefurtywsp[i][0]+8, 16);
                                ClientDC.DrawText(furty[i],nowefurtywsp[i][1]+2, maxy-nowefurtywsp[i][0]-2);
                                ClientDC.SetPen(pen1);
                            }
                                ClientDC.DrawCircle(nowefurtywsp[i][1]+14,maxy-nowefurtywsp[i][0]+8, 16);
                                ClientDC.DrawText(furty[i],nowefurtywsp[i][1]+2, maxy-nowefurtywsp[i][0]-2);
                        }

                        if (ToolBarItem4->IsToggled() && noweliniepost.size()>0)
                        {

                            for (unsigned int i=0; i<noweliniepost.size(); i++)
                            {
                                if (liniepost[i][4]==1)
                                {
                                    ClientDC.SetPen(pen2);
                                    ClientDC.DrawLine(noweliniepost[i][1],maxy-noweliniepost[i][0],noweliniepost[i][3],maxy-noweliniepost[i][2]);
                                    ClientDC.SetPen(pen1);
                                }

                            }

                                for (unsigned int i=0; i<nowepostwsp.size(); i++)
                                {
                                    if (postwsp[i][3]==1)
                                    {
                                        ClientDC.SetTextForeground(wxColor(255,0,0));
                                        ClientDC.DrawPoint(nowepostwsp[i][1],maxy-nowepostwsp[i][0]);
                                        ClientDC.DrawText(post[i],nowepostwsp[i][1]+2, maxy-nowepostwsp[i][0]-2);
                                        ClientDC.SetTextForeground(wxColor(0,0,0));
                                    }

                                }
                        }


}

dane::~dane()
{//destruktor
	//(*Destroy(dane)
	//*)
}

void dane::OnPanel1RightDown(wxMouseEvent& event)
{//prawy wciœniêty
        rd=true;
    if (!prd)
    {
    prd=true;
    ppx=ppy=0;
    }


        pxk=event.GetX();
        pyk=event.GetY();
}

void dane::OnPanel1RightUp(wxMouseEvent& event)
{//prawy w górze
     rd=false;
}

void dane::OnPanel1MouseMove(wxMouseEvent& event)
{//przesuwanie

    int w, h;
    GetClientSize(&w, &h);

    if (rd && event.GetX()>10 && event.GetX()<w-400 && event.GetY()>10 && event.GetY()<h-42)
    {
pxp=pxk;
pyp=pyk;

pxk=event.GetX();
pyk=event.GetY();

ppx=ppx+pxk-pxp;
ppy=ppy+pyk-pyp;

    rysowanie(parceletab[ktorapar]);
    }
    else
    {
        rd=false;
    }
}

void dane::OnPanel1MouseWheel(wxMouseEvent& event)
{//zoomowanie
    if (event.GetWheelRotation()>0)
    {
        skalaglob=skalaglob*1.3;
    }
    else
    {
      skalaglob=skalaglob*0.7;
    }

    rysowanie(parceletab[ktorapar]);

}

void dane::OnToolBarItem4Clicked(wxCommandEvent& event)
{//dodanie okresów
    rysowanie(parceletab[ktorapar]);
}

void dane::OnToolBarItem5Clicked(wxCommandEvent& event)
{//dodanie furt
    rysowanie(parceletab[ktorapar]);
}

void dane::OnToolBarItem6Clicked(wxCommandEvent& event)
{//dodanie rzêdnych
    rysowanie(parceletab[ktorapar]);
}

void dane::OnToolBarItem1Clicked(wxCommandEvent& event)
{//poprzednia parcela

    if (ktorapar>0)
    ktorapar--;
    wybranie();
    rysowanie(parceletab[ktorapar]);

    funkcja();
    wpisanie(parceletab[ktorapar]);

}

void dane::OnToolBarItem2Clicked(wxCommandEvent& event)
{//nastêpna parcela
    if (ktorapar<parceletab.size()-1)
    ktorapar++;
    wybranie();
    rysowanie(parceletab[ktorapar]);

    funkcja();
    wpisanie(parceletab[ktorapar]);
}

void dane::OnToolBarItem3Clicked(wxCommandEvent& event)
{//zoom ca³oœæ
    rd=false;
    skalaglob=1000000;
    prd=false;
	ppx=ppy=0;

    rysowanie(parceletab[ktorapar]);
}

void dane::OnButton3Click(wxCommandEvent& event)
{//zapisanie zmian w podstawowych informacjach
    opisstr[ktorapar][2]=TextCtrl3->GetValue(); //nazwa
    //opisstr[ktorapar][1]=TextCtrl8->GetValue(); //numer zadania


    plik.open(""+projekt+"/p.par", ios::out);
    plik<<parceletab.size()<<endl;
    for (unsigned int j=0;j<parceletab.size();j++)
    {
        for (unsigned int i=0;i<opisstr[j].size();i++)
            plik<<opisstr[j][i]<<" ";
       plik<<endl<<parceletab[j].size()<<endl;
        for (unsigned int i=0;i<parceletab[j].size();i++)
        {
             plik<<parceletab[j][i][0]<<" "<<parceletab[j][i][1]<<" "<<parceletab[j][i][4]<<" "<<parceletab[j][i][5]<<" "<<parceletab[j][i][6]<<" "<<parceletab[j][i][2]<<" "<<parceletab[j][i][3]<<endl;
        }
    }
    plik.close();

}

void dane::OnButton1Click(wxCommandEvent& event)
{//wyznaczenie wysokoœci furt
    if (RadioButton1->GetValue()) //rêcznie
    {   double liczba;
        for (unsigned int i=0;i<parceletab[ktorapar].size();i++)
        {
        TextCtrl7->GetValue().ToDouble(&liczba);
        parceletab[ktorapar][i][5]=liczba*100;
        }
    }
    if (CheckBox9->IsChecked()) //wyznaczenie globalne
    {
        int odl, ktorej, ktorapari;
        ktorapari=ktorapar;

       if (RadioButton2->GetValue()) //do najbli¿szego
    {
        for (ktorapar=0;ktorapar<parceletab.size();ktorapar++)
        {
            wybranie();
            for (unsigned int i=0; i<parceletab[ktorapar].size();i++) //pêtla wybieraj¹ca wierzcho³ki
        {
            for (unsigned int j=0; j<furtywyb.size();j++) //pêtla wybieraj¹ca wysokoœci furt
            {
                if (j==0)
                {
                    odl=odleglosc(parceletab[ktorapar][i][0], parceletab[ktorapar][i][1], furtywyb[j][0], furtywyb[j][1]);
                    ktorej=j;
                }
                { //obliczenie odleg³oœci i wybranie najmniejszej
                    if (odl>odleglosc(parceletab[ktorapar][i][0], parceletab[ktorapar][i][1], furtywyb[j][0], furtywyb[j][1]))
                    {
                        odl=odleglosc(parceletab[ktorapar][i][0], parceletab[ktorapar][i][1], furtywyb[j][0], furtywyb[j][1]);
                        ktorej=j;
                    }
                }
            }
        parceletab[ktorapar][i][5]=furtywyb[ktorej][2]; //przypisanie wartoœci
        }
        }
    }

    if (RadioButton3->GetValue()) //œrednia
    {
        for (ktorapar=0;ktorapar<parceletab.size();ktorapar++)
        {
        wybranie();
        double srednia, suma;

        suma=0;

        for (unsigned int i=0;i<furtywyb.size();i++)
        {
            suma+=furtywyb[i][2]; //suma wysokoœci furt
        }

        srednia=suma/furtywyb.size(); //obliczenie œredniej

        for (unsigned int i=0;i<parceletab[ktorapar].size();i++)
        {
        parceletab[ktorapar][i][5]=srednia; //przypisanie wartoœci
        }
        }
    }
    ktorapar=ktorapari;
    }
    else //pojedynczo
    {

    if (RadioButton2->GetValue()) //do najbli¿szego
    {
        int odl, ktorej;

        for (unsigned int i=0; i<parceletab[ktorapar].size();i++) //pêtla wybieraj¹ca wierzcho³ki
        {
            for (unsigned int j=0; j<furtywyb.size();j++) //pêtla wybieraj¹ca wysokoœci furt
            {
                if (j==0)
                {
                    odl=odleglosc(parceletab[ktorapar][i][0], parceletab[ktorapar][i][1], furtywyb[j][0], furtywyb[j][1]);
                    ktorej=j;
                }
                { //obliczenie odleg³oœci i wybranie najmniejszej
                    if (odl>odleglosc(parceletab[ktorapar][i][0], parceletab[ktorapar][i][1], furtywyb[j][0], furtywyb[j][1]))
                    {
                        odl=odleglosc(parceletab[ktorapar][i][0], parceletab[ktorapar][i][1], furtywyb[j][0], furtywyb[j][1]);
                        ktorej=j;
                    }
                }
            }
        parceletab[ktorapar][i][5]=furtywyb[ktorej][2]; //przypisanie wartoœci
        }

    }

    if (RadioButton3->GetValue()) //œrednia
    {
        double srednia, suma;

        suma=0;

        for (unsigned int i=0;i<furtywyb.size();i++)
        {
            suma+=furtywyb[i][2]; //suma wysokoœci furt
        }

        srednia=suma/furtywyb.size(); //obliczenie œredniej

        for (unsigned int i=0;i<parceletab[ktorapar].size();i++)
        {
        parceletab[ktorapar][i][5]=srednia; //przypisanie wartoœci
        }
    }

    }

    plik.open(""+projekt+"/p.par", ios::out); //zapisanie zmian
    plik<<parceletab.size()<<endl;
    for (unsigned int j=0;j<parceletab.size();j++)
    {
        for (unsigned int i=0;i<opisstr[j].size();i++)
            plik<<opisstr[j][i]<<" ";
       plik<<endl<<parceletab[j].size()<<endl;
        for (unsigned int i=0;i<parceletab[j].size();i++)
        {
            plik<<parceletab[j][i][0]<<" "<<parceletab[j][i][1]<<" "<<parceletab[j][i][4]<<" "<<parceletab[j][i][5]<<" "<<parceletab[j][i][6]<<" "<<parceletab[j][i][2]<<" "<<parceletab[j][i][3]<<endl;
        }
    }
    plik.close();



    wpisanie(parceletab[ktorapar]);
}

void dane::OnButton4Click(wxCommandEvent& event)
{//usuniêcie punktu w tabeli
    int ktora;
    ktora=Grid1->GetCursorRow();

    parceletab[ktorapar][ktora-1][2]=parceletab[ktorapar][ktora+1][0];
    parceletab[ktorapar][ktora-1][3]=parceletab[ktorapar][ktora+1][1];

    parceletab[ktorapar].erase(parceletab[ktorapar].begin()+ktora);

    wpisanie(parceletab[ktorapar]);
}

void dane::OnButton5Click(wxCommandEvent& event)
{//zapisanie zmian w tabeli

    plik.open(""+projekt+"/p.par", ios::out);
    plik<<parceletab.size()<<endl;
    for (unsigned int j=0;j<parceletab.size();j++)
    {
        for (unsigned int i=0;i<opisstr[j].size();i++)
            plik<<opisstr[j][i]<<" ";
       plik<<endl<<parceletab[j].size()<<endl;
        for (unsigned int i=0;i<parceletab[j].size();i++)
        {
             plik<<parceletab[j][i][0]<<" "<<parceletab[j][i][1]<<" "<<parceletab[j][i][4]<<" "<<parceletab[j][i][5]<<" "<<parceletab[j][i][6]<<" "<<parceletab[j][i][2]<<" "<<parceletab[j][i][3]<<endl;
        }
    }
    plik.close();
}

void dane::OnButton6Click(wxCommandEvent& event)
{//anulowanie wprowadzonych w tabeli zmian

    parceletab.clear();
    opisstr.clear();
    vector<string> opis;

	linie.resize(1); //okreslenie wymiarów tabeli ze wspó³rzêdnymi linii
    for(unsigned int i=0; i<linie.size(); i++)
    linie[i].resize(7);
    linie.pop_back();

	opisstr.resize(1); //okreslenie wymiarów tabeli ze wspó³rzêdnymi linii
    for(unsigned int i=0; i<opisstr.size(); i++)
    opisstr[i].resize(32);
    opisstr.pop_back();

    vector<int> linia;
    linia.resize(7);
    opis.resize(32);

	proj.open("konfig/k.konf", ios::in); //pozyskanie œcie¿ki do projektu
        getline(proj, projekt);
    proj.close();

    plik.open(""+projekt+"/p.par", ios::in);  //otwarcie pliku i wczytanie danych

    int ile, ilep;
    wxString napis;
    double liczba2;
	string napis2;

    plik>>ile;
    for (int i=0;i<ile;i++)
    {   //opis.clear();

        plik>>opis[0];
        plik>>opis[1];
        plik>>opis[2];
        plik>>opis[3];
        plik>>opis[4];
        plik>>opis[5];
        plik>>opis[6];
        plik>>opis[7];
        plik>>opis[8];
        plik>>opis[9];
        plik>>opis[10];
        plik>>opis[11];
        plik>>opis[12];
        plik>>opis[13];
        plik>>opis[14];
        plik>>opis[15];
        plik>>opis[16];
        plik>>opis[17];
        plik>>opis[18];
        plik>>opis[19];
        plik>>opis[20];
        plik>>opis[21];
        plik>>opis[22];
        plik>>opis[23];
        plik>>opis[24];
        plik>>opis[25];
        plik>>opis[26];
        plik>>opis[27];
        plik>>opis[28];
        plik>>opis[29];
        plik>>opis[30];
        plik>>opis[31];


    opisstr.push_back(opis);

        plik>>ilep;
        linie.clear();
        for (int j=0;j<ilep;j++)
        {
            plik>>linia[0];
            plik>>linia[1];
            plik>>linia[4];
            plik>>linia[5];
            plik>>linia[6];
            plik>>linia[2];
            plik>>linia[3];
            linie.push_back(linia);
        }
        parceletab.push_back(linie);
    }

plik.close();

wpisanie(parceletab[ktorapar]);

}

void dane::OnButton7Click(wxCommandEvent& event)
{//wyznaczenie rzêdnych wysokoœciowych
    double srednia, suma;
    wxString napisstr;

    if (RadioButton6->GetValue()) //rêcznie
    {   double liczba;
        for (unsigned int i=0;i<parceletab[ktorapar].size();i++)
        {
        TextCtrl19->GetValue().ToDouble(&liczba);
        parceletab[ktorapar][i][4]=liczba*1000;
        }
        napisstr.Printf(wxT("%.0f"),liczba);

        opisstr[ktorapar][4]=napisstr;
    }

    if (CheckBox10->IsChecked()) //wyznaczenie globalne
    {
        int odl, ktorej, ktorapari;
        ktorapari=ktorapar;

        if (RadioButton7->GetValue()) //do najbli¿szego
        {
            for (ktorapar=0;ktorapar<parceletab.size();ktorapar++)
            {
            wybranie();

                for (unsigned int i=0; i<parceletab[ktorapar].size();i++)
                {
                    for (unsigned int j=0; j<rzednewyb.size();j++)
                    {
                        if (j==0)
                        {
                            odl=odleglosc(parceletab[ktorapar][i][0], parceletab[ktorapar][i][1], rzednewyb[j][0], rzednewyb[j][1]);
                            ktorej=j;
                        }
                        {
                            if (odl>odleglosc(parceletab[ktorapar][i][0], parceletab[ktorapar][i][1], rzednewyb[j][0], rzednewyb[j][1]))
                            {
                                odl=odleglosc(parceletab[ktorapar][i][0], parceletab[ktorapar][i][1], rzednewyb[j][0], rzednewyb[j][1]);
                                ktorej=j;
                            }
                        }
                    }
                parceletab[ktorapar][i][4]=rzednewyb[ktorej][2];


                    suma=0;

                    for (unsigned int k=0;k<parceletab[ktorapar].size();k++)
                    {
                        suma+=parceletab[ktorapar][k][4];
                    }

                    srednia=suma/parceletab[ktorapar].size();

                napisstr.Printf(wxT("%.2f"),srednia/100);

                opisstr[ktorapar][4]=napisstr;

                }
            }
        }

        if (RadioButton8->GetValue()) //œrednia
        {

            for (ktorapar=0;ktorapar<parceletab.size();ktorapar++)
            {
            suma=0;
            wybranie();

            for (unsigned int i=0;i<rzednewyb.size();i++)
            {
                suma+=rzednewyb[i][2];
            }

            srednia=suma/rzednewyb.size();

            for (unsigned int i=0;i<parceletab[ktorapar].size();i++)
            {
                parceletab[ktorapar][i][4]=srednia;
            }

            napisstr.Printf(wxT("%.2f"),srednia/100);

            opisstr[ktorapar][4]=napisstr;

            }

        }
    ktorapar=ktorapari;
    }
    else
        if (RadioButton7->GetValue()) //do najbli¿szego
    {
        int odl, ktorej;

        for (unsigned int i=0; i<parceletab[ktorapar].size();i++)
        {
            for (unsigned int j=0; j<rzednewyb.size();j++)
            {
                if (j==0)
                {
                    odl=odleglosc(parceletab[ktorapar][i][0], parceletab[ktorapar][i][1], rzednewyb[j][0], rzednewyb[j][1]);
                    ktorej=j;
                }
                {
                    if (odl>odleglosc(parceletab[ktorapar][i][0], parceletab[ktorapar][i][1], rzednewyb[j][0], rzednewyb[j][1]))
                    {
                        odl=odleglosc(parceletab[ktorapar][i][0], parceletab[ktorapar][i][1], rzednewyb[j][0], rzednewyb[j][1]);
                        ktorej=j;
                    }
                }
            }
                parceletab[ktorapar][i][4]=rzednewyb[ktorej][2];
                    suma=0;

                    for (unsigned int k=0;k<parceletab[ktorapar].size();k++)
                    {
                        suma+=parceletab[ktorapar][k][4];
                    }

                    srednia=suma/parceletab[ktorapar].size();

                napisstr.Printf(wxT("%.2f"),srednia/100);

                opisstr[ktorapar][4]=napisstr;
        }

    }

    if (RadioButton8->GetValue()) //œrednia
    {
        suma=0;

        for (unsigned int i=0;i<rzednewyb.size();i++)
        {
            suma+=rzednewyb[i][2];
        }

        srednia=suma/rzednewyb.size();

        for (unsigned int i=0;i<parceletab[ktorapar].size();i++)
        {
        parceletab[ktorapar][i][4]=srednia;
        }
        napisstr.Printf(wxT("%.2f"),srednia/100);

        opisstr[ktorapar][4]=napisstr;
    }

    plik.open(""+projekt+"/p.par", ios::out);
    plik<<parceletab.size()<<endl;
    for (unsigned int j=0;j<parceletab.size();j++)
    {
        for (unsigned int i=0;i<opisstr[j].size();i++)
            plik<<opisstr[j][i]<<" ";
       plik<<endl<<parceletab[j].size()<<endl;
        for (unsigned int i=0;i<parceletab[j].size();i++)
        {
            plik<<parceletab[j][i][0]<<" "<<parceletab[j][i][1]<<" "<<parceletab[j][i][4]<<" "<<parceletab[j][i][5]<<" "<<parceletab[j][i][6]<<" "<<parceletab[j][i][2]<<" "<<parceletab[j][i][3]<<endl;
        }
    }
    plik.close();

     wpisanie(parceletab[ktorapar]);
}

void dane::OnButton8Click(wxCommandEvent& event)
{//zapisanie zmian
    opisstr[ktorapar][5]=TextCtrl16->GetValue(); //wsp a U
    opisstr[ktorapar][10]=TextCtrl17->GetValue(); //wsp Beta 1
    opisstr[ktorapar][13]=TextCtrl20->GetValue(); //promien RS
    opisstr[ktorapar][14]=TextCtrl21->GetValue(); //ksi U

    if (CheckBox2->GetValue())
    {
        for (unsigned int i=0;i<opisstr.size();i++)
            {
                opisstr[i][5]=TextCtrl16->GetValue();
            }
    }
        if (CheckBox3->GetValue())
    {
        for (unsigned int i=0;i<opisstr.size();i++)
            {
                opisstr[i][10]=TextCtrl17->GetValue();
            }
    }

        if (CheckBox4->GetValue())
    {
        for (unsigned int i=0;i<opisstr.size();i++)
            {
                opisstr[i][13]=TextCtrl20->GetValue();
            }
    }
        if (CheckBox5->GetValue())
    {
        for (unsigned int i=0;i<opisstr.size();i++)
            {
                opisstr[i][14]=TextCtrl21->GetValue();
            }
    }

        if (CheckBox1->IsChecked())
    {
        opisstr[ktorapar][17]="Tak";
    }
    else
    {
        opisstr[ktorapar][17]="Nie";
    }


    plik.open(""+projekt+"/p.par", ios::out);
    plik<<parceletab.size()<<endl;
    for (unsigned int j=0;j<parceletab.size();j++)
    {
        for (unsigned int i=0;i<opisstr[j].size();i++)
            plik<<opisstr[j][i]<<" ";
       plik<<endl<<parceletab[j].size()<<endl;
        for (unsigned int i=0;i<parceletab[j].size();i++)
        {
             plik<<parceletab[j][i][0]<<" "<<parceletab[j][i][1]<<" "<<parceletab[j][i][4]<<" "<<parceletab[j][i][5]<<" "<<parceletab[j][i][6]<<" "<<parceletab[j][i][2]<<" "<<parceletab[j][i][3]<<endl;
        }
    }
    plik.close();
}

void dane::OnRadioButton12Select(wxCommandEvent& event)
{
    CheckBox6->Enable(true);
    CheckBox7->Enable(true);
}

void dane::OnRadioButton11Select(wxCommandEvent& event)
{
    CheckBox6->Enable(false);
    CheckBox7->Enable(false);
}

void dane::OnButton10Click(wxCommandEvent& event)
{
   /* opisstr[ktorapar][6]=TextCtrl10->GetValue();
    opisstr[ktorapar][7]=TextCtrl11->GetValue();
    opisstr[ktorapar][12]=TextCtrl12->GetValue();
    opisstr[ktorapar][13]=TextCtrl13->GetValue();
    opisstr[ktorapar][14]=TextCtrl14->GetValue();
    opisstr[ktorapar][15]=TextCtrl15->GetValue(); */

    plik.open(""+projekt+"/p.par", ios::out);
    plik<<parceletab.size()<<endl;
    for (unsigned int j=0;j<parceletab.size();j++)
    {
        for (unsigned int i=0;i<opisstr[j].size();i++)
            plik<<opisstr[j][i]<<" ";
       plik<<endl<<parceletab[j].size()<<endl;
        for (unsigned int i=0;i<parceletab[j].size();i++)
        {
             plik<<parceletab[j][i][0]<<" "<<parceletab[j][i][1]<<" "<<parceletab[j][i][4]<<" "<<parceletab[j][i][5]<<" "<<parceletab[j][i][6]<<" "<<parceletab[j][i][2]<<" "<<parceletab[j][i][3]<<endl;
        }
    }
    plik.close();
}

void dane::OnButton9Click(wxCommandEvent& event)
{ //okreœlenie dat wydobycia i kierunku
    TextCtrl10->Clear();TextCtrl11->Clear();TextCtrl12->Clear(); //wyczyszczenie pól z danymi
    TextCtrl13->Clear();TextCtrl14->Clear();TextCtrl15->Clear();

    int ktorapar2, odl, ktorei, ktorei2, ktorej, ktorej2, kw1, kw2, kwp, kwk, rok1, rok2, rokp, rokk, ij, okres1, okres2, okressred;
    int xprz, yprz, ddop, ddok;
    double rokdouble;
    odl=0;
    vector<char> ciag, ciag2, ciag3; //deklaracje zmiennych
    char znak;
    vector<int> linia, liniasort;;
    wxString napis1, data1, data2, napis2;
    wxDouble zmienna;
    wxString napis;

    linia.resize(5);

//---WYZNACZENIE GLOBALNE---------------------------------

     ktorapar2=ktorapar;
    if (CheckBox8->IsChecked())
    {
        for (ktorapar=0; ktorapar<parceletab.size(); ktorapar++) //g³ówka pêtla wybieraj¹ca kolejne parcele
        {
            wybranie(); odl=0;
        //wybór najbardziej od siebie oddalonych dat
         for (unsigned int i=0;i<postwspwyb.size();i++)
        {
            for (unsigned int j=0;j<postwspwyb.size();j++)
            {
               if (odl<odleglosc(postwspwyb[i][0], postwspwyb[i][1], postwspwyb[j][0], postwspwyb[j][1]) && i!=j)
               {
                   odl=odleglosc(postwspwyb[i][0], postwspwyb[i][1], postwspwyb[j][0], postwspwyb[j][1]);
                   ktorei=i;
                   ktorej=j;
               }
            }
        }

 plik.open("t.temp", ios::out); //zapis do pliku celem tranformacji na znaki
    plik<<postwyb[ktorei]<<"*"<<endl<<postwyb[ktorej]<<"*";
 plik.close();

    plik.open("t.temp", ios::in); //wczytanie dat jako znaki
    plik>>znak; ciag.clear(); ciag2.clear();
    while (znak!='*')
    {
        ciag.push_back(znak);
        plik>>znak;
    }
        plik>>znak;
        while (znak!='*')
    {
        ciag2.push_back(znak);
        plik>>znak;
    }
     plik.close();


int war=0; napis2=""; napis1=""; //podzia³ napisu na kwarta³ i rok
for (unsigned int i=0;i<ciag.size();i++)
{
        if (war==1)
        {
        napis2+=ciag[i];
        }

      if (ciag[i]!='\\' && war==0)
        {
        napis1+=ciag[i];
        }
        else
        {
          war=1;
        }
}

    if (napis1=="I") //zamiana cyfry rzymskiej na arabsk¹
    {
        kw1=1;
    }
    if (napis1=="II")
    {
        kw1=2;
    }
    if (napis1=="III")
    {
        kw1=3;
    }
    if (napis1=="IV")
    {
        kw1=4;
    }

    napis2.ToDouble(&rokdouble); //zamiana roku na pe³ny
    rok1=rokdouble;
    if (rok1<70)
    {
        rok1=rok1+2000;
    }
    else
    {
        rok1=rok1+1900;
    }
//-----------------------------------
    war=0; napis2=""; napis1="";
for (unsigned int i=0;i<ciag2.size();i++)
{
        if (war==1)
        {
        napis2+=ciag2[i];
        }

      if (ciag2[i]!='\\' && war==0)
        {
        napis1+=ciag2[i];
        }
        else
        {
          war=1;
        }
}

    if (napis1=="I")
    {
        kw2=1;
    }
    if (napis1=="II")
    {
        kw2=2;
    }
    if (napis1=="III")
    {
        kw2=3;
    }
    if (napis1=="IV")
    {
        kw2=4;
    }

    napis2.ToDouble(&rokdouble);
    rok2=rokdouble;
    if (rok2<70)
    {
        rok2=rok2+2000;
    }
    else
    {
        rok2=rok2+1900;
    }


    if (rok1<rok2)
    {
        rokp=rok1; kwp=kw1;
        rokk=rok2; kwk=kw2;
    }
    if (rok1>rok2)
    {
        rokp=rok2; kwp=kw2;
        rokk=rok1; kwk=kw1;
        ij=ktorei; ktorei=ktorej; ktorej=ij;
    }

    if (rok1==rok2)
    {
        if (kw1<kw2)
        {
        rokp=rok1; kwp=kw1;
        rokk=rok2; kwk=kw2;
        }
        else
        {
        rokp=rok2; kwp=kw2;
        rokk=rok1; kwk=kw1;
        ij=ktorei; ktorei=ktorej; ktorej=ij;
        }
    }


//---ZNALEZIENIE LINII POCZ¥TKU---------------
int azym, xp, yp;
double dx, dy, azymrad;
    //obliczenie azymutu i wspó³rzêdnych puktu na przed³u¿eniu
    azym=azymut(postwspwyb[ktorej][0], postwspwyb[ktorej][1], postwspwyb[ktorei][0], postwspwyb[ktorei][1]);
    azymrad=azym;
    azymrad=(azymrad/10000)*3.14159265/200;
    dx=500000*cos(azymrad);
    xp=postwspwyb[ktorei][0]+dx;

    dy=500000*sin(azymrad);
    yp=postwspwyb[ktorei][1]+dy;


    for (unsigned int i=0;i<parceletab[ktorapar].size();i++) //funkcia liczaca przeciecia
    {
         if (przecinanie(xp,yp,postwspwyb[ktorei][0],postwspwyb[ktorei][1],parceletab[ktorapar][i][0],parceletab[ktorapar][i][1],parceletab[ktorapar][i][2],parceletab[ktorapar][i][3]))
        {
        ktorei2=i;
            linia[0]=xp;
            linia[1]=yp;
            linia[2]=postwspwyb[ktorei][0];
            linia[3]=postwspwyb[ktorei][1];

        przeciecie(parceletab[ktorapar][i], linia, xprz, yprz);
        ddop=odleglosc(postwspwyb[ktorei][0],postwspwyb[ktorei][1],xprz, yprz);
        }
    }
//---ZNALEZIENIE LINII KOÑCA---------------
    azym=azymut(postwspwyb[ktorei][0], postwspwyb[ktorei][1], postwspwyb[ktorej][0], postwspwyb[ktorej][1]);
    azymrad=azym;
    azymrad=(azymrad/10000)*3.14159265/200;
    dx=500000*cos(azymrad);
    xp=postwspwyb[ktorej][0]+dx;

    dy=500000*sin(azymrad);
    yp=postwspwyb[ktorej][1]+dy;



    for (unsigned int i=0;i<parceletab[ktorapar].size();i++) //funkcia liczaca przeciecia
    {
         if (przecinanie(xp,yp,postwspwyb[ktorej][0],postwspwyb[ktorej][1],parceletab[ktorapar][i][0],parceletab[ktorapar][i][1],parceletab[ktorapar][i][2],parceletab[ktorapar][i][3]))
        {
        ktorej2=i;

            linia[0]=xp;
            linia[1]=yp;
            linia[2]=postwspwyb[ktorej][0];
            linia[3]=postwspwyb[ktorej][1];

        przeciecie(parceletab[ktorapar][i], linia, xprz, yprz);
        ddok=odleglosc(postwspwyb[ktorej][0],postwspwyb[ktorej][1],xprz, yprz);
        }
    }

    parceletab[ktorapar][ktorei2][7]=1;
    parceletab[ktorapar][ktorej2][7]=2;

        linia.clear();
    for (unsigned int i=0;i<liniepostwyb.size();i++) //wyszukanie przecinaj¹cych linii granic postêpu
    {
        if (przecinanie(postwspwyb[ktorei][0],postwspwyb[ktorei][1],postwspwyb[ktorej][0],postwspwyb[ktorej][1],liniepostwyb[i][0],liniepostwyb[i][1],liniepostwyb[i][2],liniepostwyb[i][3]))
        {
            linia[0]=postwspwyb[ktorei][0];
            linia[1]=postwspwyb[ktorei][1];
            linia[2]=postwspwyb[ktorej][0];
            linia[3]=postwspwyb[ktorej][1];

            przeciecie(liniepostwyb[i], linia, xprz, yprz);
            liniepostwyb[i][4]=odleglosc(postwspwyb[ktorei][0],postwspwyb[ktorei][1],xprz, yprz);
        }
        else
            liniepostwyb[i][4]=-1;
    }

            int k=0; //usuniêcie tych, które siê nie przecinaj¹
            for (unsigned int j=0; j<liniepostwyb.size(); j++)
            {
                if (liniepostwyb[k][4]==-1)
                {
                    liniepostwyb.erase(liniepostwyb.begin()+k);
                    j++;
                    k--;
                }
                k++;
            }

    //sortowanie
    for (unsigned int i=0;i<liniepostwyb.size();i++)
    {
        for (unsigned int j=0;j<liniepostwyb.size()-1;j++)
        {
            if (liniepostwyb[j][4]>liniepostwyb[j+1][4] && i!=j)
            {
                liniasort=liniepostwyb[j];
                liniepostwyb[j]=liniepostwyb[j+1];
                liniepostwyb[j+1]=liniasort;
            }
        }
    }
    //obliczenie "d³ugoœci" okresów
    okressred=okres1=okres2=0;
    okres1=ddop+liniepostwyb[0][4];
    okres2=ddok+odleglosc(postwspwyb[ktorei][0],postwspwyb[ktorei][1],postwspwyb[ktorej][0],postwspwyb[ktorej][1])-liniepostwyb[liniepostwyb.size()-1][4];

    okressred=liniepostwyb[liniepostwyb.size()-1][4]-liniepostwyb[0][4];
    okressred=okressred/liniepostwyb.size()-1;

    double stosp, stosk, okr, okrs;
    okr=okres1;
    okrs=okressred;
    stosp=okr/okrs;

    okr=okres2;
    stosk=okr/okrs;

    data1=datap(kwp, rokp, stosp); //wyznaczenie daty pocz¹tku
    data2=datak(kwk, rokk, stosk);

    opisstr[ktorapar][7]=data1;
    opisstr[ktorapar][9]=data2;

                zmienna=ktorei2+1;
                napis.Printf(wxT("%.0f"),zmienna);
                opisstr[ktorapar][21]=napis;
                zmienna=ktorei2+2;
                napis.Printf(wxT("%.0f"),zmienna);
                opisstr[ktorapar][22]=napis;

                zmienna=ktorej2+1;
                napis.Printf(wxT("%.0f"),zmienna);
                opisstr[ktorapar][23]=napis;
                zmienna=ktorej2+2;
                napis.Printf(wxT("%.0f"),zmienna);
                opisstr[ktorapar][24]=napis;


        }
         ktorapar=ktorapar2; wybranie();
    }
    else
//---WYZNACZENIE LOKALNE-------------------------------------
    {

    for (unsigned int i=0;i<postwspwyb.size();i++) //wybór skrajnych dat
    {
        for (unsigned int j=0;j<postwspwyb.size();j++)
        {
           if (odl<odleglosc(postwspwyb[i][0], postwspwyb[i][1], postwspwyb[j][0], postwspwyb[j][1]) && i!=j)
           {
               odl=odleglosc(postwspwyb[i][0], postwspwyb[i][1], postwspwyb[j][0], postwspwyb[j][1]);
               ktorei=i;
               ktorej=j;
           }
        }
    }

 plik.open("t.temp", ios::out); //zapis do pliku celem tranformacji na znaki
    plik<<postwyb[ktorei]<<"*"<<endl<<postwyb[ktorej]<<"*";
 plik.close();

    plik.open("t.temp", ios::in); //wczytanie dat jako znaki
    plik>>znak; ciag.clear(); ciag2.clear();
    while (znak!='*')
    {
        ciag.push_back(znak);
        plik>>znak;
    }
        plik>>znak;
        while (znak!='*')
    {
        ciag2.push_back(znak);
        plik>>znak;
    }
     plik.close();


int war=0; napis2=""; napis1=""; //podzia³ napisu na kwarta³ i rok
for (unsigned int i=0;i<ciag.size();i++)
{
        if (war==1)
        {
        napis2+=ciag[i];
        }

      if (ciag[i]!='\\' && war==0)
        {
        napis1+=ciag[i];
        }
        else
        {
          war=1;
        }
}

    if (napis1=="I") //zamiana cyfry rzymskiej na arabsk¹
    {
        kw1=1;
    }
    if (napis1=="II")
    {
        kw1=2;
    }
    if (napis1=="III")
    {
        kw1=3;
    }
    if (napis1=="IV")
    {
        kw1=4;
    }

    napis2.ToDouble(&rokdouble); //zamiana roku na pe³ny
    rok1=rokdouble;
    if (rok1<70)
    {
        rok1=rok1+2000;
    }
    else
    {
        rok1=rok1+1900;
    }
//-----------------------------------
    war=0; napis2=""; napis1="";
for (unsigned int i=0;i<ciag2.size();i++)
{
        if (war==1)
        {
        napis2+=ciag2[i];
        }

      if (ciag2[i]!='\\' && war==0)
        {
        napis1+=ciag2[i];
        }
        else
        {
          war=1;
        }
}

    if (napis1=="I")
    {
        kw2=1;
    }
    if (napis1=="II")
    {
        kw2=2;
    }
    if (napis1=="III")
    {
        kw2=3;
    }
    if (napis1=="IV")
    {
        kw2=4;
    }

    napis2.ToDouble(&rokdouble);
    rok2=rokdouble;
    if (rok2<70)
    {
        rok2=rok2+2000;
    }
    else
    {
        rok2=rok2+1900;
    }


    if (rok1<rok2) //wybranie wczeœniejszej daty
    {
        rokp=rok1; kwp=kw1;
        rokk=rok2; kwk=kw2;
    }
    if (rok1>rok2)
    {
        rokp=rok2; kwp=kw2;
        rokk=rok1; kwk=kw1;
        ij=ktorei; ktorei=ktorej; ktorej=ij;
    }

    if (rok1==rok2)
    {
        if (kw1<kw2)
        {
        rokp=rok1; kwp=kw1;
        rokk=rok2; kwk=kw2;
        }
        else
        {
        rokp=rok2; kwp=kw2;
        rokk=rok1; kwk=kw1;
        ij=ktorei; ktorei=ktorej; ktorej=ij;
        }
    }


//---ZNALEZIENIE LINII POCZ¥TKU---------------
int azym, xp, yp;
double dx, dy, azymrad;

    azym=azymut(postwspwyb[ktorej][0], postwspwyb[ktorej][1], postwspwyb[ktorei][0], postwspwyb[ktorei][1]);
    azymrad=azym;
    azymrad=(azymrad/10000)*3.14159265/200; //obliczenie azymutu napisów
    dx=500000*cos(azymrad);  //obliczenie wspó³rzêdnych do znalezienia przeciêcia
    xp=postwspwyb[ktorei][0]+dx;

    dy=500000*sin(azymrad);
    yp=postwspwyb[ktorei][1]+dy;


    for (unsigned int i=0;i<parceletab[ktorapar].size();i++) //funkcia znajduj¹ca przeciêcie z granic¹ parceli
    {
         if (przecinanie(xp,yp,postwspwyb[ktorej][0],postwspwyb[ktorej][1],parceletab[ktorapar][i][0],parceletab[ktorapar][i][1],parceletab[ktorapar][i][2],parceletab[ktorapar][i][3]))
        {
        ktorei2=i;

            linia[0]=xp;
            linia[1]=yp;
            linia[2]=postwspwyb[ktorej][0];
            linia[3]=postwspwyb[ktorej][1];

            przeciecie(parceletab[ktorapar][i], linia, xprz, yprz);
            ddop=odleglosc(postwspwyb[ktorei][0],postwspwyb[ktorei][1],xprz, yprz);
        }
    }
//---ZNALEZIENIE LINII KOÑCA---------------
    azym=azymut(postwspwyb[ktorei][0], postwspwyb[ktorei][1], postwspwyb[ktorej][0], postwspwyb[ktorej][1]);
    azymrad=azym;
    azymrad=(azymrad/10000)*3.14159265/200;
    dx=500000*cos(azymrad);
    xp=postwspwyb[ktorej][0]+dx;

    dy=500000*sin(azymrad);
    yp=postwspwyb[ktorej][1]+dy;



    for (unsigned int i=0;i<parceletab[ktorapar].size();i++) //funkcia liczaca przeciecia
    {
         if (przecinanie(xp,yp,postwspwyb[ktorej][0],postwspwyb[ktorej][1],parceletab[ktorapar][i][0],parceletab[ktorapar][i][1],parceletab[ktorapar][i][2],parceletab[ktorapar][i][3]))
        {
        ktorej2=i;

            linia[0]=xp;
            linia[1]=yp;
            linia[2]=postwspwyb[ktorej][0];
            linia[3]=postwspwyb[ktorej][1];

            przeciecie(parceletab[ktorapar][i], linia, xprz, yprz);
            ddok=odleglosc(postwspwyb[ktorei][0],postwspwyb[ktorei][1],xprz, yprz);
        }
    }

    parceletab[ktorapar][ktorei2][7]=1; //oznaczenie linii pocz¹tkowej i koncowej
    parceletab[ktorapar][ktorej2][7]=2;


    linia.clear();
    for (unsigned int i=0;i<liniepostwyb.size();i++) //wyszukanie przecinaj¹cych linii granic postêpu
    {
        if (przecinanie(postwspwyb[ktorei][0],postwspwyb[ktorei][1],postwspwyb[ktorej][0],postwspwyb[ktorej][1],liniepostwyb[i][0],liniepostwyb[i][1],liniepostwyb[i][2],liniepostwyb[i][3]))
        {
            linia[0]=postwspwyb[ktorei][0];
            linia[1]=postwspwyb[ktorei][1];
            linia[2]=postwspwyb[ktorej][0];
            linia[3]=postwspwyb[ktorej][1];

            przeciecie(liniepostwyb[i], linia, xprz, yprz);
            liniepostwyb[i][4]=odleglosc(postwspwyb[ktorei][0],postwspwyb[ktorei][1],xprz, yprz);
        }
        else
            liniepostwyb[i][4]=-1;
    }

            int k=0; //usuniêcie tych, które siê nie przecinaj¹
            for (unsigned int j=0; j<liniepostwyb.size(); j++)
            {
                if (liniepostwyb[k][4]==-1)
                {
                    liniepostwyb.erase(liniepostwyb.begin()+k);
                    j++;
                    k--;
                }
                k++;
            }

    //sortowanie
    for (unsigned int i=0;i<liniepostwyb.size();i++)
    {
        for (unsigned int j=0;j<liniepostwyb.size()-1;j++)
        {
            if (liniepostwyb[j][4]>liniepostwyb[j+1][4] && i!=j)
            {
                liniasort=liniepostwyb[j];
                liniepostwyb[j]=liniepostwyb[j+1];
                liniepostwyb[j+1]=liniasort;
            }
        }
    }
//obliczenie "d³ugoœci" okresów
    okressred=okres1=okres2=0;
    okres1=ddop+liniepostwyb[0][4];
    okres2=ddok+odleglosc(postwspwyb[ktorei][0],postwspwyb[ktorei][1],postwspwyb[ktorej][0],postwspwyb[ktorej][1])-liniepostwyb[liniepostwyb.size()-1][4];

    okressred=liniepostwyb[liniepostwyb.size()-1][4]-liniepostwyb[0][4];
    okressred=okressred/liniepostwyb.size()-1;

    double stosp, stosk, okr, okrs;
    okr=okres1;
    okrs=okressred;
    stosp=okr/okrs;

    okr=okres2;
    stosk=okr/okrs;

    data1=datap(kwp, rokp, stosp); //wyznaczenie daty pocz¹tku
    data2=datak(kwk, rokk, stosk);

    opisstr[ktorapar][7]=data1;
    opisstr[ktorapar][9]=data2;

    data1=datap(kwp, rokp, stosp); //wyznaczenie daty pocz¹tku

                zmienna=ktorei2+1;
                napis.Printf(wxT("%.0f"),zmienna);
                opisstr[ktorapar][21]=napis;
                zmienna=ktorei2+2;
                napis.Printf(wxT("%.0f"),zmienna);
                opisstr[ktorapar][22]=napis;

                zmienna=ktorej2+1;
                napis.Printf(wxT("%.0f"),zmienna);
                opisstr[ktorapar][23]=napis;
                zmienna=ktorej2+2;
                napis.Printf(wxT("%.0f"),zmienna);
                opisstr[ktorapar][24]=napis;
    }

    funkcja();
    rysowanie(parceletab[ktorapar]);
}

void dane::OnBitmapButton1Click(wxCommandEvent& event)
{//dodanie listy

    wxString nazwa, napis;
    double zmienna;
    bool war=true;
    wxDouble liczba;
    int licz;



    if (TextEntryDialog1->ShowModal()==wxID_OK)
{
    nazwa=TextEntryDialog1->GetValue();
}

    for (unsigned int i=0;i<stery.size();i++)
    {
        napis=stery[i][0];
        napis.ToDouble(&liczba);
        licz=liczba;
       if ((i+1)!=licz)
       {
           zmienna=i+1;
           war=false;
       }
    }

    if (war)
    {
        zmienna=stery.size()+1;
    }


    zmienna=stery.size()+1;
    napis.Printf(wxT("%.0f"),zmienna);
    ster[0]=napis;

ster[1]=nazwa;
ster[2]=ster[3]=ster[4]=ster[5]="0";

    stery.push_back(ster);

    plik.open(""+projekt+"/s.str", ios::out);  //otwarcie pliku i wczytanie parcel

    ListBox1->Clear();
    for (unsigned int i=0;i<stery.size();i++)
    {
        for (unsigned j=0;j<stery[i].size();j++)
        {
            plik<<stery[i][j]<<" ";
        }
        ListBox1->Append(stery[i][1]);
        plik<<endl;
    }

    plik.close();
}

void dane::OnListBox1Select(wxCommandEvent& event)
{//wybranie zbioru
    ListBox2->Clear();

    for (unsigned j=0;j<niewybrane.size();j++)
        {
            ListBox2->Append(opisstr[niewybrane[j]][2]);
        }

    TextCtrl22->Clear();
    TextCtrl23->Clear();
    TextCtrl24->Clear();

    int ktore;
    ktore=ListBox1->GetSelection();

    wybbezster(ktore+1);

    TextCtrl23->SetValue(stery[ktore][2]);
    TextCtrl22->SetValue(stery[ktore][3]);
    TextCtrl24->SetValue(stery[ktore][4]);

  /*  wybrane.clear();

     wxString nazwa, napis;
    double zmienna;

    zmienna=ktore+1;
    napis.Printf(wxT("%.0f"),zmienna);

    for (int i=0;i<opisstr.size();i++)
    {
        if (opisstr[i][1]==napis)
        {
           wybrane.push_back(i);
        }
    }  */

    ListBox3->Clear();
    for (unsigned int i=0;i<wybrane.size();i++)
    {
        ListBox3->Append(nazwy[wybrane[i]]);
    }
}

void dane::OnBitmapButton3Click(wxCommandEvent& event)
{//dodanie parceli do zbioru
    bool war;
    war=true;

    int ktore;
    ktore=ListBox1->GetSelection();

    wxString nazwa, napis;
    double zmienna;

    zmienna=ktore+1;
    napis.Printf(wxT("%.0f"),zmienna);

    opisstr[niewybrane[ListBox2->GetSelection()]][1]=napis;

    wybbezster(ktore+1);

    ListBox2->Clear();
    for (unsigned j=0;j<niewybrane.size();j++)
        {
            ListBox2->Append(opisstr[niewybrane[j]][2]);
        }

    ListBox3->Clear();
    for (unsigned int i=0;i<wybrane.size();i++)
    {
        ListBox3->Append(opisstr[wybrane[i]][2]);
    }



}

void dane::OnButton11Click(wxCommandEvent& event)
{//zapisanie zmian
    int ktore;

    ktore=ListBox1->GetSelection();

    stery[ktore][2]=TextCtrl23->GetValue();
    stery[ktore][3]=TextCtrl22->GetValue();
    stery[ktore][4]=TextCtrl24->GetValue();

    wxString nazwa, napis;
    double zmienna;

    zmienna=ListBox3->GetCount();
    napis.Printf(wxT("%.0f"),zmienna);
    stery[ktore][5]=napis;


    for (unsigned int i=0;i<wybrane.size();i++)
    {
        opisstr[wybrane[i]][1]=stery[ktore][0];
        opisstr[wybrane[i]][3]=stery[ktore][2];
    }

    plik.open(""+projekt+"/s.str", ios::out);  //otwarcie pliku i wczytanie parcel

    for (unsigned int i=0;i<stery.size();i++)
    {
        for (unsigned j=0;j<stery[i].size();j++)
        {
            plik<<stery[i][j]<<" ";
        }
        plik<<endl;
    }

    plik.close();

    plik.open(""+projekt+"/p.par", ios::out);
    plik<<parceletab.size()<<endl;
    for (unsigned int j=0;j<parceletab.size();j++)
    {
        for (unsigned int i=0;i<opisstr[j].size();i++)
            plik<<opisstr[j][i]<<" ";
       plik<<endl<<parceletab[j].size()<<endl;
        for (unsigned int i=0;i<parceletab[j].size();i++)
        {
             plik<<parceletab[j][i][0]<<" "<<parceletab[j][i][1]<<" "<<parceletab[j][i][4]<<" "<<parceletab[j][i][5]<<" "<<parceletab[j][i][6]<<" "<<parceletab[j][i][2]<<" "<<parceletab[j][i][3]<<endl;
        }
    }
    plik.close();

}

void dane::OnBitmapButton6Click(wxCommandEvent& event)
{//usuniecie parceli ze zbioru
    int ktore;
    ktore=ListBox1->GetSelection();

    opisstr[wybrane[ListBox3->GetSelection()]][1]="0";

    wybbezster(ktore+1);

    ListBox2->Clear();
    for (unsigned j=0;j<niewybrane.size();j++)
        {
            ListBox2->Append(opisstr[niewybrane[j]][2]);
        }

    ListBox3->Clear();
    for (unsigned int i=0;i<wybrane.size();i++)
    {
        ListBox3->Append(opisstr[wybrane[i]][2]);
    }
}

void dane::OnBitmapButton2Click(wxCommandEvent& event)
{//usuniêcie zbioru
    int ktore;
    ktore=ListBox1->GetSelection();


    wxString nazwa, napis;
    double zmienna;
    wxDouble liczba;
    int licz;

    for (unsigned int i=0;i<opisstr.size();i++)
    {
        napis=opisstr[i][1];
        napis.ToDouble(&liczba);
        licz=liczba;

        if (licz==ktore+1)
        {
            opisstr[i][1]="0";
        }
    }

     stery.erase(stery.begin()+ktore);

     ListBox1->Clear();
     ListBox2->Clear();
     ListBox3->Clear();

    for (unsigned int i=0;i<stery.size();i++)
    {
        for (unsigned j=0;j<stery[i].size();j++)
        {
            plik<<stery[i][j]<<" ";
        }
        ListBox1->Append(stery[i][1]);
        plik<<endl;
    }

}
