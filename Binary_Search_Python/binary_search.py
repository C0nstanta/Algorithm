

our_array = [1, 2, 4, 5, 6, 8, 9, 12, 23, 34, 45, 45, 56, 67, 78, 90, 123, 234, 345, 456, 567, 678, 789, 900]


def binary_search(arr, num):
        end = len(arr) - 1
        start = 0
        count = 0

        while (1):
            middle = int((start + end) / 2)
            if arr[middle] > num:
                end = middle - 1
            elif arr[middle] < num:
                start = middle + 1
            elif arr[middle] == num:
                count += 1
                print(f"Yes, your number: {num}, number of rounds: {count}")
                return 0
            if (num < arr[start] or num > arr[end]):
                count += 1
                print(f"Your number: {num} is not in array! Number of rounds: {count}")
                return 0
            count += 1


if __name__ == "__main__":
    num = input("Input number:\n")
    binary_search(our_array, int(num))