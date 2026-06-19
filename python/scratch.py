class BankAccount:
    def __init__(self, owner):
        self.owner = owner
        self.__balance = 0


    def deposit(self, amount):
        self.__balance += amount


    def withdraw(self, amount):
        if amount <= self.__balance:
            self.__balance -= amount
        else:
            print("Not enough balance")


    def get_balance(self):
        return self.__balance




class SavingsAccount(BankAccount):
    def __init__(self, owner):
        super().__init__(owner)
        self._interest_rate = 0.01


    def add_interest(self):
        self.deposit(self.get_balance() * self._interest_rate)




class CheckingAccount(BankAccount):
    def __init__(self, owner):
        super().__init__(owner)
        self.transaction_fee = 0.005


    def checkout(self, amount):
        fee = amount * self.transaction_fee
        self.withdraw(amount + fee)




accounts = []


def find_account(name):
    for acc in accounts:
        if acc.owner == name:
            return acc
    return None




while True:
    print("\n1. Create Savings")
    print("2. Create Checking")
    print("3. Deposit")
    print("4. Withdraw")
    print("5. Interest (Savings only)")
    print("6. Checkout (Checking only)")
    print("7. Show Balances")
    print("8. Exit")


    choice = input("Choose: ")


    if choice == "1":
        name = input("Owner: ")
        accounts.append(SavingsAccount(name))


    elif choice == "2":
        name = input("Owner: ")
        accounts.append(CheckingAccount(name))


    elif choice == "3":
        name = input("Owner: ")
        acc = find_account(name)
        if acc:
            amount = float(input("Amount: "))
            acc.deposit(amount)


    elif choice == "4":
        name = input("Owner: ")
        acc = find_account(name)
        if acc:
            amount = float(input("Amount: "))
            acc.withdraw(amount)


    elif choice == "5":
        name = input("Owner: ")
        acc = find_account(name)
        if acc:
            acc.add_interest()


    elif choice == "6":
        name = input("Owner: ")
        acc = find_account(name)
        if acc:
            amount = float(input("Amount: "))
            acc.checkout(amount)


    elif choice == "7":
        for acc in accounts:
            print(acc.owner, acc.get_balance())


    elif choice == "8":
        break
