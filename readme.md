  <header>
    <h1 align = "center">SSL 🖥️<h1>
  </header>
  <main>
    <section>
      <h3 align = "center"> 📍TP N°1 – Conversion de velocidades</h3>
      <article>
        <details>
          <summary>Consignas</summary>
          <p>
            <strong>a.</strong>Se quiere un programa que arme una tabla de equivalencia de velocidades, entre nudos y 
            kilómetros por hora. Los valores que la tabla debe convertir se indican con parámetros al 
            lanzar el programa.
          </p>
          <details>
            <summary><strong>b.</strong>Progrmar usando los siguientes fuentes</summary>
            <details>
              <summary>1. main.c lee los parámetros que le pasan al ser invocado y los pasa a la función que arma 
              la tabla. Los parámetros a pasar son (siempre en nudos):</summary>
              <p><strong>i.</strong> inicio: valor inicial a mostrar en la tabla</p>
              <p><strong>ii.</strong>  fin: valor máximo, la tabla mostrará hasta el mayor valor que no supere este 
              parámetro.</p>
              <p><strong>iii.</strong>  Incremento: del valor entre una fila y la siguiente. A diferencia de los dos anteriores 
              que son obligatorios y si no están el programa debe parar con un mensaje adecuado, 
              este último es optativo. Si no está se considerará que vale 1.</p>
            </details>
            <p>2. tabla.c muestra por pantalla (stdout) las filas pedidas, llamando a la función de 
            conversión. Use assert para poner precondiciones sobre los valores de los parámetros 
            recibidos.</p>
            <p>3. Conversion.c recibe una velocidad en nudos y devuelve la correspondiente en km/h. 
            <strong>Nota:</strong> 1 nudo equivale a 1,852 km/h.</p>
          </details>
          <p>
            <strong>c.</strong> Arme los encabezados e incluirlos en los fuentes que lo necesiten.
          </p>
          <p>
            <strong>d.</strong> Arme un makefile apropiado para el proyecto.
          </p>
          <details>
            <summary><strong>e.</strong> Arme un archivo de resultados, que puede ser un pdf o un md, donde mostrará los 
            resultados de las siguientes pruebas.</summary>
            <p>1. Muestre un comando que permita compilar todo el proyecto (sin el makefile) de 
            acuerdo a los lineamientos del curso (adherir estrictamente al estándar).</p>
            <p>2. Compile con el comando anterior pero modifque tabla.c de modo que no incluya 
            conversion.h, copie el resultado y coméntelo.</p>
            <p>3. De un comando que compile todos los fuentes menos tabla.c, ejecútelo, muestre el 
            resultado y coméntelo.</p>
            <p>4. Copie el comando necesario para obtener conversion.i, el archivo ya preprocesado de 
            conversion.c</p>
          </details>
        </details>
      </article>
    </section>
  </main>
  <footer>
    <details>
      <summary>Integrantes</summary>
      <ul>
        <li></li>
        <li></li>
        <li></li>
        <li></li>
        <li>Facundo Di Marco</li>
      </ul>
    </details>
  </footer>
