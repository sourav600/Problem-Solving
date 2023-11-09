import numpy as np
import matplotlib.pyplot as plt

def getSignal(bits):
    x_cor = []
    y_cor = []
    x=0
    for bit in bits:
        if bit=='1':
            x_cor.append(x)
            y_cor.append(1)
            x_cor.append(x+1)
            y_cor.append(1)
        else:
            x_cor.append(x)
            y_cor.append(-1)
            x_cor.append(x+1)
            y_cor.append(-1)
        x_cor.append(x+1)
        y_cor.append(0)
        x_cor.append(x+2)
        y_cor.append(0)
        x = x+2
    return [x_cor,y_cor]

while True:
    inp = input('Enter your digital signal :')

    if(inp is ''):
        break
    inp = str(inp)

    sig = getSignal(inp)
    plt.xlabel("Time")
    plt.ylabel("Amplitude")
    plt.title("RZ representation of \'"+inp+"\'")

    print('X: ',sig[0])
    print('Y: ',sig[1])
    x = np.arange(0,len(sig[0])/2)
    y=[0]*(len(sig[0])/2)
    plt.scatter(x,y,marker ="." )

    # RZ representation
    plt.grid(True)
    plt.plot([0,len(sig[0])/2],[0,0],color='black')
    plt.plot([0,0],[-2,2],color='black')
    plt.plot(sig[0],sig[1],color='red')
    plt.show()