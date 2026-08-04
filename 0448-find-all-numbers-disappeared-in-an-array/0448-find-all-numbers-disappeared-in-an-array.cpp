#pragma GCC optimize("Ofast")

#include <bits/stdc++.h>
using namespace std;

static constexpr size_t max_align = alignof(max_align_t);
alignas(max_align) static unsigned char BUFFER[64 * 1024 * 1024];
static size_t pos = 0;

void *operator new(const size_t size) {
    const size_t padding = (max_align - (pos % max_align)) % max_align;
    pos += padding + size;
    return static_cast<void *>(&BUFFER[pos - size]);
}

void *operator new[](const size_t size) { return operator new(size); }
void operator delete(void *) noexcept {}
void operator delete[](void *) noexcept {}
void operator delete(void *, size_t) noexcept {}
void operator delete[](void *, size_t) noexcept {}


class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int> a;
        int n = nums.size();
        for (int i = 0 ; i < n ; i++){
            int ce = abs(nums[i]) - 1;
            if(nums[ce] > 0)
            nums[ce] = -nums[ce];
        }

        for (int i = 0 ; i < n ; i++){
            if (nums[i] > 0)a.push_back(i + 1);
        }
        return a;
    }
};