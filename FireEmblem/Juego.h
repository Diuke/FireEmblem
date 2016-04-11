#pragma once
#include "Estadisticas.h"
#include <cctype>
namespace FireEmblem {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;

	/// <summary>
	/// Resumen de Juego
	/// </summary>
	public ref class Juego : public System::Windows::Forms::Form
	{
	public:
		System::Windows::Forms::Form^ registroForm;
		System::Media::SoundPlayer^ musicaJ;
		Juego(System::Windows::Forms::Form^ r, System::Media::SoundPlayer^ musicR)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
			registroForm = r;
			musicaJ = musicR;
		}
	
	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~Juego()
		{
			if (components)
			{
				delete components;
			}
		}
	public: System::Windows::Forms::DataGridView^  dataGridView1;
    ref struct Jugador{
			String^ nombre;
			String^ unidad1;
			String^ unidad2;
			String^ unidad3;
			String^ arma;
		};
	ref struct Unidad{
			String^ nombre;
			String^ arma;
			int vida;
			int ataque;
			int habilidad;
			int velocidad;
			int suerte;
			int defensa;
			int mov;
			Unidad^ sigUnidad;
	};
	static Unidad^ Unidades=nullptr; 
	public: static Jugador^ Jugador1 = gcnew Jugador();
	public: static Jugador^ Jugador2 = gcnew Jugador();
	static array<String^>^ mapTerrain = gcnew array<String^>{"resources/mapa/grass1.png","resources/mapa/grass2.png","resources/mapa/grass3.png"};

	protected: 

	protected: 

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>	
	private: System::Windows::Forms::Button^  button1;

	private: System::Windows::Forms::Label^  label1;







	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::Label^  redMov;

	private: System::Windows::Forms::Label^  redDef;

	private: System::Windows::Forms::Label^  redSuerte;

	private: System::Windows::Forms::Label^  redVelocidad;

	private: System::Windows::Forms::Label^  redHabilidad;

	private: System::Windows::Forms::Label^  redAtaque;

	private: System::Windows::Forms::Label^  redVida;
	private: System::Windows::Forms::PictureBox^  imgRedUnid;


	private: System::Windows::Forms::Panel^  panel2;
	private: System::Windows::Forms::PictureBox^  imgBlueUnid;








	private: System::Windows::Forms::Label^  blueMov;

	private: System::Windows::Forms::Label^  blueDef;

	private: System::Windows::Forms::Label^  blueSuerte;

	private: System::Windows::Forms::Label^  blueVelocidad;

	private: System::Windows::Forms::Label^  blueHabilidad;

	private: System::Windows::Forms::Label^  blueAtaque;

	private: System::Windows::Forms::Label^  blueVida;

	private: System::Windows::Forms::Label^  label17;
	private: System::Windows::Forms::Label^  redUnid1;
	private: System::Windows::Forms::Label^  redUnid2;
	private: System::Windows::Forms::Label^  redUnid3;
	private: System::Windows::Forms::Label^  redUnid4;
	private: System::Windows::Forms::Label^  blueUnid4;





private: System::Windows::Forms::Label^  blueUnid3;

private: System::Windows::Forms::Label^  blueUnid2;

private: System::Windows::Forms::Label^  blueUnid1;
private: System::Windows::Forms::Label^  redArma;
private: System::Windows::Forms::Label^  blueArma;
private: System::Windows::Forms::Button^  button2;











