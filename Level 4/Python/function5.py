def double(x):
    return 2 * x\

def test_double():
    x = 4
    expected = 8
    computed = double(x)
    success = expected == computed
    msg = "computed %s , expected %s" %(computed, expected)
    assert success, msg

test_double()