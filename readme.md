1.

2.

3.interpreter.ml中描述了包含bool,int两个类型的系统的类型检查以及求值。
Type描述类型种类，Term描述项的规则，
共有Z（描述0），S t，True，False，If(t1，t2，t3)(表示if t1 then t2 else t3)，Iszero t六种。
Typecheck用来检测一项的类型，如果没有类型匹配则返回None。
S要求t是Int类型，该项归为Int；If要求t1是Bool类型且t2与t3类型相同，归为t2的类型；Iszero要求t是Int类型，归为Bool。
值（value）总共有四种情况，零Z、任意非零整数S、True和False。eval函数将项归约成值（假设该项良类型）。
本项目中interpreter.ml是加入Num类型的代码,通过bash ./tst.sh可执行。
