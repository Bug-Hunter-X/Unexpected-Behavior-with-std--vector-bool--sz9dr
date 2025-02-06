# Unexpected Behavior with std::vector<bool>

This repository demonstrates a common, yet often subtle, issue encountered when using `std::vector<bool>` in C++.  `std::vector<bool>` is specially optimized for memory efficiency, which unfortunately, leads to some non-intuitive behavior.  Specifically, accessing elements using the subscript operator (`[]`) does not directly return a `bool` value.  This can result in unexpected behavior and potential logic errors in your code.

## The Problem

The problem lies in the fact that `std::vector<bool>` doesn't store each boolean value as a full byte. To save memory, it often uses bit-packing techniques. Therefore, accessing an element via `[]` will not provide you with the actual boolean value directly. Instead, it often returns a proxy object.