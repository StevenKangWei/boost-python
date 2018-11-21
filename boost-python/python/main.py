#!/usr/bin/python3
# coding=utf-8

import boost


def test():
    world = boost.World()
    world.set("there is hello message")
    print(world.greet())


def test_attrdict():

    for var in range(10000):
        data = boost.AttrDict()
        data["key"] = 1
        data.hello()
        del data
    #data[1] = 1
    # print(data)

    #print("key" in data)
    # print(data["key"])
        


if __name__ == '__main__':
    test_attrdict()
    print("hello")
