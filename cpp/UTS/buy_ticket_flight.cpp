// #include <iostream>
// using namespace std;

// string from, destination, namePassenger, nameFlight, priceFlight, codeFlight, go, arrive;
// char bln[10], thn[10];
// int tgl;

// void biodata()
// {

//     cout << "   ------------------------------------------------------------------------------------------" << endl;
//     cout << "                                       Form Biodata Penumpang" << endl;
//     cout << "   ------------------------------------------------------------------------------------------" << endl;
//     cout << "   Nama Penumpang: ";
//     getline(cin, namePassenger);
//     cout << "   ==========================================================================================" << endl;
// }

// void to_Destination()
// {
//     int inputDestination;
// dstn:
//     cout << endl;
//     cout << endl;
//     cout << endl;

//     cout << "   ------------------------------------------------------------------------------------------" << endl;
//     cout << "                           Tujuan keberangkatan yang tersedia saat ini " << endl;
//     cout << "   ------------------------------------------------------------------------------------------" << endl;
//     cout << "   |No|      Asal        ->       Tujuan      |" << endl;
//     cout << "   --------------------------------------------" << endl;
//     cout << "   |1.|    Surabaya      ->      Jakarta      |" << endl;
//     cout << "   |2.|    Surabaya      ->      Banjarmasin  |" << endl;
//     cout << "   |3.|    Surabaya      ->      Samarinda    |" << endl;
//     cout << "   |4.|    Surabaya      ->      Palangka Raya|" << endl;
//     cout << "   |5.|    Surabaya      ->      Pontianak    |" << endl;
//     cout << "   ==========================================================================================" << endl;
//     cout << "   Silahkan pilih tujuan Anda (pilih berdasarkan nomornya): ";
//     cin >> inputDestination;
//     cout << "   ==========================================================================================" << endl;

//     switch (inputDestination)
//     {
//     case 1:
//         from = "Surabaya";
//         destination = "Jakarta";

//         break;
//     case 2:
//         from = "Surabaya";
//         destination = "Banjarmasin";
//         break;
//     case 3:
//         from = "Surabaya";
//         destination = "Samarinda";
//         break;
//     case 4:
//         from = "Surabaya";
//         destination = "Palangka Raya";
//         break;
//     case 5:
//         from = "Surabaya";
//         destination = "Pontianak";
//         break;
//     default:
//         cout << endl;
//         cout << "Tujuan Yang anda pilih saat ini tidak tersedia!\n";
//         cout << "Silahkan pilih tujuan yang hanya tersedia saat ini!\n";
//         goto dstn;
//         break;
//     }
// }

// void date_Destination()
// {
//     cout << endl;
//     cout << endl;
//     cout << endl;
//     cout << "   ------------------------------------------------------------------------------------------" << endl;
//     cout << "                                 Masukkan tanggal berangkat Anda " << endl;
//     cout << "   ------------------------------------------------------------------------------------------" << endl;
//     cout << "   Tanggal (1 - 31): ";
//     cin >> tgl;
//     cout << "   Bulan (contoh: Januari): ";
//     cin >> bln;
//     cout << "   Tahun: ";
//     cin >> thn;
//     cout << "   ==========================================================================================" << endl;
// }

// void list_Flight()
// {
//     int inputFlight, scheduleFlight;
//     cout << endl;
//     cout << endl;
//     cout << endl;
// flight:
//     cout << "   ------------------------------------------------------------------------------------------" << endl;
//     cout << "                         Daftar Pesawat yang tersedia untuk tujuan Anda" << endl;
//     cout << "   ------------------------------------------------------------------------------------------" << endl;

//     cout << "   |1.|    Garuda Indonesia (GA)    |" << endl;
//     cout << "   ----------------------------------" << endl;
//     cout << "   |2.|    Lion Air (JT)            |" << endl;
//     cout << "   ----------------------------------" << endl;
//     cout << "   |3.|    Ciitilink (QG)           |" << endl;
//     cout << "   ----------------------------------" << endl;
//     cout << "   |4.|    AirAsia Indonesia (QZ)   |" << endl;
//     cout << "   ----------------------------------" << endl;
//     cout << "   |5.|    Sriwijaya Air (SJ)       |" << endl;
//     cout << "   ==========================================================================================" << endl;
//     cout << "   Silahkan pilih nama pesawat untuk tujuan Anda (pilih berdasarkan nomornya): ";
//     cin >> inputFlight;
//     cout << "   ==========================================================================================" << endl;

//     // Dibawah ini adalah jadwal penerbangan sesuai dengan pesawat yang dipilih
//     switch (inputFlight)
//     {
//     case 1:
//         nameFlight = "Garuda Indonesia (GA)";
//         if (from == "Surabaya" && destination == "Jakarta")
//         {
//         timeGASJ:
//             cout << endl;
//             cout << endl;
//             cout << endl;
//             cout << "   ------------------------------------------------------------------------------------------" << endl;
//             cout << "   |                        Jadwal Pesawat saat ini untuk penerbangan                       |" << endl;
//             cout << "   |                                 Garuda Indonesia (GA)                                  |" << endl;
//             cout << "   |                                  Surabaya -> Jakarta                                   |" << endl;
//             cout << "   ------------------------------------------------------------------------------------------" << endl;
//             cout << "   |No|    Kode Pesawat    |   Berangkat   |   Tiba    |" << endl;
//             cout << "   ------------------------------------------------------------------------------------------" << endl;
//             cout << "   |1.|    GA-101          |   08.00       |   08.50   |" << endl;
//             cout << "   |2.|    GA-102          |   09.20       |   10.10   |" << endl;
//             cout << "   |3.|    GA-103          |   10.40       |   11.30   |" << endl;
//             cout << "   ==========================================================================================" << endl;
//             cout << "   Pilih jadwal penerbangan Anda (pilih berdasarkan nomornya): ";
//             cin >> scheduleFlight;
//             cout << "   ==========================================================================================" << endl;

//             switch (scheduleFlight)
//             {
//             case 1:
//                 codeFlight = "GA-101";
//                 go = "08.00";
//                 arrive = "08.50";
//                 break;

//             case 2:
//                 codeFlight = "GA-102";
//                 go = "09.20";
//                 arrive = "10.10";
//                 break;
//             case 3:
//                 codeFlight = "GA-103";
//                 go = "10.40";
//                 arrive = "11.30";
//                 break;
//             default:
//                 cout << endl;
//                 cout << "Jadwal penerbangan yang Anda pilih saat ini tidak tersedia!";
//                 cout << "Silahkan pilih jadwal yang tersedia saat ini";
//                 goto timeGASJ;
//                 break;
//             }
//         }
//         else if (from == "Surabaya" && destination == "Banjarmasin")
//         {
//         timeGASB:
//             cout << endl;
//             cout << endl;
//             cout << endl;
//             cout << "   ------------------------------------------------------------------------------------------" << endl;
//             cout << "   |                        Jadwal Pesawat saat ini untuk penerbangan                       |" << endl;
//             cout << "   |                                 Garuda Indonesia (GA)                                  |" << endl;
//             cout << "   |                                Surabaya -> Banjarmasin                                 |" << endl;
//             cout << "   ------------------------------------------------------------------------------------------" << endl;
//             cout << "   |No|    Kode Pesawat    |   Berangkat   |   Tiba    |" << endl;
//             cout << "   ------------------------------------------------------------------------------------------" << endl;
//             cout << "   |1.|    GA-201          |   08.50       |   09.55   |" << endl;
//             cout << "   |2.|    GA-202          |   10.25       |   11.30   |" << endl;
//             cout << "   |3.|    GA-203          |   12.00       |   13.05   |" << endl;
//             cout << "   ==========================================================================================" << endl;
//             cout << "   Pilih jadwal penerbangan Anda (pilih berdasarkan nomornya): ";
//             cin >> scheduleFlight;
//             cout << "   ==========================================================================================" << endl;

//             switch (scheduleFlight)
//             {
//             case 1:
//                 codeFlight = "GA-201";
//                 go = "08.50";
//                 arrive = "09.55";
//                 break;

//             case 2:
//                 codeFlight = "GA-202";
//                 go = "10.25";
//                 arrive = "11.30";
//                 break;
//             case 3:
//                 codeFlight = "GA-203";
//                 go = "12.00";
//                 arrive = "13.05";
//                 break;
//             default:
//                 cout << endl;
//                 cout << "Jadwal penerbangan yang Anda pilih saat ini tidak tersedia!";
//                 cout << "Silahkan pilih jadwal yang tersedia saat ini";
//                 goto timeGASB;
//                 break;
//             }
//         }
//         else if (from == "Surabaya" && destination == "Samarinda")
//         {
//         timeGASS:
//             cout << endl;
//             cout << endl;
//             cout << endl;
//             cout << "   ------------------------------------------------------------------------------------------" << endl;
//             cout << "   |                        Jadwal Pesawat saat ini untuk penerbangan                       |" << endl;
//             cout << "   |                                 Garuda Indonesia (GA)                                  |" << endl;
//             cout << "   |                                 Surabaya -> Samarinda                                  |" << endl;
//             cout << "   ------------------------------------------------------------------------------------------" << endl;
//             cout << "   |No|    Kode Pesawat    |   Berangkat   |   Tiba    |" << endl;
//             cout << "   ------------------------------------------------------------------------------------------" << endl;
//             cout << "   |1.|    GA-301          |   09.20       |   10.30   |" << endl;
//             cout << "   |2.|    GA-302          |   11.00       |   12.10   |" << endl;
//             cout << "   |3.|    GA-303          |   12.40       |   13.50   |" << endl;
//             cout << "   ==========================================================================================" << endl;
//             cout << "   Pilih jadwal penerbangan Anda (pilih berdasarkan nomornya): ";
//             cin >> scheduleFlight;
//             cout << "   ==========================================================================================" << endl;

//             switch (scheduleFlight)
//             {
//             case 1:
//                 codeFlight = "GA-301";
//                 go = "09.20";
//                 arrive = "10.30";
//                 break;

//             case 2:
//                 codeFlight = "GA-302";
//                 go = "11.00";
//                 arrive = "12.10";
//                 break;
//             case 3:
//                 codeFlight = "GA-303";
//                 go = "12.40";
//                 arrive = "13.50";
//                 break;
//             default:
//                 cout << endl;
//                 cout << "Jadwal penerbangan yang Anda pilih saat ini tidak tersedia!";
//                 cout << "Silahkan pilih jadwal yang tersedia saat ini";
//                 goto timeGASS;
//                 break;
//             }
//         }
//         else if (from == "Surabaya" && destination == "Palangka Raya")
//         {
//         timeGASP:
//             cout << endl;
//             cout << endl;
//             cout << endl;
//             cout << "   ------------------------------------------------------------------------------------------" << endl;
//             cout << "   |                        Jadwal Pesawat saat ini untuk penerbangan                       |" << endl;
//             cout << "   |                                 Garuda Indonesia (GA)                                  |" << endl;
//             cout << "   |                               Surabaya -> Palangka Raya                                |" << endl;
//             cout << "   ------------------------------------------------------------------------------------------" << endl;
//             cout << "   |No|    Kode Pesawat    |   Berangkat   |   Tiba    |" << endl;
//             cout << "   ------------------------------------------------------------------------------------------" << endl;
//             cout << "   |1.|    GA-401          |   10.10       |   11.25   |" << endl;
//             cout << "   |2.|    GA-402          |   11.55       |   13.10   |" << endl;
//             cout << "   |3.|    GA-403          |   13.40       |   14.55   |" << endl;
//             cout << "   ==========================================================================================" << endl;
//             cout << "   Pilih jadwal penerbangan Anda (pilih berdasarkan nomornya): ";
//             cin >> scheduleFlight;
//             cout << "   ==========================================================================================" << endl;

//             switch (scheduleFlight)
//             {
//             case 1:
//                 codeFlight = "GA-401";
//                 go = "10.10";
//                 arrive = "11.25";
//                 break;

