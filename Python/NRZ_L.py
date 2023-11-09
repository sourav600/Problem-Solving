import numpy as np
import matplotlib.pyplot as plt

def getSignal(bits):
    x_co = []
    y_co = []
    x_co.append(0)
    y_co.append(1)
    x = 1
    for bit in bits:
        if bit is '1':
            if y_co[-1] is 1:
                x_co.append(x-1)
                y_co.append(-1)
                y_co.append(-1)
            else:
                y_co.append(-1)
        else:
            if y_co[-1] is -1:
                x_co.append(x-1)
                y_co.append(1)
                y_co.append(1)
            else:
                y_co.append(1)
        x_co.append(x)
        x = x+1
    print('x is :',x_co)
    print('Y is :',y_co)
    return [x_co,y_co]

#Wev Ploting
#plt.plot([0,1,1,2,2,3,3,4,5,5,6,7,8,8,9,9,10,10],[1,1,0,0,1,1,0,0,0,1,1,1,1,0,0,1,1,0],color='red')
while True:
    inp = input('Enter your digital signal :')

    if(inp is ''):
        break
    inp = str(inp)
    x = np.arange(0,len(inp)+1,1)
    y=[0]*(len(inp)+1)
    print('y is :',y)

    sig = getSignal(inp)
    # For NRZ-L representation
    plt.xlabel("Time")
    plt.ylabel("Amplitude")
    plt.title("NRZ-L representation of \'"+inp+"\'")

    plt.scatter(x,y)
    plt.plot([0,len(inp)+2],[0,0],color='black')
    plt.plot([0,0],[-1.5,1.5],color='black')

    plt.grid(True)
    plt.plot(sig[0],sig[1])
    plt.show()
