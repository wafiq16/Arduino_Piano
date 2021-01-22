#pragma once

namespace GuiPiano {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
	private: System::Windows::Forms::PictureBox^  pictureBox2;
	private: System::Windows::Forms::PictureBox^  pictureBox3;
	public:
		int myDataPiano;

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  DO;
	private: System::Windows::Forms::Button^  RE;
	private: System::Windows::Forms::Button^  MI;
	private: System::Windows::Forms::Button^  FA;
	private: System::Windows::Forms::Button^  SOL;
	private: System::Windows::Forms::Button^  LA;
	private: System::Windows::Forms::Button^  SI;
	private: System::Windows::Forms::Button^  DORE;
	private: System::Windows::Forms::Button^  REMI;
	private: System::Windows::Forms::Button^  FASOL;
	private: System::Windows::Forms::Button^  SOLLA;
	private: System::Windows::Forms::Button^  LASI;
	private: System::IO::Ports::SerialPort^  serialPort1;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::TextBox^  textBox1;

	private: System::ComponentModel::IContainer^  components;
	protected:












	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->DO = (gcnew System::Windows::Forms::Button());
			this->RE = (gcnew System::Windows::Forms::Button());
			this->MI = (gcnew System::Windows::Forms::Button());
			this->FA = (gcnew System::Windows::Forms::Button());
			this->SOL = (gcnew System::Windows::Forms::Button());
			this->LA = (gcnew System::Windows::Forms::Button());
			this->SI = (gcnew System::Windows::Forms::Button());
			this->DORE = (gcnew System::Windows::Forms::Button());
			this->REMI = (gcnew System::Windows::Forms::Button());
			this->FASOL = (gcnew System::Windows::Forms::Button());
			this->SOLLA = (gcnew System::Windows::Forms::Button());
			this->LASI = (gcnew System::Windows::Forms::Button());
			this->serialPort1 = (gcnew System::IO::Ports::SerialPort(this->components));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			this->SuspendLayout();
			// 
			// DO
			// 
			this->DO->Location = System::Drawing::Point(12, 226);
			this->DO->Name = L"DO";
			this->DO->Size = System::Drawing::Size(45, 23);
			this->DO->TabIndex = 0;
			this->DO->Text = L"DO";
			this->DO->UseVisualStyleBackColor = true;
			this->DO->Click += gcnew System::EventHandler(this, &MyForm::DO_Click);
			// 
			// RE
			// 
			this->RE->Location = System::Drawing::Point(100, 226);
			this->RE->Name = L"RE";
			this->RE->Size = System::Drawing::Size(43, 23);
			this->RE->TabIndex = 1;
			this->RE->Text = L"RE";
			this->RE->UseVisualStyleBackColor = true;
			this->RE->Click += gcnew System::EventHandler(this, &MyForm::RE_Click);
			// 
			// MI
			// 
			this->MI->Location = System::Drawing::Point(191, 229);
			this->MI->Name = L"MI";
			this->MI->Size = System::Drawing::Size(29, 21);
			this->MI->TabIndex = 2;
			this->MI->Text = L"MI";
			this->MI->UseVisualStyleBackColor = true;
			this->MI->Click += gcnew System::EventHandler(this, &MyForm::MI_Click);
			// 
			// FA
			// 
			this->FA->Location = System::Drawing::Point(237, 228);
			this->FA->Name = L"FA";
			this->FA->Size = System::Drawing::Size(29, 22);
			this->FA->TabIndex = 3;
			this->FA->Text = L"FA";
			this->FA->UseVisualStyleBackColor = true;
			this->FA->Click += gcnew System::EventHandler(this, &MyForm::FA_Click);
			// 
			// SOL
			// 
			this->SOL->Location = System::Drawing::Point(320, 228);
			this->SOL->Name = L"SOL";
			this->SOL->Size = System::Drawing::Size(33, 22);
			this->SOL->TabIndex = 4;
			this->SOL->Text = L"SOL";
			this->SOL->UseVisualStyleBackColor = true;
			this->SOL->Click += gcnew System::EventHandler(this, &MyForm::SOL_Click);
			// 
			// LA
			// 
			this->LA->Location = System::Drawing::Point(409, 228);
			this->LA->Name = L"LA";
			this->LA->Size = System::Drawing::Size(32, 21);
			this->LA->TabIndex = 5;
			this->LA->Text = L"LA";
			this->LA->UseVisualStyleBackColor = true;
			this->LA->Click += gcnew System::EventHandler(this, &MyForm::LA_Click);
			// 
			// SI
			// 
			this->SI->Location = System::Drawing::Point(491, 231);
			this->SI->Name = L"SI";
			this->SI->Size = System::Drawing::Size(31, 19);
			this->SI->TabIndex = 6;
			this->SI->Text = L"SI";
			this->SI->UseVisualStyleBackColor = true;
			this->SI->Click += gcnew System::EventHandler(this, &MyForm::SI_Click);
			// 
			// DORE
			// 
			this->DORE->Location = System::Drawing::Point(54, 182);
			this->DORE->Name = L"DORE";
			this->DORE->Size = System::Drawing::Size(49, 23);
			this->DORE->TabIndex = 7;
			this->DORE->Text = L"DORE";
			this->DORE->UseVisualStyleBackColor = true;
			this->DORE->Click += gcnew System::EventHandler(this, &MyForm::DORE_Click);
			// 
			// REMI
			// 
			this->REMI->Location = System::Drawing::Point(139, 183);
			this->REMI->Name = L"REMI";
			this->REMI->Size = System::Drawing::Size(51, 22);
			this->REMI->TabIndex = 8;
			this->REMI->Text = L"REMI";
			this->REMI->UseVisualStyleBackColor = true;
			this->REMI->Click += gcnew System::EventHandler(this, &MyForm::REMI_Click);
			// 
			// FASOL
			// 
			this->FASOL->Location = System::Drawing::Point(264, 183);
			this->FASOL->Name = L"FASOL";
			this->FASOL->Size = System::Drawing::Size(56, 23);
			this->FASOL->TabIndex = 9;
			this->FASOL->Text = L"FASOL";
			this->FASOL->UseVisualStyleBackColor = true;
			this->FASOL->Click += gcnew System::EventHandler(this, &MyForm::FASOL_Click);
			// 
			// SOLLA
			// 
			this->SOLLA->Location = System::Drawing::Point(353, 183);
			this->SOLLA->Name = L"SOLLA";
			this->SOLLA->Size = System::Drawing::Size(52, 23);
			this->SOLLA->TabIndex = 10;
			this->SOLLA->Text = L"SOLLA";
			this->SOLLA->UseVisualStyleBackColor = true;
			this->SOLLA->Click += gcnew System::EventHandler(this, &MyForm::SOLLA_Click);
			// 
			// LASI
			// 
			this->LASI->Location = System::Drawing::Point(444, 185);
			this->LASI->Name = L"LASI";
			this->LASI->Size = System::Drawing::Size(45, 21);
			this->LASI->TabIndex = 11;
			this->LASI->Text = L"LASI";
			this->LASI->UseVisualStyleBackColor = true;
			this->LASI->Click += gcnew System::EventHandler(this, &MyForm::LASI_Click);
			// 
			// serialPort1
			// 
			this->serialPort1->PortName = L"COM4";
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(12, 3);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(131, 184);
			this->pictureBox1->TabIndex = 12;
			this->pictureBox1->TabStop = false;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(459, 38);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 20);
			this->textBox1->TabIndex = 13;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(12, 182);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(592, 182);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox2->TabIndex = 14;
			this->pictureBox2->TabStop = false;
			// 
			// pictureBox3
			// 
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(12, 3);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(592, 202);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox3->TabIndex = 15;
			this->pictureBox3->TabStop = false;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(605, 261);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->LASI);
			this->Controls->Add(this->SOLLA);
			this->Controls->Add(this->FASOL);
			this->Controls->Add(this->REMI);
			this->Controls->Add(this->DORE);
			this->Controls->Add(this->SI);
			this->Controls->Add(this->LA);
			this->Controls->Add(this->SOL);
			this->Controls->Add(this->FA);
			this->Controls->Add(this->MI);
			this->Controls->Add(this->RE);
			this->Controls->Add(this->DO);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->pictureBox1);
			this->Name = L"MyForm";
			this->Text = L"Wafiq\'s Piano";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void DO_Click(System::Object^  sender, System::EventArgs^  e) {
	myDataPiano = 1;
	textBox1->Text = System::Convert::ToString(myDataPiano);
	serialPort1->WriteLine(System::Convert::ToString(myDataPiano));
}

