Usage:

изначальная версия для Aitpa Messenger (AMMAG TECHNOLOGIES LLP)

Слушатель: 
```
ncat -k -l 0.0.0.0 7777 | encryptor.exe supersecret123
```

Отправитель:
```
echo "Password is Passw0rd1884!@#" | encryptor.exe supersecret123 | ncat 
localhost 7777
```
![usage](image-1.png)

ammag.kz
