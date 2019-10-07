def quick_sort(_list):
    """
    taking first element as pivot : by aman-goyal
    """

    # Do nothing if list size if less than or equal to 1
    if len(_list) <= 1:
        return _list
    pivot = _list[0]

    # Separating elements, left contains vlalue smaller than pivot
    # more - value more than and equal to pivot
    less = list(filter(lambda x: x < pivot, _list))
    more = list(filter(lambda x: x >= pivot, _list))

    return quick_sort(less) + [pivot] + quick_sort(more[1:])

