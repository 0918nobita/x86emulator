void func(void) {
  int val;
  int *ptr = &val;
  *ptr = 41;
}

/*
 *                     void func(void) {
 * push ebp
 * mov ebp, esp
 * sub esp, 16
 *                       int val;
 *                       int *ptr = &val;
 * lea eax, [esp-8]
 * mov [ebp-4], eax
 *                       *ptr = 41;
 * mov eax, [ebp-4]
 * mov dword [eax], 41
 *                     }
 * leave
 * ret
 */
