#pragma once

namespace TugasAkhir {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for bayaran
	/// </summary>
	public ref class bayaran : public System::Windows::Forms::Form
	{
	public:
		Form^ menu;
		bayaran(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		bayaran(Form^ bayar)
		{
			menu = bayar;
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~bayaran()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	public: System::Windows::Forms::ComboBox^ MerkItem;
	private: System::Windows::Forms::TextBox^ txtID;
	public:
	private:



	private: System::Windows::Forms::Button^ button1;
	public: System::Windows::Forms::ListBox^ keranjang;
	private:

	private:


	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::ListBox^ biaya;
	protected:
	public:String^ id;
	private: System::Windows::Forms::CheckBox^ checkBox1;
	public:


	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(bayaran::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->MerkItem = (gcnew System::Windows::Forms::ComboBox());
			this->txtID = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->keranjang = (gcnew System::Windows::Forms::ListBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->biaya = (gcnew System::Windows::Forms::ListBox());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->ForeColor = System::Drawing::SystemColors::HighlightText;
			this->label1->Location = System::Drawing::Point(13, 37);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(41, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Produk";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->ForeColor = System::Drawing::SystemColors::HighlightText;
			this->label2->Location = System::Drawing::Point(13, 63);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(38, 13);
			this->label2->TabIndex = 1;
			this->label2->Text = L"No. ID";
			// 
			// MerkItem
			// 
			this->MerkItem->FormattingEnabled = true;
			this->MerkItem->Location = System::Drawing::Point(54, 34);
			this->MerkItem->Name = L"MerkItem";
			this->MerkItem->Size = System::Drawing::Size(138, 21);
			this->MerkItem->TabIndex = 2;
			// 
			// txtID
			// 
			this->txtID->Location = System::Drawing::Point(54, 60);
			this->txtID->Name = L"txtID";
			this->txtID->Size = System::Drawing::Size(138, 20);
			this->txtID->TabIndex = 3;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Gold;
			this->button1->Location = System::Drawing::Point(198, 34);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 4;
			this->button1->Text = L"Cek";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &bayaran::button1_Click);
			// 
			// keranjang
			// 
			this->keranjang->FormattingEnabled = true;
			this->keranjang->Location = System::Drawing::Point(16, 117);
			this->keranjang->Name = L"keranjang";
			this->keranjang->Size = System::Drawing::Size(142, 108);
			this->keranjang->TabIndex = 5;
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::LimeGreen;
			this->button2->Location = System::Drawing::Point(85, 230);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 6;
			this->button2->Text = L"Bayar";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &bayaran::button2_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->button3->Location = System::Drawing::Point(-4, 298);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(52, 23);
			this->button3->TabIndex = 7;
			this->button3->Text = L"Back";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &bayaran::button3_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::Red;
			this->button4->ForeColor = System::Drawing::SystemColors::HighlightText;
			this->button4->Location = System::Drawing::Point(243, 298);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(42, 23);
			this->button4->TabIndex = 8;
			this->button4->Text = L"Exit";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &bayaran::button4_Click);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::OrangeRed;
			this->button5->Location = System::Drawing::Point(231, 117);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(42, 23);
			this->button5->TabIndex = 9;
			this->button5->Text = L"Del";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &bayaran::button5_Click);
			// 
			// biaya
			// 
			this->biaya->FormattingEnabled = true;
			this->biaya->Location = System::Drawing::Point(153, 117);
			this->biaya->Name = L"biaya";
			this->biaya->SelectionMode = System::Windows::Forms::SelectionMode::None;
			this->biaya->Size = System::Drawing::Size(72, 108);
			this->biaya->TabIndex = 10;
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->BackColor = System::Drawing::Color::Transparent;
			this->checkBox1->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->checkBox1->Location = System::Drawing::Point(166, 234);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(59, 17);
			this->checkBox1->TabIndex = 11;
			this->checkBox1->Text = L"Semua";
			this->checkBox1->UseVisualStyleBackColor = false;
			// 
			// bayaran
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(284, 319);
			this->Controls->Add(this->checkBox1);
			this->Controls->Add(this->biaya);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->keranjang);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->txtID);
			this->Controls->Add(this->MerkItem);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"bayaran";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"bayaran";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
		int ID = 0;
		void kode() {
			int a = keranjang->SelectedIndex;
			MessageBox::Show("-------------Berhasil------------" + "\n" +
				"\nKode Pembayaran : blpy" + ID +
				"\nSilahkan Bayar di Gerai Terdekat" + "\n" +
				"\n--------Terima Kasih----------");
		}
	public:String^ getData() {
		return txtID->Text;
	}
#pragma endregion
		  int atas = -1; int sod = 0; int rif = 0; int raf = 0; int rai = 0; int far = 0; int kik; int total;
	public: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		id = getData();
		if (MerkItem->SelectedItem->ToString() == "First Media" && id == "100001") {
			ID = 100001;
			if (sod == 0)
			{
				MessageBox::Show("Nama : Sodarmo" + "\nNo. ID : " + id + "\nHarga : Rp.200000");
				keranjang->Items->Add(MerkItem->SelectedItem + "_100001");
				biaya->Items->Add(200000);
				atas++;
				sod++;
				return;
			}
			else if (sod == 10)
			{
				kode();
			}
			else {
				MessageBox::Show("Sudah diproses");
			}
		}
		else if (MerkItem->SelectedItem->ToString() == "XL Home" && id == "200001") {
			ID = 200001;
			if (rif == 0)
			{
				MessageBox::Show("Nama : Rifqi" + "\nNo. ID : " + id + "\nHarga : Rp. 170000");
				keranjang->Items->Add(MerkItem->SelectedItem + "_200001");
				biaya->Items->Add(170000);
				atas++;
				rif++;
				return;
			}
			else if (rif == 10)
			{
				kode();
			}
			else
			{
				MessageBox::Show("Sudah diproses");
			}
		}
		else if (MerkItem->SelectedItem->ToString() == "Play Vision" && id == "300001") {
			ID = 300001;
			if (far == 0) {
				MessageBox::Show("Nama : Farah" + "\nNo. ID : " + id + "\nHarga : Rp. 210000");
				keranjang->Items->Add(MerkItem->SelectedItem + "_300001");
				biaya->Items->Add(210000);
				atas = atas + 1;
				far++;
				return;
			}
			else if (far == 10)
			{

			}
			else
			{
				MessageBox::Show("Sudah diproses");
			}
		}
		else if (MerkItem->SelectedItem->ToString() == "IndiHome" && id == "400001") {
			ID = 400001;
			if (rai == 0)
			{
				MessageBox::Show("Nama : Raihan" + "\nNo. ID : " + id + "\nHarga : Rp. 250000");
				keranjang->Items->Add(MerkItem->SelectedItem + "_400001");
				biaya->Items->Add(250000);
				atas++;
				rai++;
				return;
			}
			else if (rai == 10)
			{
				kode();
			}
			{
				MessageBox::Show("Sudah diproses");
			}
		}
		else if (MerkItem->SelectedItem->ToString() == "Listrik PLN" && id == "100002") {
			ID = 100002;
			if (raf == 0)
			{
				MessageBox::Show("Nama : Rafin" + "\nNo. ID : " + id + "\nHarga : Rp. 350000");
				keranjang->Items->Add(MerkItem->SelectedItem + "_100002");
				biaya->Items->Add(350000);
				atas++;
				raf++;
				return;
			}
			else if (raf==10)
			{
				kode();
			}else
			{
				MessageBox::Show("Sudah diproses");
			}
		}
		else if (MerkItem->SelectedItem->ToString() == "Air POM" && id == "200002") {
			ID = 200002;
			if (kik == 0)
			{
				MessageBox::Show("Nama : kiki" + "\nNo. ID : " + id + "\nHarga : Rp. 100000");
				keranjang->Items->Add(MerkItem->SelectedItem + "_200002");
				biaya->Items->Add(100000);
				atas++;
				kik++;
			}
			else if (kik==10)
			{
				kode();
			}else
			{
				MessageBox::Show("Sudah diproses");
			}
		}
		else
		{
			MessageBox::Show("TIDAK DITEMUKAN !!!");
		}return;
	}
	public: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		int a = keranjang->SelectedIndex;
		int t = keranjang->SelectedItems->Count;
		if (checkBox1->Checked) {
			for (int i = 0; i < keranjang->Items->Count; i++)
			{
				if (biaya->Items[i]->ToString() == "200000") {
					total = total + 200000;
				}
				else if (biaya->Items[i]->ToString() == "350000") {
					total = total + 350000;
				}
				else if (biaya->Items[i]->ToString() == "250000") {
					total = total + 250000;
				}
				else if (biaya->Items[i]->ToString() == "170000") {
					total = total + 170000;
				}
				else if (biaya->Items[i]->ToString() == "100000") {
					total = total + 100000;
				}
				else if (biaya->Items[i]->ToString() == "210000") {
					total = total + 210000;
				}
			}
			MessageBox::Show("-------------Berhasil------------" + "\n" +
				"\nKode Pembayaran : blpy" + total +
				"\nTotal Harga : Rp.  " + total +
				"\nSilahkan Bayar di Gerai Terdekat" + "\n" +
				"\n--------Terima Kasih----------");
			keranjang->Items->Clear();
			biaya->Items->Clear();
		}
		else
		{
			if (a>-1)
			{
				if (biaya->Items[a]->ToString() == "200000") {
					ID = 100001;
					sod = 10;
				}
				else if (biaya->Items[a]->ToString() == "350000") {
					ID = 100002;
					raf = 10;
				}
				else if (biaya->Items[a]->ToString() == "250000") {
					ID = 400001;
					rai = 10;
				}
				else if (biaya->Items[a]->ToString() == "170000") {
					ID = 200001;
					rif = 10;
				}
				else if (biaya->Items[a]->ToString() == "100000") {
					ID = 200002;
					kik = 10;
				}
				else if (biaya->Items[a]->ToString() == "210000") {
					ID = 300001;
					far = 10;
				}MessageBox::Show("-------------Berhasil------------" + "\n" +
					"\nKode Pembayaran : blpy" + ID +
					"\nTotal Harga : Rp.  " + biaya->Items[a] +
					"\nSilahkan Bayar di Gerai Terdekat" + "\n" +
					"\n--------Terima Kasih----------");
				keranjang->Items->RemoveAt(a);
				biaya->Items->RemoveAt(a);
				atas--;
			}
			else
			{
				MessageBox::Show("Pilih Item terlebih dahulu");
			}
		}
	}
	

