#include <stdio.h>
extern "C" {
    #include <libavutil/avutil.h>
}


int main() {
    // Your code here
    printf("%s\n", av_version_info());
    return 0;
}