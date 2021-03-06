# 了解Linux的历史  
![Image of unix](https://nts.newbieol.com/static/k6/mySQL/class-001/img/Unix_timeline.png)  
  
  ## Unix  
UNIX操作系统（英语：UNIX），是美国AT&T公司贝尔实验室于1969年完成的操作系统。  
最早由肯·汤普逊（Ken Thompson），丹尼斯·里奇（Dennis Ritchie），道格拉斯·麦克罗伊（Douglas McIlroy），和乔伊·欧桑纳于1969年在AT&T贝尔实验室开发。
于1971年首次发布，最初是完全用汇编语言编写，这在当时是一种普遍的做法[来源请求]。
后来，在1973年用一个重要的开拓性的方法，Unix被丹尼斯·里奇用编程语言C（内核和I/O例外）重新编写。
高级语言编写的操作系统具有更佳的兼容性，能更容易地移植到不同的计算机平台。  
  
  ## GNU
理查德·马修·斯托曼（Richard M. Stallman），GNU计划的创立者。
1983年，理查德·马修·斯托曼创立GNU计划。这个计划有一个目标，是为了发展一个完全自由的类Unix操作系统。
自1984年发起这个计划以来[13]，在1985年，理查德·马修·斯托曼发起自由软件基金会并且在1989年撰写GPL。
1990年代早期，GNU开始大量的产生或收集各种系统所必备的组件，像是——库、编译器、调试工具、文本编辑器、网页服务器，以及一个Unix的用户界面（Unix shell）——但是像一些底层环境，如硬件驱动、守护进程运行内核（kernel）仍然不完整和陷于停顿，GNU计划中是在马赫微核（Mach microkernel）的架构之上开发系统内核，也就是所谓的GNU Hurd，但是这个基于Mach的设计异常复杂，发展进度则相对缓慢。
[14]林纳斯·托瓦兹曾说过如果GNU内核在1991年时可以用，他不会自己去写一个。  
  
  ## MINIX

MINIX是一个轻量小型并采用微内核(Micro-Kernel)架构的类Unix操作系统，是安德鲁·斯图尔特·塔能鲍姆为在计算机科学用作教学而设计的。

  ## MINIX与Linux

1991年，林纳斯·托瓦兹在赫尔辛基大学上学时，对操作系统很好奇。他对MINIX只允许在教育上使用很不满（在当时MINIX不允许被用作任何商业使用），于是他便开始写他自己的操作系统，这就是后来的Linux内核。

  ## Linux

在1991年，林纳斯·托瓦兹开始在MINIX上开发Linux内核，为MINIX写的软件也可以在Linux内核上使用。后来使用GNU软件代替MINIX的软件，因为使用从GNU系统来的源代码可以自由使用，这对Linux的发展是有益。使用GNU GPL协议的源代码可以被其他项目所使用，只要这些项目使用同样的协议发布。为了让Linux可以在商业上使用，林纳斯·托瓦兹决定更改他原来的协议（这个协议会限制商业使用），以GNU GPL协议来代替。之后许多开发者致力融合GNU元素到Linux中，做出一个有完整功能的、自由的操作系统。

Linux的第一个版本在1991年9月被大学FTP server管理员Ari Lemmke发布在Internet上，最初Torvalds称这个内核的名称为“Freax”，意思是自由（“free”）和奇异（“freak”）的结合字，并且附上“X”这个常用的字母，以配合所谓的类Unix的系统。但是FTP服务器管理员嫌原来的命名“Freax”的名称不好听，把内核的称呼改成“Linux”，当时仅有10000行程序码，仍必须运行于Minix操作系统之上，并且必须使用硬盘开机；随后在10月份第二个版本（0.02版）发布，同时这位芬兰赫尔辛基的大学生在comp.os.minix上发布一则消息

Hello everybody out there using minix- I’m doing a (free) operation system (just a hobby, won’t be big and professional like gnu) for 386(486) AT clones.

1994年3月，Linux1.0版正式发布，Marc Ewing成立Red Hat软件公司，成为最著名的Linux经销商之一。
