def age_classifier(age):
    """Classify a person age into Adult / Teen / Child
    
    Arguments:
        age {int} -- age, in integer
    
    Returns:
        string -- returns if the person is Adult / Teen / Child
    """
    if int(age) > 18:
        return "Adult"
    elif 18 >= int(age) > 10:
        return "Teen"
    elif int(age) < 10:
        return "Child"