//             case 2:
//                 codeFlight = "GA-402";
//                 go = "11.55";
//                 arrive = "13.10";
//                 break;
//             case 3:
//                 codeFlight = "GA-403";
//                 go = "13.40";
//                 arrive = "14.55";
//                 break;
//             default:
//                 cout << endl;
//                 cout << "Jadwal penerbangan yang Anda pilih saat ini tidak tersedia!";
//                 cout << "Silahkan pilih jadwal yang tersedia saat ini";
//                 goto timeGASP;
//                 break;
//             }
//         }
//         else if (from == "Surabaya" && destination == "Pontianak")
//         {
//         timeGASPT:
//             cout << endl;
//             cout << endl;
//             cout << endl;
//             cout << "   ------------------------------------------------------------------------------------------" << endl;
//             cout << "   |                        Jadwal Pesawat saat ini untuk penerbangan                       |" << endl;
//             cout << "   |                                 Garuda Indonesia (GA)                                  |" << endl;
//             cout << "   |                                 Surabaya -> Pontianak                                  |" << endl;
//             cout << "   ------------------------------------------------------------------------------------------" << endl;
//             cout << "   |No|    Kode Pesawat    |   Berangkat   |   Tiba    |" << endl;
//             cout << "   ------------------------------------------------------------------------------------------" << endl;
//             cout << "   |1.|    GA-501          |   11.00       |   12.20   |" << endl;
//             cout << "   |2.|    GA-502          |   12.50       |   14.10   |" << endl;
//             cout << "   |3.|    GA-503          |   14.40       |   16.00   |" << endl;
//             cout << "   ==========================================================================================" << endl;
//             cout << "   Pilih jadwal penerbangan Anda (pilih berdasarkan nomornya): ";
//             cin >> scheduleFlight;
//             cout << "   ==========================================================================================" << endl;

//             switch (scheduleFlight)
//             {
//             case 1:
//                 codeFlight = "GA-501";
//                 go = "1 .00";
//                 arrive = "12.20";
//                 break;

//             case 2:
//                 codeFlight = "GA-502";
//                 go = "12.50";
//                 arrive = "14.10";
//                 break;
//             case 3:
//                 codeFlight = "GA-503";
//                 go = "14.40";
//                 arrive = "16.00";
//                 break;
//             default:
//                 cout << endl;
//                 cout << "Jadwal penerbangan yang Anda pilih saat ini tidak tersedia!";
//                 cout << "Silahkan pilih jadwal yang tersedia saat ini";
//                 goto timeGASPT;
//                 break;
//             }
//         }
//         else
//         {
//             cout << "Not Found!";
//         }
//         break;

//     case 2:
//         nameFlight = "Lion Air (JT)";
//         if (from == "Surabaya" && destination == "Jakarta")
//         {
//         timeJTSJ:
//             cout << endl;
//             cout << endl;
//             cout << endl;
//             cout << "   ------------------------------------------------------------------------------------------" << endl;
//             cout << "   |                        Jadwal Pesawat saat ini untuk penerbangan                       |" << endl;
//             cout << "   |                                     Lion Air (JT)                                      |" << endl;
//             cout << "   |                                  Surabaya -> Jakarta                                   |" << endl;
//             cout << "   ------------------------------------------------------------------------------------------" << endl;
//             cout << "   |No|    Kode Pesawat    |   Berangkat   |   Tiba    |" << endl;
//             cout << "   ------------------------------------------------------------------------------------------" << endl;
//             cout << "   |1.|    JT-101          |   08.00       |   08.50   |" << endl;
//             cout << "   |2.|    JT-102          |   09.20       |   10.10   |" << endl;
//             cout << "   |3.|    JT-103          |   10.40       |   11.30   |" << endl;
//             cout << "   ==========================================================================================" << endl;
//             cout << "   Pilih jadwal penerbangan Anda (pilih berdasarkan nomornya): ";
//             cin >> scheduleFlight;
//             cout << "   ==========================================================================================" << endl;

//             switch (scheduleFlight)
//             {
//             case 1:
//                 codeFlight = "JT-101";
//                 go = "08.00";
//                 arrive = "08.50";
//                 break;

//             case 2:
//                 codeFlight = "JT-102";
//                 go = "09.20";
//                 arrive = "10.10";
//                 break;
//             case 3:
//                 codeFlight = "JT-103";
//                 go = "10.40";
//                 arrive = "11.30";
//                 break;
//             default:
//                 cout << endl;
//                 cout << "Jadwal penerbangan yang Anda pilih saat ini tidak tersedia!";
//                 cout << "Silahkan pilih jadwal yang tersedia saat ini";
//                 goto timeJTSJ;
//                 break;
//             }
//         }
//         else if (from == "Surabaya" && destination == "Banjarmasin")
//         {
//         timeJTSB:
//             cout << endl;
//             cout << endl;
//             cout << endl;
//             cout << "   ------------------------------------------------------------------------------------------" << endl;
//             cout << "   |                        Jadwal Pesawat saat ini untuk penerbangan                       |" << endl;
//             cout << "   |                                     Lion Air (JT)                                      |" << endl;
//             cout << "   |                                Surabaya -> Banjarmasin                                 |" << endl;
//             cout << "   ------------------------------------------------------------------------------------------" << endl;
//             cout << "   |No|    Kode Pesawat    |   Berangkat   |   Tiba    |" << endl;
//             cout << "   ------------------------------------------------------------------------------------------" << endl;
//             cout << "   |1.|    JT-201          |   08.50       |   09.55   |" << endl;
//             cout << "   |2.|    JT-202          |   10.25       |   11.30   |" << endl;
//             cout << "   |3.|    JT-203          |   12.00       |   13.05   |" << endl;
//             cout << "   ==========================================================================================" << endl;
//             cout << "   Pilih jadwal penerbangan Anda (pilih berdasarkan nomornya): ";
//             cin >> scheduleFlight;
//             cout << "   ==========================================================================================" << endl;

//             switch (scheduleFlight)
//             {
//             case 1:
//                 codeFlight = "JT-201";
//                 go = "08.50";
//                 arrive = "09.55";
//                 break;

//             case 2:
//                 codeFlight = "JT-202";
//                 go = "10.25";
//                 arrive = "11.30";
//                 break;
//             case 3:
//                 codeFlight = "JT-203";
//                 go = "12.00";
//                 arrive = "13.05";
//                 break;
//             default:
//                 cout << endl;
//                 cout << "Jadwal penerbangan yang Anda pilih saat ini tidak tersedia!";
//                 cout << "Silahkan pilih jadwal yang tersedia saat ini";
//                 goto timeJTSB;
//                 break;
//             }
//         }
//         else if (from == "Surabaya" && destination == "Samarinda")
//         {
//         timeJTSS:
//             cout << endl;
//             cout << endl;
//             cout << endl;
//             cout << "   ------------------------------------------------------------------------------------------" << endl;
//             cout << "   |                        Jadwal Pesawat saat ini untuk penerbangan                       |" << endl;
//             cout << "   |                                     Lion Air (JT)                                      |" << endl;
//             cout << "   |                                 Surabaya -> Samarinda                                  |" << endl;
//             cout << "   ------------------------------------------------------------------------------------------" << endl;
//             cout << "   |No|    Kode Pesawat    |   Berangkat   |   Tiba    |" << endl;
//             cout << "   ------------------------------------------------------------------------------------------" << endl;
//             cout << "   |1.|    JT-301          |   09.20       |   10.30   |" << endl;
//             cout << "   |2.|    JT-302          |   11.00       |   12.10   |" << endl;
//             cout << "   |3.|    JT-303          |   12.40       |   13.50   |" << endl;
//             cout << "   ==========================================================================================" << endl;
//             cout << "   Pilih jadwal penerbangan Anda (pilih berdasarkan nomornya): ";
//             cin >> scheduleFlight;
//             cout << "   ==========================================================================================" << endl;

//             switch (scheduleFlight)
//             {
//             case 1:
//                 codeFlight = "JT-301";
//                 go = "09.20";
//                 arrive = "10.30";
//                 break;

//             case 2:
//                 codeFlight = "JT-302";
//                 go = "11.00";
//                 arrive = "12.10";
//                 break;
//             case 3:
//                 codeFlight = "JT-303";
//                 go = "12.40";
//                 arrive = "13.50";
//                 break;
//             default:
//                 cout << endl;
//                 cout << "Jadwal penerbangan yang Anda pilih saat ini tidak tersedia!";
//                 cout << "Silahkan pilih jadwal yang tersedia saat ini";
//                 goto timeJTSS;
//                 break;
//             }
//         }
//         else if (from == "Surabaya" && destination == "Palangka Raya")
//         {
//         timeJTSP:
//             cout << endl;
//             cout << endl;
//             cout << endl;
//             cout << "   ------------------------------------------------------------------------------------------" << endl;
//             cout << "   |                        Jadwal Pesawat saat ini untuk penerbangan                       |" << endl;
//             cout << "   |                                     Lion Air (JT)                                      |" << endl;
//             cout << "   |                               Surabaya -> Palangka Raya                                |" << endl;
//             cout << "   ------------------------------------------------------------------------------------------" << endl;
//             cout << "   |No|    Kode Pesawat    |   Berangkat   |   Tiba    |" << endl;
//             cout << "   ------------------------------------------------------------------------------------------" << endl;
//             cout << "   |1.|    JT-401          |   10.10       |   11.25   |" << endl;
//             cout << "   |2.|    JT-402          |   11.55       |   13.10   |" << endl;
//             cout << "   |3.|    JT-403          |   13.40       |   14.55   |" << endl;
//             cout << "   ==========================================================================================" << endl;
//             cout << "   Pilih jadwal penerbangan Anda (pilih berdasarkan nomornya): ";
//             cin >> scheduleFlight;
//             cout << "   ==========================================================================================" << endl;

//             switch (scheduleFlight)
//             {
//             case 1:
//                 codeFlight = "JT-401";
//                 go = "10.10";
//                 arrive = "10.25";
//                 break;

//             case 2:
//                 codeFlight = "JT-402";
//                 go = "10.55";
//                 arrive = "12.10";
//                 break;
//             case 3:
//                 codeFlight = "JT-403";
//                 go = "13.40";
//                 arrive = "14.55";
//                 break;
//             default:
//                 cout << endl;
//                 cout << "Jadwal penerbangan yang Anda pilih saat ini tidak tersedia!";
//                 cout << "Silahkan pilih jadwal yang tersedia saat ini";
//                 goto timeJTSP;
//                 break;
//             }
//         }
//         else if (from == "Surabaya" && destination == "Pontianak")
//         {
//         timeJTSPT:
//             cout << endl;
//             cout << endl;
//             cout << endl;
//             cout << "   ------------------------------------------------------------------------------------------" << endl;
//             cout << "   |                        Jadwal Pesawat saat ini untuk penerbangan                       |" << endl;
//             cout << "   |                                     Lion Air (JT)                                      |" << endl;
//             cout << "   |                                 Surabaya -> Pontianak                                  |" << endl;
//             cout << "   ------------------------------------------------------------------------------------------" << endl;
//             cout << "   |No|    Kode Pesawat    |   Berangkat   |   Tiba    |" << endl;
//             cout << "   ------------------------------------------------------------------------------------------" << endl;
//             cout << "   |1.|    JT-501          |   11.00       |   12.20   |" << endl;
//             cout << "   |2.|    JT-502          |   12.50       |   14.10   |" << endl;
//             cout << "   |3.|    JT-503          |   14.40       |   16.00   |" << endl;
//             cout << "   ==========================================================================================" << endl;
//             cout << "   Pilih jadwal penerbangan Anda (pilih berdasarkan nomornya): ";
//             cin >> scheduleFlight;
//             cout << "   ==========================================================================================" << endl;

//             switch (scheduleFlight)
//             {
//             case 1:
//                 codeFlight = "JT-501";
//                 go = "11.00";
//                 arrive = "12.20";
//                 break;

//             case 2:
//                 codeFlight = "JT-502";
//                 go = "12.50";
//                 arrive = "14.10";
//                 break;
//             case 3:
//                 codeFlight = "JT-503";
//                 go = "14.40";
//                 arrive = "16.00";
//                 break;
//             default:
//                 cout << endl;
//                 cout << "Jadwal penerbangan yang Anda pilih saat ini tidak tersedia!";
//                 cout << "Silahkan pilih jadwal yang tersedia saat ini";
//                 goto timeJTSPT;
//                 break;
//             }
//         }
//         else
//         {
//             cout << "Not Found!";
//         }
//         break;

//     case 3:
//         nameFlight = "Citilink (QG)";
//         if (from == "Surabaya" && destination == "Jakarta")
//         {
//         timeQGSJ:
//             cout << endl;
//             cout << endl;
//             cout << endl;
//             cout << "   ------------------------------------------------------------------------------------------" << endl;
//             cout << "   |                        Jadwal Pesawat saat ini untuk penerbangan                       |" << endl;
//             cout << "   |                                     Citilink (QG)                                      |" << endl;
//             cout << "   |                                  Surabaya -> Jakarta                                   |" << endl;
//             cout << "   ------------------------------------------------------------------------------------------" << endl;
//             cout << "   |No|    Kode Pesawat    |   Berangkat   |   Tiba    |" << endl;
//             cout << "   ------------------------------------------------------------------------------------------" << endl;
//             cout << "   |1.|    QG-101          |   08.00       |   08.50   |" << endl;
//             cout << "   |2.|    QG-102          |   09.20       |   10.10   |" << endl;
//             cout << "   |3.|    QG-103          |   10.40       |   11.30   |" << endl;
//             cout << "   ==========================================================================================" << endl;
//             cout << "   Pilih jadwal penerbangan Anda (pilih berdasarkan nomornya): ";
//             cin >> scheduleFlight;
//             cout << "   ==========================================================================================" << endl;

