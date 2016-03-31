#pragma once
#include "Juego.h"
namespace FireEmblem {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Text::RegularExpressions;
	using namespace System::IO;

	/// <summary>
	/// Resumen de Registro
	/// </summary>
	public ref class Registro : public System::Windows::Forms::Form
	{
	public:
		Registro(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~Registro()
		{
			if (components)
			{
				delete components;
			}
		}

	protected: 
	private: System::Windows::Forms::PictureBox^  pictureBox15;
	private: System::Windows::Forms::PictureBox^  pictureBox14;
	private: System::Windows::Forms::PictureBox^  pictureBox13;
	private: System::Windows::Forms::PictureBox^  pictureBox12;
	private: System::Windows::Forms::PictureBox^  pictureBox11;
	private: System::Windows::Forms::PictureBox^  pictureBox6;
	private: System::Windows::Forms::PictureBox^  pictureBox7;
	private: System::Windows::Forms::PictureBox^  pictureBox8;
	private: System::Windows::Forms::PictureBox^  pictureBox9;
	private: System::Windows::Forms::PictureBox^  pictureBox10;
	private: System::Windows::Forms::PictureBox^  pictureBox5;
	private: System::Windows::Forms::PictureBox^  pictureBox4;
	private: System::Windows::Forms::PictureBox^  pictureBox3;
	private: System::Windows::Forms::PictureBox^  pictureBox2;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::CheckBox^  unidadAzul5;



	private: System::Windows::Forms::CheckBox^  unidadAzul4;

	private: System::Windows::Forms::CheckBox^  unidadAzul3;

	private: System::Windows::Forms::CheckBox^  unidadAzul2;

	private: System::Windows::Forms::CheckBox^  unidadAzul1;

	private: System::Windows::Forms::CheckBox^  unidadRojo5;

	private: System::Windows::Forms::CheckBox^  unidadRojo4;

	private: System::Windows::Forms::CheckBox^  unidadRojo3;

	private: System::Windows::Forms::CheckBox^  unidadRojo2;

	private: System::Windows::Forms::CheckBox^  unidadRojo1;

	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::TextBox^  blueName;

	private: System::Windows::Forms::TextBox^  redName;

	private: System::Windows::Forms::RadioButton^  armaRojo1;
	private: System::Windows::Forms::RadioButton^  armaRojo2;
	private: System::Windows::Forms::RadioButton^  armaRojo3;
	private: System::Windows::Forms::RadioButton^  armaAzul3;




	private: System::Windows::Forms::RadioButton^  armaAzul2;

	private: System::Windows::Forms::RadioButton^  armaAzul1;



	private: System::Windows::Forms::PictureBox^  pictureBox16;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::GroupBox^  groupBox2;
	private: System::Windows::Forms::Button^  helpButton;




	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Registro::typeid));
			this->pictureBox15 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox14 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox13 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox12 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox11 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox7 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox8 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox9 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox10 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->unidadAzul5 = (gcnew System::Windows::Forms::CheckBox());
			this->unidadAzul4 = (gcnew System::Windows::Forms::CheckBox());
			this->unidadAzul3 = (gcnew System::Windows::Forms::CheckBox());
			this->unidadAzul2 = (gcnew System::Windows::Forms::CheckBox());
			this->unidadAzul1 = (gcnew System::Windows::Forms::CheckBox());
			this->unidadRojo5 = (gcnew System::Windows::Forms::CheckBox());
			this->unidadRojo4 = (gcnew System::Windows::Forms::CheckBox());
			this->unidadRojo3 = (gcnew System::Windows::Forms::CheckBox());
			this->unidadRojo2 = (gcnew System::Windows::Forms::CheckBox());
			this->unidadRojo1 = (gcnew System::Windows::Forms::CheckBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->blueName = (gcnew System::Windows::Forms::TextBox());
			this->redName = (gcnew System::Windows::Forms::TextBox());
			this->armaRojo1 = (gcnew System::Windows::Forms::RadioButton());
			this->armaRojo2 = (gcnew System::Windows::Forms::RadioButton());
			this->armaRojo3 = (gcnew System::Windows::Forms::RadioButton());
			this->armaAzul3 = (gcnew System::Windows::Forms::RadioButton());
			this->armaAzul2 = (gcnew System::Windows::Forms::RadioButton());
			this->armaAzul1 = (gcnew System::Windows::Forms::RadioButton());
			this->pictureBox16 = (gcnew System::Windows::Forms::PictureBox());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->helpButton = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox15))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox14))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox13))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox12))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox11))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox10))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox16))->BeginInit();
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->SuspendLayout();
			// 
			// pictureBox15
			// 
			this->pictureBox15->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox15->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox15->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox15->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox15.Image")));
			this->pictureBox15->Location = System::Drawing::Point(67, 18);
			this->pictureBox15->Margin = System::Windows::Forms::Padding(2);
			this->pictureBox15->Name = L"pictureBox15";
			this->pictureBox15->Size = System::Drawing::Size(54, 34);
			this->pictureBox15->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox15->TabIndex = 103;
			this->pictureBox15->TabStop = false;
			// 
			// pictureBox14
			// 
			this->pictureBox14->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox14->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox14->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox14->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox14.Image")));
			this->pictureBox14->Location = System::Drawing::Point(5, 18);
			this->pictureBox14->Margin = System::Windows::Forms::Padding(2);
			this->pictureBox14->Name = L"pictureBox14";
			this->pictureBox14->Size = System::Drawing::Size(52, 34);
			this->pictureBox14->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox14->TabIndex = 102;
			this->pictureBox14->TabStop = false;
			// 
			// pictureBox13
			// 
			this->pictureBox13->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox13->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox13->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox13->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox13.Image")));
			this->pictureBox13->Location = System::Drawing::Point(141, 18);
			this->pictureBox13->Margin = System::Windows::Forms::Padding(2);
			this->pictureBox13->Name = L"pictureBox13";
			this->pictureBox13->Size = System::Drawing::Size(53, 34);
			this->pictureBox13->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox13->TabIndex = 101;
			this->pictureBox13->TabStop = false;
			// 
			// pictureBox12
			// 
			this->pictureBox12->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox12->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox12->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox12->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox12.Image")));
			this->pictureBox12->Location = System::Drawing::Point(75, 18);
			this->pictureBox12->Margin = System::Windows::Forms::Padding(2);
			this->pictureBox12->Name = L"pictureBox12";
			this->pictureBox12->Size = System::Drawing::Size(53, 34);
			this->pictureBox12->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox12->TabIndex = 100;
			this->pictureBox12->TabStop = false;
			// 
			// pictureBox11
			// 
			this->pictureBox11->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox11->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox11->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox11->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox11.Image")));
			this->pictureBox11->Location = System::Drawing::Point(12, 18);
			this->pictureBox11->Margin = System::Windows::Forms::Padding(2);
			this->pictureBox11->Name = L"pictureBox11";
			this->pictureBox11->Size = System::Drawing::Size(52, 34);
			this->pictureBox11->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox11->TabIndex = 99;
			this->pictureBox11->TabStop = false;
			// 
			// pictureBox6
			// 
			this->pictureBox6->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox6->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox6->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox6.Image")));
			this->pictureBox6->Location = System::Drawing::Point(561, 346);
			this->pictureBox6->Margin = System::Windows::Forms::Padding(2);
			this->pictureBox6->Name = L"pictureBox6";
			this->pictureBox6->Size = System::Drawing::Size(76, 41);
			this->pictureBox6->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox6->TabIndex = 98;
			this->pictureBox6->TabStop = false;
			this->pictureBox6->Click += gcnew System::EventHandler(this, &Registro::pictureBox6_Click);
			// 
			// pictureBox7
			// 
			this->pictureBox7->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox7->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox7->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox7->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox7.Image")));
			this->pictureBox7->Location = System::Drawing::Point(561, 289);
			this->pictureBox7->Margin = System::Windows::Forms::Padding(2);
			this->pictureBox7->Name = L"pictureBox7";
			this->pictureBox7->Size = System::Drawing::Size(76, 41);
			this->pictureBox7->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox7->TabIndex = 97;
			this->pictureBox7->TabStop = false;
			this->pictureBox7->Click += gcnew System::EventHandler(this, &Registro::pictureBox7_Click);
			// 
			// pictureBox8
			// 
			this->pictureBox8->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox8->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox8->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox8->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox8.Image")));
			this->pictureBox8->Location = System::Drawing::Point(561, 236);
			this->pictureBox8->Margin = System::Windows::Forms::Padding(2);
			this->pictureBox8->Name = L"pictureBox8";
			this->pictureBox8->Size = System::Drawing::Size(76, 41);
			this->pictureBox8->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox8->TabIndex = 96;
			this->pictureBox8->TabStop = false;
			this->pictureBox8->Click += gcnew System::EventHandler(this, &Registro::pictureBox8_Click);
			// 
			// pictureBox9
			// 
			this->pictureBox9->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox9->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox9->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox9->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox9.Image")));
			this->pictureBox9->Location = System::Drawing::Point(561, 182);
			this->pictureBox9->Margin = System::Windows::Forms::Padding(2);
			this->pictureBox9->Name = L"pictureBox9";
			this->pictureBox9->Size = System::Drawing::Size(76, 41);
			this->pictureBox9->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox9->TabIndex = 95;
			this->pictureBox9->TabStop = false;
			this->pictureBox9->Click += gcnew System::EventHandler(this, &Registro::pictureBox9_Click);
			// 
			// pictureBox10
			// 
			this->pictureBox10->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox10->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox10->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox10->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox10.Image")));
			this->pictureBox10->Location = System::Drawing::Point(561, 128);
			this->pictureBox10->Margin = System::Windows::Forms::Padding(2);
			this->pictureBox10->Name = L"pictureBox10";
			this->pictureBox10->Size = System::Drawing::Size(76, 41);
			this->pictureBox10->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox10->TabIndex = 94;
			this->pictureBox10->TabStop = false;
			this->pictureBox10->Click += gcnew System::EventHandler(this, &Registro::pictureBox10_Click);
			// 
			// pictureBox5
			// 
			this->pictureBox5->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox5->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox5->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox5.Image")));
			this->pictureBox5->Location = System::Drawing::Point(127, 346);
			this->pictureBox5->Margin = System::Windows::Forms::Padding(2);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(76, 41);
			this->pictureBox5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox5->TabIndex = 93;
			this->pictureBox5->TabStop = false;
			this->pictureBox5->Click += gcnew System::EventHandler(this, &Registro::pictureBox5_Click);
			// 
			// pictureBox4
			// 
			this->pictureBox4->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox4->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox4->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.Image")));
			this->pictureBox4->Location = System::Drawing::Point(127, 289);
			this->pictureBox4->Margin = System::Windows::Forms::Padding(2);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(76, 41);
			this->pictureBox4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox4->TabIndex = 92;
			this->pictureBox4->TabStop = false;
			this->pictureBox4->Click += gcnew System::EventHandler(this, &Registro::pictureBox4_Click);
			// 
			// pictureBox3
			// 
			this->pictureBox3->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox3->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(127, 236);
			this->pictureBox3->Margin = System::Windows::Forms::Padding(2);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(76, 41);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox3->TabIndex = 91;
			this->pictureBox3->TabStop = false;
			this->pictureBox3->Click += gcnew System::EventHandler(this, &Registro::pictureBox3_Click);
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(127, 182);
			this->pictureBox2->Margin = System::Windows::Forms::Padding(2);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(76, 41);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox2->TabIndex = 90;
			this->pictureBox2->TabStop = false;
			this->pictureBox2->Click += gcnew System::EventHandler(this, &Registro::pictureBox2_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(127, 128);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(2);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(76, 41);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 89;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &Registro::pictureBox1_Click);
			// 
			// unidadAzul5
			// 
			this->unidadAzul5->AutoSize = true;
			this->unidadAzul5->BackColor = System::Drawing::Color::Transparent;
			this->unidadAzul5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->unidadAzul5->ForeColor = System::Drawing::Color::DimGray;
			this->unidadAzul5->Location = System::Drawing::Point(447, 355);
			this->unidadAzul5->Margin = System::Windows::Forms::Padding(2);
			this->unidadAzul5->Name = L"unidadAzul5";
			this->unidadAzul5->Size = System::Drawing::Size(92, 24);
			this->unidadAzul5->TabIndex = 86;
			this->unidadAzul5->Text = L"Mirmidon";
			this->unidadAzul5->UseVisualStyleBackColor = false;
			this->unidadAzul5->CheckedChanged += gcnew System::EventHandler(this, &Registro::unidadAzul5_CheckedChanged);
			// 
			// unidadAzul4
			// 
			this->unidadAzul4->AutoSize = true;
			this->unidadAzul4->BackColor = System::Drawing::Color::Transparent;
			this->unidadAzul4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->unidadAzul4->ForeColor = System::Drawing::Color::DimGray;
			this->unidadAzul4->Location = System::Drawing::Point(447, 298);
			this->unidadAzul4->Margin = System::Windows::Forms::Padding(2);
			this->unidadAzul4->Name = L"unidadAzul4";
			this->unidadAzul4->Size = System::Drawing::Size(107, 24);
			this->unidadAzul4->TabIndex = 85;
			this->unidadAzul4->Text = L"Mercenario";
			this->unidadAzul4->UseVisualStyleBackColor = false;
			this->unidadAzul4->CheckedChanged += gcnew System::EventHandler(this, &Registro::unidadAzul4_CheckedChanged);
			// 
			// unidadAzul3
			// 
			this->unidadAzul3->AutoSize = true;
			this->unidadAzul3->BackColor = System::Drawing::Color::Transparent;
			this->unidadAzul3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->unidadAzul3->ForeColor = System::Drawing::Color::DimGray;
			this->unidadAzul3->Location = System::Drawing::Point(447, 245);
			this->unidadAzul3->Margin = System::Windows::Forms::Padding(2);
			this->unidadAzul3->Name = L"unidadAzul3";
			this->unidadAzul3->Size = System::Drawing::Size(95, 24);
			this->unidadAzul3->TabIndex = 84;
			this->unidadAzul3->Text = L"Luchador";
			this->unidadAzul3->UseVisualStyleBackColor = false;
			this->unidadAzul3->CheckedChanged += gcnew System::EventHandler(this, &Registro::unidadAzul3_CheckedChanged);
			// 
			// unidadAzul2
			// 
			this->unidadAzul2->AutoSize = true;
			this->unidadAzul2->BackColor = System::Drawing::Color::Transparent;
			this->unidadAzul2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->unidadAzul2->ForeColor = System::Drawing::Color::DimGray;
			this->unidadAzul2->Location = System::Drawing::Point(447, 192);
			this->unidadAzul2->Margin = System::Windows::Forms::Padding(2);
			this->unidadAzul2->Name = L"unidadAzul2";
			this->unidadAzul2->Size = System::Drawing::Size(95, 24);
			this->unidadAzul2->TabIndex = 83;
			this->unidadAzul2->Text = L"Caballero";
			this->unidadAzul2->UseVisualStyleBackColor = false;
			this->unidadAzul2->CheckedChanged += gcnew System::EventHandler(this, &Registro::unidadAzul2_CheckedChanged);
			// 
			// unidadAzul1
			// 
			this->unidadAzul1->AutoSize = true;
			this->unidadAzul1->BackColor = System::Drawing::Color::Transparent;
			this->unidadAzul1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->unidadAzul1->ForeColor = System::Drawing::Color::DimGray;
			this->unidadAzul1->Location = System::Drawing::Point(447, 137);
			this->unidadAzul1->Margin = System::Windows::Forms::Padding(2);
			this->unidadAzul1->Name = L"unidadAzul1";
			this->unidadAzul1->Size = System::Drawing::Size(71, 24);
			this->unidadAzul1->TabIndex = 82;
			this->unidadAzul1->Text = L"Jinete";
			this->unidadAzul1->UseVisualStyleBackColor = false;
			this->unidadAzul1->CheckedChanged += gcnew System::EventHandler(this, &Registro::unidadAzul1_CheckedChanged);
			// 
			// unidadRojo5
			// 
			this->unidadRojo5->AutoSize = true;
			this->unidadRojo5->BackColor = System::Drawing::Color::Transparent;
			this->unidadRojo5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->unidadRojo5->ForeColor = System::Drawing::Color::DimGray;
			this->unidadRojo5->Location = System::Drawing::Point(25, 355);
			this->unidadRojo5->Margin = System::Windows::Forms::Padding(2);
			this->unidadRojo5->Name = L"unidadRojo5";
			this->unidadRojo5->Size = System::Drawing::Size(92, 24);
			this->unidadRojo5->TabIndex = 81;
			this->unidadRojo5->Text = L"Mirmidon";
			this->unidadRojo5->UseVisualStyleBackColor = false;
			this->unidadRojo5->CheckedChanged += gcnew System::EventHandler(this, &Registro::unidadRojo5_CheckedChanged);
			// 
			// unidadRojo4
			// 
			this->unidadRojo4->AutoSize = true;
			this->unidadRojo4->BackColor = System::Drawing::Color::Transparent;
			this->unidadRojo4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->unidadRojo4->ForeColor = System::Drawing::Color::DimGray;
			this->unidadRojo4->Location = System::Drawing::Point(23, 298);
			this->unidadRojo4->Margin = System::Windows::Forms::Padding(2);
			this->unidadRojo4->Name = L"unidadRojo4";
			this->unidadRojo4->Size = System::Drawing::Size(107, 24);
			this->unidadRojo4->TabIndex = 80;
			this->unidadRojo4->Text = L"Mercenario";
			this->unidadRojo4->UseVisualStyleBackColor = false;
			this->unidadRojo4->CheckedChanged += gcnew System::EventHandler(this, &Registro::unidadRojo4_CheckedChanged);
			// 
			// unidadRojo3
			// 
			this->unidadRojo3->AutoSize = true;
			this->unidadRojo3->BackColor = System::Drawing::Color::Transparent;
			this->unidadRojo3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->unidadRojo3->ForeColor = System::Drawing::Color::DimGray;
			this->unidadRojo3->Location = System::Drawing::Point(23, 245);
			this->unidadRojo3->Margin = System::Windows::Forms::Padding(2);
			this->unidadRojo3->Name = L"unidadRojo3";
			this->unidadRojo3->Size = System::Drawing::Size(95, 24);
			this->unidadRojo3->TabIndex = 79;
			this->unidadRojo3->Text = L"Luchador";
			this->unidadRojo3->UseVisualStyleBackColor = false;
			this->unidadRojo3->CheckedChanged += gcnew System::EventHandler(this, &Registro::unidadRojo3_CheckedChanged);
			// 
			// unidadRojo2
			// 
			this->unidadRojo2->AutoSize = true;
			this->unidadRojo2->BackColor = System::Drawing::Color::Transparent;
			this->unidadRojo2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->unidadRojo2->ForeColor = System::Drawing::Color::DimGray;
			this->unidadRojo2->Location = System::Drawing::Point(22, 192);
			this->unidadRojo2->Margin = System::Windows::Forms::Padding(2);
			this->unidadRojo2->Name = L"unidadRojo2";
			this->unidadRojo2->Size = System::Drawing::Size(95, 24);
			this->unidadRojo2->TabIndex = 78;
			this->unidadRojo2->Text = L"Caballero";
			this->unidadRojo2->UseVisualStyleBackColor = false;
			this->unidadRojo2->CheckedChanged += gcnew System::EventHandler(this, &Registro::unidadRojo2_CheckedChanged);
			// 
			// unidadRojo1
			// 
			this->unidadRojo1->AutoSize = true;
			this->unidadRojo1->BackColor = System::Drawing::Color::Transparent;
			this->unidadRojo1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"unidadRojo1.BackgroundImage")));
			this->unidadRojo1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->unidadRojo1->ForeColor = System::Drawing::Color::DimGray;
			this->unidadRojo1->Location = System::Drawing::Point(23, 137);
			this->unidadRojo1->Margin = System::Windows::Forms::Padding(2);
			this->unidadRojo1->Name = L"unidadRojo1";
			this->unidadRojo1->Size = System::Drawing::Size(71, 24);
			this->unidadRojo1->TabIndex = 77;
			this->unidadRojo1->Text = L"Jinete";
			this->unidadRojo1->UseVisualStyleBackColor = false;
			this->unidadRojo1->CheckedChanged += gcnew System::EventHandler(this, &Registro::unidadRojo1_CheckedChanged);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label4->ForeColor = System::Drawing::Color::DodgerBlue;
			this->label4->Location = System::Drawing::Point(454, 24);
			this->label4->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(85, 20);
			this->label4->TabIndex = 76;
			this->label4->Text = L"Team Blue";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label3->ForeColor = System::Drawing::Color::Red;
			this->label3->Location = System::Drawing::Point(30, 24);
			this->label3->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(83, 20);
			this->label3->TabIndex = 75;
			this->label3->Text = L"Team Red";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13));
			this->label2->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->label2->Location = System::Drawing::Point(448, 47);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(153, 22);
			this->label2->TabIndex = 74;
			this->label2->Text = L"Nombre jugador 2";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13));
			this->label1->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->label1->Location = System::Drawing::Point(19, 47);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(153, 22);
			this->label1->TabIndex = 73;
			this->label1->Text = L"Nombre jugador 1";
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Gray;
			this->button1->FlatAppearance->BorderColor = System::Drawing::Color::DeepSkyBlue;
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Gray;
			this->button1->FlatAppearance->MouseOverBackColor = System::Drawing::Color::DarkGray;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->button1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button1->Location = System::Drawing::Point(263, 518);
			this->button1->Margin = System::Windows::Forms::Padding(2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(154, 38);
			this->button1->TabIndex = 72;
			this->button1->Text = L"Jugar";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Registro::button1_Click);
			// 
			// blueName
			// 
			this->blueName->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->blueName->Location = System::Drawing::Point(447, 85);
			this->blueName->Margin = System::Windows::Forms::Padding(2);
			this->blueName->MaxLength = 8;
			this->blueName->Name = L"blueName";
			this->blueName->Size = System::Drawing::Size(190, 30);
			this->blueName->TabIndex = 71;
			// 
			// redName
			// 
			this->redName->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->redName->Location = System::Drawing::Point(22, 85);
			this->redName->Margin = System::Windows::Forms::Padding(2);
			this->redName->MaxLength = 8;
			this->redName->Name = L"redName";
			this->redName->Size = System::Drawing::Size(180, 30);
			this->redName->TabIndex = 70;
			// 
			// armaRojo1
			// 
			this->armaRojo1->AutoSize = true;
			this->armaRojo1->BackColor = System::Drawing::Color::Transparent;
			this->armaRojo1->ForeColor = System::Drawing::Color::DimGray;
			this->armaRojo1->Location = System::Drawing::Point(12, 57);
			this->armaRojo1->Margin = System::Windows::Forms::Padding(2);
			this->armaRojo1->Name = L"armaRojo1";
			this->armaRojo1->Size = System::Drawing::Size(54, 17);
			this->armaRojo1->TabIndex = 105;
			this->armaRojo1->TabStop = true;
			this->armaRojo1->Text = L"Lanza";
			this->armaRojo1->UseVisualStyleBackColor = false;
			// 
			// armaRojo2
			// 
			this->armaRojo2->AutoSize = true;
			this->armaRojo2->BackColor = System::Drawing::Color::Transparent;
			this->armaRojo2->ForeColor = System::Drawing::Color::DimGray;
			this->armaRojo2->Location = System::Drawing::Point(75, 57);
			this->armaRojo2->Margin = System::Windows::Forms::Padding(2);
			this->armaRojo2->Name = L"armaRojo2";
			this->armaRojo2->Size = System::Drawing::Size(57, 17);
			this->armaRojo2->TabIndex = 106;
			this->armaRojo2->TabStop = true;
			this->armaRojo2->Text = L"Hacha";
			this->armaRojo2->UseVisualStyleBackColor = false;
			// 
			// armaRojo3
			// 
			this->armaRojo3->AutoSize = true;
			this->armaRojo3->BackColor = System::Drawing::Color::Transparent;
			this->armaRojo3->ForeColor = System::Drawing::Color::DimGray;
			this->armaRojo3->Location = System::Drawing::Point(141, 57);
			this->armaRojo3->Margin = System::Windows::Forms::Padding(2);
			this->armaRojo3->Name = L"armaRojo3";
			this->armaRojo3->Size = System::Drawing::Size(61, 17);
			this->armaRojo3->TabIndex = 107;
			this->armaRojo3->TabStop = true;
			this->armaRojo3->Text = L"Espada";
			this->armaRojo3->UseVisualStyleBackColor = false;
			// 
			// armaAzul3
			// 
			this->armaAzul3->AutoSize = true;
			this->armaAzul3->BackColor = System::Drawing::Color::Transparent;
			this->armaAzul3->ForeColor = System::Drawing::Color::DimGray;
			this->armaAzul3->Location = System::Drawing::Point(134, 57);
			this->armaAzul3->Margin = System::Windows::Forms::Padding(2);
			this->armaAzul3->Name = L"armaAzul3";
			this->armaAzul3->Size = System::Drawing::Size(61, 17);
			this->armaAzul3->TabIndex = 110;
			this->armaAzul3->Text = L"Espada";
			this->armaAzul3->UseVisualStyleBackColor = false;
			// 
			// armaAzul2
			// 
			this->armaAzul2->AutoSize = true;
			this->armaAzul2->BackColor = System::Drawing::Color::Transparent;
			this->armaAzul2->ForeColor = System::Drawing::Color::DimGray;
			this->armaAzul2->Location = System::Drawing::Point(67, 57);
			this->armaAzul2->Margin = System::Windows::Forms::Padding(2);
			this->armaAzul2->Name = L"armaAzul2";
			this->armaAzul2->Size = System::Drawing::Size(57, 17);
			this->armaAzul2->TabIndex = 109;
			this->armaAzul2->Text = L"Hacha";
			this->armaAzul2->UseVisualStyleBackColor = false;
			// 
			// armaAzul1
			// 
			this->armaAzul1->AutoSize = true;
			this->armaAzul1->BackColor = System::Drawing::Color::Transparent;
			this->armaAzul1->ForeColor = System::Drawing::Color::DimGray;
			this->armaAzul1->Location = System::Drawing::Point(5, 57);
			this->armaAzul1->Margin = System::Windows::Forms::Padding(2);
			this->armaAzul1->Name = L"armaAzul1";
			this->armaAzul1->Size = System::Drawing::Size(54, 17);
			this->armaAzul1->TabIndex = 108;
			this->armaAzul1->Text = L"Lanza";
			this->armaAzul1->UseVisualStyleBackColor = false;
			// 
			// pictureBox16
			// 
			this->pictureBox16->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox16->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox16->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox16->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox16.Image")));
			this->pictureBox16->Location = System::Drawing::Point(129, 18);
			this->pictureBox16->Margin = System::Windows::Forms::Padding(2);
			this->pictureBox16->Name = L"pictureBox16";
			this->pictureBox16->Size = System::Drawing::Size(55, 34);
			this->pictureBox16->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox16->TabIndex = 113;
			this->pictureBox16->TabStop = false;
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->pictureBox13);
			this->groupBox1->Controls->Add(this->pictureBox11);
			this->groupBox1->Controls->Add(this->pictureBox12);
			this->groupBox1->Controls->Add(this->armaRojo1);
			this->groupBox1->Controls->Add(this->armaRojo2);
			this->groupBox1->Controls->Add(this->armaRojo3);
			this->groupBox1->ForeColor = System::Drawing::Color::Crimson;
			this->groupBox1->Location = System::Drawing::Point(22, 413);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(208, 90);
			this->groupBox1->TabIndex = 114;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Arma jugador 1";
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->pictureBox14);
			this->groupBox2->Controls->Add(this->pictureBox15);
			this->groupBox2->Controls->Add(this->pictureBox16);
			this->groupBox2->Controls->Add(this->armaAzul1);
			this->groupBox2->Controls->Add(this->armaAzul2);
			this->groupBox2->Controls->Add(this->armaAzul3);
			this->groupBox2->ForeColor = System::Drawing::Color::DeepSkyBlue;
			this->groupBox2->Location = System::Drawing::Point(447, 413);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(202, 90);
			this->groupBox2->TabIndex = 115;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Arma jugador 2";
			// 
			// helpButton
			// 
			this->helpButton->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->helpButton->FlatAppearance->BorderColor = System::Drawing::Color::DimGray;
			this->helpButton->ForeColor = System::Drawing::Color::Black;
			this->helpButton->Location = System::Drawing::Point(603, 532);
			this->helpButton->Name = L"helpButton";
			this->helpButton->Size = System::Drawing::Size(75, 23);
			this->helpButton->TabIndex = 116;
			this->helpButton->Text = L"Ayuda";
			this->helpButton->UseVisualStyleBackColor = false;
			this->helpButton->Click += gcnew System::EventHandler(this, &Registro::helpButton_Click);
			// 
			// Registro
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->ClientSize = System::Drawing::Size(690, 567);
			this->Controls->Add(this->helpButton);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->pictureBox6);
			this->Controls->Add(this->pictureBox7);
			this->Controls->Add(this->pictureBox8);
			this->Controls->Add(this->pictureBox9);
			this->Controls->Add(this->pictureBox10);
			this->Controls->Add(this->pictureBox5);
			this->Controls->Add(this->pictureBox4);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->unidadAzul5);
			this->Controls->Add(this->unidadAzul4);
			this->Controls->Add(this->unidadAzul3);
			this->Controls->Add(this->unidadAzul2);
			this->Controls->Add(this->unidadAzul1);
			this->Controls->Add(this->unidadRojo5);
			this->Controls->Add(this->unidadRojo4);
			this->Controls->Add(this->unidadRojo3);
			this->Controls->Add(this->unidadRojo2);
			this->Controls->Add(this->unidadRojo1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->blueName);
			this->Controls->Add(this->redName);
			this->DoubleBuffered = true;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Name = L"Registro";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Registro";
			this->Load += gcnew System::EventHandler(this, &Registro::Registro_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox15))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox14))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox13))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox12))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox11))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox10))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox16))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		//Funcion para detectar caracteres invalido
		bool validChar(String^ nick){
			for (int i = 0; i < nick->Length; i++)
			{
				if (Char::Parse(nick->Substring(i,1))<65 || Char::Parse(nick->Substring(i,1))>90 && Char::Parse(nick->Substring(i,1))<97 || Char::Parse(nick->Substring(i,1))>122)//Utiliza el regex si quieres por que no me funciono 
				{
					return true;
					break;
				}
			}
			return false;
		}
		bool nick1v,nick2v;
		//Sub para validar nick, y llamar otro formulario
		void validNick(String^ nick, int player){
			if (nick->Equals(""))
			 {
				  MessageBox::Show("EL campo nick del jugador "+player+" esta vacio");
			 }else{
				 if (validChar(nick))
				 {
					 MessageBox::Show("EL nick del jugador "+player+" contiene caracteres invalidos");
				 }else{
					 if (player==1)
					 {
						 nick1v=true;
					 }else{
						 nick2v=true;
					 }
				 }
			 }
		}
		

