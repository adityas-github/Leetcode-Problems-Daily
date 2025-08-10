def digitCount(n):
    count = [0] * 10
    for digit in str(n):
        count[int(digit)] += 1
    return tuple(count)

class Solution(object):
    power_signatures = set(digitCount(1 << i) for i in range(30))

    def reorderedPowerOf2(self, n):
        return digitCount(n) in self.power_signatures
