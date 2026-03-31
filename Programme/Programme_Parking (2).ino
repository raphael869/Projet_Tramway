/*
Interface: arduino
Nom du projet: tramway
Description: No-description
Toolbox: vittascience
Mode: blocks

Blocks: <xml xmlns="https://developers.google.com/blockly/xml"><variables><variable id="ZOyW%J5C@2f~PBp{zB_a">place</variable><variable id="]?S3!_8U;)D}E23:DWpu">etat_actuel</variable><variable id="v-W8K3|ZUL.^_}yLC|)y">etat_actuel2</variable><variable id="w}C:n8ZZNxaf@:;S#%fF">etat_actuel3</variable><variable id="Q10iESMo#du^^nnWn4z$">etat_precedent</variable><variable id="ZV!970C284]SXaH|7aEU">etat_precedent2</variable><variable id="WLg%DbdAgED(/BKjZ~]x">etat_precedent3</variable></variables><block type="on_start" id="zD8IN.FLgd6!PLeXXd`m" x="12" y="12"><statement name="DO"><block type="variables_set" id="TZeD8#XVJH=C(W-C]0.o"><field name="VAR" id="ZOyW%J5C@2f~PBp{zB_a">place</field><value name="VALUE"><shadow type="math_number" id="whlHMOj2Ae7gbta(+!6X"><field name="NUM">21</field></shadow></value></block></statement></block><block type="forever" id="7sCZsCs?oGN/dW]sHlE-" x="13" y="187"><statement name="DO"><block type="display_lcdRGBSetText" id="YH$8/Hdfk!|mXcNAD/lz"><field name="ADDR">0x3e</field><field name="LINE">0</field><field name="POS">4</field><value name="TEXT"><shadow type="text" id="%3)t]lShyK!:p;-j7OP/"><field name="TEXT">Places : </field></shadow></value><next><block type="display_lcdRGBSetText" id="^5|y~A)1]ZoJqI3FP@oc"><field name="ADDR">0x3e</field><field name="LINE">1</field><field name="POS">7</field><value name="TEXT"><block type="variables_get" id="?|j@vjK@5m-eR1;/vut~"><field name="VAR" id="ZOyW%J5C@2f~PBp{zB_a">place</field></block></value><next><block type="variables_set" id="bPRuTZ[sQ(h2FK?M^_}0"><field name="VAR" id="]?S3!_8U;)D}E23:DWpu">etat_actuel</field><value name="VALUE"><shadow type="math_number" id="yQwp*.7IQ|A,(R-){U}6"><field name="NUM">0</field></shadow><block type="io_getGroveButton" id="v8)cyS{KoSk5$R@3x,ZU"><field name="PIN">2</field></block></value><next><block type="controls_if" id="N@6~k[xtGx@}c{Rno+V#"><mutation elseif="1"></mutation><value name="IF0"><block type="logic_operation" id=";rqlhQ8fSD*Kb!F:V2A]"><field name="OP">AND</field><value name="A"><block type="logic_compare" id="nFs5o[Ic@SyM:o)iBV$?"><field name="OP">EQ</field><value name="A"><block type="variables_get" id="|RTd~JJLElHRL8#s/Ns#"><field name="VAR" id="]?S3!_8U;)D}E23:DWpu">etat_actuel</field></block></value><value name="B"><shadow type="math_number" id="RIpp9pT(L}C[q:P=:_a4"><field name="NUM">1</field></shadow></value></block></value><value name="B"><block type="logic_compare" id="Qd+./$l6-Z6Cicak]68n"><field name="OP">EQ</field><value name="A"><block type="variables_get" id="W]^2q-wY[3Q%@1(V`x%P"><field name="VAR" id="Q10iESMo#du^^nnWn4z$">etat_precedent</field></block></value><value name="B"><shadow type="math_number" id=",2aX$_)k3z%iHTO[*dHz"><field name="NUM">0</field></shadow></value></block></value></block></value><statement name="DO0"><block type="variables_increment" id="Z^9UtIRKlipf6,9vlF=I"><field name="VAR" id="ZOyW%J5C@2f~PBp{zB_a">place</field><value name="DELTA"><shadow type="math_number" id="K8]`_u6/cW[8TOZF1Era"><field name="NUM">-1</field></shadow></value><next><block type="display_lcdRGBClear" id="pZe5?xbO4g_WYID;5B;v"><field name="ADDR">0x3e</field><next><block type="io_wait" id="qK[_ya`?A5`$_hiCTOLw"><field name="UNIT">MILLI</field><value name="TIME"><shadow type="math_number" id="B:o%pPuBX0@s7rKS5)k+"><field name="NUM">200</field></shadow></value></block></next></block></next></block></statement><value name="IF1"><block type="logic_operation" id="R}iPcfvwt~L|$aQI!q]P"><field name="OP">AND</field><value name="A"><block type="logic_compare" id="$/(9D+ORre87se#G1W+u"><field name="OP">EQ</field><value name="A"><block type="variables_get" id="P/L#V]aPENwHp~br#_vW"><field name="VAR" id="]?S3!_8U;)D}E23:DWpu">etat_actuel</field></block></value><value name="B"><shadow type="math_number" id="I@A6~qHV9K?5]]t$IiXI"><field name="NUM">0</field></shadow></value></block></value><value name="B"><block type="logic_compare" id="B9U+c}mx;Bk(l%ZB?])G"><field name="OP">EQ</field><value name="A"><block type="variables_get" id="k7d7^*LG.kr|u=U2o0R1"><field name="VAR" id="Q10iESMo#du^^nnWn4z$">etat_precedent</field></block></value><value name="B"><shadow type="math_number" id="_U*L~j9|E{C,.BGB2*rS"><field name="NUM">1</field></shadow></value></block></value></block></value><statement name="DO1"><block type="variables_increment" id="R2{J}(Wwk-.#K85xVFMp"><field name="VAR" id="ZOyW%J5C@2f~PBp{zB_a">place</field><value name="DELTA"><block type="math_number" id="3;R.wO,t5dNtlz8Gk/D3"><field name="NUM">1</field></block></value><next><block type="display_lcdRGBClear" id=";.qnv?T(dLr}5LOo]B}L"><field name="ADDR">0x3e</field><next><block type="io_wait" id="UO{;Ux(jOXqS?jJ|5^q8"><field name="UNIT">MILLI</field><value name="TIME"><shadow type="math_number" id="*[x~flD2#lGo/:je,k:m"><field name="NUM">200</field></shadow></value></block></next></block></next></block></statement><next><block type="variables_set" id="([2ogRX)oul2UwwATrzl"><field name="VAR" id="Q10iESMo#du^^nnWn4z$">etat_precedent</field><value name="VALUE"><shadow type="math_number" id="wUF6TJ^x:ADz=3Q]9XRZ"><field name="NUM">0</field></shadow><block type="variables_get" id="%`b340480bq2c(ao$^$W"><field name="VAR" id="]?S3!_8U;)D}E23:DWpu">etat_actuel</field></block></value></block></next></block></next></block></next></block></next></block></statement></block><block type="forever" id="z!d1|RC+j%*@0_a.frD|" x="37" y="963"><statement name="DO"><block type="display_lcdRGBSetText" id="^QOYg~^71$K(L20;Kf`{"><field name="ADDR">0x3e</field><field name="LINE">0</field><field name="POS">4</field><value name="TEXT"><shadow type="text" id="e%,Sd!o$l^si!PB^b}lL"><field name="TEXT">Places : </field></shadow></value><next><block type="display_lcdRGBSetText" id="Jj}-m}rlgiW?_=1I*p-o"><field name="ADDR">0x3e</field><field name="LINE">1</field><field name="POS">7</field><value name="TEXT"><block type="variables_get" id="kD@UjW0rzigoAFGV$B$e"><field name="VAR" id="ZOyW%J5C@2f~PBp{zB_a">place</field></block></value><next><block type="variables_set" id="*c.b(nS%M;w_!1,yHnoF"><field name="VAR" id="v-W8K3|ZUL.^_}yLC|)y">etat_actuel2</field><value name="VALUE"><shadow type="math_number"><field name="NUM">0</field></shadow><block type="io_getGroveButton" id="$~-nwmtk1Md24UkCZeA8"><field name="PIN">4</field></block></value><next><block type="controls_if" id="?@yozPM!FYweqNPXH{Af"><mutation elseif="1"></mutation><value name="IF0"><block type="logic_operation" id="0dSEGbmE9!z7/W6e6bWV"><field name="OP">AND</field><value name="A"><block type="logic_compare" id="jvJ=Ki$*G1xj=k2Gd/^6"><field name="OP">EQ</field><value name="A"><block type="variables_get" id="F5,5Y|[g8r|QC4#P!=9e"><field name="VAR" id="v-W8K3|ZUL.^_}yLC|)y">etat_actuel2</field></block></value><value name="B"><shadow type="math_number" id="Rz+yGJFd0II-ClSXk%RO"><field name="NUM">1</field></shadow></value></block></value><value name="B"><block type="logic_compare" id="GH7j=J5;x7ZT:qZYlcIU"><field name="OP">EQ</field><value name="A"><block type="variables_get" id="E(xs02k5Nn^;h*x_#KLd"><field name="VAR" id="ZV!970C284]SXaH|7aEU">etat_precedent2</field></block></value><value name="B"><shadow type="math_number" id=";[=+-AjoM:j11U}l`aZb"><field name="NUM">0</field></shadow></value></block></value></block></value><statement name="DO0"><block type="variables_increment" id="-)4B[hTk-aFt)Eu]Y)`T"><field name="VAR" id="ZOyW%J5C@2f~PBp{zB_a">place</field><value name="DELTA"><shadow type="math_number" id="VmAh_$Rdnt`br**gkM*_"><field name="NUM">-1</field></shadow></value><next><block type="display_lcdRGBClear" id="X3y=*WMVj)qhK.*MAA}U"><field name="ADDR">0x3e</field><next><block type="io_wait" id="v@kwyFVj/@t.:i14/.`L"><field name="UNIT">MILLI</field><value name="TIME"><shadow type="math_number" id="n)}m691R:z|0tw#)NC;Y"><field name="NUM">200</field></shadow></value></block></next></block></next></block></statement><value name="IF1"><block type="logic_operation" id="p-EB6J)k./OeUBrlUKNd"><field name="OP">AND</field><value name="A"><block type="logic_compare" id="NtTWxny^CLnf*^14xPu`"><field name="OP">EQ</field><value name="A"><block type="variables_get" id="FbOo^oYtFx/#UG7YA@!F"><field name="VAR" id="v-W8K3|ZUL.^_}yLC|)y">etat_actuel2</field></block></value><value name="B"><shadow type="math_number" id="|o.6dcUs!AQU(U;_8Y0@"><field name="NUM">0</field></shadow></value></block></value><value name="B"><block type="logic_compare" id=":@X~3A4V1BU?Vq,.y5Ma"><field name="OP">EQ</field><value name="A"><block type="variables_get" id="Ca8slYiS6wR6v5+hnBa~"><field name="VAR" id="ZV!970C284]SXaH|7aEU">etat_precedent2</field></block></value><value name="B"><shadow type="math_number" id="ow=R(xeNg9!WOGc!$Z*R"><field name="NUM">1</field></shadow></value></block></value></block></value><statement name="DO1"><block type="variables_increment" id="(S8j2QFzlvUu.#rZqCYj"><field name="VAR" id="ZOyW%J5C@2f~PBp{zB_a">place</field><value name="DELTA"><block type="math_number" id="h}wqlU0yis*uCSGl$~zf"><field name="NUM">1</field></block></value><next><block type="display_lcdRGBClear" id="fxMB]=DtJtb{pyk[])Z%"><field name="ADDR">0x3e</field><next><block type="io_wait" id="OmEJS%e$j!I()=8:pYsQ"><field name="UNIT">MILLI</field><value name="TIME"><shadow type="math_number" id="/[LjLdhF8-K+,eR+(zlI"><field name="NUM">200</field></shadow></value></block></next></block></next></block></statement><next><block type="variables_set" id="Z~/hvho(J_x7r!++eqA|"><field name="VAR" id="ZV!970C284]SXaH|7aEU">etat_precedent2</field><value name="VALUE"><shadow type="math_number"><field name="NUM">0</field></shadow><block type="variables_get" id="50W.;13;1Jba=ky;QCXQ"><field name="VAR" id="v-W8K3|ZUL.^_}yLC|)y">etat_actuel2</field></block></value></block></next></block></next></block></next></block></next></block></statement></block><block type="forever" id="GCId=KD:1hEpvUs:RBd@" x="37" y="1737"><statement name="DO"><block type="display_lcdRGBSetText" id="G!=!]]j}f?tv]4:E=?pz"><field name="ADDR">0x3e</field><field name="LINE">0</field><field name="POS">4</field><value name="TEXT"><shadow type="text" id="5?R/Tat|1eBq*E[PYZ(N"><field name="TEXT">Places : </field></shadow></value><next><block type="display_lcdRGBSetText" id="th`mf,xvb/pX=f{0^(7@"><field name="ADDR">0x3e</field><field name="LINE">1</field><field name="POS">7</field><value name="TEXT"><block type="variables_get" id="/%:Q88LQu!9,iTYjXqK`"><field name="VAR" id="ZOyW%J5C@2f~PBp{zB_a">place</field></block></value><next><block type="variables_set" id="DjHJJ.4Ao$Xy{I=J2;Um"><field name="VAR" id="w}C:n8ZZNxaf@:;S#%fF">etat_actuel3</field><value name="VALUE"><shadow type="math_number"><field name="NUM">0</field></shadow><block type="io_getGroveButton" id="n`#ZW-W6j=RYS(9E+K,{"><field name="PIN">3</field></block></value><next><block type="controls_if" id="Ok!p93+fApn}N=%Q@r/U"><mutation elseif="1"></mutation><value name="IF0"><block type="logic_operation" id="rrl6}0ZzbyCS4zH^4`8k"><field name="OP">AND</field><value name="A"><block type="logic_compare" id="@f{.Fn55R3p/^J,kCkzp"><field name="OP">EQ</field><value name="A"><block type="variables_get" id="J5fd,ngWk:]UxO@/{G/A"><field name="VAR" id="w}C:n8ZZNxaf@:;S#%fF">etat_actuel3</field></block></value><value name="B"><shadow type="math_number" id=".c)~18Z0|~8LRzIQ/2vB"><field name="NUM">1</field></shadow></value></block></value><value name="B"><block type="logic_compare" id="tZIhJAYI;U^Fizl,3p$z"><field name="OP">EQ</field><value name="A"><block type="variables_get" id="P6nq|*-.LJ$_dM.ODuV9"><field name="VAR" id="WLg%DbdAgED(/BKjZ~]x">etat_precedent3</field></block></value><value name="B"><shadow type="math_number" id="BID^lUh$MQA0s]j:3-^3"><field name="NUM">0</field></shadow></value></block></value></block></value><statement name="DO0"><block type="variables_increment" id="`~MrOb9FYyil7JxpUA[5"><field name="VAR" id="ZOyW%J5C@2f~PBp{zB_a">place</field><value name="DELTA"><shadow type="math_number" id="ZnxCPCFSSt[ffkAp14{h"><field name="NUM">-1</field></shadow></value><next><block type="display_lcdRGBClear" id="G~AP}fWAn}^Ru82saJyl"><field name="ADDR">0x3e</field><next><block type="io_wait" id="8+E?Y641Fwvnvh7)K{Hj"><field name="UNIT">MILLI</field><value name="TIME"><shadow type="math_number" id="dw$oVYWlVqPf3!2OYdkm"><field name="NUM">200</field></shadow></value></block></next></block></next></block></statement><value name="IF1"><block type="logic_operation" id="2*2E)emeHj?`9Cdfg?,."><field name="OP">AND</field><value name="A"><block type="logic_compare" id="+Y7Fk%62!.uJ~?00YnKC"><field name="OP">EQ</field><value name="A"><block type="variables_get" id="F}t/rWCM=;_SU(Xv*J38"><field name="VAR" id="w}C:n8ZZNxaf@:;S#%fF">etat_actuel3</field></block></value><value name="B"><shadow type="math_number" id="8(/)NtArrTtJRsqb/[?O"><field name="NUM">0</field></shadow></value></block></value><value name="B"><block type="logic_compare" id="R6i,U9TFdOr8_2fl,xp)"><field name="OP">EQ</field><value name="A"><block type="variables_get" id="qsomEB4My1Czqi5(;*P`"><field name="VAR" id="WLg%DbdAgED(/BKjZ~]x">etat_precedent3</field></block></value><value name="B"><shadow type="math_number" id="uIF)$~XT2Mx|5u6UsFw;"><field name="NUM">1</field></shadow></value></block></value></block></value><statement name="DO1"><block type="variables_increment" id="4chlO1{j9:NhUma]v#BC"><field name="VAR" id="ZOyW%J5C@2f~PBp{zB_a">place</field><value name="DELTA"><block type="math_number" id="zGL{74#[_HVm@Xax%r3q"><field name="NUM">1</field></block></value><next><block type="display_lcdRGBClear" id=",x?5tnwl9:.ZnXsL*b6-"><field name="ADDR">0x3e</field><next><block type="io_wait" id="Khi?G3hn*_N!Tc{w!3Il"><field name="UNIT">MILLI</field><value name="TIME"><shadow type="math_number" id="!q7FA6q%cbAM2[PH]v7T"><field name="NUM">200</field></shadow></value></block></next></block></next></block></statement><next><block type="variables_set" id="H|}0Vo_rxj8[s2mUJOwD"><field name="VAR" id="WLg%DbdAgED(/BKjZ~]x">etat_precedent3</field><value name="VALUE"><shadow type="math_number"><field name="NUM">0</field></shadow><block type="variables_get" id="@erfbh`!1WHm2uc;l4lN"><field name="VAR" id="w}C:n8ZZNxaf@:;S#%fF">etat_actuel3</field></block></value></block></next></block></next></block></next></block></next></block></statement></block></xml>

Projet généré par Vittascience.
Ce fichier contient le code textuel ainsi que le code blocs. Il peut être importé de nouveau
sur l'interface http://vittascience.com/arduino

*/

