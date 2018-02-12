# Comandos

```
Comando head
Comando head
Comando head
siempre alerta estás
```
#
- ls: List files
- cd: Change directory
- mkdir: Make dir
- rm: Remove: Quitar un archivo
- rmdir: Remove directory (Solo si está vacío)
- rm -rf (*r*ecursivo *f*orce)
- cat: Concatenar archivos
- "|": Se refiere a una tubería (Se escribe con Alt Gr+1)
- ">" + "Fichero": Vuelca en el fichero
- "<": Lee desde el fichero anónimo
- mv: Cambia el nnombre o mueve el archivo de sitio

## Git 

- clone 
- commit 
- status
- add (vigilar nuevos ficheros)
- git add -u (remove deleted files)
- pull
- push

seq: secuencia de números (-n3): Realizar filas de tres
xargs: Argumento
echo: Muestra lo que escribimos en pantalla 

## Comandos que unen
- cat: Concatenar archivos en la terminal
- "-": Muestra por la pantalla el fichero que representa la pantalla
- paste: unir en vertical
- join: Combinaciones

## Comandos que dividen
- tail -2: Archivo
- tail -f: Muestra el final del archivo
- cut: Corta Vertical
- split: Divide horizontal

## Comandos que trabajan con texto
- grep: Filtra
- ed: Editor de texto sin ventanas
- sed: Lo mismo
- vi: (mejorado) 

## Descargar archivos desde Internet
- wget+URL

## Ayudas y manuales
- man
  - 1: Se hace referencia a la herramienta de la terminal
  - 2: Al núcleo del sistema operativo
  - 3: Desarrollo de Aplicaciones

## Otros
- cat p.* | ssh root@172.17.1.2: Pasar archivos a otro ordenador mediante una conexión encriptada
- cat "Nombre del archivo" | tr "Letras normales" "Letras del cambio": Me cambia las letras que quiera por otras
- cat "Nombre del archivo" | tr -s "Letras normales" "Letras del cambio": (-s squeexe) Permite elegir un valor especial
- tr: Traducir unos comandos por otros
- sort: Permite ordenar -n: Numérico
- head -Número: Palabras que están menos frecuentemente
- tail -Número: Palabras menos frecuentes
- uniq -c: Deja filas únicas -c: Cuenta
- telnet + dirección web (URL o IP) + puerto (80) para web pueto (21) para correo
- echo
- mysqldump: Volcado de la base de datos
- date: Muestra la fecha (backup rotativos)
- mysqldump -u root -p sys > backup`date "+%a"`.sql
- mysqldump -u root -p sys > backup.sql
- fg <n>: Trae un proceso al primer plano
- history: Muestra el historial
- jobs: Lista todos los procesos detenidos

## Buscar
- grep: Filtra palabras de un archivo. Para ello podemos poner | grep palabra deseada
- find: Busca ficheros 

## Curiosidades 
- bc: Calculadora Básica
- cal: Calendario (añadiendo mes y año) Ej: cal feb 2014
- echo "obase=16; número" | bc: Pasar un número a binario
- echo "ibase=16; número" | bc: Pasar un número a hexadecimal

## Compresor
- tar: Para abrir esta opción
	- cvzf "Nombre del archivo".tgz: Para comprimir
	- xvf: Para extraer
- unzip: Descomprimir