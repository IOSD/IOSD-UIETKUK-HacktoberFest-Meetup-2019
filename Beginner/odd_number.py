def odd_numbers(num):
    """Checks whether a number is odd number or not.
    
    Arguments:
        num {int} -- input an integer, string will return an error
    
    Returns:
        string -- the checker will validate if the input number is "Odd Number" 
        or "Even Number"
    """
    return "Odd Number" if int(num)%2>0 else "Even Number"
