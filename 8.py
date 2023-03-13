def isPrime(n):
    if n == 1: 
        return False
    
    for k in range(2, n):
        if n % k == 0:
            return False

    return True

print("@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n\n")
print("\t\t\t\t\t\tPRIME NUMBERS\n\n")
print("@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n\n")

while True:
    data = input("\n\nEnter the limit (or enter 'q' to exit): ")
    data = data.strip().lower()

    if data == 'q':
        print("\nChao :^)\n")
        exit(0) 
    if not data.isdigit():
        print("Not valid input. Try again.")
    else:
        break

limit = int(data)

print("")

for j in range(1, limit + 1):
    if isPrime(j):
        print("{:<9d}".format(j), end = " ")

print("\n\n")
