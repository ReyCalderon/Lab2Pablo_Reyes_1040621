#pragma once
#include "Poligonos.h"

namespace Lab2PabloReyes1040621 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label29;
	private: System::Windows::Forms::Label^ label28;
	private: System::Windows::Forms::Label^ label27;
	private: System::Windows::Forms::Label^ label26;
	private: System::Windows::Forms::Label^ label25;
	private: System::Windows::Forms::Label^ label24;
	private: System::Windows::Forms::Label^ label23;
	private: System::Windows::Forms::Label^ label22;
	private: System::Windows::Forms::Label^ label21;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label20;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label19;
	private: System::Windows::Forms::Label^ alttri;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ resul8;
	private: System::Windows::Forms::Label^ resul7;
	private: System::Windows::Forms::Label^ resul6;
	private: System::Windows::Forms::Label^ resul5;
	private: System::Windows::Forms::Label^ resul4;
	private: System::Windows::Forms::Label^ resul3;
	private: System::Windows::Forms::Label^ resul2;
	private: System::Windows::Forms::Label^ resul1;
	private: System::Windows::Forms::TextBox^ deca1;
	private: System::Windows::Forms::TextBox^ enea1;
	private: System::Windows::Forms::TextBox^ octa1;
	private: System::Windows::Forms::TextBox^ hepta1;
	private: System::Windows::Forms::TextBox^ hexa1;
	private: System::Windows::Forms::TextBox^ penta1;
	private: System::Windows::Forms::TextBox^ cuadri1;
	private: System::Windows::Forms::TextBox^ tria1;
	private: System::Windows::Forms::TextBox^ penta2;
	private: System::Windows::Forms::TextBox^ deca2;
	private: System::Windows::Forms::TextBox^ enea2;
	private: System::Windows::Forms::TextBox^ octa2;
	private: System::Windows::Forms::TextBox^ hepta2;
	private: System::Windows::Forms::TextBox^ hexa2;
	private: System::Windows::Forms::TextBox^ tria2;
	private: System::Windows::Forms::Button^ calc8;
	private: System::Windows::Forms::Button^ calc7;
	private: System::Windows::Forms::Button^ calc6;
	private: System::Windows::Forms::Button^ calc5;
	private: System::Windows::Forms::Button^ calc4;
	private: System::Windows::Forms::Button^ calc3;
	private: System::Windows::Forms::Button^ calc2;
	private: System::Windows::Forms::Button^ calc1;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::Panel^ panel5;
	private: System::Windows::Forms::Panel^ panel6;
	private: System::Windows::Forms::Panel^ panel7;
	private: System::Windows::Forms::Panel^ panel8;

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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label29 = (gcnew System::Windows::Forms::Label());
			this->label28 = (gcnew System::Windows::Forms::Label());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->alttri = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->resul8 = (gcnew System::Windows::Forms::Label());
			this->resul7 = (gcnew System::Windows::Forms::Label());
			this->resul6 = (gcnew System::Windows::Forms::Label());
			this->resul5 = (gcnew System::Windows::Forms::Label());
			this->resul4 = (gcnew System::Windows::Forms::Label());
			this->resul3 = (gcnew System::Windows::Forms::Label());
			this->resul2 = (gcnew System::Windows::Forms::Label());
			this->resul1 = (gcnew System::Windows::Forms::Label());
			this->deca1 = (gcnew System::Windows::Forms::TextBox());
			this->enea1 = (gcnew System::Windows::Forms::TextBox());
			this->octa1 = (gcnew System::Windows::Forms::TextBox());
			this->hepta1 = (gcnew System::Windows::Forms::TextBox());
			this->hexa1 = (gcnew System::Windows::Forms::TextBox());
			this->penta1 = (gcnew System::Windows::Forms::TextBox());
			this->cuadri1 = (gcnew System::Windows::Forms::TextBox());
			this->tria1 = (gcnew System::Windows::Forms::TextBox());
			this->penta2 = (gcnew System::Windows::Forms::TextBox());
			this->deca2 = (gcnew System::Windows::Forms::TextBox());
			this->enea2 = (gcnew System::Windows::Forms::TextBox());
			this->octa2 = (gcnew System::Windows::Forms::TextBox());
			this->hepta2 = (gcnew System::Windows::Forms::TextBox());
			this->hexa2 = (gcnew System::Windows::Forms::TextBox());
			this->tria2 = (gcnew System::Windows::Forms::TextBox());
			this->calc8 = (gcnew System::Windows::Forms::Button());
			this->calc7 = (gcnew System::Windows::Forms::Button());
			this->calc6 = (gcnew System::Windows::Forms::Button());
			this->calc5 = (gcnew System::Windows::Forms::Button());
			this->calc4 = (gcnew System::Windows::Forms::Button());
			this->calc3 = (gcnew System::Windows::Forms::Button());
			this->calc2 = (gcnew System::Windows::Forms::Button());
			this->calc1 = (gcnew System::Windows::Forms::Button());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->panel7 = (gcnew System::Windows::Forms::Panel());
			this->panel8 = (gcnew System::Windows::Forms::Panel());
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			this->panel3->SuspendLayout();
			this->panel4->SuspendLayout();
			this->panel5->SuspendLayout();
			this->panel6->SuspendLayout();
			this->panel7->SuspendLayout();
			this->panel8->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(410, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(262, 31);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Areas y Perimetros";
			// 
			// label29
			// 
			this->label29->AutoSize = true;
			this->label29->Location = System::Drawing::Point(48, 40);
			this->label29->Name = L"label29";
			this->label29->Size = System::Drawing::Size(31, 13);
			this->label29->TabIndex = 115;
			this->label29->Text = L"Lado";
			// 
			// label28
			// 
			this->label28->AutoSize = true;
			this->label28->Location = System::Drawing::Point(44, 44);
			this->label28->Name = L"label28";
			this->label28->Size = System::Drawing::Size(31, 13);
			this->label28->TabIndex = 114;
			this->label28->Text = L"Lado";
			// 
			// label27
			// 
			this->label27->AutoSize = true;
			this->label27->Location = System::Drawing::Point(38, 48);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(31, 13);
			this->label27->TabIndex = 113;
			this->label27->Text = L"Lado";
			// 
			// label26
			// 
			this->label26->AutoSize = true;
			this->label26->Location = System::Drawing::Point(45, 48);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(31, 13);
			this->label26->TabIndex = 112;
			this->label26->Text = L"Lado";
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->Location = System::Drawing::Point(39, 66);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(49, 13);
			this->label25->TabIndex = 111;
			this->label25->Text = L"Apotema";
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->Location = System::Drawing::Point(35, 70);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(49, 13);
			this->label24->TabIndex = 110;
			this->label24->Text = L"Apotema";
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Location = System::Drawing::Point(38, 74);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(49, 13);
			this->label23->TabIndex = 109;
			this->label23->Text = L"Apotema";
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Location = System::Drawing::Point(36, 74);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(49, 13);
			this->label22->TabIndex = 108;
			this->label22->Text = L"Apotema";
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Location = System::Drawing::Point(30, 66);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(49, 13);
			this->label21->TabIndex = 107;
			this->label21->Text = L"Apotema";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(39, 40);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(31, 13);
			this->label13->TabIndex = 106;
			this->label13->Text = L"Lado";
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Location = System::Drawing::Point(47, 40);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(31, 13);
			this->label20->TabIndex = 105;
			this->label20->Text = L"Lado";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(38, 66);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(49, 13);
			this->label12->TabIndex = 104;
			this->label12->Text = L"Apotema";
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Location = System::Drawing::Point(16, 43);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(106, 13);
			this->label19->TabIndex = 103;
			this->label19->Text = L"Lado del cuadrilatero";
			// 
			// alttri
			// 
			this->alttri->AutoSize = true;
			this->alttri->Location = System::Drawing::Point(55, 53);
			this->alttri->Name = L"alttri";
			this->alttri->Size = System::Drawing::Size(34, 13);
			this->alttri->TabIndex = 102;
			this->alttri->Text = L"Altura";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(15, 79);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(94, 13);
			this->label10->TabIndex = 101;
			this->label10->Text = L"Lado del triangulo ";
			// 
			// resul8
			// 
			this->resul8->AutoSize = true;
			this->resul8->Location = System::Drawing::Point(77, 129);
			this->resul8->Name = L"resul8";
			this->resul8->Size = System::Drawing::Size(16, 13);
			this->resul8->TabIndex = 100;
			this->resul8->Text = L"...";
			// 
			// resul7
			// 
			this->resul7->AutoSize = true;
			this->resul7->Location = System::Drawing::Point(71, 138);
			this->resul7->Name = L"resul7";
			this->resul7->Size = System::Drawing::Size(16, 13);
			this->resul7->TabIndex = 99;
			this->resul7->Text = L"...";
			// 
			// resul6
			// 
			this->resul6->AutoSize = true;
			this->resul6->Location = System::Drawing::Point(75, 138);
			this->resul6->Name = L"resul6";
			this->resul6->Size = System::Drawing::Size(16, 13);
			this->resul6->TabIndex = 98;
			this->resul6->Text = L"...";
			// 
			// resul5
			// 
			this->resul5->AutoSize = true;
			this->resul5->Location = System::Drawing::Point(75, 139);
			this->resul5->Name = L"resul5";
			this->resul5->Size = System::Drawing::Size(16, 13);
			this->resul5->TabIndex = 97;
			this->resul5->Text = L"...";
			// 
			// resul4
			// 
			this->resul4->AutoSize = true;
			this->resul4->Location = System::Drawing::Point(82, 118);
			this->resul4->Name = L"resul4";
			this->resul4->Size = System::Drawing::Size(16, 13);
			this->resul4->TabIndex = 96;
			this->resul4->Text = L"...";
			// 
			// resul3
			// 
			this->resul3->AutoSize = true;
			this->resul3->Location = System::Drawing::Point(90, 128);
			this->resul3->Name = L"resul3";
			this->resul3->Size = System::Drawing::Size(16, 13);
			this->resul3->TabIndex = 95;
			this->resul3->Text = L"...";
			// 
			// resul2
			// 
			this->resul2->AutoSize = true;
			this->resul2->Location = System::Drawing::Point(87, 128);
			this->resul2->Name = L"resul2";
			this->resul2->Size = System::Drawing::Size(16, 13);
			this->resul2->TabIndex = 94;
			this->resul2->Text = L"...";
			// 
			// resul1
			// 
			this->resul1->AutoSize = true;
			this->resul1->Location = System::Drawing::Point(75, 128);
			this->resul1->Name = L"resul1";
			this->resul1->Size = System::Drawing::Size(16, 13);
			this->resul1->TabIndex = 93;
			this->resul1->Text = L"...";
			// 
			// deca1
			// 
			this->deca1->Location = System::Drawing::Point(94, 37);
			this->deca1->Name = L"deca1";
			this->deca1->Size = System::Drawing::Size(60, 20);
			this->deca1->TabIndex = 92;
			// 
			// enea1
			// 
			this->enea1->Location = System::Drawing::Point(90, 41);
			this->enea1->Name = L"enea1";
			this->enea1->Size = System::Drawing::Size(60, 20);
			this->enea1->TabIndex = 91;
			// 
			// octa1
			// 
			this->octa1->Location = System::Drawing::Point(91, 45);
			this->octa1->Name = L"octa1";
			this->octa1->Size = System::Drawing::Size(60, 20);
			this->octa1->TabIndex = 90;
			// 
			// hepta1
			// 
			this->hepta1->Location = System::Drawing::Point(91, 45);
			this->hepta1->Name = L"hepta1";
			this->hepta1->Size = System::Drawing::Size(60, 20);
			this->hepta1->TabIndex = 89;
			// 
			// hexa1
			// 
			this->hexa1->Location = System::Drawing::Point(85, 37);
			this->hexa1->Name = L"hexa1";
			this->hexa1->Size = System::Drawing::Size(60, 20);
			this->hexa1->TabIndex = 88;
			// 
			// penta1
			// 
			this->penta1->Location = System::Drawing::Point(93, 37);
			this->penta1->Name = L"penta1";
			this->penta1->Size = System::Drawing::Size(60, 20);
			this->penta1->TabIndex = 87;
			// 
			// cuadri1
			// 
			this->cuadri1->Location = System::Drawing::Point(128, 40);
			this->cuadri1->Name = L"cuadri1";
			this->cuadri1->Size = System::Drawing::Size(60, 20);
			this->cuadri1->TabIndex = 86;
			// 
			// tria1
			// 
			this->tria1->Location = System::Drawing::Point(115, 50);
			this->tria1->Name = L"tria1";
			this->tria1->Size = System::Drawing::Size(60, 20);
			this->tria1->TabIndex = 85;
			// 
			// penta2
			// 
			this->penta2->Location = System::Drawing::Point(93, 63);
			this->penta2->Name = L"penta2";
			this->penta2->Size = System::Drawing::Size(60, 20);
			this->penta2->TabIndex = 84;
			// 
			// deca2
			// 
			this->deca2->Location = System::Drawing::Point(94, 63);
			this->deca2->Name = L"deca2";
			this->deca2->Size = System::Drawing::Size(60, 20);
			this->deca2->TabIndex = 83;
			// 
			// enea2
			// 
			this->enea2->Location = System::Drawing::Point(90, 67);
			this->enea2->Name = L"enea2";
			this->enea2->Size = System::Drawing::Size(60, 20);
			this->enea2->TabIndex = 82;
			// 
			// octa2
			// 
			this->octa2->Location = System::Drawing::Point(91, 71);
			this->octa2->Name = L"octa2";
			this->octa2->Size = System::Drawing::Size(60, 20);
			this->octa2->TabIndex = 81;
			// 
			// hepta2
			// 
			this->hepta2->Location = System::Drawing::Point(91, 71);
			this->hepta2->Name = L"hepta2";
			this->hepta2->Size = System::Drawing::Size(60, 20);
			this->hepta2->TabIndex = 80;
			// 
			// hexa2
			// 
			this->hexa2->Location = System::Drawing::Point(85, 63);
			this->hexa2->Name = L"hexa2";
			this->hexa2->Size = System::Drawing::Size(60, 20);
			this->hexa2->TabIndex = 79;
			// 
			// tria2
			// 
			this->tria2->Location = System::Drawing::Point(115, 76);
			this->tria2->Name = L"tria2";
			this->tria2->Size = System::Drawing::Size(60, 20);
			this->tria2->TabIndex = 78;
			// 
			// calc8
			// 
			this->calc8->Location = System::Drawing::Point(66, 103);
			this->calc8->Name = L"calc8";
			this->calc8->Size = System::Drawing::Size(75, 23);
			this->calc8->TabIndex = 77;
			this->calc8->Text = L"Calcular ";
			this->calc8->UseVisualStyleBackColor = true;
			this->calc8->Click += gcnew System::EventHandler(this, &MyForm::calc8_Click);
			// 
			// calc7
			// 
			this->calc7->Location = System::Drawing::Point(70, 103);
			this->calc7->Name = L"calc7";
			this->calc7->Size = System::Drawing::Size(75, 23);
			this->calc7->TabIndex = 76;
			this->calc7->Text = L"Calcular ";
			this->calc7->UseVisualStyleBackColor = true;
			this->calc7->Click += gcnew System::EventHandler(this, &MyForm::calc7_Click);
			// 
			// calc6
			// 
			this->calc6->Location = System::Drawing::Point(63, 112);
			this->calc6->Name = L"calc6";
			this->calc6->Size = System::Drawing::Size(75, 23);
			this->calc6->TabIndex = 75;
			this->calc6->Text = L"Calcular";
			this->calc6->UseVisualStyleBackColor = true;
			this->calc6->Click += gcnew System::EventHandler(this, &MyForm::calc6_Click);
			// 
			// calc5
			// 
			this->calc5->Location = System::Drawing::Point(60, 113);
			this->calc5->Name = L"calc5";
			this->calc5->Size = System::Drawing::Size(75, 23);
			this->calc5->TabIndex = 74;
			this->calc5->Text = L"Calcular ";
			this->calc5->UseVisualStyleBackColor = true;
			this->calc5->Click += gcnew System::EventHandler(this, &MyForm::calc5_Click);
			// 
			// calc4
			// 
			this->calc4->Location = System::Drawing::Point(66, 92);
			this->calc4->Name = L"calc4";
			this->calc4->Size = System::Drawing::Size(75, 23);
			this->calc4->TabIndex = 73;
			this->calc4->Text = L"Calcular ";
			this->calc4->UseVisualStyleBackColor = true;
			this->calc4->Click += gcnew System::EventHandler(this, &MyForm::calc4_Click);
			// 
			// calc3
			// 
			this->calc3->Location = System::Drawing::Point(70, 102);
			this->calc3->Name = L"calc3";
			this->calc3->Size = System::Drawing::Size(75, 23);
			this->calc3->TabIndex = 72;
			this->calc3->Text = L"Calcular ";
			this->calc3->UseVisualStyleBackColor = true;
			this->calc3->Click += gcnew System::EventHandler(this, &MyForm::calc3_Click);
			// 
			// calc2
			// 
			this->calc2->Location = System::Drawing::Point(63, 92);
			this->calc2->Name = L"calc2";
			this->calc2->Size = System::Drawing::Size(75, 23);
			this->calc2->TabIndex = 71;
			this->calc2->Text = L"Calcular ";
			this->calc2->UseVisualStyleBackColor = true;
			this->calc2->Click += gcnew System::EventHandler(this, &MyForm::calc2_Click);
			// 
			// calc1
			// 
			this->calc1->Location = System::Drawing::Point(58, 102);
			this->calc1->Name = L"calc1";
			this->calc1->Size = System::Drawing::Size(75, 23);
			this->calc1->TabIndex = 70;
			this->calc1->Text = L"Calcular";
			this->calc1->UseVisualStyleBackColor = true;
			this->calc1->Click += gcnew System::EventHandler(this, &MyForm::calc1_Click);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(53, 10);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(112, 24);
			this->label8->TabIndex = 69;
			this->label8->Text = L"Decagono ";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(62, 10);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(113, 24);
			this->label7->TabIndex = 68;
			this->label7->Text = L"Hexagono ";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(48, 10);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(113, 24);
			this->label6->TabIndex = 67;
			this->label6->Text = L"Eneagono ";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(44, 10);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(107, 24);
			this->label5->TabIndex = 66;
			this->label5->Text = L"Octagono ";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(44, 15);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(119, 24);
			this->label4->TabIndex = 65;
			this->label4->Text = L"Heptagono ";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(48, 10);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(111, 24);
			this->label3->TabIndex = 64;
			this->label3->Text = L"Pentagono";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(42, 10);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(123, 24);
			this->label2->TabIndex = 63;
			this->label2->Text = L"Cuadrilatero";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(44, 10);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(105, 24);
			this->label9->TabIndex = 62;
			this->label9->Text = L"Triangulo ";
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->label9);
			this->panel1->Controls->Add(this->calc1);
			this->panel1->Controls->Add(this->tria2);
			this->panel1->Controls->Add(this->tria1);
			this->panel1->Controls->Add(this->resul1);
			this->panel1->Controls->Add(this->label10);
			this->panel1->Controls->Add(this->alttri);
			this->panel1->Location = System::Drawing::Point(30, 54);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(204, 170);
			this->panel1->TabIndex = 116;
			// 
			// panel2
			// 
			this->panel2->Controls->Add(this->label2);
			this->panel2->Controls->Add(this->calc2);
			this->panel2->Controls->Add(this->cuadri1);
			this->panel2->Controls->Add(this->resul2);
			this->panel2->Controls->Add(this->label19);
			this->panel2->Location = System::Drawing::Point(273, 54);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(204, 170);
			this->panel2->TabIndex = 117;
			// 
			// panel3
			// 
			this->panel3->Controls->Add(this->label3);
			this->panel3->Controls->Add(this->calc3);
			this->panel3->Controls->Add(this->penta2);
			this->panel3->Controls->Add(this->penta1);
			this->panel3->Controls->Add(this->resul3);
			this->panel3->Controls->Add(this->label12);
			this->panel3->Controls->Add(this->label20);
			this->panel3->Location = System::Drawing::Point(524, 54);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(204, 170);
			this->panel3->TabIndex = 118;
			// 
			// panel4
			// 
			this->panel4->Controls->Add(this->label7);
			this->panel4->Controls->Add(this->calc4);
			this->panel4->Controls->Add(this->hexa2);
			this->panel4->Controls->Add(this->hexa1);
			this->panel4->Controls->Add(this->resul4);
			this->panel4->Controls->Add(this->label13);
			this->panel4->Controls->Add(this->label21);
			this->panel4->Location = System::Drawing::Point(785, 54);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(204, 170);
			this->panel4->TabIndex = 119;
			// 
			// panel5
			// 
			this->panel5->Controls->Add(this->label4);
			this->panel5->Controls->Add(this->calc5);
			this->panel5->Controls->Add(this->hepta2);
			this->panel5->Controls->Add(this->hepta1);
			this->panel5->Controls->Add(this->resul5);
			this->panel5->Controls->Add(this->label22);
			this->panel5->Controls->Add(this->label26);
			this->panel5->Location = System::Drawing::Point(30, 256);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(204, 176);
			this->panel5->TabIndex = 120;
			this->panel5->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::panel5_Paint);
			// 
			// panel6
			// 
			this->panel6->Controls->Add(this->label5);
			this->panel6->Controls->Add(this->calc6);
			this->panel6->Controls->Add(this->octa2);
			this->panel6->Controls->Add(this->octa1);
			this->panel6->Controls->Add(this->resul6);
			this->panel6->Controls->Add(this->label23);
			this->panel6->Controls->Add(this->label27);
			this->panel6->Location = System::Drawing::Point(273, 256);
			this->panel6->Name = L"panel6";
			this->panel6->Size = System::Drawing::Size(204, 176);
			this->panel6->TabIndex = 121;
			// 
			// panel7
			// 
			this->panel7->Controls->Add(this->enea1);
			this->panel7->Controls->Add(this->label6);
			this->panel7->Controls->Add(this->calc7);
			this->panel7->Controls->Add(this->enea2);
			this->panel7->Controls->Add(this->resul7);
			this->panel7->Controls->Add(this->label24);
			this->panel7->Controls->Add(this->label28);
			this->panel7->Location = System::Drawing::Point(524, 256);
			this->panel7->Name = L"panel7";
			this->panel7->Size = System::Drawing::Size(204, 176);
			this->panel7->TabIndex = 122;
			// 
			// panel8
			// 
			this->panel8->Controls->Add(this->label8);
			this->panel8->Controls->Add(this->calc8);
			this->panel8->Controls->Add(this->deca2);
			this->panel8->Controls->Add(this->deca1);
			this->panel8->Controls->Add(this->resul8);
			this->panel8->Controls->Add(this->label25);
			this->panel8->Controls->Add(this->label29);
			this->panel8->Location = System::Drawing::Point(785, 256);
			this->panel8->Name = L"panel8";
			this->panel8->Size = System::Drawing::Size(204, 176);
			this->panel8->TabIndex = 123;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1084, 469);
			this->Controls->Add(this->panel8);
			this->Controls->Add(this->panel7);
			this->Controls->Add(this->panel6);
			this->Controls->Add(this->panel5);
			this->Controls->Add(this->panel4);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->label1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			this->panel4->ResumeLayout(false);
			this->panel4->PerformLayout();
			this->panel5->ResumeLayout(false);
			this->panel5->PerformLayout();
			this->panel6->ResumeLayout(false);
			this->panel6->PerformLayout();
			this->panel7->ResumeLayout(false);
			this->panel7->PerformLayout();
			this->panel8->ResumeLayout(false);
			this->panel8->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void panel5_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
