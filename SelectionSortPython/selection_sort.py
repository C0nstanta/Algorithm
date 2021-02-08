

#This function return index for smallest value in array
def smallest_idx(arr):
    small_val = arr[0]
    small_idx = 0
    for i in range(1, len(arr)):
        if small_val > arr[i]:
            small_idx = i
            small_val = arr[i]
    return small_idx

#Create new array and sort values
def selection_sort(arr):
    new_arr = []
    for i in range(len(arr)):
        sm_idx = smallest_idx(arr)
        new_arr.append(arr.pop(sm_idx))
    return new_arr


if __name__ == "__main__":
    arr = [1, 5, 67, 90, 43, 234, 111, 54, 23, 78, 904, 2203, 34, 453]
    print(selection_sort(arr))