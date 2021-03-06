## アドレスとポインター

### 変数とポインター変数

ポインター変数を宣言するときに使用する「*」、変数のアドレスを取得するアドレス演算子（&）、ポインター変数が示すアドレスから値を取り出す間接演算子（＊）について解説する。

アドレス演算子（単項演算子＆）と間接演算子（単項演算子*）は、２項演算子の&&（論理積）や、２項演算子の&（ビット積）、２項演算子の*（乗算）、とは全く異なる演算（操作）を行う演算子である。

### ポインター変数

C言語では、文字列を示すchar*（char型へのポインター）変数と配列変数を除けば、変数は値そのものを格納していた。（図１参照）

＃図１

変数の宣言は、次のように型名と変数名を指定する。オプションで初期化子を指定することもできる。

＃図２

変数と異なり、ポインター変数では、型名で指定した値を格納したメモリの先頭アドレスを格納する。

＃図３

ポインター変数という名前が示すように、ポインター変数に格納されるのはプログラムが直接扱う数値や文字などの値そのものではなく、型で指定した値が格納されたメモリ上のアドレスである。

ポインター変数の宣言では、型名、ポインター変数を表す「*」と変数名、オプションで初期化子を指定する（図４参照）

＃図４

ここで重要なのは、**ポインター変数が格納するのは値そのものではなく、その値を格納したメモリ上のアドレスである**という点である。

- 書式：ポインター変数宣言
```
型名*変数名 [= 式];
```

ポインター変数のために確保されるメモリのサイズは、CPUアーキテクチャに依存する。例えば、64ビットCPU用のCコンパイラであれば、CPUはメモリアクセスに64ビットのアドレスを使うので、8バイトを確保する。

ただし、64ビットCPUを32ビットモードで使用する（32ビットOSを使用する）場合は、メモリアクセスに使用するアドレスは32ビットになる。

このようにポインタ変数のサイズについては、プログラマが任意のサイズを指定できる値用の型（例えば16ビット整数用にint16_tを指定するなど）とは異なる。そのため、printf用の書式指定子も「%p」という専用のものを使用する。

- ポインター変数の値（ポイントしているメモリのアドレス）を出力する
```
char *hello = "hello";
    printf("address of hello = %p\n", hello); 
    // =>リテラルhelloの先頭アドレスを出力
```

