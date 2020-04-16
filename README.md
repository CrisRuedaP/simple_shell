# Simple Shell

Simple shell is a command-line interpreter written in C language and runs in Ubuntu 14.04.3 LTS. It was compiled with GCC.

## Installation

To install it, clone this repository from this URL: https://github.com/CrisRuedaP/simple_shell  and compile using this:





```bash
 gcc -Wall -Werror -Wextra -pedantic *.c -o hsh 
```

## Usage
non-interactive mode

```python
echo "/bin/ls" | [full_path]/hsh
```

interactive mode

```python
./hsh
```

## Example

#### input:


```python
echo "/bin/ls" | [full_path]/hsh

```

#### output:

```python
readme.md main.c header.c 

```

## Library Functions and Syscalls Used

 
getline()

strtok()

access()

fork()

wait()

write()

malloc()

free()

perror()

execve()



## Authors
#### Sandra Macías

https://github.com/s-macias

#### Cristina Rueda

https://github.com/CrisRuedaP
