# Lab 3 - Makefiles

Make is a program that makes other programs. This is especially useful when 
your programs become large, and recompiling after an edit requires multiple 
steps. Using a `makefile`, we can configure a program to compile simply by 
typing the `make` command into terminal. This lab will teach you how to write a 
basic makefile to be used in assignments from here on out. 

## 1 - Using `make`

When you type `make` into terminal, it will automatically look for a file named 
`makefile` for instructions. Let's start with a makefile for a single cpp file.

In the part 1 folder, you will find a file called `charizard.cpp`. You can 
compile this simply with the following instruction:

```
(1.0.1) g++ -g -Wall charizard.cpp -o charizard
```

But let's use make. 

### 1.1 Syntax and Structure

A basic makefile's structure is the following:

```
target: dependencies
  system command
```

Each of these is called a rule. If you type `make <target>`, the make tool 
searches for the appropriate target. Since we only have one file, let's ignore 
dependencies for now and skip to the system command, which is basically what 
you'd want to type into terminal when the target is run. 

In this instance, we want to use the compile line above (1.0.1).

### 1.2 Default Target

But what happens when you just run `make`? Good question! There's a very nice 
default target called 'all' made just for that. So our resulting `makefile` is 
as below:

```
all:
  <(1.0.1)>
```

Save this file as `makefile` in the part1 directory and type make. ~\**~ MAGIC ~*\*~

### 1.3 Cleaning Up

Now large projects will eventually generate a lot of binary files. We want to 
keep our workspace relatively clean by writing a rule to delete the generated 
files. This is also helpful when you're having mysterious problems as they 
sometimes go away after you delete and recompile your binaries. 

Here's our clean rule:

```
clean:
  rm charizard
```

Very simple, since we only generate one file. You can add this to the end of 
your makefile. Now clean your directory using the `make clean` rule. 

## 2 - Compiling Multi-File Programs

### 2.1 Object Files

### 2.2 Putting It All Together

## 3 - Additional Makefile Utilities

WE ALSO HAVE TO EXPLAIN HOW .O FILES WORK AND ALL THAT STUFF

when did this lab get so complicated ; ___;

Now that we've compiled a one-file program, we can move on to more complex 
programs. In part2, you should see the following classes: attackMove, Pokemon, 
Battle, as well as a main. 

In a program with hundreds and hundreds of files, you don't want a single edit 
to result in a 10 minute compile. 

### 2.1 Dependencies 

yay multiple files and stuff

### 2.2 Variables

$(BIN) and stuff

### 2.3 Project Organization

src, lib, bin directories

### 2.4 PHONY and DIRSTAMP

## Special Extra Stuff