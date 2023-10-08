from tkinter import *
from PIL import Image, ImageTk
import time

root = Tk()
root.configure(bg="#ffffff")
root.geometry("800x400")
def verifyProto(objects, answer):
    if objects == answer:
        return True
    else:
        return False
def verify(obj, ans):
    time.sleep(2)
    if verify(obj, ans):
        time.sleep(2)
        print("Logging In")
    else:
        time.sleep(2)
        pass
    time.sleep(2)
logo = Image.open("icon.png")
logo = ImageTk.PhotoImage(image=logo)
photo = Label(image=logo, bg="#ffffff").place(x=10,y=10)
loginText = Label(text="Login", font=("Arial", 40)).place(x=100,y=15)
Password = Text(height=3, width=56, borderwidth=10)
textOfPassword = Password.get("1.0", END)
Password.place(x=10,y=100)
PasswordLabel = Label(text="PASSWORD").place(x=520, y=110)
VERIFY_BUTTON = Button(text="Submit", command=lambda: verify(textOfPassword, "hell")).pack(side='bottom')
root.mainloop()