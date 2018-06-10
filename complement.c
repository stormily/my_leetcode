int findComplement(int num) {
    int comple = 0, i, j = 0, temp;
    char result[32] = {0}; // int -- 4 Byte, 4 * 8 = 32 bits
    temp = num;
    
    if (num == 1)
        return 0;
    else {
        while (temp) {
            i = temp % 2;
            result[j++] = i;
            temp = temp / 2;
        }
        
        while (j > 0) {
            i = result[--j];
            if (i == 0)
                i = 1;
            else
                i = 0;
            comple = i * pow(2, j) + comple;
        }
        
        return comple;
    }
}
