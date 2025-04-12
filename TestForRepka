import serial
import time

# Укажите правильный порт (ttyACM0 или ttyUSB0)
ser = serial.Serial('/dev/ttyACM0', 9600, timeout=1)

try:
    while True:
        ser.write(b"Hello from Pi!\n")  # Отправка данных
        time.sleep(1)
        if ser.in_waiting > 0:
            data = ser.readline().decode('utf-8').strip()
            print(f"Получено: {data}")
except KeyboardInterrupt:
    ser.close()
    print("Соединение закрыто")