private: System::Void RE_Click(System::Object^  sender, System::EventArgs^  e) {
	myDataPiano = 2;
	textBox1->Text = System::Convert::ToString(myDataPiano);
	serialPort1->WriteLine(System::Convert::ToString(myDataPiano));
}

private: System::Void MI_Click(System::Object^  sender, System::EventArgs^  e) {
	myDataPiano = 3;
	textBox1->Text = System::Convert::ToString(myDataPiano);
	serialPort1->WriteLine(System::Convert::ToString(myDataPiano));
}

private: System::Void FA_Click(System::Object^  sender, System::EventArgs^  e) {
	myDataPiano = 4;
	textBox1->Text = System::Convert::ToString(myDataPiano);
	serialPort1->WriteLine(System::Convert::ToString(myDataPiano));
}

private: System::Void SOL_Click(System::Object^  sender, System::EventArgs^  e) {
	myDataPiano = 5;
	textBox1->Text = System::Convert::ToString(myDataPiano);
	serialPort1->WriteLine(System::Convert::ToString(myDataPiano));
}

private: System::Void LA_Click(System::Object^  sender, System::EventArgs^  e) {
	myDataPiano = 6;
	textBox1->Text = System::Convert::ToString(myDataPiano);
	serialPort1->WriteLine(System::Convert::ToString(myDataPiano));
}

