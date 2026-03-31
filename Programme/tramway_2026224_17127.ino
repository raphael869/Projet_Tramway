/*
Interface: arduino
Nom du projet: tramway
Description: No-description
Toolbox: vittascience
Mode: blocks

Blocks: <xml xmlns="https://developers.google.com/blockly/xml"><variables><variable id="ZOyW%J5C@2f~PBp{zB_a">place</variable></variables><block type="on_start" id="zD8IN.FLgd6!PLeXXd`m" x="12" y="12"><statement name="DO"><block type="variables_set" id="TZeD8#XVJH=C(W-C]0.o"><field name="VAR" id="ZOyW%J5C@2f~PBp{zB_a">place</field><value name="VALUE"><shadow type="math_number" id="whlHMOj2Ae7gbta(+!6X"><field name="NUM">15</field></shadow></value></block></statement></block><block type="forever" id="7sCZsCs?oGN/dW]sHlE-" x="10" y="237"><statement name="DO"><block type="display_lcdRGBSetText" id="^5|y~A)1]ZoJqI3FP@oc"><field name="ADDR">0x3e</field><field name="LINE">0</field><field name="POS">7</field><value name="TEXT"><block type="variables_get" id="?|j@vjK@5m-eR1;/vut~"><field name="VAR" id="ZOyW%J5C@2f~PBp{zB_a">place</field></block></value><next><block type="controls_if" id=":i}DI6}qd0S~(#X:YBq;"><mutation elseif="1"></mutation><value name="IF0"><block type="logic_compare" id="MXGpd.5]A76tNhNpw)5R"><field name="OP">EQ</field><value name="A"><block type="io_getGroveButton" id="r*Su7|RhL/hl8yZH|[Zo"><field name="PIN">2</field></block></value><value name="B"><block type="io_digital_signal" id="hZ4X/FD;!UyD*6xZ1IvZ"><field name="STATE">HIGH</field></block></value></block></value><statement name="DO0"><block type="io_wait" id="qK[_ya`?A5`$_hiCTOLw"><field name="UNIT">SEC</field><value name="TIME"><shadow type="math_number" id="B:o%pPuBX0@s7rKS5)k+"><field name="NUM">1</field></shadow></value><next><block type="variables_increment" id="Z^9UtIRKlipf6,9vlF=I"><field name="VAR" id="ZOyW%J5C@2f~PBp{zB_a">place</field><value name="DELTA"><shadow type="math_number" id="K8]`_u6/cW[8TOZF1Era"><field name="NUM">-1</field></shadow></value></block></next></block></statement><value name="IF1"><block type="logic_compare" id="]X+k$Db4V{p,w?57Rl,Y"><field name="OP">EQ</field><value name="A"><block type="io_getGroveButton" id="Ysr0f3K,zoYA{@A4Lyp*"><field name="PIN">2</field></block></value><value name="B"><block type="io_digital_signal" id="Scr+q4L*eIt~J294#T{U"><field name="STATE">LOW</field></block></value></block></value><statement name="DO1"><block type="io_wait" id="UO{;Ux(jOXqS?jJ|5^q8"><field name="UNIT">SEC</field><value name="TIME"><shadow type="math_number" id="*[x~flD2#lGo/:je,k:m"><field name="NUM">1</field></shadow></value><next><block type="variables_increment" id="R2{J}(Wwk-.#K85xVFMp"><field name="VAR" id="ZOyW%J5C@2f~PBp{zB_a">place</field><value name="DELTA"><block type="math_number" id="3;R.wO,t5dNtlz8Gk/D3"><field name="NUM">1</field></block></value></block></next></block></statement></block></next></block></statement></block></xml>

Projet généré par Vittascience.
Ce fichier contient le code textuel ainsi que le code blocs. Il peut être importé de nouveau
sur l'interface http://vittascience.com/arduino

*/

#include <Wire.h>
#include <rgb_lcd.h>

#define PIN_SIMPLE_BUTTON_2  2

rgb_lcd lcdRgb;

int place;

void setup() {
  lcdRgb.begin(16, 2);
  pinMode(PIN_SIMPLE_BUTTON_2, INPUT);
  place = 15;
}

void loop() {
  lcdRgb.setCursor(7, 0);
  lcdRgb.print(String(place));
  if (digitalRead(PIN_SIMPLE_BUTTON_2) == HIGH) {
    delay(1000*1);
    place += -1;
  } else if (digitalRead(PIN_SIMPLE_BUTTON_2) == LOW) {
    delay(1000*1);
    place += 1;
  }
}