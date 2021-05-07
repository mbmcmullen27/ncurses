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
- "In Line 13, the _init\_color_ fucnction assigns a new color to constant PINK, which is color 1 (originally red)" (pg. 28)
- So we can't change color and we're not failing the can_change_color() check apparently. Neat...

```C
int main(){
    //...
    init_color(PINK, 0, 1000, 0);  //this for some reason replaces green with red in the terminal when we exit the window
    init_pair(1, PINK, COLOR_BLACK);
    attrset(COLOR_PAIR(1));
    printw("This is the new color %d.\n", PINK);
}
```
![color consequenses](./chapter3/pink.png)

- init_color functionality may have changed since the writing of this book. This is something we should look into ***


[notice.c](./chapter3/notice.c)
- no beep or flash on fluent terminal (this may be a fluent setting I turned off)
