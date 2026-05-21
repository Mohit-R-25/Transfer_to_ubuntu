import math

#taking inpit for object coordinates with respect to camera:
cam = input("Enter camera coordinates: ")
camlist = cam.split()
x_cam = float(camlist[0])
y_cam = float(camlist[1])
z_cam = float(camlist[2])

#taking input for rover coordinates with respect to world:
rover = input("Enter rover coordinates: ")
roverlist = rover.split()
x = float(roverlist[0])
y = float(roverlist[1])
z = float(roverlist[2])

#taking inout for rotation of camera(in degrees):
rot = input("Enter camera rotation angles (degrees): ")
rotlist = rot.split()
x_angle = int(rotlist[0])
y_angle = int(rotlist[1])
z_angle = int(rotlist[2])

rx = math.radians(x_angle)
ry = math.radians(y_angle)
rz = math.radians(z_angle)

#rotation matrices:
Rx = [[1, 0, 0],
      [0, math.cos(rx), -math.sin(rx)],
      [0, math.sin(rx), math.cos(rx)]]

Ry = [[math.cos(ry), 0, math.sin(ry)],
      [0, 1, 0],
      [-math.sin(ry), 0, math.cos(ry)]]

Rz = [[math.cos(rz), -math.sin(rz), 0],
      [math.sin(rz), math.cos(rz), 0],
      [0, 0, 1]]

#apply Rx:
X1 = [
    Rx[0][0]*x_cam + Rx[0][1]*y_cam + Rx[0][2]*z_cam,
    Rx[1][0]*x_cam + Rx[1][1]*y_cam + Rx[1][2]*z_cam,
    Rx[2][0]*x_cam + Rx[2][1]*y_cam + Rx[2][2]*z_cam
]

#apply Ry:
Y1 = [
    Ry[0][0]*X1[0] + Ry[0][1]*X1[1] + Ry[0][2]*X1[2],
    Ry[1][0]*X1[0] + Ry[1][1]*X1[1] + Ry[1][2]*X1[2],
    Ry[2][0]*X1[0] + Ry[2][1]*X1[1] + Ry[2][2]*X1[2]
]

#apply Rz:
Z1 = [
    Rz[0][0]*Y1[0] + Rz[0][1]*Y1[1] + Rz[0][2]*Y1[2],
    Rz[1][0]*Y1[0] + Rz[1][1]*Y1[1] + Rz[1][2]*Y1[2],
    Rz[2][0]*Y1[0] + Rz[2][1]*Y1[1] + Rz[2][2]*Y1[2]
]

#translation:
x_world = Z1[0] + x
y_world = Z1[1] + y
z_world = Z1[2] + z

#output:
print("Object Coordinates (world frame):")
print(f"({x_world:.2f}, {y_world:.2f}, {z_world:.2f})")