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
$ gcc -c -g -o casm-c-sample.o casm-c-sample.c
$ objdump -d -S -M intel casm-c-sample.o
```

生成されたアセンブリ言語プログラムをよく見ると

```
push ebp
dec eax
mov ebp,esp
mov dword [ebp-0x4],0x0
add dword [ebp-0x4],byte +0x1
nop
pop ebp
ret
```

``オペコード オペランド1, オペランド2``

オペコードとオペランドを合わせたものを**ニーモニック**と呼ぶ