//             switch (scheduleFlight)
//             {
//             case 1:
//                 codeFlight = "QG-101";
//                 go = "08.00";
//                 arrive = "08.50";
//                 break;

//             case 2:
//                 codeFlight = "QG-102";
//                 go = "09.20";
//                 arrive = "10.10";
//                 break;
//             case 3:
//                 codeFlight = "QG-103";
//                 go = "10.40";
//                 arrive = "11.30";
//                 break;
//             default:
//                 cout << endl;
//                 cout << "Jadwal penerbangan yang Anda pilih saat ini tidak tersedia!";
//                 cout << "Silahkan pilih jadwal yang tersedia saat ini";
//                 goto timeQGSJ;
//                 break;
//             }
//         }
//         else if (from == "Surabaya" && destination == "Banjarmasin")
//         {
//         timeQGSB:
//             cout << endl;
//             cout << endl;
//             cout << endl;
//             cout << "   ------------------------------------------------------------------------------------------" << endl;
//             cout << "   |                        Jadwal Pesawat saat ini untuk penerbangan                       |" << endl;
//             cout << "   |                                     Citilink (QG)                                      |" << endl;
//             cout << "   |                                Surabaya -> Banjarmasin                                 |" << endl;
//             cout << "   ------------------------------------------------------------------------------------------" << endl;
//             cout << "   |No|    Kode Pesawat    |   Berangkat   |   Tiba    |" << endl;
//             cout << "   ------------------------------------------------------------------------------------------" << endl;
//             cout << "   |1.|    QG-201          |   08.50       |   09.55   |" << endl;
//             cout << "   |2.|    QG-202          |   10.25       |   11.30   |" << endl;
//             cout << "   |3.|    QG-203          |   12.00       |   13.05   |" << endl;
//             cout << "   ==========================================================================================" << endl;
//             cout << "   Pilih jadwal penerbangan Anda (pilih berdasarkan nomornya): ";
//             cin >> scheduleFlight;
//             cout << "   ==========================================================================================" << endl;

//             switch (scheduleFlight)
//             {
//             case 1:
//                 codeFlight = "QG-201";
//                 go = "08.50";
//                 arrive = "09.55";
//                 break;

//             case 2:
//                 codeFlight = "QG-202";
//                 go = "10.25";
//                 arrive = "11.30";
//                 break;
//             case 3:
//                 codeFlight = "QG-203";
//                 go = "12.00";
//                 arrive = "13.05";
//                 break;
//             default:
//                 cout << endl;
//                 cout << "Jadwal penerbangan yang Anda pilih saat ini tidak tersedia!";
//                 cout << "Silahkan pilih jadwal yang tersedia saat ini";
//                 goto timeQGSB;
//                 break;
//             }
//         }
//         else if (from == "Surabaya" && destination == "Samarinda")
//         {
//         timeQGSS:
//             cout << endl;
//             cout << endl;
//             cout << endl;
//             cout << "   ------------------------------------------------------------------------------------------" << endl;
//             cout << "   |                        Jadwal Pesawat saat ini untuk penerbangan                       |" << endl;
//             cout << "   |                                     Citilink (QG)                                      |" << endl;
//             cout << "   |                                 Surabaya -> Samarinda                                  |" << endl;
//             cout << "   ------------------------------------------------------------------------------------------" << endl;
//             cout << "   |No|    Kode Pesawat    |   Berangkat   |   Tiba    |" << endl;
//             cout << "   ------------------------------------------------------------------------------------------" << endl;
//             cout << "   |1.|    QG-301          |   09.20       |   10.30   |" << endl;
//             cout << "   |2.|    QG-302          |   11.00       |   12.10   |" << endl;
//             cout << "   |3.|    QG-303          |   12.40       |   13.50   |" << endl;
//             cout << "   ==========================================================================================" << endl;
//             cout << "   Pilih jadwal penerbangan Anda (pilih berdasarkan nomornya): ";
//             cin >> scheduleFlight;
//             cout << "   ==========================================================================================" << endl;

//             switch (scheduleFlight)
//             {
//             case 1:
//                 codeFlight = "QG-301";
//                 go = "09.20";
//                 arrive = "10.30";
//                 break;

//             case 2:
//                 codeFlight = "QG-302";
//                 go = "11.00";
//                 arrive = "12.10";
//                 break;
//             case 3:
//                 codeFlight = "QG-303";
//                 go = "12.40";
//                 arrive = "13.50";
//                 break;
//             default:
//                 cout << endl;
//                 cout << "Jadwal penerbangan yang Anda pilih saat ini tidak tersedia!";
//                 cout << "Silahkan pilih jadwal yang tersedia saat ini";
//                 goto timeQGSS;
//                 break;
//             }
//         }
//         else if (from == "Surabaya" && destination == "Palangka Raya")
//         {
//         timeQGSP:
//             cout << endl;
//             cout << endl;
//             cout << endl;
//             cout << "   ------------------------------------------------------------------------------------------" << endl;
//             cout << "   |                        Jadwal Pesawat saat ini untuk penerbangan                       |" << endl;
//             cout << "   |                                     Citilink (QG)                                      |" << endl;
//             cout << "   |                               Surabaya -> Palangka Raya                                |" << endl;
//             cout << "   ------------------------------------------------------------------------------------------" << endl;
//             cout << "   |No|    Kode Pesawat    |   Berangkat   |   Tiba    |" << endl;
//             cout << "   ------------------------------------------------------------------------------------------" << endl;
//             cout << "   |1.|    QG-401          |   10.10       |   11.25   |" << endl;
//             cout << "   |2.|    QG-402          |   11.55       |   13.10   |" << endl;
//             cout << "   |3.|    QG-403          |   13.40       |   14.55   |" << endl;
//             cout << "   ==========================================================================================" << endl;
//             cout << "   Pilih jadwal penerbangan Anda (pilih berdasarkan nomornya): ";
//             cin >> scheduleFlight;
//             cout << "   ==========================================================================================" << endl;

//             switch (scheduleFlight)
//             {
//             case 1:
//                 codeFlight = "QG-401";
//                 go = "10.10";
//                 arrive = "10.25";
//                 break;

//             case 2:
//                 codeFlight = "QG-402";
//                 go = "10.55";
//                 arrive = "12.10";
//                 break;
//             case 3:
//                 codeFlight = "QG-403";
//                 go = "13.40";
//                 arrive = "14.55";
//                 break;
//             default:
//                 cout << endl;
//                 cout << "Jadwal penerbangan yang Anda pilih saat ini tidak tersedia!";
//                 cout << "Silahkan pilih jadwal yang tersedia saat ini";
//                 goto timeQGSP;
//                 break;
//             }
//         }
//         else if (from == "Surabaya" && destination == "Pontianak")
//         {
//         timeQGSPT:
//             cout << endl;
//             cout << endl;
//             cout << endl;
//             cout << "   ------------------------------------------------------------------------------------------" << endl;
//             cout << "   |                        Jadwal Pesawat saat ini untuk penerbangan                       |" << endl;
//             cout << "   |                                     Citilink (QG)                                      |" << endl;
//             cout << "   |                                 Surabaya -> Pontianak                                  |" << endl;
//             cout << "   ------------------------------------------------------------------------------------------" << endl;
//             cout << "   |No|    Kode Pesawat    |   Berangkat   |   Tiba    |" << endl;
//             cout << "   ------------------------------------------------------------------------------------------" << endl;
//             cout << "   |1.|    QG-501          |   11.00       |   12.20   |" << endl;
//             cout << "   |2.|    QG-502          |   12.50       |   14.10   |" << endl;
//             cout << "   |3.|    QG-503          |   14.40       |   16.00   |" << endl;
//             cout << "   ==========================================================================================" << endl;
//             cout << "   Pilih jadwal penerbangan Anda (pilih berdasarkan nomornya): ";
//             cin >> scheduleFlight;
//             cout << "   ==========================================================================================" << endl;

//             switch (scheduleFlight)
//             {
//             case 1:
//                 codeFlight = "QG-501";
//                 go = "11.00";
//                 arrive = "12.20";
//                 break;

//             case 2:
//                 codeFlight = "QG-502";
//                 go = "12.50";
//                 arrive = "14.10";
//                 break;
//             case 3:
//                 codeFlight = "QG-503";
//                 go = "14.40";
//                 arrive = "16.00";
//                 break;
//             default:
//                 cout << endl;
//                 cout << "Jadwal penerbangan yang Anda pilih saat ini tidak tersedia!";
//                 cout << "Silahkan pilih jadwal yang tersedia saat ini";
//                 goto timeQGSPT;
//                 break;
//             }
//         }
//         else
//         {
//             cout << "Not Found!";
//         }
//         break;

//     case 4:
//         nameFlight = "AirAsia Indonesia (QZ)";
//         if (from == "Surabaya" && destination == "Jakarta")
//         {
//         timeQZSJ:
//             cout << endl;
//             cout << endl;
//             cout << endl;
//             cout << "   ------------------------------------------------------------------------------------------" << endl;
//             cout << "   |                        Jadwal Pesawat saat ini untuk penerbangan                       |" << endl;
//             cout << "   |                                AirAsia Indonesia (QZ)                                  |" << endl;
//             cout << "   |                                 Surabaya -> Jakarta                                    |" << endl;
//             cout << "   ------------------------------------------------------------------------------------------" << endl;
//             cout << "   |No|    Kode Pesawat    |   Berangkat   |   Tiba    |" << endl;
//             cout << "   ------------------------------------------------------------------------------------------" << endl;
//             cout << "   |1.|    QZ-101          |   08.00       |   08.50   |" << endl;
//             cout << "   |2.|    QZ-102          |   09.20       |   10.10   |" << endl;
//             cout << "   |3.|    QZ-103          |   10.40       |   11.30   |" << endl;
//             cout << "   ==========================================================================================" << endl;
//             cout << "   Pilih jadwal penerbangan Anda (pilih berdasarkan nomornya): ";
//             cin >> scheduleFlight;
//             cout << "   ==========================================================================================" << endl;

//             switch (scheduleFlight)
//             {
//             case 1:
//                 codeFlight = "QZ-101";
//                 go = "08.00";
//                 arrive = "08.50";
//                 break;

//             case 2:
//                 codeFlight = "QZ-102";
//                 go = "09.20";
//                 arrive = "10.10";
//                 break;
//             case 3:
//                 codeFlight = "QZ-103";
//                 go = "10.40";
//                 arrive = "11.30";
//                 break;
//             default:
//                 cout << endl;
//                 cout << "Jadwal penerbangan yang Anda pilih saat ini tidak tersedia!";
//                 cout << "Silahkan pilih jadwal yang tersedia saat ini";
//                 goto timeQZSJ;
//                 break;
//             }
//         }
//         else if (from == "Surabaya" && destination == "Banjarmasin")
//         {
//         timeQZSB:
//             cout << endl;
//             cout << endl;
//             cout << endl;
//             cout << "   ------------------------------------------------------------------------------------------" << endl;
//             cout << "   |                        Jadwal Pesawat saat ini untuk penerbangan                       |" << endl;
//             cout << "   |                                AirAsia Indonesia (QZ)                                  |" << endl;
//             cout << "   |                               Surabaya -> Banjarmasin                                  |" << endl;
//             cout << "   ------------------------------------------------------------------------------------------" << endl;
//             cout << "   |No|    Kode Pesawat    |   Berangkat   |   Tiba    |" << endl;
//             cout << "   ------------------------------------------------------------------------------------------" << endl;
//             cout << "   |1.|    QZ-201          |   08.50       |   09.55   |" << endl;
//             cout << "   |2.|    QZ-202          |   10.25       |   11.30   |" << endl;
//             cout << "   |3.|    QZ-203          |   12.00       |   13.05   |" << endl;
//             cout << "   ==========================================================================================" << endl;
//             cout << "   Pilih jadwal penerbangan Anda (pilih berdasarkan nomornya): ";
//             cin >> scheduleFlight;
//             cout << "   ==========================================================================================" << endl;

//             switch (scheduleFlight)
//             {
//             case 1:
//                 codeFlight = "QZ-201";
//                 go = "08.50";
//                 arrive = "09.55";
//                 break;

