typedef struct {
  /* 汎用レジスタ */
  uint32_t registers[REGISTERS_COUNT];

  /* EFLAGS レジスタ */
  uint32_t eflags;

  /* メモリ (バイト列) */
  uint8_t* memory;

  /* プログラムカウンタ */
  uint32_t eip;
} Emulator;
