int __cdecl main(int argc, const char **argv, const char **envp)
{
  char v4; // [rsp+0h] [rbp-D8h]
  char v5; // [rsp+1h] [rbp-D7h]
  char v6; // [rsp+2h] [rbp-D6h]
  char v7; // [rsp+3h] [rbp-D5h]
  char v8; // [rsp+4h] [rbp-D4h]
  char v9; // [rsp+5h] [rbp-D3h]
  char v10; // [rsp+6h] [rbp-D2h]
  char v11; // [rsp+7h] [rbp-D1h]
  char v12; // [rsp+8h] [rbp-D0h]
  char v13; // [rsp+9h] [rbp-CFh]
  char v14; // [rsp+Ah] [rbp-CEh]
  char v15; // [rsp+Bh] [rbp-CDh]
  char v16; // [rsp+Ch] [rbp-CCh]
  char v17; // [rsp+Dh] [rbp-CBh]
  char v18; // [rsp+Eh] [rbp-CAh]
  char v19; // [rsp+Fh] [rbp-C9h]
  char v20; // [rsp+10h] [rbp-C8h]
  char v21; // [rsp+11h] [rbp-C7h]
  char v22; // [rsp+12h] [rbp-C6h]
  char v23; // [rsp+13h] [rbp-C5h]
  char v24; // [rsp+14h] [rbp-C4h]
  char v25; // [rsp+15h] [rbp-C3h]
  char v26; // [rsp+16h] [rbp-C2h]
  char v27; // [rsp+17h] [rbp-C1h]
  char v28; // [rsp+18h] [rbp-C0h]
  char v29; // [rsp+19h] [rbp-BFh]
  char v30; // [rsp+1Ah] [rbp-BEh]
  char v31; // [rsp+1Bh] [rbp-BDh]
  char v32; // [rsp+1Ch] [rbp-BCh]
  char v33; // [rsp+1Dh] [rbp-BBh]
  char v34; // [rsp+1Eh] [rbp-BAh]
  char v35; // [rsp+1Fh] [rbp-B9h]
  char v36; // [rsp+20h] [rbp-B8h]
  char v37; // [rsp+21h] [rbp-B7h]
  char v38; // [rsp+22h] [rbp-B6h]
  char v39; // [rsp+23h] [rbp-B5h]
  char v40; // [rsp+24h] [rbp-B4h]
  char v41; // [rsp+25h] [rbp-B3h]
  char v42; // [rsp+26h] [rbp-B2h]
  char v43; // [rsp+27h] [rbp-B1h]
  char v44; // [rsp+28h] [rbp-B0h]
  unsigned __int64 v45; // [rsp+C8h] [rbp-10h]

  v45 = __readfsqword(0x28u);
  puts("   _____                                    ");
  puts("  /  _  \\  __ _________  ________________   ");
  puts(" /  /_\\  \\|  |  \\_  __ \\/  _ \\_  __ \\__  \\  ");
  puts("/    |    \\  |  /|  | \\(  <_> )  | \\// __ \\_");
  puts("\\____|__  /____/ |__|   \\____/|__|  (____  /");
  puts("        \\/                               \\/ ");
  __printf_chk(1LL, "Please input your flag:");
  __isoc99_scanf("%s", &v4);
  if ( v9 == byte_201018
    && v31 == byte_201017
    && v33 == byte_20101B
    && v5 == byte_201022
    && v4 == byte_201016
    && v40 == byte_201013
    && v13 == byte_20101D
    && v35 == byte_201021
    && v37 == byte_201023
    && v7 == byte_201020
    && v14 == byte_201019
    && v36 == byte_201012
    && v43 == byte_201014
    && v15 == byte_201010
    && v36 == v38
    && v22 == byte_201015
    && v11 == byte_201024
    && v31 == v21
    && v44 == byte_201026
    && v23 == byte_20101C
    && v11 == v26
    && v31 == v18
    && v36 == v12
    && v15 == v27
    && v31 == v34
    && v31 == v25
    && v42 == byte_20101F
    && v15 == v20
    && v35 == v28
    && v41 == byte_201011
    && v10 == byte_201025
    && v22 == v19
    && v15 == v32
    && v30 == byte_20101A
    && v35 == v8
    && v35 == v39
    && v35 == v6
    && v16 == byte_20101E
    && v36 == v24
    && v13 == v29
    && v36 == v17 )
  {
    puts("Well down.");
  }
  return 0;
}