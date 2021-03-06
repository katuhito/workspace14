"""practice 8.1 (1)"""

//int16_t型の変数xのアドレスでポインタ変数ｙを初期化するコード（2つの文）
int16_t x;
int16_t *y = &x;

//int32_t型の変数ｘのアドレスでポインタ変数ｙを初期化するコード（2つの文）
int32_t x;
int32_t *y = &x;

"""practice 8.1 (2-1)"""

//下記コードは、printfが「A」を出力できる
char ch;
char *chp = &ch;
*chp = 'A';
printf("%c\n", ch);  // => A

"""practice 8.1 (2-2)"""

//下記コードは、printfが「128」を出力する。
int32_t n;
int32_t *p = &n;
*p = 128;
printf("%i\n", n);  // => 128


"""practice 8.1 (3)"""
// int32_t x = 1234; と宣言された変数xについて
// xのアドレスで初期化する変数xpで宣言する。
int32_t x = 1234;
int32_t *xp = &x;
// 宣言したxpを使ってxに4を加算する
*xp += 4;
//宣言したxpを使ってxの値を出力する。結果は1238
printf("%i\n", *xp);
//宣言したxpを使って変数xのアドレスを出力する
printf("%p\n", xp);


"""practice 8.1 (4)"""
//次のリストのプログラム実行後の変数a, bの値を求める。
int32_t a = 38;
int32_t b = 42;
int32_t *p1 = &a;
*p1 += 2;
int32_t *p2 = &b;
*p2 -= *p1;
(*p2)++;  // => 変数aは40、変数bは3


"""practice 8.1 (5)"""
//下記のリストの出力
int32_t x = 8;
printf("%i\n", *&x); // => 8 =>変数xのアドレスに対して間接演算を適用しているので元の変数xの値8となる。




