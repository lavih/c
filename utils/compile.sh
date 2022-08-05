# https://www.cyberciti.biz/faq/howto-compile-and-run-c-cplusplus-code-in-linux/

# cc
cc program-source-code.c -o executable-file-name

# gcc
gcc program-source-code.c -o executable-file-name

# make
# assuming that executable-file-name.c exists
make executable-file-name

# check c version
gcc -dM -E - < /dev/null | grep __STDC_VERSION__ | awk '{ print $2 " --> " $3 }'

# check gcc compiler version
gcc --version