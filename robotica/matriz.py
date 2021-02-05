# ejemplo de matriz de dos o mas variables
# crear un programa que pregunte el tamanio de la matriz y vector
# rellenar los datos generados de la matriz
# crear la matriz inversa y multiplicar


# La mas sencilla e intuitiva
import numpy as np

print("- Matriz creada con una lista de listas:")
lista_de_listas=[ [1  ,-4], 
                  [12 , 3],
                  [7.2, 5]]
matriz = np.array(lista_de_listas)
print(matriz)


print("- Matriz creada con np.zeros:")
dimensiones=(3,3)
matriz_ceros = np.zeros(dimensiones)
print(matriz_ceros)


print("- Matriz creada con np.ones:")
dimensiones=(3,3)
matriz_unos = np.ones(dimensiones)
print(matriz_unos)

#tambien podemos usar np.copy para copiar una matriz
print("- Copia de la matriz creada con np.ones:")
matriz_unos_copia=np.copy(matriz_unos)
print(matriz_unos_copia)

# datos = [0,0,0,0,0,0]
# for i in range(1,7):
#    datos[i-1] = int( input( "Dime el dato numero {}: ".format(i) ))
# print ("Los datos al reves son: ")
# for i in range(6,0,-1):
#    print ( datos[i-1] )

