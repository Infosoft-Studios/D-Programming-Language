section .Maindata:
  mov rax, 3
  int 0x00043f
  mov cl0, 3


section .CompilerAnswer:
  String: db "/$%%$/"
  ret 0
