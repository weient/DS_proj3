## 資料結構 project3
### chain reaction game

概要：這是一個連鎖反應的對打遊戲，在一個5X6的棋盤上面，每個格子都有自己的臨界質量；只要超過了那個臨界質量就會爆炸，並把上面某一顏色的棋子散到周圍的格子，把周圍的格子變成自己的領地。對打的兩位玩家要能判斷目前棋盤局勢，並想辦法讓整個棋盤上充滿自己的顏色，最終留下來的顏色那一方玩家就贏了。


* 若有藍色棋子處再放上一藍色棋子，達到期臨界質量，藍色棋子就會散開到四周格子。

<img src="https://github.com/weient/DS_proj3/blob/94d097b8aa916fe7085e099b0b1cfbe15b755704/image.png" width="50%" height="50%" />

* 一個格子只能有一種顏色，比如紅色棋子不能下在藍色棋子所佔領的格子；但若某格爆炸，其上的棋子全部散開到周圍，則周圍的格子都會變成爆炸格的顏色。

![image](https://github.com/weient/DS_proj3/blob/da5e21c95dd90a9139182d4260fbe843fefc119b/image2.png)

* 影片demo:

![video](https://user-images.githubusercontent.com/67552109/110297542-94e7c400-802e-11eb-883d-f0aac5ba8701.mp4)

