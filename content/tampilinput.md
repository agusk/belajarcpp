# Menampilkan Text ke Layar

## Menampilkan Text ke Layar

Seperti yang pernah dibuat pada Hello World dimana kita menampikan ke layar. Disini kita menggunakan printf(). Contoh sintaknya:

    cout<< "Selamat datang di C";


Jika ingin setelah menampilkan tulisan tersebut, kursor diarahkan ke kiri bawah maka kita dapat menambahkan "\r\n", contoh penggunaannya:

    cout<< "Selamat datang di C \r\n";

Opsi lain kita dapat menggunakan ini. 

    cout<< "Selamat datang di C" << endl;
        
    
## Menyisipkan karakter atau Bilangan

Misalkan kita ingin menampilkan nilai temperatur yang diperolah dari pengukuran dan menampikan ke layar.

    int temperatur = 10; // bisa dari hasil pengukuran
    cout<< "Temperatur: " << temperatur << endln;
    

[![Kembali ke menu utama](images/back.png "Kembali menu utama")](/README.md)