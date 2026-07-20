#!/bin/bash
set -e

gcc $1 -Wall -Wextra -g -o bin/${1%.c}

./bin/${1%.c}
