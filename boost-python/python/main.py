#!/usr/bin/python3
# coding=utf-8
import time
import boost
import math

# def test():
#     world = boost.World()
#     world.set("there is hello message")
#     print(world.greet())


# def test_attrdict():

#     for var in range(10000):
#         data = boost.AttrDict()
#         #data["key"] = 1
#         data.hello()
#         del data
#     #data[1] = 1
#     # print(data)

#     #print("key" in data)
#     # print(data["key"])

class Data(object):

    def __getattr__(self, key):
        return math.sin(1)


def test_getattr(count=10000):
    start = time.time()
    data = Data()
    for _ in range(count):
        data.data

    print(data.data)
    print("python getattr %s", time.time() - start)

    start = time.time()
    data = boost.Base()
    for _ in range(count):
        data.data

    print(data.data)
    print("boost getattr %s", time.time() - start)


def main():
    count = 100000
    test_getattr(count)


if __name__ == '__main__':
    main()
