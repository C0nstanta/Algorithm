def selection_sort(arr):
    for i in range(len(arr)):
        for j in range(i+1, len(arr)):
            min_idx = i
            min_val = arr[min_idx]
            if min_val > arr[j]:
                arr[i], arr[j] = arr[j], arr[i]
    return arr


if __name__ == "__main__":
    arr = [1, 5, 67, 90, 43, 234, 111, 54, 23, 78, 904, 2203, 34, 453]
    print(selection_sort(arr))