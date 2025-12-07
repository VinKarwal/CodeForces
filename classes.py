class common: 
    def __init__(self, name, mobile):
        self.name = name
        self.mobile = mobile
        
class emp(common):
    def __init__(self, name, emp_id, mob_no, dept):
        super().__init__(name, mob_no)
        self.emp_id = emp_id
        self.dept = dept
        
    def __str__(self):
        return f'Emp Info: {self.emp_id}, {self.name}, {self.mobile}, {self.dept}'

class vendor(common):
    def __init__(self, vendor_id, name, mob_no, itemList):
        super().__init__(name, mob_no)
        self.vendor_id = vendor_id
        self.itemList = itemList

    def __str__(self):
        return f'Vendor Info: {self.vendor_id}, {self.name}, {self.mobile}, {self.itemList}'


class customer(common):
    def __init__(self, customer_id, name, mob_no, credit_amt):
        super().__init__(name, mob_no)
        self.customer_id = customer_id
        self.credit_amt = credit_amt

    def __str__(self):
        f'Customer Info: {self.customer_id}, {self.name}, {self.mobile}, {self.credit_amt}'


emp1 = emp("Alice", "E123", "1212334", "HR")
print(emp.__str__(emp1))

vendor1 = vendor("V988", "Shampi Traders", "11223344", ["Item1", "Item2"])
print(vendor.__str__(vendor1))

customer1 = customer("C112", "Charlie", "44556677", 1500.00)
print(customer.__str__(customer1))

