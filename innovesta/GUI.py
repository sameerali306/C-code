import tkinter as tkinter

def on_button_click():
    print("Button clicked!")

def anather_function():
    print("Another function called!")

root = tkinter.Tk()
root.title("My GUI Application")
root.geometry("400x300")

kw = tkinter.Label(root, text="Welcome to My GUI Application", font=("Arial", 16))
button = tkinter.Button(root, text="Click Me", command=on_button_click)

# Packing the label first usually makes it appear at the top
kw.pack(pady=10)
button.pack(pady=10)

# This line is essential to keep the window open and listening for events
root.mainloop()
