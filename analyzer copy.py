import stringdata
import time

def main():
    data = stringdata.get_data()
    begintime = 0.0
    endtime = 0.0
    index = -1

    # Begins testing with the word "not_here"
    print("Word: \"not_here\"")

    #Linear Search
    begintime = time.time()
    index = linear_search(data,"not_here")
    endtime = time.time()
    time_elapsed = endtime - begintime
    print(f"Linear Search: Index = {index}, Time = {time_elapsed}")

    #Binary Search
    begintime = time.time()
    index = binary_search(data, "not_here")
    endtime = time.time()
    time_elapsed = endtime - begintime
    print(f"Binary Search: Index = {index}, Time = {time_elapsed}")

    print() #Concludes testing and returns to next line

    # Begins testing with the word "mzzzz"
    print("Word: \"mzzzz\"")

    #Linear Search
    begintime = time.time()
    index = linear_search(data, "mzzzz")
    endtime = time.time()
    time_elapsed = endtime - begintime
    print(f"Linear Search: Index = {index}, Time = {time_elapsed}")

    #Binary Search
    begintime = time.time()
    index = binary_search(data, "mzzzz")
    endtime = time.time()
    time_elapsed = endtime - begintime
    print(f"Binary Search: Index = {index}, Time = {time_elapsed}")

    print() #Concludes testing and returns to next line

    # Begins testing with the word "aaaaa"
    print("Word: \"aaaaa\"")

    # Linear Search
    begintime = time.time()
    index = linear_search(data, "aaaaa")
    endtime = time.time()
    time_elapsed = endtime - begintime
    print(f"Linear Search: Index = {index}, Time = {time_elapsed}")

    # Binary Search
    begintime = time.time()
    index = binary_search(data, "aaaaa")
    endtime = time.time()
    time_elapsed = endtime - begintime
    print(f"Binary Search: Index = {index}, Time = {time_elapsed}")

    print()  # Concludes testing and returns to next line

def linear_search(container, element: str) -> int:
    for i in range(len(container)):
        if container[i] == element:
            return i
    return -1

def binary_search(container, element: str) -> int:
    low = 0
    high = len(container) - 1

    while high >= low:
        mid = (high + low) // 2
        if container[mid] < element:
            low = mid + 1
        elif container[mid] > element:
            high = mid - 1
        else:
            return mid

    return -1


if __name__ == "__main__":
    main()