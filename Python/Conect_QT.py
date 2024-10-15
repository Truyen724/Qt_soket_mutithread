import socket
import threading
import struct

# Khởi tạo socket cho client
client_socket = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
global_variable = "0"
# Địa chỉ và cổng của server
server_address = ('127.0.0.1', 8080)

# Kết nối đến server
try:
    client_socket.connect(server_address)
    print("Đã kết nối đến server.")
except socket.error as e:
    print(f"Không thể kết nối đến server: {e}")
    exit()

def send_data(data):
    # Chuyển đổi dữ liệu thành bytes
    message_bytes = data.encode('utf-8')
    # Định dạng kích thước (4 byte cho độ dài)
    header = struct.pack('>I', len(message_bytes))
    # Gửi cả header và message
    client_socket.sendall(header + message_bytes)
def device():
    global global_variable
    while True:
        message = input("Nhập vào message: ")
        global_variable = message
        send_data(message)

device()