	private: System::ComponentModel::IContainer^  components;




#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->redArma = (gcnew System::Windows::Forms::Label());
			this->redMov = (gcnew System::Windows::Forms::Label());
			this->redDef = (gcnew System::Windows::Forms::Label());
			this->redSuerte = (gcnew System::Windows::Forms::Label());
			this->redVelocidad = (gcnew System::Windows::Forms::Label());
			this->redHabilidad = (gcnew System::Windows::Forms::Label());
			this->redAtaque = (gcnew System::Windows::Forms::Label());
			this->redVida = (gcnew System::Windows::Forms::Label());
			this->imgRedUnid = (gcnew System::Windows::Forms::PictureBox());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->blueArma = (gcnew System::Windows::Forms::Label());
			this->blueMov = (gcnew System::Windows::Forms::Label());
			this->blueDef = (gcnew System::Windows::Forms::Label());
			this->blueSuerte = (gcnew System::Windows::Forms::Label());
			this->blueVelocidad = (gcnew System::Windows::Forms::Label());
			this->blueHabilidad = (gcnew System::Windows::Forms::Label());
			this->blueAtaque = (gcnew System::Windows::Forms::Label());
			this->blueVida = (gcnew System::Windows::Forms::Label());
			this->imgBlueUnid = (gcnew System::Windows::Forms::PictureBox());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->redUnid1 = (gcnew System::Windows::Forms::Label());
			this->redUnid2 = (gcnew System::Windows::Forms::Label());
			this->redUnid3 = (gcnew System::Windows::Forms::Label());
			this->redUnid4 = (gcnew System::Windows::Forms::Label());
			this->blueUnid4 = (gcnew System::Windows::Forms::Label());
			this->blueUnid3 = (gcnew System::Windows::Forms::Label());
			this->blueUnid2 = (gcnew System::Windows::Forms::Label());
			this->blueUnid1 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->imgRedUnid))->BeginInit();
			this->panel2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->imgBlueUnid))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->AllowUserToDeleteRows = false;
			this->dataGridView1->AllowUserToResizeColumns = false;
			this->dataGridView1->AllowUserToResizeRows = false;
			this->dataGridView1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->dataGridView1->CellBorderStyle = System::Windows::Forms::DataGridViewCellBorderStyle::None;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::DisableResizing;
			this->dataGridView1->ColumnHeadersVisible = false;
			this->dataGridView1->Location = System::Drawing::Point(199, 0);
			this->dataGridView1->Margin = System::Windows::Forms::Padding(2);
			this->dataGridView1->MultiSelect = false;
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersVisible = false;
			this->dataGridView1->RowTemplate->Height = 30;
			this->dataGridView1->RowTemplate->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			this->dataGridView1->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::CellSelect;
			this->dataGridView1->Size = System::Drawing::Size(603, 603);
			this->dataGridView1->TabIndex = 0;
			this->dataGridView1->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Juego::dataGridView1_CellClick);
			this->dataGridView1->CellMouseEnter += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Juego::dataGridView1_CellMouseEnter);
			this->dataGridView1->CellMouseLeave += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Juego::dataGridView1_CellMouseLeave);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(818, 477);
			this->button1->Margin = System::Windows::Forms::Padding(2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(63, 41);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Jugar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Juego::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label1->ForeColor = System::Drawing::Color::Red;
			this->label1->Location = System::Drawing::Point(17, 21);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(77, 20);
			this->label1->TabIndex = 91;
			this->label1->Text = L"Unidades";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label2->ForeColor = System::Drawing::Color::DodgerBlue;
			this->label2->Location = System::Drawing::Point(814, 21);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(77, 20);
			this->label2->TabIndex = 99;
			this->label2->Text = L"Unidades";
			// 
			// panel1
			// 
			this->panel1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel1->Controls->Add(this->redArma);
			this->panel1->Controls->Add(this->redMov);
			this->panel1->Controls->Add(this->redDef);
			this->panel1->Controls->Add(this->redSuerte);
			this->panel1->Controls->Add(this->redVelocidad);
			this->panel1->Controls->Add(this->redHabilidad);
			this->panel1->Controls->Add(this->redAtaque);
			this->panel1->Controls->Add(this->redVida);
			this->panel1->Controls->Add(this->imgRedUnid);
			this->panel1->Location = System::Drawing::Point(21, 180);
			this->panel1->Margin = System::Windows::Forms::Padding(2);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(164, 293);
			this->panel1->TabIndex = 100;
			// 
			// redArma
			// 
			this->redArma->AutoSize = true;
			this->redArma->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->redArma->ForeColor = System::Drawing::Color::Red;
			this->redArma->Location = System::Drawing::Point(9, 100);
			this->redArma->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->redArma->Name = L"redArma";
			this->redArma->Size = System::Drawing::Size(45, 17);
			this->redArma->TabIndex = 9;
			this->redArma->Text = L"Arma:";
			// 
			// redMov
			// 
			this->redMov->AutoSize = true;
			this->redMov->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->redMov->ForeColor = System::Drawing::Color::Red;
			this->redMov->Location = System::Drawing::Point(9, 266);
			this->redMov->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->redMov->Name = L"redMov";
			this->redMov->Size = System::Drawing::Size(83, 17);
			this->redMov->TabIndex = 7;
			this->redMov->Text = L"Movimiento:";
			// 
			// redDef
			// 
			this->redDef->AutoSize = true;
			this->redDef->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->redDef->ForeColor = System::Drawing::Color::Red;
			this->redDef->Location = System::Drawing::Point(9, 243);
			this->redDef->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->redDef->Name = L"redDef";
			this->redDef->Size = System::Drawing::Size(65, 17);
			this->redDef->TabIndex = 6;
			this->redDef->Text = L"Defensa:";
			// 
			// redSuerte
			// 
			this->redSuerte->AutoSize = true;
			this->redSuerte->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->redSuerte->ForeColor = System::Drawing::Color::Red;
			this->redSuerte->Location = System::Drawing::Point(9, 219);
			this->redSuerte->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->redSuerte->Name = L"redSuerte";
			this->redSuerte->Size = System::Drawing::Size(54, 17);
			this->redSuerte->TabIndex = 5;
			this->redSuerte->Text = L"Suerte:";
			// 
			// redVelocidad
			// 
			this->redVelocidad->AutoSize = true;
			this->redVelocidad->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->redVelocidad->ForeColor = System::Drawing::Color::Red;
			this->redVelocidad->Location = System::Drawing::Point(9, 196);
			this->redVelocidad->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->redVelocidad->Name = L"redVelocidad";
			this->redVelocidad->Size = System::Drawing::Size(74, 17);
			this->redVelocidad->TabIndex = 4;
			this->redVelocidad->Text = L"Velocidad:";
			// 
			// redHabilidad
			// 
			this->redHabilidad->AutoSize = true;
			this->redHabilidad->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->redHabilidad->ForeColor = System::Drawing::Color::Red;
			this->redHabilidad->Location = System::Drawing::Point(9, 172);
			this->redHabilidad->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->redHabilidad->Name = L"redHabilidad";
			this->redHabilidad->Size = System::Drawing::Size(71, 17);
			this->redHabilidad->TabIndex = 3;
			this->redHabilidad->Text = L"Habilidad:";
			// 
			// redAtaque
			// 
			this->redAtaque->AutoSize = true;
			this->redAtaque->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->redAtaque->ForeColor = System::Drawing::Color::Red;
			this->redAtaque->Location = System::Drawing::Point(9, 149);
			this->redAtaque->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->redAtaque->Name = L"redAtaque";
			this->redAtaque->Size = System::Drawing::Size(57, 17);
			this->redAtaque->TabIndex = 2;
			this->redAtaque->Text = L"Ataque:";
			// 
			// redVida
			// 
			this->redVida->AutoSize = true;
			this->redVida->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->redVida->ForeColor = System::Drawing::Color::Red;
			this->redVida->Location = System::Drawing::Point(9, 124);
			this->redVida->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->redVida->Name = L"redVida";
			this->redVida->Size = System::Drawing::Size(40, 17);
			this->redVida->TabIndex = 1;
			this->redVida->Text = L"Vida:";
			// 
			// imgRedUnid
			// 
			this->imgRedUnid->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->imgRedUnid->Location = System::Drawing::Point(12, 11);
			this->imgRedUnid->Margin = System::Windows::Forms::Padding(2);
			this->imgRedUnid->Name = L"imgRedUnid";
			this->imgRedUnid->Size = System::Drawing::Size(88, 79);
			this->imgRedUnid->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->imgRedUnid->TabIndex = 0;
			this->imgRedUnid->TabStop = false;
			// 
			// panel2
			// 
			this->panel2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel2->Controls->Add(this->blueArma);
			this->panel2->Controls->Add(this->blueMov);
			this->panel2->Controls->Add(this->blueDef);
			this->panel2->Controls->Add(this->blueSuerte);
			this->panel2->Controls->Add(this->blueVelocidad);
			this->panel2->Controls->Add(this->blueHabilidad);
			this->panel2->Controls->Add(this->blueAtaque);
			this->panel2->Controls->Add(this->blueVida);
			this->panel2->Controls->Add(this->imgBlueUnid);
			this->panel2->Location = System::Drawing::Point(818, 180);
			this->panel2->Margin = System::Windows::Forms::Padding(2);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(164, 293);
			this->panel2->TabIndex = 101;
			// 
			// blueArma
			// 
			this->blueArma->AutoSize = true;
			this->blueArma->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->blueArma->ForeColor = System::Drawing::Color::DodgerBlue;
			this->blueArma->Location = System::Drawing::Point(9, 100);
			this->blueArma->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->blueArma->Name = L"blueArma";
			this->blueArma->Size = System::Drawing::Size(45, 17);
			this->blueArma->TabIndex = 10;
			this->blueArma->Text = L"Arma:";
			// 
			// blueMov
			// 
			this->blueMov->AutoSize = true;
			this->blueMov->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->blueMov->ForeColor = System::Drawing::Color::DodgerBlue;
			this->blueMov->Location = System::Drawing::Point(9, 266);
			this->blueMov->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->blueMov->Name = L"blueMov";
			this->blueMov->Size = System::Drawing::Size(83, 17);
			this->blueMov->TabIndex = 8;
			this->blueMov->Text = L"Movimiento:";
			// 
			// blueDef
			// 
			this->blueDef->AutoSize = true;
			this->blueDef->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->blueDef->ForeColor = System::Drawing::Color::DodgerBlue;
			this->blueDef->Location = System::Drawing::Point(9, 243);
			this->blueDef->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->blueDef->Name = L"blueDef";
			this->blueDef->Size = System::Drawing::Size(65, 17);
			this->blueDef->TabIndex = 8;
			this->blueDef->Text = L"Defensa:";
			// 
			// blueSuerte
			// 
			this->blueSuerte->AutoSize = true;
			this->blueSuerte->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->blueSuerte->ForeColor = System::Drawing::Color::DodgerBlue;
			this->blueSuerte->Location = System::Drawing::Point(9, 219);
			this->blueSuerte->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->blueSuerte->Name = L"blueSuerte";
			this->blueSuerte->Size = System::Drawing::Size(54, 17);
			this->blueSuerte->TabIndex = 8;
			this->blueSuerte->Text = L"Suerte:";
			// 
			// blueVelocidad
			// 
			this->blueVelocidad->AutoSize = true;
			this->blueVelocidad->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->blueVelocidad->ForeColor = System::Drawing::Color::DodgerBlue;
			this->blueVelocidad->Location = System::Drawing::Point(9, 196);
			this->blueVelocidad->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->blueVelocidad->Name = L"blueVelocidad";
			this->blueVelocidad->Size = System::Drawing::Size(74, 17);
			this->blueVelocidad->TabIndex = 8;
			this->blueVelocidad->Text = L"Velocidad:";
			// 
			// blueHabilidad
			// 
			this->blueHabilidad->AutoSize = true;
			this->blueHabilidad->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->blueHabilidad->ForeColor = System::Drawing::Color::DodgerBlue;
			this->blueHabilidad->Location = System::Drawing::Point(9, 172);
			this->blueHabilidad->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->blueHabilidad->Name = L"blueHabilidad";
			this->blueHabilidad->Size = System::Drawing::Size(71, 17);
			this->blueHabilidad->TabIndex = 8;
			this->blueHabilidad->Text = L"Habilidad:";
			// 
			// blueAtaque
			// 
			this->blueAtaque->AutoSize = true;
			this->blueAtaque->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->blueAtaque->ForeColor = System::Drawing::Color::DodgerBlue;
			this->blueAtaque->Location = System::Drawing::Point(9, 149);
			this->blueAtaque->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->blueAtaque->Name = L"blueAtaque";
			this->blueAtaque->Size = System::Drawing::Size(57, 17);
			this->blueAtaque->TabIndex = 8;
			this->blueAtaque->Text = L"Ataque:";
			// 
			// blueVida
			// 
			this->blueVida->AutoSize = true;
			this->blueVida->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->blueVida->ForeColor = System::Drawing::Color::DodgerBlue;
			this->blueVida->Location = System::Drawing::Point(9, 124);
			this->blueVida->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->blueVida->Name = L"blueVida";
			this->blueVida->Size = System::Drawing::Size(40, 17);
			this->blueVida->TabIndex = 8;
			this->blueVida->Text = L"Vida:";
			// 
			// imgBlueUnid
			// 
			this->imgBlueUnid->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->imgBlueUnid->Location = System::Drawing::Point(12, 11);
			this->imgBlueUnid->Margin = System::Windows::Forms::Padding(2);
			this->imgBlueUnid->Name = L"imgBlueUnid";
			this->imgBlueUnid->Size = System::Drawing::Size(91, 79);
			this->imgBlueUnid->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->imgBlueUnid->TabIndex = 0;
			this->imgBlueUnid->TabStop = false;
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->BackColor = System::Drawing::Color::Transparent;
			this->label17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label17->ForeColor = System::Drawing::Color::Red;
			this->label17->Location = System::Drawing::Point(974, 7);
			this->label17->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(20, 20);
			this->label17->TabIndex = 117;
			this->label17->Text = L"X";
			this->label17->Click += gcnew System::EventHandler(this, &Juego::label17_Click);
			// 
			// redUnid1
			// 
			this->redUnid1->AutoSize = true;
			this->redUnid1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold));
			this->redUnid1->ForeColor = System::Drawing::Color::DarkGray;
			this->redUnid1->Location = System::Drawing::Point(17, 50);
			this->redUnid1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->redUnid1->Name = L"redUnid1";
			this->redUnid1->Size = System::Drawing::Size(64, 24);
			this->redUnid1->TabIndex = 118;
			this->redUnid1->Text = L"Unid1";
			this->redUnid1->Click += gcnew System::EventHandler(this, &Juego::redUnid1_Click);
			// 
			// redUnid2
			// 
			this->redUnid2->AutoSize = true;
			this->redUnid2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold));
			this->redUnid2->ForeColor = System::Drawing::SystemColors::ButtonShadow;
			this->redUnid2->Location = System::Drawing::Point(17, 81);
			this->redUnid2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->redUnid2->Name = L"redUnid2";
			this->redUnid2->Size = System::Drawing::Size(64, 24);
			this->redUnid2->TabIndex = 119;
			this->redUnid2->Text = L"Unid2";
			this->redUnid2->Click += gcnew System::EventHandler(this, &Juego::redUnid2_Click);
			// 
			// redUnid3
			// 
			this->redUnid3->AutoSize = true;
			this->redUnid3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold));
			this->redUnid3->ForeColor = System::Drawing::SystemColors::ButtonShadow;
			this->redUnid3->Location = System::Drawing::Point(17, 112);
			this->redUnid3->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->redUnid3->Name = L"redUnid3";
			this->redUnid3->Size = System::Drawing::Size(64, 24);
			this->redUnid3->TabIndex = 120;
			this->redUnid3->Text = L"Unid3";
			this->redUnid3->Click += gcnew System::EventHandler(this, &Juego::redUnid3_Click);
			// 
			// redUnid4
			// 
			this->redUnid4->AutoSize = true;
			this->redUnid4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold));
			this->redUnid4->ForeColor = System::Drawing::SystemColors::ButtonShadow;
			this->redUnid4->Location = System::Drawing::Point(17, 144);
			this->redUnid4->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->redUnid4->Name = L"redUnid4";
			this->redUnid4->Size = System::Drawing::Size(64, 24);
			this->redUnid4->TabIndex = 121;
			this->redUnid4->Text = L"Unid4";
			this->redUnid4->Click += gcnew System::EventHandler(this, &Juego::redUnid4_Click);
			// 
			// blueUnid4
			// 
			this->blueUnid4->AutoSize = true;
			this->blueUnid4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold));
			this->blueUnid4->ForeColor = System::Drawing::SystemColors::ButtonShadow;
			this->blueUnid4->Location = System::Drawing::Point(814, 144);
			this->blueUnid4->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->blueUnid4->Name = L"blueUnid4";
			this->blueUnid4->Size = System::Drawing::Size(64, 24);
			this->blueUnid4->TabIndex = 125;
			this->blueUnid4->Text = L"Unid4";
			this->blueUnid4->Click += gcnew System::EventHandler(this, &Juego::blueUnid4_Click);
			// 
			// blueUnid3
			// 
			this->blueUnid3->AutoSize = true;
			this->blueUnid3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold));
			this->blueUnid3->ForeColor = System::Drawing::SystemColors::ButtonShadow;
			this->blueUnid3->Location = System::Drawing::Point(814, 112);
			this->blueUnid3->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->blueUnid3->Name = L"blueUnid3";
			this->blueUnid3->Size = System::Drawing::Size(64, 24);
			this->blueUnid3->TabIndex = 124;
			this->blueUnid3->Text = L"Unid3";
			this->blueUnid3->Click += gcnew System::EventHandler(this, &Juego::blueUnid3_Click);
			// 
			// blueUnid2
			// 
			this->blueUnid2->AutoSize = true;
			this->blueUnid2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold));
			this->blueUnid2->ForeColor = System::Drawing::SystemColors::ButtonShadow;
			this->blueUnid2->Location = System::Drawing::Point(814, 81);
			this->blueUnid2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->blueUnid2->Name = L"blueUnid2";
			this->blueUnid2->Size = System::Drawing::Size(64, 24);
			this->blueUnid2->TabIndex = 123;
			this->blueUnid2->Text = L"Unid2";
			this->blueUnid2->Click += gcnew System::EventHandler(this, &Juego::blueUnid2_Click);
			// 
			// blueUnid1
			// 
			this->blueUnid1->AutoSize = true;
			this->blueUnid1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold));
			this->blueUnid1->ForeColor = System::Drawing::Color::DarkGray;
			this->blueUnid1->Location = System::Drawing::Point(814, 50);
			this->blueUnid1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->blueUnid1->Name = L"blueUnid1";
			this->blueUnid1->Size = System::Drawing::Size(64, 24);
			this->blueUnid1->TabIndex = 122;
			this->blueUnid1->Text = L"Unid1";
			this->blueUnid1->Click += gcnew System::EventHandler(this, &Juego::blueUnid1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(356, 165);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(334, 147);
			this->button2->TabIndex = 126;
			this->button2->Text = L"Ir a ganador";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Juego::button2_Click);
			// 
			// Juego
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->ClientSize = System::Drawing::Size(995, 603);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->blueUnid4);
			this->Controls->Add(this->blueUnid3);
			this->Controls->Add(this->blueUnid2);
			this->Controls->Add(this->blueUnid1);
			this->Controls->Add(this->redUnid4);
			this->Controls->Add(this->redUnid3);
			this->Controls->Add(this->redUnid2);
			this->Controls->Add(this->redUnid1);
			this->Controls->Add(this->label17);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->dataGridView1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"Juego";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Juego";
			this->Load += gcnew System::EventHandler(this, &Juego::Juego_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->imgRedUnid))->EndInit();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->imgBlueUnid))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		static Unidad^ P1=nullptr;
		static Unidad^ P2=nullptr;

		//Funion que carga el mapapa en el dataGridView
		void cargarmapa(){

		//Carga el backgorund del mapa en el dataGridView

		Bitmap ^img;
		DataGridViewImageColumn^ col;
		Random^ num=gcnew Random();
		for (int i = 0; i < 20; i++) {
			col = gcnew System::Windows::Forms::DataGridViewImageColumn();
			col->Name="col"+i;
			col->ImageLayout = System::Windows::Forms::DataGridViewImageCellLayout::Stretch;
			dataGridView1->Columns->Add(col);
			dataGridView1->Columns[i]->Width=30;
		}
		while(dataGridView1->RowCount<20){
			dataGridView1->Rows->Add();
		}
		for (int i = 0; i < 20; i++)
		{
			for (int j = 0; j < 20; j++)
			{
				img=gcnew Bitmap(mapTerrain[num->Next(0,3)]);
				dataGridView1->Rows[i]->Cells[j]->Value=img;
			}
		}

		//Carga obrjetos bonos, rocas, arbole y demas

		

	}
		
		//Funcion cargar unidades
		 void cargaUnidades(){
			blueUnid1->Text=Jugador1->unidad1;
			blueUnid2->Text=Jugador1->unidad2;
			blueUnid3->Text=Jugador1->unidad3;
			blueUnid4->Text=Jugador1->nombre;
			redUnid1->Text=Jugador2->unidad1;
			redUnid2->Text=Jugador2->unidad2;
			redUnid3->Text=Jugador2->unidad3;
			redUnid4->Text=Jugador2->nombre;
		 }

		//Funcion que carga las esadistica a la lista de unidades
		void inicializarUnidades(){
			Unidad^ J=gcnew Unidad();
			J->nombre="Jinete";
			J->arma="Lanza";
			J->vida=17;
			J->ataque=6;
			J->habilidad=5;
			J->velocidad=5;
			J->suerte=3;
			J->defensa=5;
			J->mov=4;
			Unidades=J;
			Unidad^ C=gcnew Unidad();
			C->nombre="Caballero";
			C->arma="Lanza";
			C->vida=22;
			C->ataque=4;
			C->habilidad=5;
			C->velocidad=3;
			C->suerte=2;
			C->defensa=8;
			C->mov=1;
			J->sigUnidad=C;
			Unidad^ L=gcnew Unidad();
			L->nombre="Luchador";
			L->arma="Hacha";
			L->vida=19;
			L->ataque=7;
			L->habilidad=4;
			L->velocidad=6;
			L->suerte=2;
			L->defensa=3;
			L->mov=2;
			C->sigUnidad=L;
			Unidad^ Mer=gcnew Unidad();
			Mer->nombre="Mercenario";
			Mer->arma="Espada";
			Mer->vida=15;
			Mer->ataque=5;
			Mer->habilidad=5;
			Mer->velocidad=5;
			Mer->suerte=2;
			Mer->defensa=5;
			Mer->mov=2;
			L->sigUnidad=Mer;
			Unidad^ Mir=gcnew Unidad();
			Mir->nombre="Mirmidon";
			Mir->arma="Espada";
			Mir->vida=15;
			Mir->ataque=4;
			Mir->habilidad=7;
			Mir->velocidad=8;
			Mir->suerte=0;
			Mir->defensa=4;
			Mir->mov=3;
			Mer->sigUnidad=Mir;
			Random^ ran=gcnew Random();
			Unidad^ P1=gcnew Unidad();
			P1->nombre=Jugador1->nombre;
			P1->arma=Jugador1->arma;
			P1->vida=ran->Next(10,21);
			P1->ataque=ran->Next(2,9);
			P1->habilidad=ran->Next(2,8);
			P1->velocidad=ran->Next(2,9);
			P1->suerte=ran->Next(0,7);
			P1->defensa=ran->Next(0,7);
			P1->mov=ran->Next(1,4);
			Mir->sigUnidad=P1;
			Unidad^ P2=gcnew Unidad();
			P2->nombre=Jugador2->nombre;
			P2->arma=Jugador2->arma;
			P2->vida=ran->Next(10,21);
			P2->ataque=ran->Next(2,9);
			P2->habilidad=ran->Next(2,8);
			P2->velocidad=ran->Next(2,9);
			P2->suerte=ran->Next(0,7);
			P2->defensa=ran->Next(0,7);
			P2->mov=ran->Next(1,4);
			P1->sigUnidad=P2;
			P2->sigUnidad=nullptr;
		}
		
		//funcion que sombrea el mov que puede hacer el personaje
		//*****hay que cambiar el archivos de fuente de las imagenes**** ojo
		void movUnidad(int mov){
				 int x=dataGridView1->CurrentCell->RowIndex;
				 int y=dataGridView1->CurrentCell->ColumnIndex;
				 button1->Text=x+" , "+y;
				 dataGridView1->Rows[x]->Cells[y]->Value=Image::FromFile("seleccted.png");
				 for (int i = 1; i < mov+1; i++)
				 {
					 if ((x+i)<20)
					 {
						 dataGridView1->Rows[x+i]->Cells[y]->Value=Image::FromFile("seleccionado.png");
					 }
					 if((x-i)>=0){
						dataGridView1->Rows[x-i]->Cells[y]->Value=Image::FromFile("seleccionado.png");
					 }
					 if ((y+i)<20){
						 dataGridView1->Rows[x]->Cells[y+i]->Value=Image::FromFile("seleccionado.png");
					 }
					 if ((y-i)>=0)
					 {
						 dataGridView1->Rows[x]->Cells[y-i]->Value=Image::FromFile("seleccionado.png");
					 }
				}
			 }
		
		//Subrutina que carga la unidad que se selecciona para el combate
		void unidSelec(String^ nombre,PictureBox^ imagen,Label^ arma,Label^ vida,Label^ ataque,Label^ habilidad,Label^ velocidad,Label^ suerte,Label^ defensa,Label^ mov,bool ply1){
			Unidad^ P=gcnew Unidad(),^Q=gcnew Unidad();
			P=Unidades;
			bool encontro=false;
			while (P!=nullptr && encontro==false)
			{
				if (P->nombre->Equals(nombre))
				{
					encontro=true;
					Q=P;
					if (ply1)
					{
						P1=Q;
					}else{
						P2=Q;
					}
				}
				P=P->sigUnidad;
			}//Ojo implementar el try catch
			if (!nombre->Equals("Jinete")&&!nombre->Equals("Caballero")&&!nombre->Equals("Luchador")&&!nombre->Equals("Mercenario")&&!nombre->Equals("Mirmidon"))
			{
				if (ply1)
				{
					imagen->Image=Image::FromFile("resources/registro/player1.png");
				}else{
					imagen->Image=Image::FromFile("resources/registro/player2.png");
				}
			}else
			{
				imagen->Image=Image::FromFile("resources/registro/"+nombre->ToLower()+".png");
			}
			arma->Text="Arma: "+Q->arma;
			vida->Text="Vida: "+Convert::ToString(Q->vida);
			ataque->Text="Ataque: "+Convert::ToString(Q->ataque);
			habilidad->Text="Habilidad: "+Convert::ToString(Q->habilidad);
			velocidad->Text="Velocidad: "+Convert::ToString(Q->velocidad);
			suerte->Text="Suerte: "+Convert::ToString(Q->suerte);
			defensa->Text="Defensa: "+Convert::ToString(Q->defensa);
			mov->Text="Movimiento: "+Convert::ToString(Q->mov);
		}
		
		//Funcion que calcula a probabilidad de golpe
		float probGolpe(int habilAtac,int suerteAtac,int veloDef,int suerteDef, int bonos){
			return (habilAtac*2+suerteAtac)/(veloDef*2+suerteDef+bonos);
		}

		//