private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			 validNick(redName->Text,1);//verifica nick 1
			 validNick(blueName->Text,2);//verifica nick 2
			 if (nick1v && nick2v){ //si ambos son correctos llama form
				 if (checkUnidadesAzul() == 3 && checkUnidadesRojo() == 3) {
					 if (checkArmaAzul() && checkArmaRojo()) {
						 //Codigo para llamar el otro form 
						 try{
							 StreamWriter^ gameData = gcnew StreamWriter("resources/files/registro.txt",false);
							 gameData->WriteLine(redName->Text);
							 if (unidadRojo1->Checked) gameData->WriteLine("Jinete");
							 if (unidadRojo2->Checked) gameData->WriteLine("Caballero");
							 if (unidadRojo3->Checked) gameData->WriteLine("Luchador");
							 if (unidadRojo4->Checked) gameData->WriteLine("Mercenario");
							 if (unidadRojo5->Checked) gameData->WriteLine("Mirmidon");
							 if (armaRojo1->Checked) gameData->WriteLine("Lanza");
							 if (armaRojo2->Checked) gameData->WriteLine("Hacha");
							 if (armaRojo3->Checked) gameData->WriteLine("Espada");

							 gameData->WriteLine(blueName->Text);
							 if (unidadAzul1->Checked) gameData->WriteLine("Jinete");
							 if (unidadAzul2->Checked) gameData->WriteLine("Caballero");
							 if (unidadAzul3->Checked) gameData->WriteLine("Luchador");
							 if (unidadAzul4->Checked) gameData->WriteLine("Mercenario");
							 if (unidadAzul5->Checked) gameData->WriteLine("Mirmidon");
							 if (armaAzul1->Checked) gameData->WriteLine("Lanza");
							 if (armaAzul2->Checked) gameData->WriteLine("Hacha");
							 if (armaAzul3->Checked) gameData->WriteLine("Espada");

							 gameData->Close();

						 }
						 catch (Exception^ e){
							 MessageBox::Show("No entro");
						 }
						 Juego^ juego=gcnew Juego();
						 juego->Show();
						 this->Close();
					 }else {
						 MessageBox::Show("Debe seleccionar un arma.");
					 }
				 }else{
					 MessageBox::Show("Debe seleccionar 3 unidades");
				 }
			 }
		 
		 }


