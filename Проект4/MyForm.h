#pragma once
#include <fstream>
//#include <stdlib.h>  
#include <random>  

#define MAXSTACK 64 // максимальный размер стека
#define _CRT_RAND_S


namespace Проект4 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::IO;
	using namespace System::Drawing;
	using namespace std;



	public class point
	{
	public:double x;
	public:double fx;
		   point()
		   {
		   }
		   point(double a, double b)
		   {
			   x = a;
			   fx = b;
		   }
	};
	bool operator <(point a, point b)
	{
		if (a.x < b.x)
			return true;
		else
			return false;
	}

	void f1(point* a, int n, double h, double x);
	void f2(point* a, int n, double h, double x);
	void f3(point* a, int n, double h, double x);
	
	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::FolderBrowserDialog^  folderBrowserDialog1;
	private: System::Windows::Forms::ContextMenuStrip^  contextMenuStrip1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::TextBox^  textBox4;

	public:
		int inter;
	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::OpenFileDialog^  openFileDialog1;
	private: System::Windows::Forms::TextBox^  textBox1;

	private: System::ComponentModel::BackgroundWorker^  backgroundWorker1;
	private: System::ComponentModel::IContainer^  components;

	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->backgroundWorker1 = (gcnew System::ComponentModel::BackgroundWorker());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->folderBrowserDialog1 = (gcnew System::Windows::Forms::FolderBrowserDialog());
			this->contextMenuStrip1 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(168, 100);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 45);
			this->button1->TabIndex = 0;
			this->button1->Text = L"back";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(70, 219);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(173, 20);
			this->textBox1->TabIndex = 1;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(216, 28);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(56, 48);
			this->button2->TabIndex = 3;
			this->button2->Text = L"forward";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// contextMenuStrip1
			// 
			this->contextMenuStrip1->Name = L"contextMenuStrip1";
			this->contextMenuStrip1->Size = System::Drawing::Size(61, 4);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(31, 222);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(33, 13);
			this->label1->TabIndex = 4;
			this->label1->Text = L"errors";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(168, 28);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(42, 20);
			this->textBox2->TabIndex = 5;
			this->textBox2->Text = L"0,1";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(144, 31);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(13, 13);
			this->label2->TabIndex = 6;
			this->label2->Text = L"h";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(144, 63);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(13, 13);
			this->label3->TabIndex = 7;
			this->label3->Text = L"n";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(168, 63);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(42, 20);
			this->textBox3->TabIndex = 8;
			this->textBox3->Text = L"1000";
			// 
			// comboBox1
			// 
			this->comboBox1->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(3) {
				L"f(x)=sin(x) X cos(x)", L"f(x)=x^2 X tan(x)",
					L"f(x)=x^3+5x"
			});
			this->comboBox1->Location = System::Drawing::Point(12, 27);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(126, 21);
			this->comboBox1->TabIndex = 9;
			this->comboBox1->SelectedIndex=0;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(9, 63);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(44, 13);
			this->label4->TabIndex = 10;
			this->label4->Text = L"From x=";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(59, 60);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(49, 20);
			this->textBox4->TabIndex = 11;
			this->textBox4->Text = L"0";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 261);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}

	void MarshalString(String ^ s, string& os) {
			using namespace Runtime::InteropServices;
			const char* chars =
				(const char*)(Marshal::StringToHGlobalAnsi(s)).ToPointer();
			os = chars;
			Marshal::FreeHGlobal(IntPtr((void*)chars));
		}

	void interpol(point* a,int n,int k,point* y)  //a-original  y-finding
	{
		int i = 0;
		while (a[i].x < y[i].x)
			i++;
		double* z = new double[inter];
		double temp=1;
		for (int i = 0; i < inter; i++)
		{
			for (int j = 0; j < n; j++)
				if (i != j)
					temp *= (a[i].x - a[j].x);
			z[i] = a[i].fx / temp;
		}

	}


	template<class T>
	void qSortI(T a[], long size) {

		long i, j; // указатели, участвующие в разделении
		long lb, ub; // границы сортируемого в цикле фрагмента

		long lbstack[MAXSTACK], ubstack[MAXSTACK]; // стек запросов
												   // каждый запрос задается парой значений,
												   // а именно: левой(lbstack) и правой(ubstack)
												   // границами промежутка
		long stackpos = 1; // текущая позиция стека
		long ppos; // середина массива
		T pivot; // опорный элемент
		T temp;

		lbstack[1] = 0;
		ubstack[1] = size - 1;

		do {
			// Взять границы lb и ub текущего массива из стека.
			lb = lbstack[stackpos];
			ub = ubstack[stackpos];
			stackpos--;

			do {
				// Шаг 1. Разделение по элементу pivot
				ppos = (lb + ub) >> 1;
				i = lb; j = ub; pivot = a[ppos];
				do {
					while (a[i] < pivot) i++;
					while (pivot < a[j]) j--;
					if (i <= j) {
						temp = a[i]; a[i] = a[j]; a[j] = temp;
						i++; j--;
					}
				} while (i <= j);

				// Сейчас указатель i указывает на начало правого подмассива,
				// j - на конец левого (см. иллюстрацию выше), lb ? j ? i ? ub.
				// Возможен случай, когда указатель i или j выходит за границу массива

				// Шаги 2, 3. Отправляем большую часть в стек и двигаем lb,ub
				if (i < ppos) { // правая часть больше
					if (i < ub) { // если в ней больше 1 элемента - нужно
						stackpos++; // сортировать, запрос в стек
						lbstack[stackpos] = i;
						ubstack[stackpos] = ub;
					}
					ub = j; // следующая итерация разделения
							// будет работать с левой частью
				}
				else { // левая часть больше
					if (j > lb) {
						stackpos++;
						lbstack[stackpos] = lb;
						ubstack[stackpos] = j;
					}
					lb = i;
				}
			} while (lb < ub); // пока в меньшей части более 1 элемента
		} while (stackpos != 0); // пока есть запросы в стеке
	}

	

