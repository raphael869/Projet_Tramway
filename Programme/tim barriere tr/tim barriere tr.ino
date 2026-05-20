/*
Interface: arduino
Nom du projet: Nouveau projet
Description: 
Toolbox: vittascience
Mode: blocks

Blocks: <xml xmlns="https://developers.google.com/blockly/xml"><block type="on_start" id="G[=T#8yqB70`NFgYq}GP" deletable="false" x="0" y="0"></block><block type="forever" id="o[WN]+eeF.OUxGch67@8" deletable="false" x="337" y="13"><statement name="DO"><block type="controls_if" id="3CSB7idKi*1s[wwMI^/!"><mutation elseif="1"></mutation><value name="IF0"><block type="logic_compare" id=".fZZBlJ3pHlXY)IegcO0"><field name="OP">EQ</field><value name="A"><block type="sensors_getGroveMotion" id="-@2BwsAFd]oa9|_LVjuX"><field name="PIN">8</field></block></value><value name="B"><shadow type="math_number" id="##yu55c^gcUz*m.W1@@!"><field name="NUM">1</field></shadow><block type="logic_boolean" id="Y2^X-Yxjy0DAjWWj(0;S"><field name="BOOL">TRUE</field></block></value></block></value><statement name="DO0"><block type="actuators_continuousServo_setSpeed" id="X/j6?OPEiPz+LVX92x@2"><field name="DIR">1</field><field name="PIN">3</field><value name="SPEED"><shadow type="math_number" id="M-U2nUd=GOl=UIMjUa/t"><field name="NUM">100</field></shadow></value></block></statement><value name="IF1"><block type="logic_compare" id="RX^xgJ.jhU;Jux`MK@@8"><field name="OP">EQ</field><value name="A"><block type="sensors_getGroveMotion" id="nP@Q1Y:H;r5(gu:r=gP6"><field name="PIN">8</field></block></value><value name="B"><shadow type="math_number"><field name="NUM">1</field></shadow><block type="logic_boolean" id="M8v?r{@-$WWK2`?zR$-*"><field name="BOOL">FALSE</field></block></value></block></value><statement name="DO1"><block type="actuators_continuousServo_setSpeed" id="ottBzcLO!^Y?59{!6R)i"><field name="DIR">-1</field><field name="PIN">3</field><value name="SPEED"><shadow type="math_number" id="{`VZ!^hxSXK4JS2#V@xe"><field name="NUM">100</field></shadow></value></block></statement></block></statement></block></xml>

Projet généré par Vittascience.
Ce fichier contient le code textuel ainsi que le code blocs. Il peut être importé de nouveau
sur l'interface http://vittascience.com/arduino

*/

#include <Servo.h>

#define PIN_MOTION_SENSOR_8  8
#define PIN_CONTINUOUS_SERVO_3  3

Servo servomotor_3;

void setup() {
  pinMode(PIN_MOTION_SENSOR_8, INPUT);
  servomotor_3.attach(PIN_CONTINUOUS_SERVO_3);
}

void loop() {
  if (digitalRead(PIN_MOTION_SENSOR_8) == true) {
    servomotor_3.write(90*(1+100/100));
  } else if (digitalRead(PIN_MOTION_SENSOR_8) == false) {
    servomotor_3.write(90*(1-100/100));
  }
}