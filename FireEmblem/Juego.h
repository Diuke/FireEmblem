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
	/// Resumen de Juego
	/// </summary>
	public ref class Juego : public System::Windows::Forms::Form
	{
	public:
		Juego(void)
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
		~Juego()
		{
			if (components)
			{
				delete components;
			}
		}
	public: System::Windows::Forms::DataGridView^  dataGridView1;
	protected: 

	protected: 

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>

		ref struct Jugador{
			String^ nombre;
			String^ unidad1;
			String^ unidad2;
			String^ unidad3;
			String^ arma;
		};
		Jugador^ Jugador1 = gcnew Jugador();
		Jugador^ Jugador2 = gcnew Jugador();

		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->AllowUserToDeleteRows = false;
			this->dataGridView1->AllowUserToResizeColumns = false;
			this->dataGridView1->AllowUserToResizeRows = false;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::DisableResizing;
			this->dataGridView1->ColumnHeadersVisible = false;
			this->dataGridView1->Location = System::Drawing::Point(35, 36);
			this->dataGridView1->Margin = System::Windows::Forms::Padding(2);
			this->dataGridView1->MultiSelect = false;
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersVisible = false;
			this->dataGridView1->RowTemplate->Height = 30;
			this->dataGridView1->RowTemplate->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			this->dataGridView1->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::CellSelect;
			this->dataGridView1->Size = System::Drawing::Size(603, 603);
			this->dataGridView1->TabIndex = 0;
			// 
			// Juego
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1084, 681);
			this->Controls->Add(this->dataGridView1);
			this->Name = L"Juego";
			this->Text = L"Juego";
			this->Load += gcnew System::EventHandler(this, &Juego::Juego_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void Juego_Load(System::Object^  sender, System::EventArgs^  e) {
		dataGridView1->RowCount = 20;
		dataGridView1->ColumnCount = 20;
		for (int i = 0; i < 20; i++) {
			dataGridView1->Columns[i]->Width = 30;
		}
		StreamReader^ fromRegistro = gcnew StreamReader("resources/files/registro.txt");
		Jugador1->nombre = fromRegistro->ReadLine();
		Jugador1->unidad1 = fromRegistro->ReadLine();
		Jugador1->unidad2 = fromRegistro->ReadLine();
		Jugador1->unidad3 = fromRegistro->ReadLine();
		Jugador1->arma = fromRegistro->ReadLine();
		Jugador2->nombre = fromRegistro->ReadLine();
		Jugador2->unidad1 = fromRegistro->ReadLine();
		Jugador2->unidad2 = fromRegistro->ReadLine();
		Jugador2->unidad3 = fromRegistro->ReadLine();
		Jugador2->arma = fromRegistro->ReadLine();
	}


	};
}
