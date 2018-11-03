void func(void) {
  int val;
  int *ptr = &val;
  *ptr = 41;
}

// 最終的に val に 41 が代入されるプログラム

/*
 *                     void func(void) {
 * push ebp
 * mov ebp, esp
 * sub esp, 16
 *                       int val;
 *                       int *ptr = &val;
 * lea eax, [esp-8]      (1) ebp-8 は変数 val のメモリ番地 → eax に書き込み
 * mov [ebp-4], eax      (2) 変数 ptr ([ebp-4]) に eax の値を書き込み
 *                       *ptr = 41;
 * mov eax, [ebp-4]      (3) 変数 ptr の値を eax に書き込み
 * mov dword [eax], 41   (4) eax で表される 4 バイトのメモリ領域に 41 を書き込み
 *                     }
 * leave
 * ret
 */

// lea 命令 (Load Effective Address)
// メモリ番地そのものをレジスタに書き込む