//             case 2:
//                 codeFlight = "QZ-202";
//                 go = "10.25";
//                 arrive = "11.30";
//                 break;
//             case 3:
//                 codeFlight = "QZ-203";
//                 go = "12.00";
//                 arrive = "13.05";
//                 break;
//             default:
//                 cout << endl;
//                 cout << "Jadwal penerbangan yang Anda pilih saat ini tidak tersedia!";
//                 cout << "Silahkan pilih jadwal yang tersedia saat ini";
//                 goto timeQZSB;
//                 break;
//             }
//         }
//         else if (from == "Surabaya" && destination == "Samarinda")
//         {
//         timeQZSS:
//             cout << endl;
//             cout << endl;
//             cout << endl;
//             cout << "   ------------------------------------------------------------------------------------------" << endl;
//             cout << "   |                        Jadwal Pesawat saat ini untuk penerbangan                       |" << endl;
//             cout << "   |                                AirAsia Indonesia (QZ)                                  |" << endl;
//             cout << "   |                                Surabaya -> Samarinda                                   |" << endl;
//             cout << "   ------------------------------------------------------------------------------------------" << endl;
//             cout << "   |No|    Kode Pesawat    |   Berangkat   |   Tiba    |" << endl;
//             cout << "   ------------------------------------------------------------------------------------------" << endl;
//             cout << "   |1.|    QZ-301          |   09.20       |   10.30   |" << endl;
//             cout << "   |2.|    QZ-302          |   11.00       |   12.10   |" << endl;
//             cout << "   |3.|    QZ-303          |   12.40       |   13.50   |" << endl;
//             cout << "   ==========================================================================================" << endl;
//             cout << "   Pilih jadwal penerbangan Anda (pilih berdasarkan nomornya): ";
//             cin >> scheduleFlight;
//             cout << "   ==========================================================================================" << endl;

//             switch (scheduleFlight)
//             {
//             case 1:
//                 codeFlight = "QZ-301";
//                 go = "09.20";
//                 arrive = "10.30";
//                 break;

//             case 2:
//                 codeFlight = "QZ-302";
//                 go = "11.00";
//                 arrive = "12.10";
//                 break;
//             case 3:
//                 codeFlight = "QZ-303";
//                 go = "12.40";
//                 arrive = "13.50";
//                 break;
//             default:
//                 cout << endl;
//                 cout << "Jadwal penerbangan yang Anda pilih saat ini tidak tersedia!";
//                 cout << "Silahkan pilih jadwal yang tersedia saat ini";
//                 goto timeQZSS;
//                 break;
//             }
//         }
//         else if (from == "Surabaya" && destination == "Palangka Raya")
//         {
//         timeQZSP:
//             cout << endl;
//             cout << endl;
//             cout << endl;
//             cout << "   ------------------------------------------------------------------------------------------" << endl;
//             cout << "   |                        Jadwal Pesawat saat ini untuk penerbangan                       |" << endl;
//             cout << "   |                                AirAsia Indonesia (QZ)                                  |" << endl;
//             cout << "   |                              Surabaya -> Palangka Raya                                 |" << endl;
//             cout << "   ------------------------------------------------------------------------------------------" << endl;
//             cout << "   |No|    Kode Pesawat    |   Berangkat   |   Tiba    |" << endl;
//             cout << "   ------------------------------------------------------------------------------------------" << endl;
//             cout << "   |1.|    QZ-401          |   11.00       |   12.20   |" << endl;
//             cout << "   |2.|    QZ-402          |   12.50       |   14.10   |" << endl;
//             cout << "   |3.|    QZ-403          |   14.40       |   16.00   |" << endl;
//             cout << "   ==========================================================================================" << endl;
//             cout << "   Pilih jadwal penerbangan Anda (pilih berdasarkan nomornya): ";
//             cin >> scheduleFlight;
//             cout << "   ==========================================================================================" << endl;

//             switch (scheduleFlight)
//             {
//             case 1:
//                 codeFlight = "QZ-401";
//                 go = "10.10";
//                 arrive = "10.25";
//                 break;

//             case 2:
//                 codeFlight = "QZ-402";
//                 go = "10.55";
//                 arrive = "12.10";
//                 break;
//             case 3:
//                 codeFlight = "QZ-403";
//                 go = "13.40";
//                 arrive = "14.55";
//                 break;
//             default:
//                 cout << endl;
//                 cout << "Jadwal penerbangan yang Anda pilih saat ini tidak tersedia!";
//                 cout << "Silahkan pilih jadwal yang tersedia saat ini";
//                 goto timeQZSP;
//                 break;
//             }
//         }
//         else if (from == "Surabaya" && destination == "Pontianak")
//         {
//         timeQZSPT:
//             cout << endl;
//             cout << endl;
//             cout << endl;
//             cout << "   ------------------------------------------------------------------------------------------" << endl;
//             cout << "   |                        Jadwal Pesawat saat ini untuk penerbangan                       |" << endl;
//             cout << "   |                                AirAsia Indonesia (QZ)                                  |" << endl;
//             cout << "   |                                Surabaya -> Pontianak                                   |" << endl;
//             cout << "   ------------------------------------------------------------------------------------------" << endl;
//             cout << "   |No|    Kode Pesawat    |   Berangkat   |   Tiba    |" << endl;
//             cout << "   ------------------------------------------------------------------------------------------" << endl;
//             cout << "   |1.|    QZ-501          |   11.00       |   12.20   |" << endl;
//             cout << "   |2.|    QZ-502          |   12.50       |   14.10   |" << endl;
//             cout << "   |3.|    QZ-503          |   14.40       |   16.00   |" << endl;
//             cout << "   ==========================================================================================" << endl;
//             cout << "   Pilih jadwal penerbangan Anda (pilih berdasarkan nomornya): ";
//             cin >> scheduleFlight;
//             cout << "   ==========================================================================================" << endl;

//             switch (scheduleFlight)
//             {
//             case 1:
//                 codeFlight = "QZ-501";
//                 go = "11.00";
//                 arrive = "12.20";
//                 break;

//             case 2:
//                 codeFlight = "QZ-502";
//                 go = "12.50";
//                 arrive = "14.10";
//                 break;
//             case 3:
//                 codeFlight = "QZ-503";
//                 go = "14.40";
//                 arrive = "16.00";
//                 break;
//             default:
//                 cout << endl;
//                 cout << "Jadwal penerbangan yang Anda pilih saat ini tidak tersedia!";
//                 cout << "Silahkan pilih jadwal yang tersedia saat ini";
//                 goto timeQZSPT;
//                 break;
//             }
//         }
//         else
//         {
//             cout << "Not Found!";
//         }
//         break;

//     case 5:
//         nameFlight = "Sriwijaya Air (SJ)";
//         if (from == "Surabaya" && destination == "Jakarta")
//         {
//         timeSJSJ:
//             cout << endl;
//             cout << endl;
//             cout << endl;
//             cout << "   ------------------------------------------------------------------------------------------" << endl;
//             cout << "   |                        Jadwal Pesawat saat ini untuk penerbangan                       |" << endl;
//             cout << "   |                                   Sriwijaya Air (SJ)                                   |" << endl;
//             cout << "   |                                  Surabaya -> Jakarta                                   |" << endl;
//             cout << "   ------------------------------------------------------------------------------------------" << endl;
//             cout << "   |No|    Kode Pesawat    |   Berangkat   |   Tiba    |" << endl;
//             cout << "   ------------------------------------------------------------------------------------------" << endl;
//             cout << "   |1.|    SJ-101          |   08.00       |   08.50   |" << endl;
//             cout << "   |2.|    SJ-102          |   09.20       |   10.10   |" << endl;
//             cout << "   |3.|    SJ-103          |   10.40       |   11.30   |" << endl;
//             cout << "   ==========================================================================================" << endl;
//             cout << "   Pilih jadwal penerbangan Anda (pilih berdasarkan nomornya): ";
//             cin >> scheduleFlight;
//             cout << "   ==========================================================================================" << endl;

//             switch (scheduleFlight)
//             {
//             case 1:
//                 codeFlight = "SJ-101";
//                 go = "08.00";
//                 arrive = "08.50";
//                 break;

//             case 2:
//                 codeFlight = "SJ-102";
//                 go = "09.20";
//                 arrive = "10.10";
//                 break;

//             case 3:
//                 codeFlight = "SJ-103";
//                 go = "10.40";
//                 arrive = "11.30";
//                 break;

//             default:
//                 cout << endl;
//                 cout << "Jadwal penerbangan yang Anda pilih saat ini tidak tersedia!";
//                 cout << "Silahkan pilih jadwal yang tersedia saat ini";
//                 goto timeSJSJ;
//                 break;
//             }
//         }
//         else if (from == "Surabaya" && destination == "Banjarmasin")
//         {
//         timeSJSB:
//             cout << endl;
//             cout << endl;
//             cout << endl;
//             cout << "   ------------------------------------------------------------------------------------------" << endl;
//             cout << "   |                        Jadwal Pesawat saat ini untuk penerbangan                       |" << endl;
//             cout << "   |                                   Sriwijaya Air (SJ)                                   |" << endl;
//             cout << "   |                                Surabaya -> Banjarmasin                                 |" << endl;
//             cout << "   ------------------------------------------------------------------------------------------" << endl;
//             cout << "   |No|    Kode Pesawat    |   Berangkat   |   Tiba    |" << endl;
//             cout << "   ------------------------------------------------------------------------------------------" << endl;
//             cout << "   |1.|    SJ-201          |   08.50       |   09.55   |" << endl;
//             cout << "   |2.|    SJ-202          |   10.25       |   11.30   |" << endl;
//             cout << "   |3.|    SJ-203          |   12.00       |   13.05   |" << endl;
//             cout << "   ==========================================================================================" << endl;
//             cout << "   Pilih jadwal penerbangan Anda (pilih berdasarkan nomornya): ";
//             cin >> scheduleFlight;
//             cout << "   ==========================================================================================" << endl;

//             switch (scheduleFlight)
//             {
//             case 1:
//                 codeFlight = "SJ-201";
//                 go = "08.50";
//                 arrive = "09.55";
//                 break;

//             case 2:
//                 codeFlight = "SJ-202";
//                 go = "10.25";
//                 arrive = "11.30";
//                 break;

//             case 3:
//                 codeFlight = "SJ-203";
//                 go = "12.00";
//                 arrive = "13.05";
//                 break;

//             default:
//                 cout << endl;
//                 cout << "Jadwal penerbangan yang Anda pilih saat ini tidak tersedia!";
//                 cout << "Silahkan pilih jadwal yang tersedia saat ini";
//                 goto timeSJSB;
//                 break;
//             }
//         }
//         else if (from == "Surabaya" && destination == "Samarinda")
//         {
//         timeSJSS:
//             cout << endl;
//             cout << endl;
//             cout << endl;
//             cout << "   ------------------------------------------------------------------------------------------" << endl;
//             cout << "   |                        Jadwal Pesawat saat ini untuk penerbangan                       |" << endl;
//             cout << "   |                                   Sriwijaya Air (SJ)                                   |" << endl;
//             cout << "   |                                  Surabaya -> Samarinda                                 |" << endl;
//             cout << "   ------------------------------------------------------------------------------------------" << endl;
//             cout << "   |No|    Kode Pesawat    |   Berangkat   |   Tiba    |" << endl;
//             cout << "   ------------------------------------------------------------------------------------------" << endl;
//             cout << "   |1.|    SJ-301          |   09.20       |   10.30   |" << endl;
//             cout << "   |2.|    SJ-302          |   11.00       |   12.10   |" << endl;
//             cout << "   |3.|    SJ-303          |   12.40       |   13.50   |" << endl;
//             cout << "   ==========================================================================================" << endl;
//             cout << "   Pilih jadwal penerbangan Anda (pilih berdasarkan nomornya): ";
//             cin >> scheduleFlight;
//             cout << "   ==========================================================================================" << endl;

//             switch (scheduleFlight)
//             {
//             case 1:
//                 codeFlight = "SJ-301";
//                 go = "09.20";
//                 arrive = "10.30";
//                 break;

