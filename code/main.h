#include <iostream>

namespace Calculator1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ main
	/// </summary>
	public ref class main : public System::Windows::Forms::Form {
	public:
		main(void) {
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~main() {
			if (components) {
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	protected:
	private: System::Windows::Forms::Label^ ext_btn;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ Clear;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Label^ result;
	private: System::Windows::Forms::Button^ All_clear;
	private: System::Windows::Forms::Button^ minus_or_plus;
	private: System::Windows::Forms::Button^ delenie;
	private: System::Windows::Forms::Button^ one;
	private: System::Windows::Forms::Button^ two;
	private: System::Windows::Forms::Button^ three;
	private: System::Windows::Forms::Button^ umnojenie;

	private: System::Windows::Forms::Button^ five;
	private: System::Windows::Forms::Button^ six;
	private: System::Windows::Forms::Button^ minus;
	private: System::Windows::Forms::Button^ seven;
	private: System::Windows::Forms::Button^ eight;
	private: System::Windows::Forms::Button^ nine;
	private: System::Windows::Forms::Button^ plus;
	private: System::Windows::Forms::Button^ zero;

	private: System::Windows::Forms::Button^ res;
	private: System::Windows::Forms::Button^ fore;
	private: float first_number = 0, second_number = 0;
	private: char user_match = '0';
	private: bool choice_did = false, res_done = false, to_float = false;
	private: float tes = 0;




	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void) {
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(main::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->ext_btn = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->Clear = (gcnew System::Windows::Forms::Button());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->result = (gcnew System::Windows::Forms::Label());
			this->All_clear = (gcnew System::Windows::Forms::Button());
			this->minus_or_plus = (gcnew System::Windows::Forms::Button());
			this->delenie = (gcnew System::Windows::Forms::Button());
			this->one = (gcnew System::Windows::Forms::Button());
			this->two = (gcnew System::Windows::Forms::Button());
			this->three = (gcnew System::Windows::Forms::Button());
			this->umnojenie = (gcnew System::Windows::Forms::Button());
			this->five = (gcnew System::Windows::Forms::Button());
			this->six = (gcnew System::Windows::Forms::Button());
			this->minus = (gcnew System::Windows::Forms::Button());
			this->seven = (gcnew System::Windows::Forms::Button());
			this->eight = (gcnew System::Windows::Forms::Button());
			this->nine = (gcnew System::Windows::Forms::Button());
			this->plus = (gcnew System::Windows::Forms::Button());
			this->zero = (gcnew System::Windows::Forms::Button());
			this->res = (gcnew System::Windows::Forms::Button());
			this->fore = (gcnew System::Windows::Forms::Button());
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(115)), static_cast<System::Int32>(static_cast<System::Byte>(115)),
				static_cast<System::Int32>(static_cast<System::Byte>(115)));
			this->panel1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel1->Controls->Add(this->ext_btn);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Cursor = System::Windows::Forms::Cursors::Default;
			this->panel1->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(282, 25);
			this->panel1->TabIndex = 0;
			// 
			// ext_btn
			// 
			this->ext_btn->AutoSize = true;
			this->ext_btn->Cursor = System::Windows::Forms::Cursors::Hand;
			this->ext_btn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->ext_btn->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(230)), static_cast<System::Int32>(static_cast<System::Byte>(46)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->ext_btn->Location = System::Drawing::Point(262, 5);
			this->ext_btn->Name = L"ext_btn";
			this->ext_btn->Size = System::Drawing::Size(16, 16);
			this->ext_btn->TabIndex = 1;
			this->ext_btn->Text = L"X";
			this->ext_btn->Click += gcnew System::EventHandler(this, &main::ext_btn_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(115)), static_cast<System::Int32>(static_cast<System::Byte>(115)),
				static_cast<System::Int32>(static_cast<System::Byte>(115)));
			this->label1->Cursor = System::Windows::Forms::Cursors::Help;
			this->label1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(179)), static_cast<System::Int32>(static_cast<System::Byte>(179)),
				static_cast<System::Int32>(static_cast<System::Byte>(179)));
			this->label1->Location = System::Drawing::Point(3, 5);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(192, 16);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Calculator By. Lonewolf239";
			this->label1->Click += gcnew System::EventHandler(this, &main::label1_Click);
			// 
			// Clear
			// 
			this->Clear->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(230)), static_cast<System::Int32>(static_cast<System::Byte>(138)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->Clear->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Clear->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold));
			this->Clear->Location = System::Drawing::Point(12, 97);
			this->Clear->Name = L"Clear";
			this->Clear->Size = System::Drawing::Size(60, 60);
			this->Clear->TabIndex = 1;
			this->Clear->Text = L"C";
			this->Clear->UseVisualStyleBackColor = false;
			this->Clear->Click += gcnew System::EventHandler(this, &main::Clear_Click);
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(120)), static_cast<System::Int32>(static_cast<System::Byte>(120)),
				static_cast<System::Int32>(static_cast<System::Byte>(120)));
			this->panel2->Controls->Add(this->result);
			this->panel2->Location = System::Drawing::Point(12, 31);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(258, 60);
			this->panel2->TabIndex = 2;
			// 
			// result
			// 
			this->result->Anchor = System::Windows::Forms::AnchorStyles::Right;
			this->result->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->result->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->result->ForeColor = System::Drawing::Color::White;
			this->result->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->result->Location = System::Drawing::Point(3, 9);
			this->result->Name = L"result";
			this->result->Size = System::Drawing::Size(252, 42);
			this->result->TabIndex = 0;
			this->result->Text = L"0";
			this->result->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// All_clear
			// 
			this->All_clear->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(230)), static_cast<System::Int32>(static_cast<System::Byte>(138)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->All_clear->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->All_clear->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->All_clear->Location = System::Drawing::Point(78, 97);
			this->All_clear->Name = L"All_clear";
			this->All_clear->Size = System::Drawing::Size(60, 60);
			this->All_clear->TabIndex = 3;
			this->All_clear->Text = L"AC";
			this->All_clear->UseVisualStyleBackColor = false;
			this->All_clear->Click += gcnew System::EventHandler(this, &main::All_clear_Click);
			// 
			// minus_or_plus
			// 
			this->minus_or_plus->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(230)), static_cast<System::Int32>(static_cast<System::Byte>(138)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->minus_or_plus->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->minus_or_plus->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold));
			this->minus_or_plus->Location = System::Drawing::Point(144, 97);
			this->minus_or_plus->Name = L"minus_or_plus";
			this->minus_or_plus->Size = System::Drawing::Size(60, 60);
			this->minus_or_plus->TabIndex = 4;
			this->minus_or_plus->Text = L"+/-";
			this->minus_or_plus->UseVisualStyleBackColor = false;
			this->minus_or_plus->Click += gcnew System::EventHandler(this, &main::minus_or_plus_Click);
			// 
			// delenie
			// 
			this->delenie->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(230)), static_cast<System::Int32>(static_cast<System::Byte>(138)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->delenie->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->delenie->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold));
			this->delenie->Location = System::Drawing::Point(210, 97);
			this->delenie->Name = L"delenie";
			this->delenie->Size = System::Drawing::Size(60, 60);
			this->delenie->TabIndex = 5;
			this->delenie->Text = L"/";
			this->delenie->UseVisualStyleBackColor = false;
			this->delenie->Click += gcnew System::EventHandler(this, &main::delenie_Click);
			// 
			// one
			// 
			this->one->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(179)), static_cast<System::Int32>(static_cast<System::Byte>(179)),
				static_cast<System::Int32>(static_cast<System::Byte>(179)));
			this->one->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->one->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold));
			this->one->Location = System::Drawing::Point(12, 163);
			this->one->Name = L"one";
			this->one->Size = System::Drawing::Size(60, 60);
			this->one->TabIndex = 6;
			this->one->Text = L"1";
			this->one->UseVisualStyleBackColor = false;
			this->one->Click += gcnew System::EventHandler(this, &main::add_number);
			// 
			// two
			// 
			this->two->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(179)), static_cast<System::Int32>(static_cast<System::Byte>(179)),
				static_cast<System::Int32>(static_cast<System::Byte>(179)));
			this->two->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->two->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold));
			this->two->Location = System::Drawing::Point(78, 163);
			this->two->Name = L"two";
			this->two->Size = System::Drawing::Size(60, 60);
			this->two->TabIndex = 7;
			this->two->Text = L"2";
			this->two->UseVisualStyleBackColor = false;
			this->two->Click += gcnew System::EventHandler(this, &main::add_number);
			// 
			// three
			// 
			this->three->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(179)), static_cast<System::Int32>(static_cast<System::Byte>(179)),
				static_cast<System::Int32>(static_cast<System::Byte>(179)));
			this->three->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->three->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold));
			this->three->Location = System::Drawing::Point(144, 163);
			this->three->Name = L"three";
			this->three->Size = System::Drawing::Size(60, 60);
			this->three->TabIndex = 8;
			this->three->Text = L"3";
			this->three->UseVisualStyleBackColor = false;
			this->three->Click += gcnew System::EventHandler(this, &main::add_number);
			// 
			// umnojenie
			// 
			this->umnojenie->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(230)), static_cast<System::Int32>(static_cast<System::Byte>(138)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->umnojenie->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->umnojenie->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold));
			this->umnojenie->Location = System::Drawing::Point(210, 163);
			this->umnojenie->Name = L"umnojenie";
			this->umnojenie->Size = System::Drawing::Size(60, 60);
			this->umnojenie->TabIndex = 9;
			this->umnojenie->Text = L"*";
			this->umnojenie->UseVisualStyleBackColor = false;
			this->umnojenie->Click += gcnew System::EventHandler(this, &main::umnojenie_Click);
			// 
			// five
			// 
			this->five->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(179)), static_cast<System::Int32>(static_cast<System::Byte>(179)),
				static_cast<System::Int32>(static_cast<System::Byte>(179)));
			this->five->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->five->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold));
			this->five->Location = System::Drawing::Point(78, 229);
			this->five->Name = L"five";
			this->five->Size = System::Drawing::Size(60, 60);
			this->five->TabIndex = 11;
			this->five->Text = L"5";
			this->five->UseVisualStyleBackColor = false;
			this->five->Click += gcnew System::EventHandler(this, &main::add_number);
			// 
			// six
			// 
			this->six->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(179)), static_cast<System::Int32>(static_cast<System::Byte>(179)),
				static_cast<System::Int32>(static_cast<System::Byte>(179)));
			this->six->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->six->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold));
			this->six->Location = System::Drawing::Point(144, 229);
			this->six->Name = L"six";
			this->six->Size = System::Drawing::Size(60, 60);
			this->six->TabIndex = 12;
			this->six->Text = L"6";
			this->six->UseVisualStyleBackColor = false;
			this->six->Click += gcnew System::EventHandler(this, &main::add_number);
			// 
			// minus
			// 
			this->minus->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(230)), static_cast<System::Int32>(static_cast<System::Byte>(138)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->minus->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->minus->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold));
			this->minus->Location = System::Drawing::Point(210, 229);
			this->minus->Name = L"minus";
			this->minus->Size = System::Drawing::Size(60, 60);
			this->minus->TabIndex = 13;
			this->minus->Text = L"-";
			this->minus->UseVisualStyleBackColor = false;
			this->minus->Click += gcnew System::EventHandler(this, &main::minus_Click);
			// 
			// seven
			// 
			this->seven->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(179)), static_cast<System::Int32>(static_cast<System::Byte>(179)),
				static_cast<System::Int32>(static_cast<System::Byte>(179)));
			this->seven->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->seven->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold));
			this->seven->Location = System::Drawing::Point(12, 295);
			this->seven->Name = L"seven";
			this->seven->Size = System::Drawing::Size(60, 60);
			this->seven->TabIndex = 14;
			this->seven->Text = L"7";
			this->seven->UseVisualStyleBackColor = false;
			this->seven->Click += gcnew System::EventHandler(this, &main::add_number);
			// 
			// eight
			// 
			this->eight->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(179)), static_cast<System::Int32>(static_cast<System::Byte>(179)),
				static_cast<System::Int32>(static_cast<System::Byte>(179)));
			this->eight->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->eight->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold));
			this->eight->Location = System::Drawing::Point(78, 295);
			this->eight->Name = L"eight";
			this->eight->Size = System::Drawing::Size(60, 60);
			this->eight->TabIndex = 15;
			this->eight->Text = L"8";
			this->eight->UseVisualStyleBackColor = false;
			this->eight->Click += gcnew System::EventHandler(this, &main::add_number);
			// 
			// nine
			// 
			this->nine->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(179)), static_cast<System::Int32>(static_cast<System::Byte>(179)),
				static_cast<System::Int32>(static_cast<System::Byte>(179)));
			this->nine->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->nine->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold));
			this->nine->Location = System::Drawing::Point(144, 295);
			this->nine->Name = L"nine";
			this->nine->Size = System::Drawing::Size(60, 60);
			this->nine->TabIndex = 16;
			this->nine->Text = L"9";
			this->nine->UseVisualStyleBackColor = false;
			this->nine->Click += gcnew System::EventHandler(this, &main::add_number);
			// 
			// plus
			// 
			this->plus->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(230)), static_cast<System::Int32>(static_cast<System::Byte>(138)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->plus->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->plus->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold));
			this->plus->Location = System::Drawing::Point(210, 295);
			this->plus->Name = L"plus";
			this->plus->Size = System::Drawing::Size(60, 60);
			this->plus->TabIndex = 17;
			this->plus->Text = L"+";
			this->plus->UseVisualStyleBackColor = false;
			this->plus->Click += gcnew System::EventHandler(this, &main::plus_Click);
			// 
			// zero
			// 
			this->zero->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(179)), static_cast<System::Int32>(static_cast<System::Byte>(179)),
				static_cast<System::Int32>(static_cast<System::Byte>(179)));
			this->zero->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->zero->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold));
			this->zero->Location = System::Drawing::Point(12, 361);
			this->zero->Name = L"zero";
			this->zero->Size = System::Drawing::Size(192, 60);
			this->zero->TabIndex = 18;
			this->zero->Text = L"0";
			this->zero->UseVisualStyleBackColor = false;
			this->zero->Click += gcnew System::EventHandler(this, &main::add_number);
			// 
			// res
			// 
			this->res->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(230)), static_cast<System::Int32>(static_cast<System::Byte>(138)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->res->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->res->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold));
			this->res->Location = System::Drawing::Point(210, 361);
			this->res->Name = L"res";
			this->res->Size = System::Drawing::Size(60, 60);
			this->res->TabIndex = 21;
			this->res->Text = L"=";
			this->res->UseVisualStyleBackColor = false;
			this->res->Click += gcnew System::EventHandler(this, &main::res_Click);
			// 
			// fore
			// 
			this->fore->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(179)), static_cast<System::Int32>(static_cast<System::Byte>(179)),
				static_cast<System::Int32>(static_cast<System::Byte>(179)));
			this->fore->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->fore->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold));
			this->fore->Location = System::Drawing::Point(12, 229);
			this->fore->Name = L"fore";
			this->fore->Size = System::Drawing::Size(60, 60);
			this->fore->TabIndex = 10;
			this->fore->Text = L"4";
			this->fore->UseVisualStyleBackColor = false;
			this->fore->Click += gcnew System::EventHandler(this, &main::add_number);
			// 
			// main
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(102)), static_cast<System::Int32>(static_cast<System::Byte>(102)),
				static_cast<System::Int32>(static_cast<System::Byte>(102)));
			this->ClientSize = System::Drawing::Size(282, 433);
			this->Controls->Add(this->res);
			this->Controls->Add(this->zero);
			this->Controls->Add(this->plus);
			this->Controls->Add(this->nine);
			this->Controls->Add(this->eight);
			this->Controls->Add(this->seven);
			this->Controls->Add(this->minus);
			this->Controls->Add(this->six);
			this->Controls->Add(this->five);
			this->Controls->Add(this->fore);
			this->Controls->Add(this->umnojenie);
			this->Controls->Add(this->three);
			this->Controls->Add(this->two);
			this->Controls->Add(this->one);
			this->Controls->Add(this->delenie);
			this->Controls->Add(this->minus_or_plus);
			this->Controls->Add(this->All_clear);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->Clear);
			this->Controls->Add(this->panel1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"main";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"main";
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->ResumeLayout(false);

		}
	private: System::Void ext_btn_Click(System::Object^ sender, System::EventArgs^ e) {
		Application::Exit();
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
		system("explorer https://t.me/+VLJzjVRg8ElkZWYy");
	}
	private: System::Void delenie_Click(System::Object^ sender, System::EventArgs^ e) {
		math_doing('/');
	}
	private: System::Void umnojenie_Click(System::Object^ sender, System::EventArgs^ e) {
		math_doing('*');
	}
	private: System::Void minus_Click(System::Object^ sender, System::EventArgs^ e) {
		math_doing('-');
	}
	private: System::Void plus_Click(System::Object^ sender, System::EventArgs^ e) {
		math_doing('+');
	}
	private: System::Void add_number(System::Object^ sender, System::EventArgs^ e) {
		this->result->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(204)));
		if (this->res_done) {
			this->result->Text = "0";
			this->res_done = false;
		}
		if (System::Convert::ToInt32(this->result->Text) > 9999)
			return;
		if (this->result->Text == "0")
			this->result->Text = "";
		Button^ button = safe_cast <Button^>(sender);
		this->result->Text += button->Text;
	}
	private: System::Void res_Click(System::Object^ sender, System::EventArgs^ e) {
		doing_result();
	}
	private: System::Void math_doing(char match_do) {
		if (this->choice_did || this->res_done)
			return;
		this->first_number = System::Convert::ToInt32(this->result->Text);
		this->user_match = match_do;
		this->result->Text = "0";
		this->choice_did = true;
	}
	private: System::Void doing_result() {
		if (this->choice_did) {
			this->second_number = System::Convert::ToInt32(this->result->Text);
			this->res_done = true;
			switch (this->user_match) {
			case '/':
				if (this->second_number == 0) {
					this->result->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.0F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
						static_cast<System::Byte>(204)));
					this->result->Text = "Error\nDivision by 0";
					this->choice_did = false;
					return;
				}
				this->tes = this->first_number / this->second_number;
				this->result->Text = System::Convert::ToString(this->tes);
				break;
			case '*':
				this->tes = this->first_number * this->second_number;
				this->result->Text = System::Convert::ToString(this->tes);
				break;
			case '-':
				this->tes = this->first_number - this->second_number;
				this->result->Text = System::Convert::ToString(this->tes);
				break;
			case '+':
				this->tes = this->first_number + this->second_number;
				this->result->Text = System::Convert::ToString(this->tes);
				break;
			}
			this->choice_did = false;
		}
	}
	private: System::Void Clear_Click(System::Object^ sender, System::EventArgs^ e) {
		this->result->Text = "0";
	}
	private: System::Void All_clear_Click(System::Object^ sender, System::EventArgs^ e) {
		this->result->Text = "0";
		this->first_number = 0;
		this->second_number = 0;
		this->user_match = '0';
		this->choice_did = false;
		this->res_done = false;
		this->tes = 0;
	}
	private: System::Void minus_or_plus_Click(System::Object^ sender, System::EventArgs^ e) {
		if (this->res_done) {
			this->result->Text = "0";
			this->res_done = false;
			return;
		}
		int new_num = System::Convert::ToInt32(this->result->Text);
		new_num *= -1;
		this->result->Text = System::Convert::ToString(new_num);
	}
};
}
