def binary(lis, val):
    s, e = 0, len(lis)-1
    mid = (s+e)//2
    while (mid>-1):
        if val> lis[mid]:
            s = mid + 1
        elif val < lis[mid]:
            e = mid - 1
        else:
            return mid
        mid = (s+e)//2

if __name__=="__main__":
    f = binary([i for i in range(1, 6)], 2)
    print(f"Found at {f}")