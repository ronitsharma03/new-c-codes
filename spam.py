from email import message
import pyautogui as spam
import time

limit = input("no. of messages")
msg = input("message")
i = 0
time.sleep(3)
while i<int(limit):
    spam.typewrite(msg)
    spam.press('Enter')
    i+=1
































