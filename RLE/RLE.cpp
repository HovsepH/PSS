#include <iostream>
#include <cstring>

using namespace std;

void runLengthEncode(const char* input, char* output) {
    int n = strlen(input);
    int outputIndex = 0;

    for (int i = 0; i < n; i++) {
        int count = 1;
        while (i < n - 1 && input[i] == input[i + 1]) {
            count++;
            i++;
        }

        output[outputIndex++] = input[i];

        char countStr[10];
        sprintf_s(countStr, 10, "%d", count); 
        for (int j = 0; countStr[j] != '\0'; j++) {
            output[outputIndex++] = countStr[j];
        }
    }

    output[outputIndex] = '\0';
}

int main() {
    char input[] = "aaffffffeeeeeeekkkkkkkkkkkkkkkkuuuuuuuuuuuuuuu";
    char encoded[100];

    runLengthEncode(input, encoded);

    cout << "Original string: " << input << endl;
    cout << "Encoded string: " << encoded << endl;

    return 0;
}
