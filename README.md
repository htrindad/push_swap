*This project has been created as part of the 42 curriculum by htrindad*

# push_swap

## Description

*push_swap* is a project that takes a set of numbers that should be unsorted,
and sorts them using 2 stacks, and a couple of move sets that we will cover right now.

| move | description |
| --- | --- |
| sa, sb, ss| swap the 1st 2 values of X stack, the 1st becomes the 2nd and vice-versa. |
| pa, pb | pushes the 1st value of the stack from X to Y. `pa` pushes from B to A, and `pb` from `a` to `b`. |
| ra, rb, rr | shifts up all of the elements by 1, and the 1st element becomes the last. `ra` does it for stack `a` and `rb` for stack `b`, while `rr` does the same for both. |
| rra, rrb, rrr | Does the opposite of the previous set, shifting down all elements of the stack by 1, and the last element becomes the 1st. |

### Important notes

- This project will not print a sorted stack, but it will print the instructions to sort the stack.

- This project is aiming for 100 elements in under 700 operations, and 500 elements in less than 5500 operations.

The numbers are as follows:

| Input | Median | Max | Threshold |
| --- | --- | --- | --- |
| 100 | 609 | 653 | 700 |
| 500 | 4,744 | 5,095 | 5,500 |

## How the sort works

This push_swap uses the *mechanical turk* sort for less than 121 nodes. It passes all the elements from stack A to stack B until we have 3 elements in stack A, after that it does a small sort in stack A, which will after that set a *target node*, which is essentially the cheapest and closest bigger value from stack `b` to `a`. If it can't find a closest bigger value, it will no longer look for the such, but will instead look for the lowest value in the opposite stack (in this case, it being `a`). After that we have to calculate the cheapest node to push everytime we push, which the formula is:

`push_cost = <number of operations to bring the node to the top> + <number of operations to bring the target to the top>`

After doing a small sort on the 3 elements in stack `a` we have to push each element by the cheapest closest value from stack `b` to stack `a`. We calculate the median (which is essentially a split between the 1st and the 2nd half of the stack), if the target is above the median, then we rotate `ra`/`rr`, otherwise we reverse rotate `rra`/`rrr`, which we can then push stack `b` to `a`.

### After 120 elements

For nodes above 120 elements, we segregate groups by sorted position (the amount of groups decided by the pre-processor macro `SEG`) which will then push them to `b` from smallest to biggest. After that we redo the turk algorithm as before.

## Instructions

For this project, we need:

- A C compiler.
- `make`. For the compiler instructions.
- The libraries `pslib` and `get_next_line`. (Already bundled)

### Compile instructions

To compile the project, run the following command:

```sh
$> make
# or
$> make all
```

to compile the bonus:

```sh
$> make bonus
```

### Run instructions

For the main program:

```sh
$> ./push_swap <order of numbers separated by spaces, that are not ever repeated>
# or, if you'd like to test a bunch of possibilities.
$> ARG=$(seq <minimum> <maximum> | shuf -n <number of desired nodes> | tr '\n' ' '); ./push_swap $ARG
```

example:

```sh
$> ./push_swap 3 1 2
# If you'd like to see the number of movements
$> ./push_swap <order> | wc -l
```

beware that the number of desired nodes, should not exceed the difference of \<maximum\> and \<minimum\>

For the checker (do not forget to run `make bonus`):

```sh
$> ARG=$(seq <minimum> <maximum> | shuf -n <number of desired nodes> | tr '\n' ' '); ./push_swap $ARG | ./checker $ARG
```

### Make instructions

#### all

compiles all the mandatory files for the mandatory part to work.

#### clean

cleans all the mandatory object files.

#### bonus

calls `all` and compiles all the bonus files.

#### clean_bonus

cleans all the bonus files.

#### fclean

calls both `clean` and `clean_bonus`, and also removes the binaries.

#### re

calls both `fclean` and `all`.

## Resources

### How AI was used

AI was not used in most of the project except for the `segregate.c` file, where Claude found and fixed the bugs I knew existed but could not locate. Regarding the optimization of my sorting algorithm with 500 nodes, the function `set_rank` was fixed by Claude, while I had added the `restrict` keyword. And on the `./bonus/main.c` where I had a bug where I was calling `ps_strncmp` without asking if it was false, so the checker was always outputting `KO!` when sending the arguments through a pipe. With that information, I had fixed the problem myself, and managed to make it work. Claude had also pointed out a missing `else` statement in the function `remove_rank`, which it proceeded to write it.

### References

- [Thuggonaut's explanation video](https://www.youtube.com/watch?v=wRvipSG4Mmk)
- [Oceano's explanation video](https://www.youtube.com/watch?v=OaG81sDEpVk)
- [Ali Yigit Ogun's Mechanical Turk sorting article](https://medium.com/@ayogun/push-swap-c1f5d2d41e97)