//             case 2:
//                 codeFlight = "SJ-302";
//                 go = "11.00";
//                 arrive = "12.10";
//                 break;
//             case 3:
//                 codeFlight = "SJ-303";
//                 go = "12.40";
//                 arrive = "13.50";
//                 break;
//             default:
//                 cout << endl;
//                 cout << "Jadwal penerbangan yang Anda pilih saat ini tidak tersedia!";
//                 cout << "Silahkan pilih jadwal yang tersedia saat ini";
//                 goto timeSJSS;
//                 break;
//             }
//         }
//         else if (from == "Surabaya" && destination == "Palangka Raya")
//         {
//         timeSJSP:
//             cout << endl;
//             cout << endl;
//             cout << endl;
//             cout << "   ------------------------------------------------------------------------------------------" << endl;
//             cout << "   |                        Jadwal Pesawat saat ini untuk penerbangan                       |" << endl;
//             cout << "   |                                   Sriwijaya Air (SJ)                                   |" << endl;
//             cout << "   |                                Surabaya -> Palangka Raya                               |" << endl;
//             cout << "   ------------------------------------------------------------------------------------------" << endl;
//             cout << "   |No|    Kode Pesawat    |   Berangkat   |   Tiba    |" << endl;
//             cout << "   ------------------------------------------------------------------------------------------" << endl;
//             cout << "   |1.|    SJ-401          |   11.00       |   12.20   |" << endl;
//             cout << "   |2.|    SJ-402          |   12.50       |   14.10   |" << endl;
//             cout << "   |3.|    SJ-403          |   14.40       |   16.00   |" << endl;
//             cout << "   ==========================================================================================" << endl;
//             cout << "   Pilih jadwal penerbangan Anda (pilih berdasarkan nomornya): ";
//             cin >> scheduleFlight;
//             cout << "   ==========================================================================================" << endl;

//             switch (scheduleFlight)
//             {
//             case 1:
//                 codeFlight = "SJ-401";
//                 go = "10.10";
//                 arrive = "10.25";
//                 break;

//             case 2:
//                 codeFlight = "SJ-402";
//                 go = "10.55";
//                 arrive = "12.10";
//                 break;
//             case 3:
//                 codeFlight = "SJ-403";
//                 go = "13.40";
//                 arrive = "14.55";
//                 break;
//             default:
//                 cout << endl;
//                 cout << "Jadwal penerbangan yang Anda pilih saat ini tidak tersedia!";
//                 cout << "Silahkan pilih jadwal yang tersedia saat ini";
//                 goto timeSJSP;
//                 break;
//             }
//         }
//         else if (from == "Surabaya" && destination == "Pontianak")
//         {
//         timeSJSPT:
//             cout << endl;
//             cout << endl;
//             cout << endl;
//             cout << "   ------------------------------------------------------------------------------------------" << endl;
//             cout << "   |                        Jadwal Pesawat saat ini untuk penerbangan                       |" << endl;
//             cout << "   |                                   Sriwijaya Air (SJ)                                   |" << endl;
//             cout << "   |                                 Surabaya -> Pontianak                                  |" << endl;
//             cout << "   ------------------------------------------------------------------------------------------" << endl;
//             cout << "   |No|    Kode Pesawat    |   Berangkat   |   Tiba    |" << endl;
//             cout << "   ------------------------------------------------------------------------------------------" << endl;
//             cout << "   |1.|    SJ-501          |   11.00       |   12.20   |" << endl;
//             cout << "   |2.|    SJ-502          |   12.50       |   14.10   |" << endl;
//             cout << "   |3.|    SJ-503          |   14.40       |   16.00   |" << endl;
//             cout << "   ==========================================================================================" << endl;
//             cout << "   Pilih jadwal penerbangan Anda (pilih berdasarkan nomornya): ";
//             cin >> scheduleFlight;
//             cout << "   ==========================================================================================" << endl;

//             switch (scheduleFlight)
//             {
//             case 1:
//                 codeFlight = "SJ-501";
//                 go = "11.00";
//                 arrive = "12.20";
//                 break;

//             case 2:
//                 codeFlight = "SJ-502";
//                 go = "12.50";
//                 arrive = "14.10";
//                 break;
//             case 3:
//                 codeFlight = "SJ-503";
//                 go = "14.40";
//                 arrive = "16.00";
//                 break;
//             default:
//                 cout << endl;
//                 cout << "Jadwal penerbangan yang Anda pilih saat ini tidak tersedia!";
//                 cout << "Silahkan pilih jadwal yang tersedia saat ini";
//                 goto timeSJSPT;
//                 break;
//             }
//         }
//         else
//         {
//             cout << "Not Found!";
//         }
//         break;

//     default:
//         cout << endl;
//         cout << "Daftar pesawat yang Anda pilih saat ini tidak tersedia!" << endl;
//         cout << "Silahkan pilih pesawat yang saat ini tersedia";
//         cout << endl;
//         cout << endl;
//         goto flight;
//     }
// }

// void price_flight()
// {
//     int inputClass;

//     if (nameFlight == "Garuda Indonesia (GA)")
//     {
//         if (from == "Surabaya" && destination == "Jakarta")
//         {
//         priceGASJ:
//             cout << endl;
//             cout << endl;
//             cout << endl;
//             cout << "   ------------------------------------------------------------------------------------------" << endl;
//             cout << "   |                        Daftar harga tiket sesuai kelas penerbangan                     |" << endl;
//             cout << "   |                                  Garuda Indonesia (GA)                                 |" << endl;
//             cout << "   ------------------------------------------------------------------------------------------" << endl;
//             cout << "   |No|            Kelas                   |               Harga                            |" << endl;
//             cout << "   ------------------------------------------------------------------------------------------" << endl;
//             cout << "   |1.|            Economy                 |               Rp. 500.000/org                  |" << endl;
//             cout << "   |2.|            Business                |               Rp. 1.000.000/org                |" << endl;
//             cout << "   |3.|            First Class             |               Rp. 1.500.000/org                |" << endl;
//             cout << "   ==========================================================================================" << endl;
//             cout << "   Pilih kelas penerbangan Anda (pilih berdasarkan nomornya): ";
//             cin >> inputClass;
//             cout << "   ==========================================================================================" << endl;

//             switch (inputClass)
//             {
//             case 1:
//                 priceFlight = "Rp. 500.000";
//                 break;
//             case 2:
//                 priceFlight = "Rp. 1.000.000";
//                 break;
//             case 3:
//                 priceFlight = "Rp. 1.500.000";
//                 break;
//             default:
//                 cout << endl;
//                 cout << "Daftar kelas penerbangan Garuda Indonesia yang Anda pilih saat ini tidak tersedia!" << endl;
//                 cout << "Silahkan pilih kelas penerbangan yang saat ini tersedia";
//                 goto priceGASJ;
//                 break;
//             }
//         }
//         else if (from == "Surabaya" && destination == "Banjarmasin")
//         {
//         priceGASB:
//             cout << endl;
//             cout << endl;
//             cout << endl;
//             cout << "   ------------------------------------------------------------------------------------------" << endl;
//             cout << "   |                        Daftar harga tiket sesuai kelas penerbangan                     |" << endl;
//             cout << "   |                                  Garuda Indonesia (GA)                                 |" << endl;
//             cout << "   ------------------------------------------------------------------------------------------" << endl;
//             cout << "   |No|            Kelas                   |               Harga                            |" << endl;
//             cout << "   ------------------------------------------------------------------------------------------" << endl;
//             cout << "   |1.|            Economy                 |               Rp. 550.000/org                  |" << endl;
//             cout << "   |2.|            Business                |               Rp. 1.050.000/org                |" << endl;
//             cout << "   |3.|            First Class             |               Rp. 1.550.000/org                |" << endl;
//             cout << "   ==========================================================================================" << endl;
//             cout << "   Pilih kelas penerbangan Anda (pilih berdasarkan nomornya): ";
//             cin >> inputClass;
//             cout << "   ==========================================================================================" << endl;

//             switch (inputClass)
//             {
//             case 1:
//                 priceFlight = "Rp. 550.000";
//                 break;
//             case 2:
//                 priceFlight = "Rp. 1.050.000";
//                 break;
//             case 3:
//                 priceFlight = "Rp. 1.550.000";
//                 break;
//             default:
//                 cout << endl;
//                 cout << "Daftar kelas penerbangan Garuda Indonesia yang Anda pilih saat ini tidak tersedia!" << endl;
//                 cout << "Silahkan pilih kelas penerbangan yang saat ini tersedia";
//                 goto priceGASB;
//                 break;
//             }
//         }
//         else if (from == "Surabaya" && destination == "Samarinda")
//         {
//         priceGASS:
//             cout << endl;
//             cout << endl;
//             cout << endl;
//             cout << "   ------------------------------------------------------------------------------------------" << endl;
//             cout << "   |                        Daftar harga tiket sesuai kelas penerbangan                     |" << endl;
//             cout << "   |                                  Garuda Indonesia (GA)                                 |" << endl;
//             cout << "   ------------------------------------------------------------------------------------------" << endl;
//             cout << "   |No|            Kelas                   |               Harga                            |" << endl;
//             cout << "   ------------------------------------------------------------------------------------------" << endl;
//             cout << "   |1.|            Economy                 |               Rp. 575.000/org                  |" << endl;
//             cout << "   |2.|            Business                |               Rp. 1.075.000/org                |" << endl;
//             cout << "   |3.|            First Class             |               Rp. 1.575.000/org                |" << endl;
//             cout << "   ==========================================================================================" << endl;
//             cout << "   Pilih kelas penerbangan Anda (pilih berdasarkan nomornya): ";
//             cin >> inputClass;
//             cout << "   ==========================================================================================" << endl;

//             switch (inputClass)
//             {
//             case 1:
//                 priceFlight = "Rp. 575.000";
//                 break;
//             case 2:
//                 priceFlight = "Rp. 1.075.000";
//                 break;
//             case 3:
//                 priceFlight = "Rp. 1.575.000";
//                 break;
//             default:
//                 cout << endl;
//                 cout << "Daftar kelas penerbangan Garuda Indonesia yang Anda pilih saat ini tidak tersedia!" << endl;
//                 cout << "Silahkan pilih kelas penerbangan yang saat ini tersedia";
//                 goto priceGASS;
//                 break;
//             }
//         }
//         else if (from == "Surabaya" && destination == "Palangka Raya")
//         {
//         priceGASP:
//             cout << endl;
//             cout << endl;
//             cout << endl;
//             cout << "   ------------------------------------------------------------------------------------------" << endl;
//             cout << "   |                        Daftar harga tiket sesuai kelas penerbangan                     |" << endl;
//             cout << "   |                                  Garuda Indonesia (GA)                                 |" << endl;
//             cout << "   ------------------------------------------------------------------------------------------" << endl;
//             cout << "   |No|            Kelas                   |               Harga                            |" << endl;
//             cout << "   ------------------------------------------------------------------------------------------" << endl;
//             cout << "   |1.|            Economy                 |               Rp. 600.000/org                  |" << endl;
//             cout << "   |2.|            Business                |               Rp. 1.100.000/org                |" << endl;
//             cout << "   |3.|            First Class             |               Rp. 1.600.000/org                |" << endl;
//             cout << "   ==========================================================================================" << endl;
//             cout << "   Pilih kelas penerbangan Anda (pilih berdasarkan nomornya): ";
//             cin >> inputClass;
//             cout << "   ==========================================================================================" << endl;

//             switch (inputClass)
//             {
//             case 1:
//                 priceFlight = "Rp. 600.000";
//                 break;
//             case 2:
//                 priceFlight = "Rp. 1.100.000";
//                 break;
//             case 3:
//                 priceFlight = "Rp. 1.600.000";
//                 break;
//             default:
//                 cout << endl;
//                 cout << "Daftar kelas penerbangan Garuda Indonesia yang Anda pilih saat ini tidak tersedia!" << endl;
//                 cout << "Silahkan pilih kelas penerbangan yang saat ini tersedia";
//                 goto priceGASP;
//                 break;
//             }
//         }
//         else if (from == "Surabaya" && destination == "Pontianak")
//         {
//         priceGASPT:
//             cout << endl;
//             cout << endl;
//             cout << endl;
//             cout << "   ------------------------------------------------------------------------------------------" << endl;
//             cout << "   |                        Daftar harga tiket sesuai kelas penerbangan                     |" << endl;
//             cout << "   |                                  Garuda Indonesia (GA)                                 |" << endl;
//             cout << "   ------------------------------------------------------------------------------------------" << endl;
//             cout << "   |No|            Kelas                   |               Harga                            |" << endl;
//             cout << "   ------------------------------------------------------------------------------------------" << endl;
//             cout << "   |1.|            Economy                 |               Rp. 625.000/org                  |" << endl;
//             cout << "   |2.|            Business                |               Rp. 1.025.000/org                |" << endl;
//             cout << "   |3.|            First Class             |               Rp. 1.625.000/org                |" << endl;
//             cout << "   ==========================================================================================" << endl;
//             cout << "   Pilih kelas penerbangan Anda (pilih berdasarkan nomornya): ";
//             cin >> inputClass;
//             cout << "   ==========================================================================================" << endl;

