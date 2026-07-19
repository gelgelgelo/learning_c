#!/bin/bash
set -e

gcc $1 -Wall -Wextra -o bin/${1%.c}

./bin/${1%.c}