private: System::Void Registro_Load(System::Object^  sender, System::EventArgs^  e) {
	
}
		 int checkUnidadesAzul() {
			 int cont = 0;
			 if (unidadAzul1->Checked) cont++;
			 if (unidadAzul2->Checked) cont++;
			 if (unidadAzul3->Checked) cont++;
			 if (unidadAzul4->Checked) cont++;
			 if (unidadAzul5->Checked) cont++;

			 return cont;
		 }
		 int checkUnidadesRojo() {
			 int cont = 0;
			 if (unidadRojo1->Checked) cont++;
			 if (unidadRojo2->Checked) cont++;
			 if (unidadRojo3->Checked) cont++;
			 if (unidadRojo4->Checked) cont++;
			 if (unidadRojo5->Checked) cont++;

			 return cont;
		 }

		 bool checkArmaRojo() {
			 if (armaRojo1->Checked == true || armaRojo2->Checked == true || armaRojo3->Checked == true) return true;
			 return false;
		 }

		 bool checkArmaAzul() {
			 if (armaAzul1->Checked == true || armaAzul2->Checked == true || armaAzul3->Checked == true) return true;
			 return false;
		 }

private: System::Void unidadAzul1_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	if (checkUnidadesAzul() > 3) {
		unidadAzul1->Checked = false;
		MessageBox::Show("Solo puedes elegir 3 unidades.");
	}
}
private: System::Void unidadAzul2_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	if (checkUnidadesAzul() > 3) {
		unidadAzul2->Checked = false;
		MessageBox::Show("Solo puedes elegir 3 unidades.");
	}
}
private: System::Void unidadAzul3_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	if (checkUnidadesAzul() > 3) {
		unidadAzul3->Checked = false;
		MessageBox::Show("Solo puedes elegir 3 unidades.");
	}
}
private: System::Void unidadAzul4_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	if (checkUnidadesAzul() > 3) {
		unidadAzul4->Checked = false;
		MessageBox::Show("Solo puedes elegir 3 unidades.");
	}
}
private: System::Void unidadAzul5_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	if (checkUnidadesAzul() > 3) {
		unidadAzul5->Checked = false;
		MessageBox::Show("Solo puedes elegir 3 unidades.");
	}
}
private: System::Void unidadRojo1_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	if (checkUnidadesRojo() > 3) {
		unidadRojo1->Checked = false;
		MessageBox::Show("Solo puedes elegir 3 unidades.");
	}
}
private: System::Void unidadRojo2_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	if (checkUnidadesRojo() > 3) {
		unidadRojo2->Checked = false;
		MessageBox::Show("Solo puedes elegir 3 unidades.");
	}
}
private: System::Void unidadRojo3_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	if (checkUnidadesRojo() > 3) {
		unidadRojo3->Checked = false;
		MessageBox::Show("Solo puedes elegir 3 unidades.");
	}
}
private: System::Void unidadRojo4_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	if (checkUnidadesRojo() > 3) {
		unidadRojo4->Checked = false;
		MessageBox::Show("Solo puedes elegir 3 unidades.");
	}
}
private: System::Void unidadRojo5_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	if (checkUnidadesRojo() > 3) {
		unidadRojo5->Checked = false;
		MessageBox::Show("Solo puedes elegir 3 unidades.");
	}
}

