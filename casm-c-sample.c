void func(void) {
  int val = 0;
  val++;
}

/*
 * $ ndisasm -b 32 casm-c-sample.bin  の実行結果
 *
 * push ebp
 * dec eax
 * mov ebp,esp
 * mov dword [ebp-0x4],0x0
 * add dword [ebp-0x4],byte +0x1
 * nop
 * pop ebp
 * ret
 */

/*
 * 本に載っているアセンブリ言語プログラム
 *
 * # 関数の入り口での典型的な処理
 * push ebp
 * mov ebp,esp
 * sub esp,byte +0x10
 *
 * # 変数 val の初期化
 * mov dword [ebp-0x4],0x0
 *
 * # 変数 val のインクリメント
 * inc dword [ebp-0x4]
 *
 * # 関数の出口での典型的な処理
 * leave
 * ret
 */

/*
 * # 純粋な機械語 (フラットバイナリ) を出力させる
 * $ gcc -Wl,--entry=func,--oformat=binary -nostdlib -fno-asynchronous-unwind-tables -o casm-c-sample.bin casm-c-sample.c
 * $ ndisasm -b 32 casm-c-sample.bin
 *
 * # オブジェクトファイルを出力させる
 * $ gcc -c -g -o casm-c-sample.o casm-c-sample.c
 * $ objdump -d -S -M intel casm-c-sample.o
 */
