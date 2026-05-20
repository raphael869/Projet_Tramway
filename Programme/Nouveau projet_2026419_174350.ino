/*
Interface: arduino
Nom du projet: Nouveau projet
Description: 
Toolbox: vittascience
Mode: blocks

Blocks: <xml xmlns="https://developers.google.com/blockly/xml"><block type="on_start" id="G[=T#8yqB70`NFgYq}GP" deletable="false" x="0" y="0"></block><block type="forever" id="o[WN]+eeF.OUxGch67@8" deletable="false" x="337" y="13"><statement name="DO"><block type="controls_if" id="3CSB7idKi*1s[wwMI^/!"><mutation elseif="1"></mutation><value name="IF0"><block type="logic_compare" id=".fZZBlJ3pHlXY)IegcO0"><field name="OP">EQ</field><value name="A"><block type="sensors_getGroveMotion" id="-@2BwsAFd]oa9|_LVjuX"><field name="PIN">8</field></block></value><value name="B"><shadow type="math_number" id="##yu55c^gcUz*m.W1@@!"><field name="NUM">1</field></shadow><block type="logic_boolean" id="Y2^X-Yxjy0DAjWWj(0;S"><field name="BOOL">TRUE</field></block></value></block></value><statement name="DO0"><block type="actuators_continuousServo_setSpeed" id="X/j6?OPEiPz+LVX92x@2"><field name="DIR">-1</field><field name="PIN">3</field><value name="SPEED"><shadow type="math_number" id="M-U2nUd=GOl=UIMjUa/t"><field name="NUM">100</field></shadow></value><next><block type="actuators_continuousServo_setSpeed" id="xEciudxeAyTb*TTzX3c|"><field name="DIR">1</field><field name="PIN">7</field><value name="SPEED"><shadow type="math_number" id="u-C!(%)Ny1]fU9aOSM{z"><field name="NUM">100</field></shadow></value></block></next></block></statement><value name="IF1"><block type="logic_compare" id="RX^xgJ.jhU;Jux`MK@@8"><field name="OP">EQ</field><value name="A"><block type="sensors_getGroveMotion" id="nP@Q1Y:H;r5(gu:r=gP6"><field name="PIN">8</field></block></value><value name="B"><shadow type="math_number"><field name="NUM">1</field></shadow><block type="logic_boolean" id="M8v?r{@-$WWK2`?zR$-*"><field name="BOOL">FALSE</field></block></value></block></value><statement name="DO1"><block type="actuators_continuousServo_setSpeed" id="ottBzcLO!^Y?59{!6R)i"><field name="DIR">1</field><field name="PIN">3</field><value name="SPEED"><shadow type="math_number" id="{`VZ!^hxSXK4JS2#V@xe"><field name="NUM">100</field></shadow></value><next><block type="actuators_continuousServo_setSpeed" id="8xebCyCYdRq,FG,FdL+L"><field name="DIR">-1</field><field name="PIN">7</field><value name="SPEED"><shadow type="math_number" id="9JGo9sT?GVlBq{?);;xJ"><field name="NUM">100</field></shadow></value></block></next></block></statement><next><block type="controls_if" id="8H~fwe12ATl_h*lt-y~4"><mutation else="1"></mutation><value name="IF0"><block type="logic_compare" id="]Xkx8R.,ij]c?@uFc5lz"><field name="OP">EQ</field><value name="A"><block type="sensors_getGroveMotion" id="3H73+eg~rd5{YT`K/*??"><field name="PIN">8</field></block></value><value name="B"><shadow type="math_number"><field name="NUM">1</field></shadow><block type="logic_boolean" id="^j1l4zGWefWU$?)1u53p"><field name="BOOL">TRUE</field></block></value></block></value><statement name="DO0"><block type="display_setGroveSocketLed" id="+Q)xXhtiR)M/y8DY(fBj"><field name="PIN">4</field><value name="STATE"><shadow type="io_digital_signal" id="45`$:bkv7fgZ)Y|*liWG"><field name="STATE">HIGH</field></shadow></value><next><block type="display_setGroveSocketLed" id="[2xa0~#I/zRw/@F41D5u"><field name="PIN">2</field><value name="STATE"><shadow type="io_digital_signal" id="w,+J[K,=aG_m[B)`]HNr"><field name="STATE">LOW</field></shadow></value></block></next></block></statement><statement name="ELSE"><block type="display_setGroveSocketLed" id="kJ!qIc#e|#8%vASda@{c"><field name="PIN">2</field><value name="STATE"><shadow type="io_digital_signal" id="k_rlxvl^8{Y.D/u4`NWQ"><field name="STATE">HIGH</field></shadow></value><next><block type="display_setGroveSocketLed" id="mrZteCW[k|)E+|DytE,J"><field name="PIN">4</field><value name="STATE"><shadow type="io_digital_signal" id="eSQXT2QFdSE{KJwY4S1["><field name="STATE">LOW</field></shadow></value></block></next></block></statement></block></next></block></statement></block><block type="logic_compare" id="i:tyOkaFoWtkB;x}15bh" disabled="true" x="663" y="563"><field name="OP">EQ</field><value name="B"><shadow type="math_number" id="_o`16pF@pQ(AaFTtu2%i" disabled="true"><field name="NUM">1</field></shadow></value></block></xml>

Projet généré par Vittascience.
Ce fichier contient le code textuel ainsi que le code blocs. Il peut être importé de nouveau
sur l'interface http://vittascience.com/arduino

*/

#include <Servo.h>

#define PIN_MOTION_SENSOR_8  8
#define PIN_CONTINUOUS_SERVO_3  3
#define PIN_CONTINUOUS_SERVO_7  7
#define PIN_LED_MODULE_4  4
#define PIN_LED_MODULE_2  2

Servo servomotor_3;
Servo servomotor_7;

void setup() {
  pinMode(PIN_MOTION_SENSOR_8, INPUT);
  servomotor_3.attach(PIN_CONTINUOUS_SERVO_3);
  servomotor_7.attach(PIN_CONTINUOUS_SERVO_7);
  pinMode(PIN_LED_MODULE_4, OUTPUT);
  pinMode(PIN_LED_MODULE_2, OUTPUT);
}

void loop() {
  if (digitalRead(PIN_MOTION_SENSOR_8) == true) {
    servomotor_3.write(90*(1-100/100));
    servomotor_7.write(90*(1+100/100));
  } else if (digitalRead(PIN_MOTION_SENSOR_8) == false) {
    servomotor_3.write(90*(1+100/100));
    servomotor_7.write(90*(1-100/100));
  }
  if (digitalRead(PIN_MOTION_SENSOR_8) == true) {
    digitalWrite(PIN_LED_MODULE_4, HIGH);
    digitalWrite(PIN_LED_MODULE_2, LOW);
  } else {
    digitalWrite(PIN_LED_MODULE_2, HIGH);
    digitalWrite(PIN_LED_MODULE_4, LOW);
  }
}