//             switch (inputClass)
//             {
//             case 1:
//                 priceFlight = "Rp. 625.000";
//                 break;
//             case 2:
//                 priceFlight = "Rp. 1.025.000";
//                 break;
//             case 3:
//                 priceFlight = "Rp. 1.625.000";
//                 break;
//             default:
//                 cout << endl;
//                 cout << "Daftar kelas penerbangan Garuda Indonesia yang Anda pilih saat ini tidak tersedia!" << endl;
//                 cout << "Silahkan pilih kelas penerbangan yang saat ini tersedia";
//                 goto priceGASPT;
//                 break;
//             }
//         }
//         else
//         {
//             cout << "Not Found!";
//         }
//     }
//     else if (nameFlight == "Lion Air (JT)")
//     {
//         if (from == "Surabaya" && destination == "Jakarta")
//         {
//         priceJTSJ:
//             cout << endl;
//             cout << endl;
//             cout << endl;
//             cout << "   ------------------------------------------------------------------------------------------" << endl;
//             cout << "   |                        Daftar harga tiket sesuai kelas penerbangan                     |" << endl;
//             cout << "   |                                     Lion Air (JT)                                      |" << endl;
//             cout << "   ------------------------------------------------------------------------------------------" << endl;
//             cout << "   |No|            Kelas                   |               Harga                            |" << endl;
//             cout << "   ------------------------------------------------------------------------------------------" << endl;
//             cout << "   |1.|            Economy                 |               Rp. 400.000/org                  |" << endl;
//             cout << "   |2.|            Business                |               Rp. 900.000/org                  |" << endl;
//             cout << "   |3.|            First Class             |               Rp. 1.400.000/org                |" << endl;
//             cout << "   ==========================================================================================" << endl;
//             cout << "   Pilih kelas penerbangan Anda (pilih berdasarkan nomornya): ";
//             cin >> inputClass;
//             cout << "   ==========================================================================================" << endl;

//             switch (inputClass)
//             {
//             case 1:
//                 priceFlight = "Rp. 400.000";
//                 break;
//             case 2:
//                 priceFlight = "Rp. 900.000";
//                 break;
//             case 3:
//                 priceFlight = "Rp. 1.400.000";
//                 break;
//             default:
//                 cout << endl;
//                 cout << "Daftar kelas penerbangan Lion Air yang Anda pilih saat ini tidak tersedia!" << endl;
//                 cout << "Silahkan pilih kelas penerbangan yang saat ini tersedia";
//                 goto priceJTSJ;
//                 break;
//             }
//         }
//         else if (from == "Surabaya" && destination == "Banjarmasin")
//         {
//         priceJTSB:
//             cout << endl;
//             cout << endl;
//             cout << endl;
//             cout << "   ------------------------------------------------------------------------------------------" << endl;
//             cout << "   |                        Daftar harga tiket sesuai kelas penerbangan                     |" << endl;
//             cout << "   |                                     Lion Air (JT)                                      |" << endl;
//             cout << "   ------------------------------------------------------------------------------------------" << endl;
//             cout << "   |No|            Kelas                   |               Harga                            |" << endl;
//             cout << "   ------------------------------------------------------------------------------------------" << endl;
//             cout << "   |1.|            Economy                 |               Rp. 450.000/org                  |" << endl;
//             cout << "   |2.|            Business                |               Rp. 950.000/org                  |" << endl;
//             cout << "   |3.|            First Class             |               Rp. 1.450.000/org                |" << endl;
//             cout << "   ==========================================================================================" << endl;
//             cout << "   Pilih kelas penerbangan Anda (pilih berdasarkan nomornya): ";
//             cin >> inputClass;
//             cout << "   ==========================================================================================" << endl;

//             switch (inputClass)
//             {
//             case 1:
//                 priceFlight = "Rp. 450.000";
//                 break;
//             case 2:
//                 priceFlight = "Rp. 950.000";
//                 break;
//             case 3:
//                 priceFlight = "Rp. 1.450.000";
//                 break;
//             default:
//                 cout << endl;
//                 cout << "Daftar kelas penerbangan Lion Air yang Anda pilih saat ini tidak tersedia!" << endl;
//                 cout << "Silahkan pilih kelas penerbangan yang saat ini tersedia";
//                 goto priceJTSB;
//                 break;
//             }
//         }
//         else if (from == "Surabaya" && destination == "Samarinda")
//         {
//         priceJTSS:
//             cout << endl;
//             cout << endl;
//             cout << endl;
//             cout << "   ------------------------------------------------------------------------------------------" << endl;
//             cout << "   |                        Daftar harga tiket sesuai kelas penerbangan                     |" << endl;
//             cout << "   |                                     Lion Air (JT)                                      |" << endl;
//             cout << "   ------------------------------------------------------------------------------------------" << endl;
//             cout << "   |No|            Kelas                   |               Harga                            |" << endl;
//             cout << "   ------------------------------------------------------------------------------------------" << endl;
//             cout << "   |1.|            Economy                 |               Rp. 475.000/org                  |" << endl;
//             cout << "   |2.|            Business                |               Rp. 975.000/org                  |" << endl;
//             cout << "   |3.|            First Class             |               Rp. 1.475.000/org                |" << endl;
//             cout << "   ==========================================================================================" << endl;
//             cout << "   Pilih kelas penerbangan Anda (pilih berdasarkan nomornya): ";
//             cin >> inputClass;
//             cout << "   ==========================================================================================" << endl;

//             switch (inputClass)
//             {
//             case 1:
//                 priceFlight = "Rp. 475.000";
//                 break;
//             case 2:
//                 priceFlight = "Rp. 975.000";
//                 break;
//             case 3:
//                 priceFlight = "Rp. 1.475.000";
//                 break;
//             default:
//                 cout << endl;
//                 cout << "Daftar kelas penerbangan Lion Air yang Anda pilih saat ini tidak tersedia!" << endl;
//                 cout << "Silahkan pilih kelas penerbangan yang saat ini tersedia";
//                 goto priceJTSS;
//                 break;
//             }
//         }
//         else if (from == "Surabaya" && destination == "Palangka Raya")
//         {
//         priceJTSP:
//             cout << endl;
//             cout << endl;
//             cout << endl;
//             cout << "   ------------------------------------------------------------------------------------------" << endl;
//             cout << "   |                        Daftar harga tiket sesuai kelas penerbangan                     |" << endl;
//             cout << "   |                                     Lion Air (JT)                                      |" << endl;
//             cout << "   ------------------------------------------------------------------------------------------" << endl;
//             cout << "   |No|            Kelas                   |               Harga                            |" << endl;
//             cout << "   ------------------------------------------------------------------------------------------" << endl;
//             cout << "   |1.|            Economy                 |               Rp. 500.000/org                  |" << endl;
//             cout << "   |2.|            Business                |               Rp. 1.000.000/org                  |" << endl;
//             cout << "   |3.|            First Class             |               Rp. 1.500.000/org                |" << endl;
//             cout << "   ==========================================================================================" << endl;
//             cout << "   Pilih kelas penerbangan Anda (pilih berdasarkan nomornya): ";
//             cin >> inputClass;
//             cout << "   ==========================================================================================" << endl;

//             switch (inputClass)
//             {
//             case 1:
//                 priceFlight = "Rp. 500.000";
//                 break;
//             case 2:
//                 priceFlight = "Rp. 1.000.000";
//                 break;
//             case 3:
//                 priceFlight = "Rp. 1.500.000";
//                 break;
//             default:
//                 cout << endl;
//                 cout << "Daftar kelas penerbangan Lion Air yang Anda pilih saat ini tidak tersedia!" << endl;
//                 cout << "Silahkan pilih kelas penerbangan yang saat ini tersedia";
//                 goto priceJTSP;
//                 break;
//             }
//         }
//         else if (from == "Surabaya" && destination == "Pontianak")
//         {
//         priceJTSPT:
//             cout << endl;
//             cout << endl;
//             cout << endl;
//             cout << "   ------------------------------------------------------------------------------------------" << endl;
//             cout << "   |                        Daftar harga tiket sesuai kelas penerbangan                     |" << endl;
//             cout << "   |                                     Lion Air (JT)                                      |" << endl;
//             cout << "   ------------------------------------------------------------------------------------------" << endl;
//             cout << "   |No|            Kelas                   |               Harga                            |" << endl;
//             cout << "   ------------------------------------------------------------------------------------------" << endl;
//             cout << "   |1.|            Economy                 |               Rp. 525.000/org                  |" << endl;
//             cout << "   |2.|            Business                |               Rp. 1.025.000/org                  |" << endl;
//             cout << "   |3.|            First Class             |               Rp. 1.525.000/org                |" << endl;
//             cout << "   ==========================================================================================" << endl;
//             cout << "   Pilih kelas penerbangan Anda (pilih berdasarkan nomornya): ";
//             cin >> inputClass;
//             cout << "   ==========================================================================================" << endl;

//             switch (inputClass)
//             {
//             case 1:
//                 priceFlight = "Rp. 525.000";
//                 break;
//             case 2:
//                 priceFlight = "Rp. 1.025.000";
//                 break;
//             case 3:
//                 priceFlight = "Rp. 1.525.000";
//                 break;
//             default:
//                 cout << endl;
//                 cout << "Daftar kelas penerbangan Lion Air yang Anda pilih saat ini tidak tersedia!" << endl;
//                 cout << "Silahkan pilih kelas penerbangan yang saat ini tersedia";
//                 goto priceJTSPT;
//                 break;
//             }
//         }
//         else
//         {
//             cout << "Not Found!";
//         }
//     }
//     else if (nameFlight == "Citilink (QG)")
//     {
//         if (from == "Surabaya" && destination == "Jakarta")
//         {
//         priceQGSJ:
//             cout << endl;
//             cout << endl;
//             cout << endl;
//             cout << "   ------------------------------------------------------------------------------------------" << endl;
//             cout << "   |                        Daftar harga tiket sesuai kelas penerbangan                     |" << endl;
//             cout << "   |                                     Citilink (QG)                                      |" << endl;
//             cout << "   ------------------------------------------------------------------------------------------" << endl;
//             cout << "   |No|            Kelas                   |               Harga                            |" << endl;
//             cout << "   ------------------------------------------------------------------------------------------" << endl;
//             cout << "   |1.|            Economy                 |               Rp. 300.000/org                  |" << endl;
//             cout << "   |2.|            Business                |               Rp. 800.000/org                  |" << endl;
//             cout << "   |3.|            First Class             |               Rp. 1.300.000/org                |" << endl;
//             cout << "   ==========================================================================================" << endl;
//             cout << "   Pilih kelas penerbangan Anda (pilih berdasarkan nomornya): ";
//             cin >> inputClass;
//             cout << "   ==========================================================================================" << endl;

//             switch (inputClass)
//             {
//             case 1:
//                 priceFlight = "Rp. 300.000";
//                 break;
//             case 2:
//                 priceFlight = "Rp. 800.000";
//                 break;
//             case 3:
//                 priceFlight = "Rp. 1.300.000";
//                 break;
//             default:
//                 cout << endl;
//                 cout << "Daftar kelas penerbangan Citilink yang Anda pilih saat ini tidak tersedia!" << endl;
//                 cout << "Silahkan pilih kelas penerbangan yang saat ini tersedia";
//                 goto priceQGSJ;
//                 break;
//             }
//         }
//         else if (from == "Surabaya" && destination == "Banjarmasin")
//         {
//         priceQGSB:
//             cout << endl;
//             cout << endl;
//             cout << endl;
//             cout << "   ------------------------------------------------------------------------------------------" << endl;
//             cout << "   |                        Daftar harga tiket sesuai kelas penerbangan                     |" << endl;
//             cout << "   |                                     Citilink (QG)                                      |" << endl;
//             cout << "   ------------------------------------------------------------------------------------------" << endl;
//             cout << "   |No|            Kelas                   |               Harga                            |" << endl;
//             cout << "   ------------------------------------------------------------------------------------------" << endl;
//             cout << "   |1.|            Economy                 |               Rp. 350.000/org                  |" << endl;
//             cout << "   |2.|            Business                |               Rp. 850.000/org                  |" << endl;
//             cout << "   |3.|            First Class             |               Rp. 1.350.000/org                |" << endl;
//             cout << "   ==========================================================================================" << endl;
//             cout << "   Pilih kelas penerbangan Anda (pilih berdasarkan nomornya): ";
//             cin >> inputClass;
//             cout << "   ==========================================================================================" << endl;

