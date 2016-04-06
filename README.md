# FXJSort
<br>
顶部按钮长按后可随意拖动排序，点击按钮，按钮会进入下一行。在第二行的按钮不可以拖动，点击时会跳上第一行<br>
gif图500KB一张，加载有点慢~ 找不到好用的gif图制作工具  T T<br>
![image](https://github.com/FengXJ/FXJSort/blob/master/FXJsort1.gif) <br>
![image](https://github.com/FengXJ/FXJSort/blob/master/FXJSort2.gif) <br>
使用方法：<br>
1: 将Demo中的FXJSort文件夹拖入项目，#import "FXJSortView.h"<br>
<br>
2：初始化继承FXJSortView的UIView,并加入到你所想加入的视图中<br>
FXJSortView *sortView = [[FXJSortView alloc]initwithframe:];<br>
[self.view addSubview:sortView];<br>
<br>
3.调用firstTitleBtns:方法，参数为第一行section的NSArray;<br>
  [sortView firstTitleBtns:self.titleArr];(第一行)<br>
  [sortView secondTitleBtns:weixuanzhongArr];(第二行)<br>
<br>
OK<br>
<br>
<br>
写的时候脑子有些乱，而且本人水平不足，代码有些乱。请见谅。
如果发现不足可以联系我：578719825@qq.com ^_^
