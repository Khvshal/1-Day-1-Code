"""Write a function, which takes a non-negative integer (seconds) 
as input and returns the time in a human-readable format (HH:MM:SS)

HH = hours, padded to 2 digits, range: 00 - 99
MM = minutes, padded to 2 digits, range: 00 - 59
SS = seconds, padded to 2 digits, range: 00 - 59
The maximum time never exceeds 359999 (99:59:59)"""

def make_readable(seconds):
    H=seconds//3600
    Hr=seconds%3600
    M=Hr//60
    S=Hr%60
    return f"{H:02d}:{M:02d}:{S:02d}"


time=make_readable(12323)
print(time)