import random 
lines = []
with open("algos.txt", "r") as file_local:
    lines = file_local.readlines()
print("********************************" + "\n")

print("Implement " + random.choice(lines))
print("********************************")