private: System::Void SI_Click(System::Object^  sender, System::EventArgs^  e) {
	myDataPiano = 7;
	textBox1->Text = System::Convert::ToString(myDataPiano);
	serialPort1->WriteLine(System::Convert::ToString(myDataPiano));
}

private: System::Void DORE_Click(System::Object^  sender, System::EventArgs^  e) {
	myDataPiano = 8;
	textBox1->Text = System::Convert::ToString(myDataPiano);
	serialPort1->WriteLine(System::Convert::ToString(myDataPiano));
}

private: System::Void REMI_Click(System::Object^  sender, System::EventArgs^  e) {
	myDataPiano = 9;
	textBox1->Text = System::Convert::ToString(myDataPiano);
	serialPort1->WriteLine(System::Convert::ToString(myDataPiano));
}

private: System::Void FASOL_Click(System::Object^  sender, System::EventArgs^  e) {
	myDataPiano = 10;
	textBox1->Text = System::Convert::ToString(myDataPiano);
	serialPort1->WriteLine(System::Convert::ToString(myDataPiano));
}

private: System::Void SOLLA_Click(System::Object^  sender, System::EventArgs^  e) {
	myDataPiano = 11;
	textBox1->Text = System::Convert::ToString(myDataPiano);
	serialPort1->WriteLine(System::Convert::ToString(myDataPiano));
}

private: System::Void LASI_Click(System::Object^  sender, System::EventArgs^  e) {
	myDataPiano = 12;
	textBox1->Text = System::Convert::ToString(myDataPiano);
	serialPort1->WriteLine(System::Convert::ToString(myDataPiano));
}

private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {

}

private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
	serialPort1->Open();
}
	
};
}