#include <Wire.h>
#include <rgb_lcd.h>

#define PIN_SIMPLE_BUTTON_2  2
#define PIN_SIMPLE_BUTTON_4  4
#define PIN_SIMPLE_BUTTON_3  3

rgb_lcd lcdRgb;

int place;
boolean etat_actuel;
boolean etat_precedent;
boolean etat_actuel2;
boolean etat_precedent2;
boolean etat_actuel3;
boolean etat_precedent3;

void setup() {
  lcdRgb.begin(16, 2);
  pinMode(PIN_SIMPLE_BUTTON_2, INPUT);
  pinMode(PIN_SIMPLE_BUTTON_4, INPUT);
  pinMode(PIN_SIMPLE_BUTTON_3, INPUT);
  place = 21;
}

void loop() {
  lcdRgb.setCursor(4, 0);
  lcdRgb.print(String("Places : "));
  lcdRgb.setCursor(7, 1);
  lcdRgb.print(String(place));
  etat_actuel = digitalRead(PIN_SIMPLE_BUTTON_2);
  if (etat_actuel == 1 && etat_precedent == 0) {
    place += -1;
    lcdRgb.clear();
    delay(200);
  } else if (etat_actuel == 0 && etat_precedent == 1) {
    place += 1;
    lcdRgb.clear();
    delay(200);
  }
  etat_precedent = etat_actuel;
  lcdRgb.setCursor(4, 0);
  lcdRgb.print(String("Places : "));
  lcdRgb.setCursor(7, 1);
  lcdRgb.print(String(place));
  etat_actuel2 = digitalRead(PIN_SIMPLE_BUTTON_4);
  if (etat_actuel2 == 1 && etat_precedent2 == 0) {
    place += -1;
    lcdRgb.clear();
    delay(200);
  } else if (etat_actuel2 == 0 && etat_precedent2 == 1) {
    place += 1;
    lcdRgb.clear();
    delay(200);
  }
  etat_precedent2 = etat_actuel2;
  lcdRgb.setCursor(4, 0);
  lcdRgb.print(String("Places : "));
  lcdRgb.setCursor(7, 1);
  lcdRgb.print(String(place));
  etat_actuel3 = digitalRead(PIN_SIMPLE_BUTTON_3);
  if (etat_actuel3 == 1 && etat_precedent3 == 0) {
    place += -1;
    lcdRgb.clear();
    delay(200);
  } else if (etat_actuel3 == 0 && etat_precedent3 == 1) {
    place += 1;
    lcdRgb.clear();
    delay(200);
  }
  etat_precedent3 = etat_actuel3;
}