private: System::Void Juego_Load(System::Object^  sender, System::EventArgs^  e) {

		//Se muestra el nombre de las unidades en los label correspondientes a las unidades de cada equipo
		cargaUnidades();

		//Se inicia el datagridview con el mapa
		cargarmapa();

		//Cargo estadisticas a lista de unidades
		inicializarUnidades();
		
	}
		   
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
				 //Haciendo pruebas con boton
				 Random^ ran=gcnew Random();
				 if (!P1->nombre->Equals("Jinete")&&!P1->nombre->Equals("Caballero")&&!P1->nombre->Equals("Luchador")&&!P1->nombre->Equals("Mercenario")&&!P1->nombre->Equals("Mirmidon"))
				 {
					 dataGridView1->Rows[ran->Next(0,10)]->Cells[ran->Next(0,20)]->Value=Image::FromFile("resources/sprites/Team Blue/player1.png"); 
				 }else{
					 dataGridView1->Rows[ran->Next(0,10)]->Cells[ran->Next(0,20)]->Value=Image::FromFile("resources/sprites/Team Blue/"+P1->nombre->ToLower()+".png"); 
				 }
				 if (!P2->nombre->Equals("Jinete")&&!P2->nombre->Equals("Caballero")&&!P2->nombre->Equals("Luchador")&&!P2->nombre->Equals("Mercenario")&&!P2->nombre->Equals("Mirmidon"))
				 {
					 dataGridView1->Rows[ran->Next(10,20)]->Cells[ran->Next(0,20)]->Value=Image::FromFile("resources/sprites/Team Red/player2.png");
				 }else{
					 dataGridView1->Rows[ran->Next(10,20)]->Cells[ran->Next(0,20)]->Value=Image::FromFile("resources/sprites/Team Red/"+P2->nombre->ToLower()+".png");
				 }
				 
				 //objetos
				dataGridView1->Rows[ran->Next(0,20)]->Cells[ran->Next(0,20)]->Value=Image::FromFile("resources/mapa/roca.png");
				dataGridView1->Rows[ran->Next(0,20)]->Cells[ran->Next(0,20)]->Value=Image::FromFile("resources/mapa/roca.png");
				dataGridView1->Rows[ran->Next(0,20)]->Cells[ran->Next(0,20)]->Value=Image::FromFile("resources/mapa/roca.png");
				dataGridView1->Rows[ran->Next(0,20)]->Cells[ran->Next(0,20)]->Value=Image::FromFile("resources/mapa/roca2.png");
				dataGridView1->Rows[ran->Next(0,20)]->Cells[ran->Next(0,20)]->Value=Image::FromFile("resources/mapa/roca2.png");
				dataGridView1->Rows[ran->Next(0,20)]->Cells[ran->Next(0,20)]->Value=Image::FromFile("resources/mapa/arbol.png");
				dataGridView1->Rows[ran->Next(0,20)]->Cells[ran->Next(0,20)]->Value=Image::FromFile("resources/mapa/arbol.png");
				dataGridView1->Rows[ran->Next(0,20)]->Cells[ran->Next(0,20)]->Value=Image::FromFile("resources/mapa/arbol2.png");
				dataGridView1->Rows[ran->Next(0,20)]->Cells[ran->Next(0,20)]->Value=Image::FromFile("resources/mapa/arbol2.png");
				dataGridView1->Rows[ran->Next(0,20)]->Cells[ran->Next(0,20)]->Value=Image::FromFile("resources/mapa/arbol2.png");
				dataGridView1->Rows[ran->Next(0,20)]->Cells[ran->Next(0,20)]->Value=Image::FromFile("resources/mapa/arbol2.png");
			 }
			 
