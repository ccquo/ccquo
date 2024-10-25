# Diamond 1.1
Diamond is a general-purpose programming language for beginner programmers. It is designed to be like Bash and Python.

It's syntax is easier to follow than both languages, combining the best of both while still being performant enough.

It is named Diamond because of it's small sized code. Diamonds are traditionally small.

- Releases: https://mirrors.bendaws.net/diamonds
- Releases (mirror): https://github.com/diamcc/diamcc

```dm
; here are some variables
$test_var1 str ; you can leave one undefined, but must include a type (str, num, bool)

$test_var2 = "hello" ; type: str
$test_var3 = 5       ; type: num
$test_var4 = true    ; type: bool

fun println($statement) {
    print($statement .. "\n") ; connect two strings with ..
}

fun concat($str1 $str2) {
    ret $str1 .. $str2
}

println("Hello world")
println(concat("hi ", "mom"))
```