//             switch (inputClass)
//             {
//             case 1:
//                 priceFlight = "Rp. 350.000";
//                 break;
//             case 2:
//                 priceFlight = "Rp. 850.000";
//                 break;
//             case 3:
//                 priceFlight = "Rp. 1.350.000";
//                 break;
//             default:
//                 cout << endl;
//                 cout << "Daftar kelas penerbangan Citilink yang Anda pilih saat ini tidak tersedia!" << endl;
//                 cout << "Silahkan pilih kelas penerbangan yang saat ini tersedia";
//                 goto priceQGSB;
//                 break;
//             }
//         }
//         else if (from == "Surabaya" && destination == "Samarinda")
//         {
//         priceQGSS:
//             cout << endl;
//             cout << endl;
//             cout << endl;
//             cout << "   ------------------------------------------------------------------------------------------" << endl;
//             cout << "   |                        Daftar harga tiket sesuai kelas penerbangan                     |" << endl;
//             cout << "   |                                     Citilink (QG)                                      |" << endl;
//             cout << "   ------------------------------------------------------------------------------------------" << endl;
//             cout << "   |No|            Kelas                   |               Harga                            |" << endl;
//             cout << "   ------------------------------------------------------------------------------------------" << endl;
//             cout << "   |1.|            Economy                 |               Rp. 375.000/org                  |" << endl;
//             cout << "   |2.|            Business                |               Rp. 875.000/org                  |" << endl;
//             cout << "   |3.|            First Class             |               Rp. 1.375.000/org                |" << endl;
//             cout << "   ==========================================================================================" << endl;
//             cout << "   Pilih kelas penerbangan Anda (pilih berdasarkan nomornya): ";
//             cin >> inputClass;
//             cout << "   ==========================================================================================" << endl;

//             switch (inputClass)
//             {
//             case 1:
//                 priceFlight = "Rp. 375.000";
//                 break;
//             case 2:
//                 priceFlight = "Rp. 875.000";
//                 break;
//             case 3:
//                 priceFlight = "Rp. 1.375.000";
//                 break;
//             default:
//                 cout << endl;
//                 cout << "Daftar kelas penerbangan Citilink yang Anda pilih saat ini tidak tersedia!" << endl;
//                 cout << "Silahkan pilih kelas penerbangan yang saat ini tersedia";
//                 goto priceQGSS;
//                 break;
//             }
//         }
//         else if (from == "Surabaya" && destination == "Palangka Raya")
//         {
//         priceQGSP:
//             cout << endl;
//             cout << endl;
//             cout << endl;
//             cout << "   ------------------------------------------------------------------------------------------" << endl;
//             cout << "   |                        Daftar harga tiket sesuai kelas penerbangan                     |" << endl;
//             cout << "   |                                     Citilink (QG)                                      |" << endl;
//             cout << "   ------------------------------------------------------------------------------------------" << endl;
//             cout << "   |No|            Kelas                   |               Harga                            |" << endl;
//             cout << "   ------------------------------------------------------------------------------------------" << endl;
//             cout << "   |1.|            Economy                 |               Rp. 400.000/org                  |" << endl;
//             cout << "   |2.|            Business                |               Rp. 900.000/org                  |" << endl;
//             cout << "   |3.|            First Class             |               Rp. 1.400.000/org                |" << endl;
//             cout << "   ==========================================================================================" << endl;
//             cout << "   Pilih kelas penerbangan Anda (pilih berdasarkan nomornya): ";
//             cin >> inputClass;
//             cout << "   ==========================================================================================" << endl;

//             switch (inputClass)
//             {
//             case 1:
//                 priceFlight = "Rp. 400.000";
//                 break;
//             case 2:
//                 priceFlight = "Rp. 900.000";
//                 break;
//             case 3:
//                 priceFlight = "Rp. 1.400.000";
//                 break;
//             default:
//                 cout << endl;
//                 cout << "Daftar kelas penerbangan Citilink yang Anda pilih saat ini tidak tersedia!" << endl;
//                 cout << "Silahkan pilih kelas penerbangan yang saat ini tersedia";
//                 goto priceQGSP;
//                 break;
//             }
//         }
//         else if (from == "Surabaya" && destination == "Pontianak")
//         {
//         priceQGSPT:
//             cout << endl;
//             cout << endl;
//             cout << endl;
//             cout << "   ------------------------------------------------------------------------------------------" << endl;
//             cout << "   |                        Daftar harga tiket sesuai kelas penerbangan                     |" << endl;
//             cout << "   |                                     Citilink (QG)                                      |" << endl;
//             cout << "   ------------------------------------------------------------------------------------------" << endl;
//             cout << "   |No|            Kelas                   |               Harga                            |" << endl;
//             cout << "   ------------------------------------------------------------------------------------------" << endl;
//             cout << "   |1.|            Economy                 |               Rp. 425.000/org                  |" << endl;
//             cout << "   |2.|            Business                |               Rp. 925.000/org                  |" << endl;
//             cout << "   |3.|            First Class             |               Rp. 1.425.000/org                |" << endl;
//             cout << "   ==========================================================================================" << endl;
//             cout << "   Pilih kelas penerbangan Anda (pilih berdasarkan nomornya): ";
//             cin >> inputClass;
//             cout << "   ==========================================================================================" << endl;

//             switch (inputClass)
//             {
//             case 1:
//                 priceFlight = "Rp. 425.000";
//                 break;
//             case 2:
//                 priceFlight = "Rp. 925.000";
//                 break;
//             case 3:
//                 priceFlight = "Rp. 1.425.000";
//                 break;
//             default:
//                 cout << endl;
//                 cout << "Daftar kelas penerbangan Citilink yang Anda pilih saat ini tidak tersedia!" << endl;
//                 cout << "Silahkan pilih kelas penerbangan yang saat ini tersedia";
//                 goto priceQGSPT;
//                 break;
//             }
//         }
//         else
//         {
//             cout << "Not Found!";
//         }
//     }
//     else if (nameFlight == "AirAsia Indonesia (QZ)")
//     {
//         if (from == "Surabaya" && destination == "Jakarta")
//         {
//         priceQZSJ:
//             cout << endl;
//             cout << endl;
//             cout << endl;
//             cout << "   ------------------------------------------------------------------------------------------" << endl;
//             cout << "   |                        Daftar harga tiket sesuai kelas penerbangan                     |" << endl;
//             cout << "   |                                  AirAsia Indonesia (QZ)                                |" << endl;
//             cout << "   ------------------------------------------------------------------------------------------" << endl;
//             cout << "   |No|            Kelas                   |               Harga                            |" << endl;
//             cout << "   ------------------------------------------------------------------------------------------" << endl;
//             cout << "   |1.|            Economy                 |               Rp. 450.000/org                  |" << endl;
//             cout << "   |2.|            Business                |               Rp. 950.000/org                  |" << endl;
//             cout << "   |3.|            First Class             |               Rp. 1.450.000/org                |" << endl;
//             cout << "   ==========================================================================================" << endl;
//             cout << "   Pilih kelas penerbangan Anda (pilih berdasarkan nomornya): ";
//             cin >> inputClass;
//             cout << "   ==========================================================================================" << endl;

//             switch (inputClass)
//             {
//             case 1:
//                 priceFlight = "Rp. 450.000";
//                 break;
//             case 2:
//                 priceFlight = "Rp. 950.000";
//                 break;
//             case 3:
//                 priceFlight = "Rp. 1.450.000";
//                 break;
//             default:
//                 cout << endl;
//                 cout << "Daftar kelas penerbangan AirAsia Indonesia yang Anda pilih saat ini tidak tersedia!" << endl;
//                 cout << "Silahkan pilih kelas penerbangan yang saat ini tersedia";
//                 goto priceQZSJ;
//                 break;
//             }
//         }
//         else if (from == "Surabaya" && destination == "Banjarmasin")
//         {
//         priceQZSB:
//             cout << endl;
//             cout << endl;
//             cout << endl;
//             cout << "   ------------------------------------------------------------------------------------------" << endl;
//             cout << "   |                        Daftar harga tiket sesuai kelas penerbangan                     |" << endl;
//             cout << "   |                                  AirAsia Indonesia (QZ)                                |" << endl;
//             cout << "   ------------------------------------------------------------------------------------------" << endl;
//             cout << "   |No|            Kelas                   |               Harga                            |" << endl;
//             cout << "   ------------------------------------------------------------------------------------------" << endl;
//             cout << "   |1.|            Economy                 |               Rp. 475.000/org                  |" << endl;
//             cout << "   |2.|            Business                |               Rp. 975.000/org                  |" << endl;
//             cout << "   |3.|            First Class             |               Rp. 1.475.000/org                |" << endl;
//             cout << "   ==========================================================================================" << endl;
//             cout << "   Pilih kelas penerbangan Anda (pilih berdasarkan nomornya): ";
//             cin >> inputClass;
//             cout << "   ==========================================================================================" << endl;

//             switch (inputClass)
//             {
//             case 1:
//                 priceFlight = "Rp. 475.000";
//                 break;
//             case 2:
//                 priceFlight = "Rp. 975.000";
//                 break;
//             case 3:
//                 priceFlight = "Rp. 1.475.000";
//                 break;
//             default:
//                 cout << endl;
//                 cout << "Daftar kelas penerbangan AirAsia Indonesia yang Anda pilih saat ini tidak tersedia!" << endl;
//                 cout << "Silahkan pilih kelas penerbangan yang saat ini tersedia";
//                 goto priceQZSB;
//                 break;
//             }
//         }
//         else if (from == "Surabaya" && destination == "Samarinda")
//         {
//         priceQZSS:
//             cout << endl;
//             cout << endl;
//             cout << endl;
//             cout << "   ------------------------------------------------------------------------------------------" << endl;
//             cout << "   |                        Daftar harga tiket sesuai kelas penerbangan                     |" << endl;
//             cout << "   |                                  AirAsia Indonesia (QZ)                                |" << endl;
//             cout << "   ------------------------------------------------------------------------------------------" << endl;
//             cout << "   |No|            Kelas                   |               Harga                            |" << endl;
//             cout << "   ------------------------------------------------------------------------------------------" << endl;
//             cout << "   |1.|            Economy                 |               Rp. 500.000/org                  |" << endl;
//             cout << "   |2.|            Business                |               Rp. 1.000.000/org                  |" << endl;
//             cout << "   |3.|            First Class             |               Rp. 1.500.000/org                |" << endl;
//             cout << "   ==========================================================================================" << endl;
//             cout << "   Pilih kelas penerbangan Anda (pilih berdasarkan nomornya): ";
//             cin >> inputClass;
//             cout << "   ==========================================================================================" << endl;

//             switch (inputClass)
//             {
//             case 1:
//                 priceFlight = "Rp. 500.000";
//                 break;
//             case 2:
//                 priceFlight = "Rp. 1.000.000";
//                 break;
//             case 3:
//                 priceFlight = "Rp. 1.500.000";
//                 break;
//             default:
//                 cout << endl;
//                 cout << "Daftar kelas penerbangan AirAsia Indonesia yang Anda pilih saat ini tidak tersedia!" << endl;
//                 cout << "Silahkan pilih kelas penerbangan yang saat ini tersedia";
//                 goto priceQZSS;
//                 break;
//             }
//         }
//         else if (from == "Surabaya" && destination == "Palangka Raya")
//         {
//         priceQZSP:
//             cout << endl;
//             cout << endl;
//             cout << endl;
//             cout << "   ------------------------------------------------------------------------------------------" << endl;
//             cout << "   |                        Daftar harga tiket sesuai kelas penerbangan                     |" << endl;
//             cout << "   |                                  AirAsia Indonesia (QZ)                                |" << endl;
//             cout << "   ------------------------------------------------------------------------------------------" << endl;
//             cout << "   |No|            Kelas                   |               Harga                            |" << endl;
//             cout << "   ------------------------------------------------------------------------------------------" << endl;
//             cout << "   |1.|            Economy                 |               Rp. 525.000/org                  |" << endl;
//             cout << "   |2.|            Business                |               Rp. 1.025.000/org                  |" << endl;
//             cout << "   |3.|            First Class             |               Rp. 1.525.000/org                |" << endl;
//             cout << "   ==========================================================================================" << endl;
//             cout << "   Pilih kelas penerbangan Anda (pilih berdasarkan nomornya): ";
//             cin >> inputClass;
//             cout << "   ==========================================================================================" << endl;

