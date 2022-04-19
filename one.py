s = input()
ins = input()
# p = 1
# d = 0
# for i in range(len(ins)):
#     for j in range(d, len(s)):
#         if ins[i] == s[j]:
#             print(i)
#     break


# print(p)


def check(s, ins):
    p = 0
    for i in range(len(ins)):

        if ins[i] == s[p]:
            p += 1

    return p+1


print(check(s, ins))
