import tkinter as thinter

def on_button_click():
    print("button is clicked")
def another_function():
    print("another function is called")  
def last_function():
    print("last function is called")  
root=thinter.Tk()
root.title("this is the new window which we create by python")
root.geometry("600x600")   

kw=thinter.Label(root, text="this is my new window in python...",font=("Arial",16))

button=thinter.Button(root,text="first button", command=on_button_click)
button2=thinter.Button(root,text="second button", command=another_function)
button3=thinter.Button(root,text="third button", command=last_function)
kw.pack(pady=10)
button.pack(pady=10)
button2.pack(pady=10)
button3.pack(pady=10)

root.mainloop()