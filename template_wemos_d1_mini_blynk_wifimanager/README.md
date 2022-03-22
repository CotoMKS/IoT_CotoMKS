# Template Wemos D1 mini Blynk WiFiManager

Template ini berisi script yang saya gunakan untuk membuat perangkat IoT sederhana yang hanya menggunakan Relay Module. Sebagai contoh, saya akan menggunakan template ini untuk membuat IoT Lock.

## Alat dan Bahan
- Wemos D1 mini (atau microcontroller lain dengan chip ESP8266)
- Relay 1 Channel Module
- Kabel Jumper IoT
- Selenoid Module 12v5a
- Power Supply Travo 12v5a
- Arduino IDE
- Aplikasi dan Akun Blynk

## Cara membuat
1. Download [template ini](https://github.com/CotoMKS/IoT_CotoMKS/archive/refs/heads/main.zip).
2. Extract template ini di `C:\Users\User\Documents\Arduino`.
  ![image](https://user-images.githubusercontent.com/68802982/159506161-3708dc97-5a13-4667-a41f-5b7b1eb81ad6.png)
  ![image](https://user-images.githubusercontent.com/68802982/159507669-4f2d137e-0165-4817-9a60-a8cfa7ffdd00.png)
  ![image](https://user-images.githubusercontent.com/68802982/159507746-cc7f05ef-6116-4c45-b179-6ce541860c2c.png)
3. Buka folder yang sudah di extract tadi, lalu buka file `template_wemos_d1_mini_blynk_wifimanager.ino`
4. Ada beberapa hal yang perlu kalian ubah di dalam script, yaitu:
      - TEMPLATE_ID
      - DEVICE_NAME
      - AUTH_KEY
   Untuk mendapat kode tersebut, pastikan kalian sudah punya akun [Blynk](blynk.cloud)
5. Buat Project template
   ![image](https://user-images.githubusercontent.com/68802982/159510394-094a632c-df28-417c-a5d3-b80ced0e7a09.png)
   ![image](https://user-images.githubusercontent.com/68802982/159510535-07b88ddf-c799-44c6-ba65-515180804b5c.png)
6. Tambahkan New Device From Template lalu pilih Project Template yang sudah kalian buat
   ![image](https://user-images.githubusercontent.com/68802982/159510743-e384642b-e619-4be4-94cd-cf31e3ee6066.png)
   ![image](https://user-images.githubusercontent.com/68802982/159510833-9bec80ed-f5b9-407c-9994-237a4343db0b.png)
   ![image](https://user-images.githubusercontent.com/68802982/159511019-4aea7ba7-8c92-402e-b861-9eb18e8260aa.png)
   ![image](https://user-images.githubusercontent.com/68802982/159511126-d63a091f-261b-484c-9d59-822ab3abf4d1.png)
7. Masuk ke Device Info dan copy Firmware Configuration-nya
   ![image](https://user-images.githubusercontent.com/68802982/159511633-7a60808e-409f-4e3a-ba91-9ad228a6f396.png)
8. Ubah 3 baris script seperti gambar berikut
   ![image](https://user-images.githubusercontent.com/68802982/159512017-434d962a-6f5b-40b9-985f-9fb5c4996be7.png)
   ![image](https://user-images.githubusercontent.com/68802982/159512107-c6fe5b53-6cae-4028-8767-0350639567c6.png)
   ![image](https://user-images.githubusercontent.com/68802982/159512211-c8cca514-4003-4991-a276-e542b8555f32.png)
   ![image](https://user-images.githubusercontent.com/68802982/159512331-ae27c645-b884-4475-9c72-6cc528bb2eef.png)
9. Instal Library (bagi yang belum instal)
    Extract file `libraries.zip` yang ada di folder template tadi ke `C:\Users\User\Documents\Arduino\libraries`
    ![image](https://user-images.githubusercontent.com/68802982/159514570-2af2eff6-309c-46c2-ae5a-7fe0bda7279c.png)
    ![image](https://user-images.githubusercontent.com/68802982/159514663-d3e9f95d-cc61-44d2-9d39-1b9c01b8c07b.png)
10. Restart aplikasi Arduino IDE
    Close lalu buka kembali aplikasi Arduino IDE kalian supaya Library yang tadi kalian extract dapat digunakan
11. Upload script anda ke Microcontroller
    ![image](https://user-images.githubusercontent.com/68802982/159515070-95096125-f681-4ea5-a33f-254d203427d0.png)
    
## Rangkaian alat
Peringatan: Pastikan perangkat yang akan digunakan tidak terpasang ke listrik, dan sebelum memasangkan perangkat ke listrik pastikan rangkaian sudah benar. Jauhkan anak-anak dari peralatan

Untuk gambar rangkaian yang lebih lengkap, silahkan kunjungi [Figma Design](https://www.figma.com/file/qb83DLO7pQuflKBZwMpWNM/Untitled?node-id=2%3A2)
