# Account manager for banking system for banking system : A banking sysytem to create a new account . create a function open account
#(name : str , initial_deposit :float )-> str that takes a costumer  name and initial deposit as inputs , generates a unique account nuumber.

accounts = {}
account_counter= 10000   # starting point for new acount numbers
 
def generate_account_number():
    global account_counter
    account_counter += 1
    return str(account_counter)

def open_account(name : str , initial_deposit = float)->str:
    account_number = generate_account_number()
    accounts[account_number] = {"name":name , "Balance":initial_deposit}
    return account_number # returning the new account number 

def get_info(account_number: int):
    
    if account_number in accounts :
        account = accounts[account_number]
        return f" Account Number : {account_number},Name: {account['name']}, Balance : ${account['Balance']:2f}"
    else:   
        return "Account not found ..."         
 
# example : 
account_number = open_account("Harshit Saini", 1000000)
print(f"New account created for you ... Account Number : {account_number}")   
print(get_info(account_number))