#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		String^ path1;
		point* a;
		point* t;
		int n,k;
		openFileDialog1->Title = "File with data (file №1)";
		if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)  //исходные данные x, f(x)
		 path1 = openFileDialog1->FileName;
		try
		{
			ifstream fin;
			string path;
			MarshalString(path1, path);
			fin.open(path, ios_base::in);
			fin >> n;
			a = new point[n];
			for (int i = 0; i < n; i++)
			{
				fin>>a[i].x;  //x
				fin>>a[i].fx;  //f(x)
			}
			fin.close();
		}
		catch (Exception^ e)
		{
			textBox1->Text = Convert::ToString(e);
		}
		qSortI(a, (long)n);

		//file 2

		openFileDialog1->Title = "File with point with inter (file №2)";
		if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)  //неизвекстные значения х
			path1 = openFileDialog1->FileName;
		try
		{
			ifstream fin;
			string path;
			MarshalString(path1, path);
			fin.open(path, ios_base::in);
			fin >> k;
			t = new point [k];
			for (int i = 0; i < k; i++)
			{
				fin >> t[i].x;  //t
				//fin >> a[i][1];  //t(x)
			}
			fin.close();
		}
		catch (Exception^ e)
		{
			textBox1->Text = Convert::ToString(e);
		}
		qSortI(t, (long)k);
	}



private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	String^ path1;
	if (folderBrowserDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)  //папка, куда записывать значения
		path1 = folderBrowserDialog1->SelectedPath;
	double h = Convert::ToDouble(textBox2->Text);
	double x= Convert::ToDouble(textBox4->Text);
	int n = Convert::ToInt32(textBox3->Text);
	random_device rd;   // non-deterministic generator  
	mt19937 gen(rd());  // to seed mersenne twister.  
	uniform_real_distribution<> dist2(x-x/2, x+x/2);
	double x1 = dist2(gen);
	uniform_real_distribution<> dist(0, h);
	double h1 = dist(gen);
	uniform_int_distribution<> dist1(10, n*10);
	int m = dist1(gen);
	point* a = new  point[n];
	point* b = new  point[m];
	switch (comboBox1->SelectedIndex)
	{
		case 0:
			f1(a, n, h, x);
			break;
		case 1:
			f2(a, n, h, x);
			break;
		case 2:
			f3(a, n, h, x);
			break;
	}
	switch (comboBox1->SelectedIndex)
	{
	case 0:
		f1(b, m, h1, x1);
		break;
	case 1:
		f2(b, m, h1, x1);
		break;
	case 2:
		f3(b, m, h1, x1);
		break;
	}
	try
	{
		ofstream fout;
		string path;
		String^ path2;
		path2 = path1+ "\\"+ Convert::ToString(comboBox1->SelectedItem)+".txt";
		MarshalString(path2, path);
		fout.open(path, ios_base::out);
		fout << n <<endl;
		for (int i = 0; i < n; i++)
		{
			fout << a[i].x <<" "<< a[i].fx<<endl;
		}
		path2 = path1 + "\\" + Convert::ToString(comboBox1->SelectedItem) + " needed.txt";
		MarshalString(path2, path);
		fout.close();
		fout.open(path, ios_base::out);
		fout << m << endl;
		for (int i = 0; i < m; i++)
		{
			fout << b[i].x << endl;
		}
		path2 = path1 + "\\" + Convert::ToString(comboBox1->SelectedItem) + " needed f(x).txt";
		MarshalString(path2, path);
		fout.close();
		fout.open(path, ios_base::out);
		fout << "n=" << m << "  h=" << h1 << "   x=" << x1 << endl;
		for (int i = 0; i < m; i++)
		{
			fout << b[i].x << " " << b[i].fx << endl;
		}
		fout.close();
	}
	catch (Exception^ e)
	{
		textBox1->Text = Convert::ToString(e);
	}
	delete []a;
	delete[]b;
}
};

void f1(point* a,int n,double h,double x)
{
	for (int i = 0; i < n; i++)
	{
		a[i].x = x+i*h;
		a[i].fx = sin(a[i].x)*cos(a[i].x);
	}
}
	
void f2(point* a, int n, double h, double x)
{
	for (int i = 0; i < n; i++)
	{
		a[i].x = x+i*h;
		a[i].fx = a[i].x*a[i].x*tan(a[i].x);
	}
}

void f3(point* a, int n, double h, double x)
{
	for (int i = 0; i < n; i++)
	{
		a[i].x = x+i*h;
		a[i].fx = a[i].x*a[i].x*a[i].x+5*a[i].x;
	}
}

}