private: System::Void calc1_Click(System::Object^ sender, System::EventArgs^ e) {
	int numt1 = Convert::ToInt32(tria1->Text);
	int numt2 = Convert::ToInt32(tria2->Text);

	struct Poligonos miPoligonos;
	resul1->Text = "El perimetro es " + miPoligonos.peritria(numt2) + "\n El area es " + miPoligonos.areatria(numt1, numt2);
}
private: System::Void calc2_Click(System::Object^ sender, System::EventArgs^ e) {
	int numc1 = Convert::ToInt32(cuadri1->Text);
	struct Poligonos miPoligonos;
	resul2->Text = "El perimetro es: " + miPoligonos.pericudri(numc1) + "\n El area es: " + miPoligonos.areacudri(numc1);
}
private: System::Void calc3_Click(System::Object^ sender, System::EventArgs^ e) {
	int numpe1 = Convert::ToInt32(penta1->Text);
	int numpe2 = Convert::ToInt32(penta2->Text);
	struct Poligonos miPoligonos;
	resul3->Text = "El perimetro es: " + miPoligonos.peripenta(numpe1) + "\n El area es: " + miPoligonos.areapenta(numpe1, numpe2);
}
private: System::Void calc4_Click(System::Object^ sender, System::EventArgs^ e) {
	int numhex1 = Convert::ToInt32(hexa1->Text);
	int numhex2 = Convert::ToInt32(hexa2->Text);
	struct Poligonos miPoligonos;
	resul4->Text = "El perimetro es: " + miPoligonos.perihexa(numhex1) + "\n El area es: " + miPoligonos.areahexa(numhex1, numhex2);
}
private: System::Void calc5_Click(System::Object^ sender, System::EventArgs^ e) {
	int numhp1 = Convert::ToInt32(hepta1->Text);
	int numhp2 = Convert::ToInt32(hepta2->Text);
	struct Poligonos miPoligonos;
	resul5->Text = "El perimetro es: " + miPoligonos.perihepta(numhp1) + "\n El area es: " + miPoligonos.areahepta(numhp1, numhp2);
}
private: System::Void calc6_Click(System::Object^ sender, System::EventArgs^ e) {
	int numoct1 = Convert::ToInt32(octa1->Text);
	int numoct2 = Convert::ToInt32(octa2->Text);
	struct Poligonos miPoligonos;
	resul6->Text = "El perimetro es: " + miPoligonos.periocta(numoct1) + "\n El area es: " + miPoligonos.areaocta(numoct1, numoct2);
}
private: System::Void calc7_Click(System::Object^ sender, System::EventArgs^ e) {
	int numene1 = Convert::ToInt32(enea1->Text);
	int numene2 = Convert::ToInt32(enea2->Text);
	struct Poligonos miPoligonos;
	resul7->Text = "El perimetro es: " + miPoligonos.periene(numene1) + "\n El area es: " + miPoligonos.areaene(numene1, numene2);
}
private: System::Void calc8_Click(System::Object^ sender, System::EventArgs^ e) {
	int numdeca1 = Convert::ToInt32(deca1->Text);
	int numdeca2 = Convert::ToInt32(deca2->Text);
	struct Poligonos miPoligonos;
	resul8->Text = "El perimetro es: " + miPoligonos.perideca(numdeca1) + "\n El area es: " + miPoligonos.areadeca(numdeca1, numdeca2);
}
};
}
