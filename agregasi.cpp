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

    