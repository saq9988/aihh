import turtle

# 创建画布
canvas = turtle.Screen()

# 创建画笔
pen = turtle.Turtle()

# 绘制一个正方形
for i in range(4):
    pen.forward(100)
    pen.right(90)

# 关闭画布
turtle.done()    ai 绘画
