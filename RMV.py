from tkinter import *
_Warning = Tk()
_Warning.geometry("1000x500")
_IMG = PhotoImage(file="WARN_P1.PNG")
LABEL = Label(image=_IMG).place(x=10, y=10)
LABEL2 = Label(text="WARNING:", font=("Terminal", 40)).place(x=150, y=10)
LABEL3 = Label(text="YOU ARE DELETING THIS OPERATING SYSTEM, THIS IS", font=("Terminal", 20)).place(x=150, y=60)
LABEL4 = Label(text="DISUNDOEABLE.", font=("Terminal", 20)).place(x=150, y=90)
BUTTON = Button(text="Countinue", command=_Warning.destroy, font=("Terminal")).place(x=860, y=460)
_Warning.mainloop()