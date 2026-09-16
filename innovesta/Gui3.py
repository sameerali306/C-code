import tkinter as thinter

# We use .config(text="...") to change the label's text dynamically
def on_button_click():
    output_label.config(text="Button 1 is clicked!")

def another_function():
    output_label.config(text="Another function is called!")  

def last_function():
    output_label.config(text="Last function is called!")  

root = thinter.Tk()
root.title("this is the new window which we create by python")
root.geometry("600x600")   

kw = thinter.Label(root, text="this is my new window in python...", font=("Arial",16))

# 1. Create a new label specifically for displaying the button outputs
# We start it with text="" so it is empty until a button is clicked
output_label = thinter.Label(root, text="", font=("Arial", 14), fg="blue")

button = thinter.Button(root, text="first button", command=on_button_click)
button2 = thinter.Button(root, text="second button", command=another_function)
button3 = thinter.Button(root, text="third button", command=last_function)

# Pack everything onto the screen
kw.pack(pady=10)
button.pack(pady=10)
button2.pack(pady=10)
button3.pack(pady=10)

# 2. Pack the output label so it shows up below the buttons
output_label.pack(pady=20)

root.mainloop()