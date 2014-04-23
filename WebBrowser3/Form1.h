#pragma once


namespace WebBrowser3 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form1
	///
	/// WARNING: If you change the name of this class, you will need to change the
	///          'Resource File Name' property for the managed resource compiler tool
	///          associated with all .resx files this class depends on.  Otherwise,
	///          the designers will not be able to interact properly with localized
	///          resources associated with this form.
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
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
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::WebBrowser^  webBrowser1;
	protected: 
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button5;

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
			this->webBrowser1 = (gcnew System::Windows::Forms::WebBrowser());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// webBrowser1
			// 
			this->webBrowser1->Location = System::Drawing::Point(12, 12);
			this->webBrowser1->MinimumSize = System::Drawing::Size(20, 20);
			this->webBrowser1->Name = L"webBrowser1";
			this->webBrowser1->Size = System::Drawing::Size(424, 418);
			this->webBrowser1->TabIndex = 0;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(25, 484);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Wstecz";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(132, 484);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 2;
			this->button2->Text = L"Naprzód";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(22, 449);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(37, 13);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Adres:";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(474, 12);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(494, 418);
			this->textBox1->TabIndex = 4;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(234, 484);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(202, 23);
			this->button3->TabIndex = 6;
			this->button3->Text = L"Wyœwietl pliki graficzne";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Form1::button3_Click);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(66, 449);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(755, 20);
			this->textBox2->TabIndex = 7;
			this->textBox2->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &Form1::textBox2_KeyDown);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(458, 484);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(236, 23);
			this->button4->TabIndex = 8;
			this->button4->Text = L"Wyœwietl odnoœniki";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Form1::button4_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(721, 484);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(222, 23);
			this->button5->TabIndex = 9;
			this->button5->Text = L"Wyœwietl Ÿród³o";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &Form1::button5_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(980, 519);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->webBrowser1);
			this->Name = L"Form1";
			this->Text = L"Form1";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			 webBrowser1->GoBack();
		 }
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
			 webBrowser1->GoForward();
		 }
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
			 System::Collections::IEnumerator^ element=webBrowser1->Document->Images->GetEnumerator();
			 element->MoveNext();
			 textBox1->Text="";
			 textBox1->AppendText("Pliki graficzne na stronie:" + System::Environment::NewLine);
			 while((element->MoveNext())&&(element !=nullptr)){
				 textBox1->AppendText(((HtmlElement^)(element->Current))->GetAttribute("SRC")->ToString());
				 textBox1->AppendText(System::Environment::NewLine);
			 }
		 }
private: System::Void textBox2_KeyDown(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) {
			if(e->KeyData==System::Windows::Forms::Keys::Enter)
				webBrowser1->Navigate("http://"+textBox2->Text);
		 }
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
			 System::Collections::IEnumerator^ odnosnik= webBrowser1->Document->Links->GetEnumerator();
			 odnosnik->MoveNext();
			 textBox1->Text="";
			 textBox1->AppendText("Odsy³acze na stronie:" + System::Environment::NewLine);
			 System::Int16 i=0;
			 while((odnosnik->MoveNext())&&(odnosnik!=nullptr)){
				 textBox1->AppendText(((HtmlElement^)(odnosnik->Current))->GetAttribute("href")->ToString());
				 textBox1->AppendText(System::Environment::NewLine);
				 i++;
			 }
			 textBox1->AppendText("Liczba odsy³aczy:"+(i+1).ToString() + System::Environment::NewLine);
		 }
private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
			 textBox1->Text=webBrowser1->DocumentText;
		 }
};
}

