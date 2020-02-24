_BYTE *__fastcall sub_88A(const char *a1)
{
  __int64 v1; // rax
  __int64 v2; // rax
  int v4; // [rsp+18h] [rbp-28h]
  int v5; // [rsp+1Ch] [rbp-24h]
  signed __int64 v6; // [rsp+20h] [rbp-20h]
  signed __int64 v7; // [rsp+30h] [rbp-10h]
  _BYTE *v8; // [rsp+38h] [rbp-8h]

  v7 = strlen(a1);
  if ( v7 == 3 * (((unsigned __int128)(6148914691236517206LL * (signed __int128)v7) >> 64) - (v7 >> 63)) )
    v1 = ((unsigned __int128)(6148914691236517206LL * (signed __int128)v7) >> 64) - (v7 >> 63);
  else
    v1 = ((unsigned __int128)(6148914691236517206LL * (signed __int128)v7) >> 64) - (v7 >> 63) + 1;
  v6 = 4 * v1;
  v8 = malloc(4 * v1 + 1);
  v8[v6] = 0;
  v4 = 0;
  v5 = 0;
  while ( v4 < v6 - 2 )
  {
    v8[v4] = aAbcdefghijklmn[(const unsigned __int8)a1[v5] >> 2];
    v8[v4 + 1] = aAbcdefghijklmn[16 * a1[v5] & 0x30 | ((const unsigned __int8)a1[v5 + 1] >> 4)];
    v8[v4 + 2] = aAbcdefghijklmn[4 * a1[v5 + 1] & 0x3C | ((const unsigned __int8)a1[v5 + 2] >> 6)];
    v8[v4 + 3] = aAbcdefghijklmn[a1[v5 + 2] & 0x3F];
    v5 += 3;
    v4 += 4;
  }
  v2 = v7 - 3 * (((unsigned __int128)(6148914691236517206LL * (signed __int128)v7) >> 64) - (v7 >> 63));
  if ( v2 == 1 )
  {
    v8[v4 - 2] = 61;
    v8[v4 - 1] = 61;
  }
  else if ( v2 == 2 )
  {
    v8[v4 - 1] = 61;
  }
  return v8;
}