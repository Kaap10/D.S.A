class Solution {
public:
    int strStr(string haystack, string needle) {
    int hLen = haystack.size();
    int nLen = needle.size();
        if (nLen == 0) {
            return 0;
        }
         if (hLen < nLen) {
            return -1;
        }
          for (int i = 0; i <= hLen - nLen; ++i) {
            bool found = true;
              for (int j = 0; j < nLen; ++j) {
                if (haystack[i + j] != needle[j]) {
                    found = false;
                    break;
                }
            }
             if (found) {
                return i;
            }
        }
        
        return -1;
    }
};