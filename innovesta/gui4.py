import tkinter as tkinter

def message():
    output_label.config(text="To me,error analysis is the sweet sport for improvement....")

def secondMessage():
    output_label.config(text="this are the day we neer have  to forget") 

def thirdMessage():
    output_label.config(text="plan your work and work on the plan") 

root=tkinter.Tk()
root.title("message") 
root.geometry("400x400")   

kw=tkinter.Label(root,text="this is the quot's from the famous writer " ,font=("Arial",20))
output_label=tkinter.Label(root,text="" ,font=("Arial",14), fg="green")

button=tkinter.Button(root,text="one",command=message)
button1=tkinter.Button(root,text="two",command=secondMessage)
button2=tkinter.Button(root,text="three",command=thirdMessage)

button.pack(pady=10)
button1.pack(pady=10)
button2.pack(pady=10)

output_label.pack(pady=20)
root.mainloop()