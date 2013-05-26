#include "TestQuestions.h"

#pragma once

namespace ParallelLabs {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MainForm
	/// </summary>
	public ref class MainForm : public System::Windows::Forms::Form
	{
	public:
		MainForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::GroupBox^  labGroupBox;
	private: System::Windows::Forms::RadioButton^  lab3radioButton;
	private: System::Windows::Forms::RadioButton^  lab2radioButton;
	private: System::Windows::Forms::RadioButton^  lab1radioButton;
	private: System::Windows::Forms::StatusStrip^  statusStrip1;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::ToolStripStatusLabel^  toolStripStatusLabel1;

	private: int labNumber;
	protected: 

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->labGroupBox = (gcnew System::Windows::Forms::GroupBox());
			this->lab3radioButton = (gcnew System::Windows::Forms::RadioButton());
			this->lab2radioButton = (gcnew System::Windows::Forms::RadioButton());
			this->lab1radioButton = (gcnew System::Windows::Forms::RadioButton());
			this->statusStrip1 = (gcnew System::Windows::Forms::StatusStrip());
			this->toolStripStatusLabel1 = (gcnew System::Windows::Forms::ToolStripStatusLabel());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->labGroupBox->SuspendLayout();
			this->statusStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Sylfaen", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(119, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(327, 35);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Лабораторный практикум";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Sylfaen", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(12, 44);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(508, 22);
			this->label2->TabIndex = 1;
			this->label2->Text = L"по курсу \"Аппаратные и программные средства параллельной обработки\"";
			// 
			// labGroupBox
			// 
			this->labGroupBox->Controls->Add(this->lab3radioButton);
			this->labGroupBox->Controls->Add(this->lab2radioButton);
			this->labGroupBox->Controls->Add(this->lab1radioButton);
			this->labGroupBox->Location = System::Drawing::Point(16, 80);
			this->labGroupBox->Name = L"labGroupBox";
			this->labGroupBox->Size = System::Drawing::Size(536, 98);
			this->labGroupBox->TabIndex = 2;
			this->labGroupBox->TabStop = false;
			this->labGroupBox->Text = L"Выберите работу:";
			// 
			// lab3radioButton
			// 
			this->lab3radioButton->AutoSize = true;
			this->lab3radioButton->Location = System::Drawing::Point(17, 65);
			this->lab3radioButton->Name = L"lab3radioButton";
			this->lab3radioButton->Size = System::Drawing::Size(394, 17);
			this->lab3radioButton->TabIndex = 2;
			this->lab3radioButton->TabStop = true;
			this->lab3radioButton->Text = L"№3 Механизмы организации взаимодействия параллельных процессов";
			this->lab3radioButton->UseVisualStyleBackColor = true;
			this->lab3radioButton->CheckedChanged += gcnew System::EventHandler(this, &MainForm::lab3radioButton_CheckedChanged);
			// 
			// lab2radioButton
			// 
			this->lab2radioButton->AutoSize = true;
			this->lab2radioButton->Location = System::Drawing::Point(17, 42);
			this->lab2radioButton->Name = L"lab2radioButton";
			this->lab2radioButton->Size = System::Drawing::Size(406, 17);
			this->lab2radioButton->TabIndex = 1;
			this->lab2radioButton->TabStop = true;
			this->lab2radioButton->Text = L"№2 Изучение характеристик многопроцессорных вычислительных систем";
			this->lab2radioButton->UseVisualStyleBackColor = true;
			this->lab2radioButton->CheckedChanged += gcnew System::EventHandler(this, &MainForm::lab2radioButton_CheckedChanged);
			// 
			// lab1radioButton
			// 
			this->lab1radioButton->AutoSize = true;
			this->lab1radioButton->Location = System::Drawing::Point(17, 19);
			this->lab1radioButton->Name = L"lab1radioButton";
			this->lab1radioButton->Size = System::Drawing::Size(374, 17);
			this->lab1radioButton->TabIndex = 0;
			this->lab1radioButton->TabStop = true;
			this->lab1radioButton->Text = L"№1 Выбор рациональной архитектуры многопроцессорной системы";
			this->lab1radioButton->UseVisualStyleBackColor = true;
			this->lab1radioButton->CheckedChanged += gcnew System::EventHandler(this, &MainForm::lab1radioButton_CheckedChanged);
			// 
			// statusStrip1
			// 
			this->statusStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) {this->toolStripStatusLabel1});
			this->statusStrip1->Location = System::Drawing::Point(0, 229);
			this->statusStrip1->Name = L"statusStrip1";
			this->statusStrip1->Size = System::Drawing::Size(564, 22);
			this->statusStrip1->TabIndex = 4;
			this->statusStrip1->Text = L"statusStrip1";
			// 
			// toolStripStatusLabel1
			// 
			this->toolStripStatusLabel1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.25F));
			this->toolStripStatusLabel1->ImageAlign = System::Drawing::ContentAlignment::BottomRight;
			this->toolStripStatusLabel1->Name = L"toolStripStatusLabel1";
			this->toolStripStatusLabel1->Size = System::Drawing::Size(137, 17);
			this->toolStripStatusLabel1->Text = L"МИФИ, кафедра 29, 2013";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(16, 187);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(536, 31);
			this->button1->TabIndex = 6;
			this->button1->Text = L"Далее ->";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MainForm::button1_Click);
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(564, 251);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->statusStrip1);
			this->Controls->Add(this->labGroupBox);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedToolWindow;
			this->Name = L"MainForm";
			this->labGroupBox->ResumeLayout(false);
			this->labGroupBox->PerformLayout();
			this->statusStrip1->ResumeLayout(false);
			this->statusStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			 Form^ questionForm = gcnew TestQuestions(labNumber);

			 //questionForm->Activate();
			 questionForm->Show();

		 }
private: System::Void lab1radioButton_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {

			 if (this->lab1radioButton->Checked)
				labNumber = 1;

		 }
private: System::Void lab2radioButton_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
		 
			 if (this->lab2radioButton->Checked)
				labNumber = 2;
		 
		 }

private: System::Void lab3radioButton_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {

			 if (this->lab3radioButton->Checked)
				labNumber = 3;

		 }
};
}

