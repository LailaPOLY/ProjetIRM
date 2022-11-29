#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}
int MainWindow::lecture()
{

   ifstream filename("C:/Users/Laila/OneDrive/Documents/Data/22-03-14 - Fluo CERMEP/Acq01.txt");

   if(filename)
   {
      //L'ouverture s'est bien passée, on peut donc lire

      string ligne; //Une variable pour stocker les lignes lues

      while(getline(filename, ligne)) //Tant qu'on n'est pas à la fin, on lit
      {
         cout << ligne << endl;
      }
   }
   else
   {
      cout << "ERREUR: Impossible d'ouvrir le fichier en lecture." << endl;
   }

   return 0;
}




void MainWindow::on_pushButton_clicked()
{
    cout<<"Acquisition"<< endl;
}

