

![](https://paper-attachments.dropbox.com/s_7E8E38580FA5BB31E29905DCC8426CF8EF87869136720214B52596613B57A626_1599637356426_CutKit16x9.png)


<iframe width="560" height="315" src="https://www.youtube.com/embed/p7qBf2WNj_U" frameborder="0" allow="accelerometer; autoplay; encrypted-media; gyroscope; picture-in-picture" allowfullscreen></iframe>


# きっとCutKitの作り方と体験方法

***企画コンセプト***

多くのご家庭にあるものと、最低限の電子部品だけで視覚・聴覚・触覚を使った遊びを**DIY！**

※今回のIVRC2020 SEED STAGEでは、***割り箸を使った爪切り機構の制作と、<br>木工での枠組み制作を行う必要はありません***。企画のコンセプト上、作り方を解説していますが、体験自体は[セットアップ](#セットアップ)以降のみで可能です。


# 目次

- [内容物の確認](#内容物の確認)

- [入力機構作成](#入力機構作成)

- [組み立て説明書](#組み立て説明書)
    -  [1. 木材切り出し](#1.木材切り出し)
    -  [2. 木材加工](#2.木材加工)
    -  [3. 組み立て](#3.組み立て)

- [セットアップ](#セットアップ) ←今回はここ以降を体験していただきます
    - [0. Androidの起動](#0.Androidの起動)
    - [1. Arduino検出(スマホ)](#1.Arduino検出(スマホ))
    - [2. 入力機構の取り付け](#2.入力機構の取り付け)
    - [3. つけ爪の取り付け](#3.つけ爪の取り付け)
    - [4. キャリブレーションとセットアップ](#4.キャリブレーションとセットアップ)

- [アプリケーション内容](#アプリケーション内容)


---


# 内容物の確認
![](https://paper-attachments.dropbox.com/s_7E8E38580FA5BB31E29905DCC8426CF8EF87869136720214B52596613B57A626_1599431602586_image.png)

![](https://paper-attachments.dropbox.com/s_7E8E38580FA5BB31E29905DCC8426CF8EF87869136720214B52596613B57A626_1599431701986_image.png)

![](https://paper-attachments.dropbox.com/s_7E8E38580FA5BB31E29905DCC8426CF8EF87869136720214B52596613B57A626_1599431768838_image.png)




# 入力機構作成
## 入力機構における必要事項
- 爪切りのような動作
- 爪切り動作の際に磁石が移動する
- 土台に固定する部分


<iframe width="560" height="315" src="https://www.youtube.com/embed/AjHOCC0CgP0" frameborder="0" allow="accelerometer; autoplay; encrypted-media; gyroscope; picture-in-picture" allowfullscreen></iframe>




![](https://paper-attachments.dropbox.com/s_7E8E38580FA5BB31E29905DCC8426CF8EF87869136720214B52596613B57A626_1599430109861_image.png)

1. 割り箸を交互にクロス
2. ４端を輪ゴムで巻いて固定
3. 鉛直方向に輪ゴムで巻いて固定
4. 水平方向に輪ゴムで２，３回巻く．これによって入力機構の握る部分を放すと自動で開く．（巻いたときと開き具合が大きくなりすぎないように調節する）
5. 先端の下部が可動域なので，そこに磁石を輪ゴムで巻いて固定する
6. 先端の上部にタクトスイッチをとりつける．固定方法は輪ゴム，またはセロハンテープなどでもよい．また，閉じたときにタクトスイッチが磁石によって押されることを確認する．

＋α

今回の見本の場合，タクトスイッチが磁石に当たるよりも，輪ゴムに当たって押される方がより爪を切った時の感覚に近いので，磁石を固定している輪ゴムにスイッチが当たるように調節する．　



# 組み立て説明書
## 1.木材切り出し

まず、木材の切り出しを行います。以下の設計図の通りに各パーツを切り出してください。百均ショップで購入できる厚さ6mのMDF材を使うことをおすすめします。


![](https://paper-attachments.dropbox.com/s_7E8E38580FA5BB31E29905DCC8426CF8EF87869136720214B52596613B57A626_1599430220370_image.png)




## 2.木材加工

次に切り出した木材を加工します。


- まず、切り出した板1を1枚用意し、以下の図の通りにケガキ（青線）をして板1に穴をあけます。板1の加工は1枚のみです。残り2枚は加工せずに使用します。ケガキした線にそってカッターで切れ目を入れてください。 一度に切ろうとせず、何度もカッターの刃を入れて徐々に切ってください。
- 次に、くり抜いた穴にスマートフォン（本書ではXperia Z4）が合うか確認し（スマホの合わす向きに注意、下図参照）、イヤホン端子および充電口の端子に合わせて加工した板1を切り離します。



![](https://paper-attachments.dropbox.com/s_7E8E38580FA5BB31E29905DCC8426CF8EF87869136720214B52596613B57A626_1599430324705_image.png)


- 次は板2に穴をあけます。ボール盤等で穴をあけることをおすすめします。以下の図の中心位置に直径30㎜の穴をあけてください。
![](https://paper-attachments.dropbox.com/s_7E8E38580FA5BB31E29905DCC8426CF8EF87869136720214B52596613B57A626_1599430382269_image.png)




- 次はサーボ固定台に穴をあけます。本書ではサーボモータにSG90を使用しています。下の図に示す位置にSG90の配線が通る穴をあけます。穴の直径は4.5mmです。最初に2㎜程度の穴を先にあけ、そのあとに4.5㎜の穴をあけるようにしてください。穴をあけた後、穴の下部を削って鍵穴のような形に整形してください。


![](https://paper-attachments.dropbox.com/s_7E8E38580FA5BB31E29905DCC8426CF8EF87869136720214B52596613B57A626_1599430387181_image.png)



## 3.組み立て

次に切り出した木材および加工した木材を組み立てて、きっとCutKit本体を製作します。木材と木材の接着は木工用ボンドを使用してください。



![](https://paper-attachments.dropbox.com/s_7E8E38580FA5BB31E29905DCC8426CF8EF87869136720214B52596613B57A626_1599430507868_image.png)

![](https://paper-attachments.dropbox.com/s_7E8E38580FA5BB31E29905DCC8426CF8EF87869136720214B52596613B57A626_1599430540765_image.png)


以上できっとCutKit本体の組み立ては終了です。スマートフォンを実際にお置いてみてずれがないかなど確認してください。



![](https://paper-attachments.dropbox.com/s_7E8E38580FA5BB31E29905DCC8426CF8EF87869136720214B52596613B57A626_1599430559317_image.png)




# セットアップ

### 0.Androidの起動


<iframe width="560" height="315" src="https://www.youtube.com/embed/9QnggStbpz8" frameborder="0" allow="accelerometer; autoplay; encrypted-media; gyroscope; picture-in-picture" allowfullscreen></iframe>

Androidスマートフォンは電源オフの状態で送付いたします．
電源ボタンを長押しすると起動します．

### 1.Arduino検出(スマホ)


<iframe width="560" height="315" src="https://www.youtube.com/embed/pPGSamyoco8" frameborder="0" allow="accelerometer; autoplay; encrypted-media; gyroscope; picture-in-picture" allowfullscreen></iframe>

![](https://paper-attachments.dropbox.com/s_7E8E38580FA5BB31E29905DCC8426CF8EF87869136720214B52596613B57A626_1599430671055_image.png)


まず，USBホストケーブルと土台に付いているArduinoのUSBケーブル(青)を接続します．続いて，USBホストケーブルをスマートフォンに接続します．その後，Androidの上部をスワイプし，さらにもう一度上部からスワイプします．すると「USB機器を検出」というものがあるので，それをタップします．これによってスマートフォンがArduinoを検出します．



### 2.入力機構の取り付け


<iframe width="560" height="315" src="https://www.youtube.com/embed/rMz4_WYRa8A" frameborder="0" allow="accelerometer; autoplay; encrypted-media; gyroscope; picture-in-picture" allowfullscreen></iframe>

入力機構の固定部分（ここでは割りばし）を土台の上面裏側に取り付けます．
土台の上面裏側にあるマジックテープによって固定します．
マジックテープでしっかり固定してください．
また，固定部分の先端をスマホ固定柱の突起部分の隙間に入れるようにするとより安定します．

![](https://paper-attachments.dropbox.com/s_7E8E38580FA5BB31E29905DCC8426CF8EF87869136720214B52596613B57A626_1599430737171_image.png)


ここで，マジックテープを貼る位置が，入力機構における回転軸に近すぎる場合，挟み込むときに邪魔となってしまうため，一定の距離を確保してください．



![](https://paper-attachments.dropbox.com/s_7E8E38580FA5BB31E29905DCC8426CF8EF87869136720214B52596613B57A626_1599430769715_image.png)





### 3.つけ爪の取り付け

<iframe width="560" height="315" src="https://www.youtube.com/embed/UtYEyIsSyJU" frameborder="0" allow="accelerometer; autoplay; encrypted-media; gyroscope; picture-in-picture" allowfullscreen></iframe>


自身の左手に，サイズが合うネイルチップを選んでください．
続いて，ネイル粘着テープをつける指の爪に貼り付け，白い紙をはがしたのち，
ネイルチップを装着してください．

なお，装着は爪全体にしっかり固定せず，爪の一部分だけ取り付ける程度で構いません．無理に装着すると爪が変形して痛みを感じます．

きっとCutKitを体験する際，つけ爪の先端にセロハンテープを粘着部分同士でつなげたもの，
または両面テープ等をつけてください．

これにより爪を引っ張るための洗濯バサミが取れずらくなります．


![](https://paper-attachments.dropbox.com/s_7E8E38580FA5BB31E29905DCC8426CF8EF87869136720214B52596613B57A626_1599430870285_image.png)

![](https://paper-attachments.dropbox.com/s_7E8E38580FA5BB31E29905DCC8426CF8EF87869136720214B52596613B57A626_1599430878221_image.png)





### 4.キャリブレーションとセットアップ

<iframe width="560" height="315" src="https://www.youtube.com/embed/pIxs010hu9E" frameborder="0" allow="accelerometer; autoplay; encrypted-media; gyroscope; picture-in-picture" allowfullscreen></iframe>


スマートフォンを土台の上面に設置します．
ここで既にイヤホンを接続し，『1. Arduino検出』をしておきます．

続いて，アプリケーションを起動します．
ホーム画面に表示している“きっとかっとKit”をタップして起動してください．


![](https://paper-attachments.dropbox.com/s_7E8E38580FA5BB31E29905DCC8426CF8EF87869136720214B52596613B57A626_1599430967553_image.png)



---

Unityを起動すると，以下のような画面が表示されます．　

![](https://paper-attachments.dropbox.com/s_7E8E38580FA5BB31E29905DCC8426CF8EF87869136720214B52596613B57A626_1599440126261_image.png)


①のボタンでUnityからUSB接続されているArduinoとの接続を行います(下図)．この時，アプリケーションが再起動する場合があります．再起動後，再びこのボタンを押して下さい．

![](https://paper-attachments.dropbox.com/s_7E8E38580FA5BB31E29905DCC8426CF8EF87869136720214B52596613B57A626_1599431042111_image.png)


また，デバッグ用の画面（下図）が表示するときがあるので，
右上の“Close”ボタンを押して消してください．

![](https://paper-attachments.dropbox.com/s_7E8E38580FA5BB31E29905DCC8426CF8EF87869136720214B52596613B57A626_1599431049415_image.png)


---

入力機構の開閉を検出するために，②のキャリブレーションボタンを押します．
⑤付近に表示される文章に従って，入力機構を閉じる，および開く操作を行ってください．
表示される文章の内容は以下の通りです．


![](https://paper-attachments.dropbox.com/s_7E8E38580FA5BB31E29905DCC8426CF8EF87869136720214B52596613B57A626_1599431185883_image.png)



![](https://paper-attachments.dropbox.com/s_7E8E38580FA5BB31E29905DCC8426CF8EF87869136720214B52596613B57A626_1599431209393_image.png)


キャリブレーション終了後，つけ爪を装着した指を土台の左側の穴に入れ，中のキューブに添えます．

そして，モーターと紐でつながれた洗濯ばさみをつけ爪の先端に挟みます．<br>(つけ爪の先端にセロハンテープや両面テープをおつけ下さい)．


モーターと爪が紐で繋がったら，紐が少したるむ程度の位置に左手の指を置いてください．

以上で，きっとCutKitのセットアップが完了です．
イヤホンをお付けいただいた状態で体験をお楽しみください．

---
# アプリケーション内容

キャリブレーション後，入力機構を爪切りと見立てて操作します．


今回は切られる側の手および爪切りを操作する手の移動はありません．

爪切り部分を握ると，サーボモーターによって指が引っ張られます．
これによって爪切りによって爪先が圧迫されている感覚を提示しています．


また，スマートフォンに表示されている爪切りも動きます．

爪切りをさらに握ると，爪が切りきったこととなり，サーボモーターに
よる牽引はなくなります（爪が切りきったということは爪を圧迫すること
はないため）．


また，入力機構見本では，先端部分についているタクトスイッチが押さ
れ，爪を切りきった時の切る側の手への感覚を提示します．


この時，映像では切った爪が任意の方向に飛び散ります．さらに，爪を
切った時の音をイヤホンを通して提示します．

最後に入力機構を少し開いて一連の動作が終了します．

以上が無限に爪切り
をするかのような体験を提供します．
