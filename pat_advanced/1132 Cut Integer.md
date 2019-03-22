# 1132 Cut Integer

---

思路:

类型转换对于pow会产生的问题：</br>

当将”z”定义为int，或者是printf的类型变成”%d”的时候，产生了一个由double变成int的转化问题。在这里，转化过程非常粗暴，会直接去掉小数，从而导致误差。</br>

为了避免这个问题，又想要输出整数，可以采取的做法：</br>

1) printf("%.0lf",pow(x,y));</br>

2) printf("%d",(int)(pow(x,y)+0.5));//人为四舍五入</br>

[src](https://pintia.cn/problem-sets/994805342720868352/problems/994805347145859072) <br>
[code](code/1132_Cut_Integer.c) <br>