private: System::Void dataGridView1_CellClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
			  
		 } 

private: System::Void dataGridView1_CellMouseEnter(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
			//dataGridView1->Rows[e->RowIndex]->Cells[ e->ColumnIndex]->Value=Image::FromFile("seleccted.png");
		 }

private: System::Void dataGridView1_CellMouseLeave(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
			 
		 }

private: System::Void label17_Click(System::Object^  sender, System::EventArgs^  e) {
			Application::Exit();
		 }

private: System::Void redUnid1_Click(System::Object^  sender, System::EventArgs^  e) {
			 redUnid1->ForeColor=Color::Green;
			 unidSelec(redUnid1->Text,imgRedUnid,redArma,redVida,redAtaque,redHabilidad,redVelocidad,redSuerte,redDef,redMov,false);
			 redUnid2->ForeColor=Color::DarkGray;
			 redUnid3->ForeColor=Color::DarkGray;
			 redUnid4->ForeColor=Color::DarkGray;
		 }
private: System::Void redUnid2_Click(System::Object^  sender, System::EventArgs^  e) {
			 redUnid2->ForeColor=Color::Green;
			 unidSelec(redUnid2->Text,imgRedUnid,redArma,redVida,redAtaque,redHabilidad,redVelocidad,redSuerte,redDef,redMov,false);
			 redUnid1->ForeColor=Color::DarkGray;
			 redUnid3->ForeColor=Color::DarkGray;
			 redUnid4->ForeColor=Color::DarkGray;
		 }