private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
	menu->Show();
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	Application::Exit();
}
	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
		if (keranjang->Items->Count == 0) {
			MessageBox::Show("Keranjang Kosong!!!");
		}
else {
			if (biaya->Items[atas]->ToString() == "200000") {
				sod = 0;
				keranjang->Items->RemoveAt(atas);
				biaya->Items->RemoveAt(atas);
			}
			else if (biaya->Items[atas]->ToString() == "350000") {
				raf = 0;
				keranjang->Items->RemoveAt(atas);
				biaya->Items->RemoveAt(atas);
			}
			else if (biaya->Items[atas]->ToString() == "250000") {
				rai = 0;
				keranjang->Items->RemoveAt(atas);
				biaya->Items->RemoveAt(atas);
			}
			else if (biaya->Items[atas]->ToString() == "170000") {
				rif = 0;
				keranjang->Items->RemoveAt(atas);
				biaya->Items->RemoveAt(atas);
			}
			else if (biaya->Items[atas]->ToString() == "100000") {
				kik = 0;
				keranjang->Items->RemoveAt(atas);
				biaya->Items->RemoveAt(atas);
			}
			else if (biaya->Items[atas]->ToString() == "210000") {
				far = 0;
				keranjang->Items->RemoveAt(atas);
				biaya->Items->RemoveAt(atas);
			}
			atas--;
			return;
		}
}
};
}

