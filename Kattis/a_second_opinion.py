time = int(input())
minutes = (time // 60) % 60
hours = time // 3600
seconds = time % 60

print(f"{hours} : {minutes} : {seconds}")
