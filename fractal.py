import turtle as tl
tl.speed(500)

def draw_fractal(scale):
    if scale >= 5:
        tl.forward(scale)
        tl.right(30)
        draw_fractal(scale/2)
        tl.left(30)
        draw_fractal(scale/1.5)
        tl.left(30)
        draw_fractal(scale/2)
        tl.right(30)
        tl.backward(scale)
scale = 100
tl.left(90)
tl.pencolor('Blue')
tl.pensize(2)

for i in range(6):
    draw_fractal(scale)
    tl.right(60)
tl.done()

