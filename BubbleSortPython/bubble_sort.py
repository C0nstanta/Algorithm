def bubble_sort(arr):
    for idx in range(len(arr)):
        for jdx in range(idx + 1, len(arr)):
            if arr[idx] > arr[jdx]:
                arr[idx], arr[jdx] = arr[jdx], arr[idx]
    return arr


if __name__ == "__main__":
    our_list = [1,7,0, 4, 23, 76, 89, 3, 111, 900, 34, 65, 78, 231, 98, 777, 234, 655, 45, 5, 9, 76]
    print(bubble_sort(our_list))
