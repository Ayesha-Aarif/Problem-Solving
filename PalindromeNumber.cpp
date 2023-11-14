bool isPalindrome(int x) {
        string s = to_string(x);
        int len = s.length();
        int i = 0;
        int j = len - 1;
        while (i< len / 2 && j>i)
        {
            if (s[i] != s[j])
                return false;
            i++;
            j--;
        }
        return true;
    }