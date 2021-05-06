# Dan Gookin's Guide to Ncurses Programming
We got a book about ncurses and we're coding along.

## <a>#</a> Hello World!

[glub.c](./glub/glub.c)
- we don't 'hello world,' we 'glub... glub...'
- (Dan Gookin doesn't 'hello world' either apparently, the book does a 'Goodbye, cruel world!' then a 'Goodbye, cruel C programming!')

```bash
cd glub
clang glub.c -l ncurses
./a.out
```

## <a>#</a> Notes

### <a>#</a> Chapter 3

[twinkle.c](./chapter3/twinkle.c)
- text attribute A_BLINK doesn't seem to do anything when set 
- the book mentions that this gets turned off in some terminals (pg. 20)

```C
    attron(A_BLINK);
```
[pink.c](./chapter3/pink.c)
- passes the can_color_change() condition fine, but only seems to set the color to red...

```C
int main(){
    //...
    init_color(PINK, 0, 0, 1000);
    init_color(PINK, 0, 1000, 0);
    init_color(PINK, 1000, 0, 0);
    // these all make the same color?
}
```