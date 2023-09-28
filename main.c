#include "main.h"
#include <stdio.h>
#include <stdint.h>
#include <plugins.h>
#include <stdbool.h>
#include <orbis/libkernel.h>
#define db 0x003FC000
struct proc_info procInfo;
struct proc_rw datawrite;
OrbisPthread engine;
char auth[16];
unsigned char verid[1]={0};
void procrw(u64 cd,void *dw,u64 s,u64 flag){
datawrite.address=cd+db;
datawrite.data=dw;
datawrite.length=s;
datawrite.write_flags=flag;
sys_sdk_proc_rw(&datawrite);}
void *spectrengine(void *args){
procrw(0x01BE2DD9,verid,1,0);
if(verid[0]==(unsigned char)252){
procrw(0x01917705,BB100A,603,1);
procrw(0x048A2494,BB100B,427,1);
procrw(0x048A2640,BB100C,352,1);
procrw(0x0155C92A,BB100D,342,1);
procrw(0x01914B54,BB100E,200,1);
procrw(0x01872C0A,BB100F,176,1);
procrw(0x01D3633D,BB100G,99,1);
procrw(0x01915461,BB100H,63,1);
procrw(0x01FE3C74,BB100I,35,1);
procrw(0x026409BF,BB100J,13,1);
procrw(0x01FE3DF3,BB100K,13,1);
procrw(0x0220B7B6,BB100L,12,1);
procrw(0x0191757E,BB100M,11,1);
procrw(0x0189DED1,BB100N,5,1);
procrw(0x01BE2E32,BB100O,3,1);
procrw(0x01BE305B,BB100P,3,1);
procrw(0x01FA10CF,BB100Q,2,1);
procrw(0x01755076,BB100R,2,1);
procrw(0x00F7002D,BB100S,1,1);
procrw(0x00FB15D5,BB100T,1,1);
procrw(0x00FB15E5,BB100U,1,1);
procrw(0x01F84699,BB100V,1,1);
procrw(0x01D36313,BB100W,1,1);
procrw(0x0220C2FC,BB100X,1,1);
procrw(0x019154C8,BB100Y,1,1);
procrw(0x019176D3,BB100Z,1,1);
}else{
procrw(0x01C3A77F,verid,1,0);
if(verid[0]==(unsigned char)9){
procrw(0x0193F76A,BB109A,566,1);
procrw(0x0493F738,BB109B,427,1);
procrw(0x0493F8E4,BB109C,352,1);
procrw(0x0157696A,BB109D,342,1);
procrw(0x0193C10C,BB109E,208,1);
procrw(0x01894E60,BB109F,176,1);
procrw(0x01D9DEED,BB109G,99,1);
procrw(0x0207A434,BB109H,35,1);
procrw(0x026DA1DF,BB109I,13,1);
procrw(0x0207A5B3,BB109J,13,1);
procrw(0x022A3AA8,BB109K,12,1);
procrw(0x0193F5D3,BB109L,11,1);
procrw(0x018C1711,BB109M,5,1);
procrw(0x01C3A7CA,BB109N,3,1);
procrw(0x01C3A9EB,BB109O,3,1);
procrw(0x02038885,BB109P,2,1);
procrw(0x01771E86,BB109Q,2,1);
procrw(0x00F7190D,BB109R,1,1);
procrw(0x00FB9355,BB109S,1,1);
procrw(0x00FB9365,BB109T,1,1);
procrw(0x0201C059,BB109U,1,1);
procrw(0x01D9DEC3,BB109V,1,1);
procrw(0x022A457B,BB109W,1,1);
procrw(0x0193F73E,BB109X,1,1);
}else{
procrw(0x01C3AACF,verid,1,0);
if(verid[0]==(unsigned char)6){
procrw(0x0193FBAA,BB106A,566,1);
procrw(0x0493FC6B,BB106B,427,1);
procrw(0x0493FE17,BB106C,352,1);
procrw(0x01576B8A,BB106D,342,1);
procrw(0x0193C54C,BB106E,208,1);
procrw(0x01895370,BB106F,176,1);
procrw(0x01D9E0FD,BB106G,99,1);
procrw(0x0207B824,BB106H,35,1);
procrw(0x026DA6EF,BB106I,13,1);
procrw(0x0207B9A3,BB106J,13,1);
procrw(0x022A4778,BB106K,12,1);
procrw(0x0193FA13,BB106L,11,1);
procrw(0x018C1C21,BB106M,5,1);
procrw(0x01C3AB1A,BB106N,3,1);
procrw(0x01C3AD3B,BB106O,3,1);
procrw(0x02039BD5,BB106P,2,1);
procrw(0x017720A6,BB106Q,2,1);
procrw(0x00F71BDD,BB106R,1,1);
procrw(0x00FB9625,BB106S,1,1);
procrw(0x00FB9635,BB106T,1,1);
procrw(0x0201D409,BB106U,1,1);
procrw(0x01D9E0D3,BB106V,1,1);
procrw(0x022A524B,BB106W,1,1);
procrw(0x0193FB7E,BB106X,1,1);}}}
scePthreadExit(NULL);
return NULL;}
int32_t attr_module_hidden module_start(size_t argc,const void *args){
if(sys_sdk_proc_info(&procInfo)){return 0;}
memcpy(auth, procInfo.titleid, sizeof(auth));
if(auth[4]=='0'&&auth[5]=='0'&&auth[6]=='2'&&auth[7]=='9'&&auth[8]=='9'){
scePthreadCreate(&engine, NULL, spectrengine, NULL, "spectrengine");}
else{if(auth[4]=='0'&&auth[5]=='0'&&auth[6]=='2'&&auth[7]=='0'&&auth[8]=='7'){
scePthreadCreate(&engine, NULL, spectrengine, NULL, "spectrengine");}
else{if(auth[4]=='0'&&auth[5]=='0'&&auth[6]=='9'&&auth[7]=='0'&&auth[8]=='0'){
scePthreadCreate(&engine, NULL, spectrengine, NULL, "spectrengine");}
else{if(auth[4]=='0'&&auth[5]=='1'&&auth[6]=='3'&&auth[7]=='6'&&auth[8]=='3'){
scePthreadCreate(&engine, NULL, spectrengine, NULL, "spectrengine");}
else{if(auth[4]=='0'&&auth[5]=='3'&&auth[6]=='0'&&auth[7]=='1'&&auth[8]=='4'){
scePthreadCreate(&engine, NULL, spectrengine, NULL, "spectrengine");}
else{if(auth[4]=='0'&&auth[5]=='3'&&auth[6]=='0'&&auth[7]=='2'&&auth[8]=='3'){
scePthreadCreate(&engine, NULL, spectrengine, NULL, "spectrengine");}
else{if(auth[4]=='0'&&auth[5]=='3'&&auth[6]=='1'&&auth[7]=='7'&&auth[8]=='3'){
scePthreadCreate(&engine, NULL, spectrengine, NULL, "spectrengine");}
else{if(auth[4]=='0'&&auth[5]=='3'&&auth[6]=='1'&&auth[7]=='7'&&auth[8]=='9'){
scePthreadCreate(&engine, NULL, spectrengine, NULL, "spectrengine");}}}}}}}}
return 0;}
int32_t attr_module_hidden module_stop(size_t argc,const void *args){
return 0;}