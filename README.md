# x86 エミュレータ

「自作エミュレータで学ぶ x86 アーキテクチャ」を読みながら書いたソースファイル等

## 開発環境

- ThinkPad X230 (Arch linux) 

## やったこと

```bash
$ sudo pacman -Syu
$ sudo pacman -S nasm
$ gcc -Wl,--entry=func,--oformat=binary -nostdlib -fno-asynchronous-unwind-tables -o casm-c-sample.bin casm-c-sample.c
$ ndisasm -b 32 casm-c-sample.bin
```