private: System::Void redUnid3_Click(System::Object^  sender, System::EventArgs^  e) {
			 redUnid3->ForeColor=Color::Green;
			 unidSelec(redUnid3->Text,imgRedUnid,redArma,redVida,redAtaque,redHabilidad,redVelocidad,redSuerte,redDef,redMov,false);
			 redUnid1->ForeColor=Color::DarkGray;
			 redUnid2->ForeColor=Color::DarkGray;
			 redUnid4->ForeColor=Color::DarkGray;
		 }
private: System::Void redUnid4_Click(System::Object^  sender, System::EventArgs^  e) {
			 redUnid4->ForeColor=Color::Green;
			 unidSelec(redUnid4->Text,imgRedUnid,redArma,redVida,redAtaque,redHabilidad,redVelocidad,redSuerte,redDef,redMov,false);
			 redUnid1->ForeColor=Color::DarkGray;
			 redUnid2->ForeColor=Color::DarkGray;
			 redUnid3->ForeColor=Color::DarkGray;
		 }
private: System::Void blueUnid1_Click(System::Object^  sender, System::EventArgs^  e) {
			 blueUnid1->ForeColor=Color::Green;
			 unidSelec(blueUnid1->Text,imgBlueUnid,blueArma,blueVida,blueAtaque,blueHabilidad,blueVelocidad,blueSuerte,blueDef,blueMov,true);
			 blueUnid2->ForeColor=Color::DarkGray;
			 blueUnid3->ForeColor=Color::DarkGray;
			 blueUnid4->ForeColor=Color::DarkGray;
		 }
