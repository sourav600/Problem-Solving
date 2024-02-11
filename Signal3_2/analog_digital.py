# import numpy as np
# import matplotlib.pyplot as plt

# # Function to generate a simple analog signal (you can replace this with your own analog signal function)
# def generate_analog_signal(time):
#     return np.sin(2 * np.pi * 1.0 * time) + 0.5 * np.random.normal(size=len(time))

# # Sampling parameters
# sampling_rate = 500  # Hz
# duration = 1.0  # seconds
# num_samples = int(sampling_rate * duration)
# time = np.linspace(0, duration, num_samples, endpoint=False)

# # Generate analog signal
# analog_signal = generate_analog_signal(time)

# # Plot the analog signal
# plt.figure(figsize=(10, 4))
# plt.plot(time, analog_signal, label='Analog Signal')
# plt.title('Analog Signal')
# plt.xlabel('Time (s)')
# plt.ylabel('Amplitude')
# plt.legend()
# plt.show()

# # Sample the analog signal
# sampled_signal = analog_signal[::int(len(time) / 10)]  # For example, sample every 10th point

# # Plot the sampled signal
# plt.figure(figsize=(10, 4))
# plt.stem(time[::int(len(time) / 10)], sampled_signal, markerfmt='ro', label='Sampled Signal')
# plt.title('Sampled Signal')
# plt.xlabel('Time (s)')
# plt.ylabel('Amplitude')
# plt.legend()
# plt.show()

import numpy as np
import matplotlib.pyplot as plt

# Function to generate a simple analog signal (you can replace this with your own analog signal function)
def generate_analog_signal(time):
    return np.sin(2 * np.pi * 1.0 * time) + 0.5 * np.random.normal(size=len(time))

# Sampling parameters
sampling_rate = 1000  # Hz
duration = 1.0  # seconds
num_samples = int(sampling_rate * duration)
time = np.linspace(0, duration, num_samples, endpoint=False)

# Generate analog signal
analog_signal = generate_analog_signal(time)

# Plot the analog signal
plt.figure(figsize=(10, 4))
plt.plot(time, analog_signal, label='Analog Signal')
plt.title('Analog Signal')
plt.xlabel('Time (s)')
plt.ylabel('Amplitude')
plt.legend()
plt.show()

# Sample the analog signal
sampled_signal = analog_signal[::int(len(time) / 10)]  # For example, sample every 10th point

# Plot the sampled signal
plt.figure(figsize=(10, 4))
plt.stem(time[::int(len(time) / 10)], sampled_signal, markerfmt='ro', label='Sampled Signal')
plt.title('Sampled Signal')
plt.xlabel('Time (s)')
plt.ylabel('Amplitude')
plt.legend()
plt.show()

# Quantize the sampled signal (convert to digital)
bit_depth = 8  # Number of bits for quantization
quantized_signal = np.round((sampled_signal + 1) * (2 ** (bit_depth - 1)) / 2)  # Assuming the signal is in the range [-1, 1]

# Plot the quantized (digital) signal
plt.figure(figsize=(10, 4))
plt.stem(time[::int(len(time) / 10)], quantized_signal, markerfmt='go', label='Quantized Signal')
plt.title('Quantized Signal (Digital)')
plt.xlabel('Time (s)')
plt.ylabel('Quantized Value')
plt.legend()
plt.show()