//             switch (inputClass)
//             {
//             case 1:
//                 priceFlight = "Rp. 525.000";
//                 break;
//             case 2:
//                 priceFlight = "Rp. 1.025.000";
//                 break;
//             case 3:
//                 priceFlight = "Rp. 1.525.000";
//                 break;
//             default:
//                 cout << endl;
//                 cout << "Daftar kelas penerbangan AirAsia Indonesia yang Anda pilih saat ini tidak tersedia!" << endl;
//                 cout << "Silahkan pilih kelas penerbangan yang saat ini tersedia";
//                 goto priceQZSP;
//                 break;
//             }
//         }
//         else if (from == "Surabaya" && destination == "Pontianak")
//         {
//         priceQZSPT:
//             cout << endl;
//             cout << endl;
//             cout << endl;
//             cout << "   ------------------------------------------------------------------------------------------" << endl;
//             cout << "   |                        Daftar harga tiket sesuai kelas penerbangan                     |" << endl;
//             cout << "   |                                  AirAsia Indonesia (QZ)                                |" << endl;
//             cout << "   ------------------------------------------------------------------------------------------" << endl;
//             cout << "   |No|            Kelas                   |               Harga                            |" << endl;
//             cout << "   ------------------------------------------------------------------------------------------" << endl;
//             cout << "   |1.|            Economy                 |               Rp. 550.000/org                  |" << endl;
//             cout << "   |2.|            Business                |               Rp. 1.050.000/org                  |" << endl;
//             cout << "   |3.|            First Class             |               Rp. 1.550.000/org                |" << endl;
//             cout << "   ==========================================================================================" << endl;
//             cout << "   Pilih kelas penerbangan Anda (pilih berdasarkan nomornya): ";
//             cin >> inputClass;
//             cout << "   ==========================================================================================" << endl;

//             switch (inputClass)
//             {
//             case 1:
//                 priceFlight = "Rp. 550.000";
//                 break;
//             case 2:
//                 priceFlight = "Rp. 1.050.000";
//                 break;
//             case 3:
//                 priceFlight = "Rp. 1.550.000";
//                 break;
//             default:
//                 cout << endl;
//                 cout << "Daftar kelas penerbangan AirAsia Indonesia yang Anda pilih saat ini tidak tersedia!" << endl;
//                 cout << "Silahkan pilih kelas penerbangan yang saat ini tersedia";
//                 goto priceQZSPT;
//                 break;
//             }
//         }
//         else
//         {
//             cout << "Not Found!";
//         }
//     }
//     else if (nameFlight == "Sriwijaya Air (SJ)")
//     {
//         if (from == "Surabaya" && destination == "Jakarta")
//         {
//         priceSJSJ:
//             cout << endl;
//             cout << endl;
//             cout << endl;
//             cout << "   ------------------------------------------------------------------------------------------" << endl;
//             cout << "   |                        Daftar harga tiket sesuai kelas penerbangan                     |" << endl;
//             cout << "   |                                    Sriwijaya Air (SJ)                                  |" << endl;
//             cout << "   ------------------------------------------------------------------------------------------" << endl;
//             cout << "   |No|            Kelas                   |               Harga                            |" << endl;
//             cout << "   ------------------------------------------------------------------------------------------" << endl;
//             cout << "   |1.|            Economy                 |               Rp. 250.000/org                  |" << endl;
//             cout << "   |2.|            Business                |               Rp. 750.000/org                  |" << endl;
//             cout << "   |3.|            First Class             |               Rp. 1.250.000/org                |" << endl;
//             cout << "   ==========================================================================================" << endl;
//             cout << "   Pilih kelas penerbangan Anda (pilih berdasarkan nomornya): ";
//             cin >> inputClass;
//             cout << "   ==========================================================================================" << endl;

//             switch (inputClass)
//             {
//             case 1:
//                 priceFlight = "Rp. 250.000";
//                 break;
//             case 2:
//                 priceFlight = "Rp. 750.000";
//                 break;
//             case 3:
//                 priceFlight = "Rp. 1.250.000";
//                 break;
//             default:
//                 cout << endl;
//                 cout << "Daftar kelas penerbangan Sriwijaya Air yang Anda pilih saat ini tidak tersedia!" << endl;
//                 cout << "Silahkan pilih kelas penerbangan yang saat ini tersedia";
//                 goto priceSJSJ;
//                 break;
//             }
//         }
//         else if (from == "Surabaya" && destination == "Banjarmasin")
//         {
//         priceSJSB:
//             cout << endl;
//             cout << endl;
//             cout << endl;
//             cout << "   ------------------------------------------------------------------------------------------" << endl;
//             cout << "   |                        Daftar harga tiket sesuai kelas penerbangan                     |" << endl;
//             cout << "   |                                    Sriwijaya Air (SJ)                                  |" << endl;
//             cout << "   ------------------------------------------------------------------------------------------" << endl;
//             cout << "   |No|            Kelas                   |               Harga                            |" << endl;
//             cout << "   ------------------------------------------------------------------------------------------" << endl;
//             cout << "   |1.|            Economy                 |               Rp. 300.000/org                  |" << endl;
//             cout << "   |2.|            Business                |               Rp. 800.000/org                  |" << endl;
//             cout << "   |3.|            First Class             |               Rp. 1.300.000/org                |" << endl;
//             cout << "   ==========================================================================================" << endl;
//             cout << "   Pilih kelas penerbangan Anda (pilih berdasarkan nomornya): ";
//             cin >> inputClass;
//             cout << "   ==========================================================================================" << endl;

//             switch (inputClass)
//             {
//             case 1:
//                 priceFlight = "Rp. 300.000";
//                 break;
//             case 2:
//                 priceFlight = "Rp. 800.000";
//                 break;
//             case 3:
//                 priceFlight = "Rp. 1.300.000";
//                 break;
//             default:
//                 cout << endl;
//                 cout << "Daftar kelas penerbangan Sriwijaya Air yang Anda pilih saat ini tidak tersedia!" << endl;
//                 cout << "Silahkan pilih kelas penerbangan yang saat ini tersedia";
//                 goto priceSJSB;
//                 break;
//             }
//         }
//         else if (from == "Surabaya" && destination == "Samarinda")
//         {
//         priceSJSS:
//             cout << endl;
//             cout << endl;
//             cout << endl;
//             cout << "   ------------------------------------------------------------------------------------------" << endl;
//             cout << "   |                        Daftar harga tiket sesuai kelas penerbangan                     |" << endl;
//             cout << "   |                                    Sriwijaya Air (SJ)                                  |" << endl;
//             cout << "   ------------------------------------------------------------------------------------------" << endl;
//             cout << "   |No|            Kelas                   |               Harga                            |" << endl;
//             cout << "   ------------------------------------------------------------------------------------------" << endl;
//             cout << "   |1.|            Economy                 |               Rp. 325.000/org                  |" << endl;
//             cout << "   |2.|            Business                |               Rp. 825.000/org                  |" << endl;
//             cout << "   |3.|            First Class             |               Rp. 1.325.000/org                |" << endl;
//             cout << "   ==========================================================================================" << endl;
//             cout << "   Pilih kelas penerbangan Anda (pilih berdasarkan nomornya): ";
//             cin >> inputClass;
//             cout << "   ==========================================================================================" << endl;

//             switch (inputClass)
//             {
//             case 1:
//                 priceFlight = "Rp. 325.000";
//                 break;
//             case 2:
//                 priceFlight = "Rp. 825.000";
//                 break;
//             case 3:
//                 priceFlight = "Rp. 1.325.000";
//                 break;
//             default:
//                 cout << endl;
//                 cout << "Daftar kelas penerbangan Sriwijaya Air yang Anda pilih saat ini tidak tersedia!" << endl;
//                 cout << "Silahkan pilih kelas penerbangan yang saat ini tersedia";
//                 goto priceSJSS;
//                 break;
//             }
//         }
//         else if (from == "Surabaya" && destination == "Palangka Raya")
//         {
//         priceSJSP:
//             cout << endl;
//             cout << endl;
//             cout << endl;
//             cout << "   ------------------------------------------------------------------------------------------" << endl;
//             cout << "   |                        Daftar harga tiket sesuai kelas penerbangan                     |" << endl;
//             cout << "   |                                    Sriwijaya Air (SJ)                                  |" << endl;
//             cout << "   ------------------------------------------------------------------------------------------" << endl;
//             cout << "   |No|            Kelas                   |               Harga                            |" << endl;
//             cout << "   ------------------------------------------------------------------------------------------" << endl;
//             cout << "   |1.|            Economy                 |               Rp. 350.000/org                  |" << endl;
//             cout << "   |2.|            Business                |               Rp. 850.000/org                  |" << endl;
//             cout << "   |3.|            First Class             |               Rp. 1.350.000/org                |" << endl;
//             cout << "   ==========================================================================================" << endl;
//             cout << "   Pilih kelas penerbangan Anda (pilih berdasarkan nomornya): ";
//             cin >> inputClass;
//             cout << "   ==========================================================================================" << endl;

//             switch (inputClass)
//             {
//             case 1:
//                 priceFlight = "Rp. 350.000";
//                 break;
//             case 2:
//                 priceFlight = "Rp. 850.000";
//                 break;
//             case 3:
//                 priceFlight = "Rp. 1.350.000";
//                 break;
//             default:
//                 cout << endl;
//                 cout << "Daftar kelas penerbangan Sriwijaya Air yang Anda pilih saat ini tidak tersedia!" << endl;
//                 cout << "Silahkan pilih kelas penerbangan yang saat ini tersedia";
//                 goto priceSJSP;
//                 break;
//             }
//         }
//         else if (from == "Surabaya" && destination == "Pontianak")
//         {
//         priceSJSPT:
//             cout << endl;
//             cout << endl;
//             cout << endl;
//             cout << "   ------------------------------------------------------------------------------------------" << endl;
//             cout << "   |                        Daftar harga tiket sesuai kelas penerbangan                     |" << endl;
//             cout << "   |                                    Sriwijaya Air (SJ)                                  |" << endl;
//             cout << "   ------------------------------------------------------------------------------------------" << endl;
//             cout << "   |No|            Kelas                   |               Harga                            |" << endl;
//             cout << "   ------------------------------------------------------------------------------------------" << endl;
//             cout << "   |1.|            Economy                 |               Rp. 375.000/org                  |" << endl;
//             cout << "   |2.|            Business                |               Rp. 875.000/org                  |" << endl;
//             cout << "   |3.|            First Class             |               Rp. 1.375.000/org                |" << endl;
//             cout << "   ==========================================================================================" << endl;
//             cout << "   Pilih kelas penerbangan Anda (pilih berdasarkan nomornya): ";
//             cin >> inputClass;
//             cout << "   ==========================================================================================" << endl;

//             switch (inputClass)
//             {
//             case 1:
//                 priceFlight = "Rp. 375.000";
//                 break;
//             case 2:
//                 priceFlight = "Rp. 875.000";
//                 break;
//             case 3:
//                 priceFlight = "Rp. 1.375.000";
//                 break;
//             default:
//                 cout << endl;
//                 cout << "Daftar kelas penerbangan Sriwijaya Air yang Anda pilih saat ini tidak tersedia!" << endl;
//                 cout << "Silahkan pilih kelas penerbangan yang saat ini tersedia";
//                 goto priceSJSPT;
//                 break;
//             }
//         }
//         else
//         {
//             cout << "Not Found!";
//         }
//     }
// }

// int main()
// {
//     cout << endl;
//     cout << "   ==========================================================================================" << endl;
//     cout << "   ||                              Program Pesan Tiket Pesawat                             ||" << endl;
//     cout << "   ==========================================================================================" << endl;
//     cout << "   ||                              |      From Surabaya      |                             ||" << endl;
//     cout << "   ||                              |                         |                             ||" << endl;
//     cout << "   ||                              |           To            |                             ||" << endl;
//     cout << "   ||                              |                         |                             ||" << endl;
//     cout << "   ||                              |     Your Destination    |                             ||" << endl;
//     cout << "   ==========================================================================================" << endl;
//     cout << endl;
//     cout << endl;
//     cout << endl;

//     biodata();
//     to_Destination();
//     date_Destination();
//     list_Flight();
//     price_flight();
//     cout << endl;
//     cout << endl;
//     cout << endl;

//     cout << "  E-tiket" << endl;
//     cout << "  ----------------------------------------------" << endl;
//     cout << "  " << nameFlight << "    ";
//     cout << codeFlight << "\t\t               " << endl;
//     cout << endl;

//     cout << "  " << namePassenger << " \t";
//     cout << "   " << from << "\t  " << destination << endl;
//     cout << endl;
//     cout << "  " << tgl << '/' << bln << '/' << thn;

//     cout << "    Berangkat\t  ";
//     cout << "Tiba\t        ";
//     cout << endl;
//     cout << "                   " << go << "\t";
//     cout << "  " << arrive << "\t        " << endl;
//     cout << endl;
//     cout << "  ----------------------------------------------" << endl;
//     cout << "  Harga tiket: " << priceFlight << "\t\t\t        " << endl;
//     cout << "  ----------------------------------------------" << endl;
//     cout << "  Menunggu proses pembayaran...";
//     cout << endl;

//     return 0;
// }