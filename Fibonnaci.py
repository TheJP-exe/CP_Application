import numpy as np # for matrix multiplication

def BE(matrix, n):
    # Function uses an algorithm which calls itslef recursively
    """ Synopsis : If n is odd its represented as matrix^( n//2 + n//2 + 1 ) 
                   If n is even its represened as matrix^( n//2 + n//2 )
                   Then matrix^(n//2) is evaluated by recursion of these steps until n=1 """
    if n == 0:
        return np.array([[0, 0], [0, 0]]) #0th element of the series
    elif n == 1:
        return matrix 
    else:
        m2 = BE(matrix, n // 2) #Recursive calling to evaluate m2^(n//2)
        if n % 2 == 0: 
            return np.dot(m2, m2) #Squaring m2 matrix
        else:
            return np.dot(np.dot(m2, m2), matrix) #Multiplying the matrix with  

def fibonacci(n):

    F1= np.array([[1, 1], [1, 0]]) 
    #General representation of nth Fibonnaci term : (F1])^n [0][1]
    Fn = BE(F1, n)
    return Fn[0][1]



n = input("Enter a number: ")

# Checking if the input is a positive integer
try:
    n = int(n)
    if n > 0:
        print("The ",n,"th Fibonacci number is: ",fibonacci(n))
    else:
        print("Error: Input is not a positive integer.")
except ValueError:
    print("Error: Input is not a positive integer.")






