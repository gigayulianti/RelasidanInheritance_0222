#include <iostream>
using namespace std;

//penyertaan file header anak.h dan ibu.h
#include "anak.h"
#include "ibu.h"

intmain()
{
    //deklarasi dan pemberian nilai variabel pointer un tuk objrk dari class ibu dan anak
    Ibu* varIbu = new ibu("rani");
    Ibu* varIbu2 = new ibu("sari");
    Ibu* varAnak1 = new ibu("tono");
    Ibu* varAnak2 = new ibu("tiara");
    Ibu* varAnak3 = new ibu("dini");

    //panggilan dan pemberian argument pada prosedur tambahAnak()
    varIbu->tambahAnak(varAnak1);
    varIbu->tambahAnak(varAnak2);
    varIbu1->tambahAnak(varAnak3);
    varIbu2->tambahAnak(varAnak1);

    var ibu->cetakAnak();
    var ibu2->cetakAnak();

    delete varIbu;
    delete varibu2;
    delete varAnak1;
    delete varAnak2;
    delete varAnak3;

    system("pause");

    return 0;

}