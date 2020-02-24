int __cdecl main(int argc, const char **argv, const char **envp)
{
  char s; // [rsp+0h] [rbp-10010h]
  unsigned __int64 v5; // [rsp+10008h] [rbp-8h]

  v5 = __readfsqword(0x28u);
  memset(&s, 0, 0xFFFFuLL);
  printf("input:", 0LL);
  __isoc99_scanf("%s", &s);
  if ( (unsigned int)create_path((__int64)&s) && (unsigned int)check() )
    puts("Congratulations! Flag is your input!");
  else
    puts("Wrong!");
  return 0;
}

signed int *__fastcall create_path(__int64 a1)
{
  signed int *result; // rax
  signed int v2; // eax
  signed int i; // [rsp+1Ch] [rbp-4h]

  if ( strlen((const char *)a1) != 34 )
    return 0LL;
  if ( strncmp((const char *)a1, "Aurora{", 7uLL) )
    return 0LL;
  result = (signed int *)*(unsigned __int8 *)(a1 + 33);
  if ( (_BYTE)result != 125 )
    return 0LL;
  for ( i = 0; i <= 25; ++i )
  {
    v2 = *(char *)(i + 7LL + a1);
    if ( v2 == 100 )
    {
      result = path;
      path[i] = 1;
    }
    else if ( v2 > 100 )
    {
      if ( v2 == 115 )
      {
        result = path;
        path[i] = 3;
      }
      else
      {
        if ( v2 != 119 )
        {
LABEL_18:
          puts("Invalid input!");
          return 0LL;
        }
        result = path;
        path[i] = 2;
      }
    }
    else
    {
      if ( v2 != 97 )
        goto LABEL_18;
      result = path;
      path[i] = 0;
    }
  }
  return result;
}


signed __int64 check()
{
  signed int v1; // [rsp+0h] [rbp-Ch]
  signed int v2; // [rsp+4h] [rbp-8h]
  signed int i; // [rsp+8h] [rbp-4h]

  v1 = 4;
  v2 = 5;
  for ( i = 0; i <= 25; ++i )
  {
    v1 += y_op[path[i]];
    v2 += x_op[path[i]];
    if ( v2 > 9 || v2 < 0 || v1 > 9 || v1 < 0 )
      return 0LL;
    if ( maze[10 * v1 + v2] == 35 )
      return 0LL;
    if ( maze[10 * v1 + v2] == 43 )
      return 1LL;
  }
  return 0LL;
}

