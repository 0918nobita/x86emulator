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
 *
 */