private: System::Void blueUnid2_Click(System::Object^  sender, System::EventArgs^  e) {
			 blueUnid2->ForeColor=Color::Green;
			 unidSelec(blueUnid2->Text,imgBlueUnid,blueArma,blueVida,blueAtaque,blueHabilidad,blueVelocidad,blueSuerte,blueDef,blueMov,true);
			 blueUnid1->ForeColor=Color::DarkGray;
			 blueUnid3->ForeColor=Color::DarkGray;
			 blueUnid4->ForeColor=Color::DarkGray;
		 }
private: System::Void blueUnid3_Click(System::Object^  sender, System::EventArgs^  e) {
			 blueUnid3->ForeColor=Color::Green;
			 unidSelec(blueUnid3->Text,imgBlueUnid,blueArma,blueVida,blueAtaque,blueHabilidad,blueVelocidad,blueSuerte,blueDef,blueMov,true);
			 blueUnid1->ForeColor=Color::DarkGray;
			 blueUnid2->ForeColor=Color::DarkGray;
			 blueUnid4->ForeColor=Color::DarkGray;
		 }
private: System::Void blueUnid4_Click(System::Object^  sender, System::EventArgs^  e) {
			 blueUnid4->ForeColor=Color::Green;
			 unidSelec(blueUnid4->Text,imgBlueUnid,blueArma,blueVida,blueAtaque,blueHabilidad,blueVelocidad,blueSuerte,blueDef,blueMov,true);
			 blueUnid1->ForeColor=Color::DarkGray;
			 blueUnid2->ForeColor=Color::DarkGray;
			 blueUnid3->ForeColor=Color::DarkGray;
		 }
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	StreamWriter^ gameData = gcnew StreamWriter("resources/files/registro.txt", true);
	//escribe el equipo que gana
	gameData->WriteLine("ROJO");
	gameData->WriteLine(Jugador1->nombre);
	gameData->Close();
	Estadisticas^ stats = gcnew Estadisticas(registroForm, musicaJ); 
	stats->Show();
	this->Close();
}
};
}
