# 3.e.1:
PS C:\Users\Usuario\Desktop\MATERIAS\SSL\01 - Conversión de velocidades> gcc main.c tabla.c conversion.c
PS C:\Users\Usuario\Desktop\MATERIAS\SSL\01 - Conversión de velocidades> .\a.exe 8 16                   
NUDOS  |   KMH   |
8      |   14.816|
9      |   16.668|
10     |   18.52 |
11     |   20.372|
12     |   22.224|
13     |   24.076|
14     |   25.928|
15     |   27.78 |
16     |   29.632|
# El programa compila sin errores ni warnings y el comportamiento es el esperado :)

# 3.e.2:
PS C:\Users\Usuario\Desktop\MATERIAS\SSL\01 - Conversión de velocidades> gcc main.c tabla.c conversion.c
tabla.c: In function 'tabla':
tabla.c:8:42: warning: implicit declaration of function 'conversion' [-Wimplicit-function-declaration]
    8 |         printf("%g  |\t%g|\n", nudos[i], conversion(nudos[i]));
      |
# El programa compila con un warning, ya que la función conversion no fue declarada en el archivo tabla.c
# y aunque compila, el programa resultante no funciona como queremos.

# 3.e.3:
PS C:\Users\Usuario\Desktop\MATERIAS\SSL\01 - Conversión de velocidades> gcc main.c conversion.c 
c:/mingw/bin/../lib/gcc/x86_64-w64-mingw32/11.2.0/../../../../x86_64-w64-mingw32/bin/ld.exe: C:\Users\Usuario\AppData\Local\Temp\ccKQASdQ.o:main.c:(.text+0x160): undefined reference to `tabla'
collect2.exe: error: ld returned 1 exit status
# El programa no compila, ya que no se encuentra la deficion de la funcion tabla en el archivo main.c.

# 3.e.4:
gcc -E conversion.c -o conversion.i
# El archivo preprocesado conversion.i se genera correctamente.