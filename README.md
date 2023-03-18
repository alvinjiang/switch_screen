# switch_screen

switch_screen is a C tool to switch monitor input with DCC commands.

Requires dccutil

The typical use case is to map a keyboard shortcut to switch_screen.
It really just calls dccutil, but using switch_screen there is no need for sudo.

Makefile could use some work.

## Installation

Requires dccutil
```bash
sudo apt install dccutil
```

then

```bash
make
```

## Usage

```bash
switch_screen <input>
```

input can be 1-5.

switch_screen_# are just hardcoded versions.

## Contributing

Meets me needs so I don't bother updating it. Feel free to fork or raise a PR.

## License

[MIT](https://choosealicense.com/licenses/mit/)
