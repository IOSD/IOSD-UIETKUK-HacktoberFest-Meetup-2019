def is_palindrome(string):
    """Check Whether Input String is Palindrome or not
    
    Arguments:
        string {str} -- text input
    
    Returns:
        str -- If string is palindrome, return "Palindrome"
    """
    reverse = str(string)[::-1]

    return "Palindrome" if str(string)==reverse else "Not Palindrome"
