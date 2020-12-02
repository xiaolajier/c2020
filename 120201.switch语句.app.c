#include<stdio.h>
void main()
{
  int x;
  printf("欢迎使用*QS大学排名查询*：请输入名次（1~20整数）...\n");
  scanf("%d",&x);
  switch(x)
  {
    case 1:printf("%d.Tsinghua University China(清华大学)\n",x);break;
    case 2:printf("%d.Peking University(北京大学)\n",x);break;
    case 3:printf("%d.Fudan University(复旦大学)\n",x);break;
    case 4:printf("%d.University of Science and Technology of China(中国科技大学)\n",x);break;
    case 5:printf("%d.Zhejiang University(浙江大学)\n",x);break;
    case 6:printf("%d.Shanghai Jiao Tong University(上海交通大学)\n",x);break;
    case 7:printf("%d.Nanjing University(南京大学)\n",x);break;
    case 8:printf("%d.Sun Yat Sen University (Zhongshan University)(中山大学)\n",x);break;
    case 9:printf("%d.Wuhan University(武汉大学)\n",x);break;
    case 10:printf("%d.Harbin Institute of Technology(哈尔滨工业大学)\n",x);break;
    case 11:printf("%d.Xi'An Jiaotong University(西安交通大学)\n",x);break;
    case 12:printf("%d.Tongji University(同济大学)\n",x);break;
    case 13:printf("%d.Beijing Normal University(北京师范大学)\n",x);break;
    case 14:printf("%d.Renmin University of China(中国人民大学)\n",x);break;
    case 15:printf("%d.Nankai University(南开大学)\n",x);break;
    case 16:printf("%d.Shanghai University(上海大学)\n",x);break;
    case 17:printf("%d.Huazhong University of Science & Technology(华中科技大学)\n",x);break;
    case 18:printf("%d.Jilin University(吉林大学)\n",x);break;
    case 19:printf("%d.Beijing Institute of Technology(北京理工大学)\n",x);break;
    case 20:printf("%d.Beihang University (Beijing University of Aeronautics and Astronautics)(北京航空航天大学)\n",x);break;
    default:printf("输入有误，请输入1~20（整数）...\n");break;
  }
}
