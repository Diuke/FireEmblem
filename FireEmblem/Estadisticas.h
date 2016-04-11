#pragma once

namespace FireEmblem {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms; 
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;

	/// <summary>
	/// Resumen de Estadisticas
	/// </summary>
	public ref class Estadisticas : public System::Windows::Forms::Form
	{
	public:
		System::Windows::Forms::Form^ registroForm;
		System::Media::SoundPlayer^ musicE;
		//Registro^ registroForm;
		Estadisticas(System::Windows::Forms::Form^ rForm, System::Media::SoundPlayer^ music)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
			registroForm = rForm;
			musicE = music;
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~Estadisticas()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  nombreGanador;
	protected: 
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::GroupBox^  groupBox2;
	private: System::Windows::Forms::Label^  armaRojo;
	private: System::Windows::Forms::Label^  unitRojo2;
	private: System::Windows::Forms::Label^  unitRojo1;
	private: System::Windows::Forms::Label^  unitRojo3;
	private: System::Windows::Forms::Label^  unitRojo4;

	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::Label^  armaAzul;
	private: System::Windows::Forms::Label^  unitAzul2;
	private: System::Windows::Forms::Label^  unitAzul3;
	private: System::Windows::Forms::Label^  unitAzul4;

	private: System::Windows::Forms::Label^  unitAzul1;
	private: System::Windows::Forms::Label^  teamGanador;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label17;

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
			this->nombreGanador = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->armaRojo = (gcnew System::Windows::Forms::Label());
			this->unitRojo2 = (gcnew System::Windows::Forms::Label());
			this->unitRojo1 = (gcnew System::Windows::Forms::Label());
			this->unitRojo3 = (gcnew System::Windows::Forms::Label());
			this->unitRojo4 = (gcnew System::Windows::Forms::Label());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->armaAzul = (gcnew System::Windows::Forms::Label());
			this->unitAzul2 = (gcnew System::Windows::Forms::Label());
			this->unitAzul3 = (gcnew System::Windows::Forms::Label());
			this->unitAzul4 = (gcnew System::Windows::Forms::Label());
			this->unitAzul1 = (gcnew System::Windows::Forms::Label());
			this->teamGanador = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->groupBox2->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// nombreGanador
			// 
			this->nombreGanador->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->nombreGanador->ForeColor = System::Drawing::Color::DimGray;
			this->nombreGanador->Location = System::Drawing::Point(416, 169);
			this->nombreGanador->Name = L"nombreGanador";
			this->nombreGanador->Size = System::Drawing::Size(132, 38);
			this->nombreGanador->TabIndex = 14;
			this->nombreGanador->Text = L"label13";
			this->nombreGanador->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::Gray;
			this->button3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button3->FlatAppearance->BorderSize = 0;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->ForeColor = System::Drawing::Color::White;
			this->button3->Location = System::Drawing::Point(675, 500);
			this->button3->Margin = System::Windows::Forms::Padding(2);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(178, 53);
			this->button3->TabIndex = 13;
			this->button3->Text = L"Salir";
			this->button3->TextImageRelation = System::Windows::Forms::TextImageRelation::TextAboveImage;
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &Estadisticas::button3_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Gray;
			this->button2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button2->FlatAppearance->BorderSize = 0;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::Color::White;
			this->button2->Location = System::Drawing::Point(129, 500);
			this->button2->Margin = System::Windows::Forms::Padding(2);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(178, 53);
			this->button2->TabIndex = 12;
			this->button2->Text = L"Creditos";
			this->button2->TextImageRelation = System::Windows::Forms::TextImageRelation::TextAboveImage;
			this->button2->UseVisualStyleBackColor = false;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Gray;
			this->button1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::White;
			this->button1->Location = System::Drawing::Point(397, 500);
			this->button1->Margin = System::Windows::Forms::Padding(2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(178, 53);
			this->button1->TabIndex = 11;
			this->button1->Text = L"Jugar de nuevo";
			this->button1->TextImageRelation = System::Windows::Forms::TextImageRelation::TextAboveImage;
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Estadisticas::button1_Click);
			// 
			// groupBox2
			// 
			this->groupBox2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->groupBox2->Controls->Add(this->armaRojo);
			this->groupBox2->Controls->Add(this->unitRojo2);
			this->groupBox2->Controls->Add(this->unitRojo1);
			this->groupBox2->Controls->Add(this->unitRojo3);
			this->groupBox2->Controls->Add(this->unitRojo4);
			this->groupBox2->Location = System::Drawing::Point(481, 227);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(424, 247);
			this->groupBox2->TabIndex = 10;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Equipo Rojo";
			// 
			// armaRojo
			// 
			this->armaRojo->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->armaRojo->ForeColor = System::Drawing::Color::Crimson;
			this->armaRojo->Location = System::Drawing::Point(232, 186);
			this->armaRojo->Name = L"armaRojo";
			this->armaRojo->Size = System::Drawing::Size(172, 40);
			this->armaRojo->TabIndex = 9;
			this->armaRojo->Text = L"Arma";
			this->armaRojo->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// unitRojo2
			// 
			this->unitRojo2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->unitRojo2->ForeColor = System::Drawing::Color::Crimson;
			this->unitRojo2->Location = System::Drawing::Point(15, 83);
			this->unitRojo2->Name = L"unitRojo2";
			this->unitRojo2->Size = System::Drawing::Size(382, 40);
			this->unitRojo2->TabIndex = 8;
			this->unitRojo2->Text = L"Unit";
			this->unitRojo2->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// unitRojo1
			// 
			this->unitRojo1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->unitRojo1->ForeColor = System::Drawing::Color::Crimson;
			this->unitRojo1->Location = System::Drawing::Point(14, 27);
			this->unitRojo1->Name = L"unitRojo1";
			this->unitRojo1->Size = System::Drawing::Size(382, 40);
			this->unitRojo1->TabIndex = 5;
			this->unitRojo1->Text = L"Unit";
			this->unitRojo1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// unitRojo3
			// 
			this->unitRojo3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->unitRojo3->ForeColor = System::Drawing::Color::Crimson;
			this->unitRojo3->Location = System::Drawing::Point(15, 134);
			this->unitRojo3->Name = L"unitRojo3";
			this->unitRojo3->Size = System::Drawing::Size(382, 40);
			this->unitRojo3->TabIndex = 7;
			this->unitRojo3->Text = L"Unit";
			this->unitRojo3->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// unitRojo4
			// 
			this->unitRojo4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->unitRojo4->ForeColor = System::Drawing::Color::Crimson;
			this->unitRojo4->Location = System::Drawing::Point(15, 186);
			this->unitRojo4->Name = L"unitRojo4";
			this->unitRojo4->Size = System::Drawing::Size(211, 40);
			this->unitRojo4->TabIndex = 6;
			this->unitRojo4->Text = L"Jugador";
			this->unitRojo4->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->armaAzul);
			this->groupBox1->Controls->Add(this->unitAzul2);
			this->groupBox1->Controls->Add(this->unitAzul3);
			this->groupBox1->Controls->Add(this->unitAzul4);
			this->groupBox1->Controls->Add(this->unitAzul1);
			this->groupBox1->Location = System::Drawing::Point(80, 227);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(395, 247);
			this->groupBox1->TabIndex = 9;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Equipo Azul";
			// 
			// armaAzul
			// 
			this->armaAzul->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->armaAzul->ForeColor = System::Drawing::Color::SkyBlue;
			this->armaAzul->Location = System::Drawing::Point(217, 187);
			this->armaAzul->Name = L"armaAzul";
			this->armaAzul->Size = System::Drawing::Size(172, 40);
			this->armaAzul->TabIndex = 4;
			this->armaAzul->Text = L"Arma";
			this->armaAzul->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// unitAzul2
			// 
			this->unitAzul2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->unitAzul2->ForeColor = System::Drawing::Color::SkyBlue;
			this->unitAzul2->Location = System::Drawing::Point(6, 84);
			this->unitAzul2->Name = L"unitAzul2";
			this->unitAzul2->Size = System::Drawing::Size(382, 40);
			this->unitAzul2->TabIndex = 3;
			this->unitAzul2->Text = L"Unit";
			this->unitAzul2->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// unitAzul3
			// 
			this->unitAzul3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->unitAzul3->ForeColor = System::Drawing::Color::SkyBlue;
			this->unitAzul3->Location = System::Drawing::Point(7, 134);
			this->unitAzul3->Name = L"unitAzul3";
			this->unitAzul3->Size = System::Drawing::Size(382, 40);
			this->unitAzul3->TabIndex = 2;
			this->unitAzul3->Text = L"Unit";
			this->unitAzul3->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// unitAzul4
			// 
			this->unitAzul4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->unitAzul4->ForeColor = System::Drawing::Color::SkyBlue;
			this->unitAzul4->Location = System::Drawing::Point(7, 187);
			this->unitAzul4->Name = L"unitAzul4";
			this->unitAzul4->Size = System::Drawing::Size(211, 40);
			this->unitAzul4->TabIndex = 1;
			this->unitAzul4->Text = L"Jugador";
			this->unitAzul4->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// unitAzul1
			// 
			this->unitAzul1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->unitAzul1->ForeColor = System::Drawing::Color::SkyBlue;
			this->unitAzul1->Location = System::Drawing::Point(6, 27);
			this->unitAzul1->Name = L"unitAzul1";
			this->unitAzul1->Size = System::Drawing::Size(382, 40);
			this->unitAzul1->TabIndex = 0;
			this->unitAzul1->Text = L"Unit";
			this->unitAzul1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// teamGanador
			// 
			this->teamGanador->Font = (gcnew System::Drawing::Font(L"Tahoma", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->teamGanador->Location = System::Drawing::Point(245, 110);
			this->teamGanador->Name = L"teamGanador";
			this->teamGanador->Size = System::Drawing::Size(480, 59);
			this->teamGanador->TabIndex = 8;
			this->teamGanador->Text = L"label2";
			this->teamGanador->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"Tahoma", 72, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::Green;
			this->label1->Location = System::Drawing::Point(12, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(955, 114);
			this->label1->TabIndex = 15;
			this->label1->Text = L"GANADOR";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->BackColor = System::Drawing::Color::Transparent;
			this->label17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label17->ForeColor = System::Drawing::Color::Red;
			this->label17->Location = System::Drawing::Point(948, 9);
			this->label17->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(20, 20);
			this->label17->TabIndex = 118;
			this->label17->Text = L"X";
			this->label17->Click += gcnew System::EventHandler(this, &Estadisticas::label17_Click);
			// 
			// Estadisticas
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->ClientSize = System::Drawing::Size(979, 564);
			this->Controls->Add(this->label17);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->nombreGanador);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->teamGanador);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"Estadisticas";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Estadisticas";
			this->Load += gcnew System::EventHandler(this, &Estadisticas::Estadisticas_Load);
			this->groupBox2->ResumeLayout(false);
			this->groupBox1->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {//Evento para volver al form registro
		registroForm->Show();
		this->Close();
	}

private: System::Void Estadisticas_Load(System::Object^  sender, System::EventArgs^  e) {
	StreamReader^ fromRegistro = gcnew StreamReader("resources/files/registro.txt");
	unitAzul4->Text = fromRegistro->ReadLine();
	unitAzul1->Text = fromRegistro->ReadLine();
	unitAzul2->Text = fromRegistro->ReadLine();
	unitAzul3->Text = fromRegistro->ReadLine();
	armaAzul->Text = fromRegistro->ReadLine();
	unitRojo4->Text = fromRegistro->ReadLine();
	unitRojo1->Text = fromRegistro->ReadLine();
	unitRojo2->Text = fromRegistro->ReadLine();
	unitRojo3->Text = fromRegistro->ReadLine();
	armaRojo->Text = fromRegistro->ReadLine();

	String^ ganador = fromRegistro->ReadLine();
	if (ganador->Equals("ROJO")) {
		teamGanador->Text = "Equipo Rojo";
		teamGanador->ForeColor = System::Drawing::Color::Crimson;
		nombreGanador->Text = fromRegistro->ReadLine();
	}
	else {
		teamGanador->Text = "Equipo Azul";
		teamGanador->ForeColor = System::Drawing::Color::SkyBlue;
		nombreGanador->Text = fromRegistro->ReadLine();
	}
	fromRegistro->Close();
}

private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
	if ((MessageBox::Show("Esta seguro que desea salir?", "", MessageBoxButtons::YesNo)) == System::Windows::Forms::DialogResult::Yes) {
		System::Windows::Forms::Application::Exit();
	}
}
private: System::Void label17_Click(System::Object^  sender, System::EventArgs^  e) {
	System::Windows::Forms::Application::Exit();
}
};
}