private: System::Void helpButton_Click(System::Object^  sender, System::EventArgs^  e) { 
	MessageBox::Show("Cada jugador puede elegir 3 unidades entre 5 disponibles. \nUna 4ta unidad estará disponible en el juego con el arma que elija y estadisticas aleatorias.");
	MessageBox::Show("La lanza derrota a la espada. \nLa espada derrota al hacha. \nEl hacha derrota a la lanza.");
	MessageBox::Show("Haz click en la imagen de cada unidad para mas información.");
}
private: System::Void pictureBox1_Click(System::Object^  sender, System::EventArgs^  e) {
	MessageBox::Show("Jinete: \nUnidad a caballo, usa lanzas y una buena armadura. \nVida: 17\nAtaque: 6\nHabilidad: 5\nSuerte: 3\nDefensa: 5 \nMovimiento: 4 casillas");
}
private: System::Void pictureBox10_Click(System::Object^  sender, System::EventArgs^  e) {
	MessageBox::Show("Jinete: \nUnidad a caballo, usa lanzas y una buena armadura. \nVida: 17\nAtaque: 6\nHabilidad: 5\nSuerte: 3\nDefensa: 5 \nMovimiento: 4 casillas");
}
private: System::Void pictureBox2_Click(System::Object^  sender, System::EventArgs^  e) {
	MessageBox::Show("Caballero: \nUnidad defensiva diseñada para resistir muchos ataques, usa lanzas y una buena armadura.\nVida: 22 \nAtaque: 4 \nHabilidad: 5\nVelocidad: 3\nSuerte: 2\nDefensa: 8\nMovimiento: 1 casilla");
}
private: System::Void pictureBox9_Click(System::Object^  sender, System::EventArgs^  e) {
	MessageBox::Show("Caballero: \nUnidad defensiva diseñada para resistir muchos ataques, usa lanzas y una buena armadura.\nVida: 22 \nAtaque: 4 \nHabilidad: 5\nVelocidad: 3\nSuerte: 2\nDefensa: 8\nMovimiento: 1 casilla");
}
private: System::Void pictureBox3_Click(System::Object^  sender, System::EventArgs^  e) {
	MessageBox::Show("Luchador: \nUnidad de fuerza que usa hachas pero con mala habilidad y defensas.\nVida: 19\nAtaque: 7\nHabilidad: 4\nVelocidad: 6\nSuerte: 2\nDefensa: 3\nMovimiento: 2 casillas");
}
private: System::Void pictureBox8_Click(System::Object^  sender, System::EventArgs^  e) {
	MessageBox::Show("Luchador: \nUnidad de fuerza que usa hachas pero con mala habilidad y defensas.\nVida: 19\nAtaque: 7\nHabilidad: 4\nVelocidad: 6\nSuerte: 2\nDefensa: 3\nMovimiento: 2 casillas");
}
private: System::Void pictureBox4_Click(System::Object^  sender, System::EventArgs^  e) {
	MessageBox::Show("Mercenario: \nUnidad balanceada que pelea con espadas.\nVida: 15\nAtaque: 5\nHabilidad: 5\nVelocidad: 5\nSuerte: 2\nDefensa: 5\nMovimiento 2 casillas");
}
private: System::Void pictureBox7_Click(System::Object^  sender, System::EventArgs^  e) {
	MessageBox::Show("Mercenario: \nUnidad balanceada que pelea con espadas.\nVida: 15\nAtaque: 5\nHabilidad: 5\nVelocidad: 5\nSuerte: 2\nDefensa: 5\nMovimiento 2 casillas");
}
private: System::Void pictureBox5_Click(System::Object^  sender, System::EventArgs^  e) {
	MessageBox::Show("Mirmidon: \nUnidad de velocidad que usa espadas, alta velocidad pero baja vida \nVida: 15\nAtaque: 4\nHabilidad: 7\nVelocidad: 8\nSuerte: 0\nDefensa: 4\nMovimiento: 3 casillas");
}
private: System::Void pictureBox6_Click(System::Object^  sender, System::EventArgs^  e) {
	MessageBox::Show("Mirmidon: \nUnidad de velocidad que usa espadas, alta velocidad pero baja vida \nVida: 15\nAtaque: 4\nHabilidad: 7\nVelocidad: 8\nSuerte: 0\nDefensa: 4\nMovimiento: 3 casillas");
}
};
}
