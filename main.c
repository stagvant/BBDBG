#include <stdio.h>
#include <stdint.h>
#include <plugins.h>
#include <stdbool.h>
#include "blodborn.h"
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
void* spectrengine(void* args){
procrw(0x01BE2DD9,verid,1,0);
if(verid[0]==(unsigned char)252){
procrw(0x01917705,BB100A,603,1);
procrw(0x048A2494,BB100B,427,1);
procrw(0x01D3633D,BB100C,99,1);
procrw(0x026409BF,BB100D,13,1);
procrw(0x0220B7B6,BB100E,12,1);
procrw(0x0191757E,BB100F,11,1);
procrw(0x01BE2E32,BB100G,3,1);
procrw(0x01BE305B,BB100H,3,1);
procrw(0x01755076,BB100J,2,1);
procrw(0x01FA10CF,BB100K,2,1);
procrw(0x019154C8,BB100L,1,1);
procrw(0x019176D3,BB100M,1,1);
procrw(0x00FB15D5,BB100N,1,1);
procrw(0x00FB15E5,BB100O,1,1);
procrw(0x01F84699,BB100P,1,1);
procrw(0x01D36313,BB100Q,1,1);
procrw(0x00F7002D,BB100R,1,1);
procrw(0x0220C2FC,BB100S,1,1);
procrw(0x01FE3DF3,BB100T,13,1);
procrw(0x01FE3C74,BB100U,35,1);
procrw(0x01915461,BB100V,63,1);
procrw(0x01914B54,BB100W,200,1);
}else{
procrw(0x01C3A77F,verid,1,0);
if(verid[0]==(unsigned char)9){
procrw(0x0193F76A,BB109A,566,1);
procrw(0x0493F738,BB109B,427,1);
procrw(0x01D9DEED,BB109C,99,1);
procrw(0x026DA1DF,BB109D,13,1);
procrw(0x022A3AA8,BB109E,12,1);
procrw(0x0193F5D3,BB109F,11,1);
procrw(0x01C3A7CA,BB109G,3,1);
procrw(0x01C3A9EB,BB109H,3,1);
procrw(0x01771E86,BB109J,2,1);
procrw(0x02038885,BB109K,2,1);
procrw(0x0193F73E,BB109L,1,1);
procrw(0x00FB9355,BB109M,1,1);
procrw(0x00FB9365,BB109N,1,1);
procrw(0x0201C059,BB109O,1,1);
procrw(0x01D9DEC3,BB109P,1,1);
procrw(0x00F7190D,BB109Q,1,1);
procrw(0x022A457B,BB109R,1,1);
procrw(0x0207A5B3,BB109S,13,1);
procrw(0x0207A434,BB109T,35,1);
procrw(0x0193C10C,BB109U,208,1);
}else{
procrw(0x01C3AACF,verid,1,0);
if(verid[0]==(unsigned char)6){
procrw(0x0193FBAA,BB106A,566,1);
procrw(0x0493FC6B,BB106B,427,1);
procrw(0x01D9E0FD,BB106C,99,1);
procrw(0x026DA6EF,BB106D,13,1);
procrw(0x022A4778,BB106E,12,1);
procrw(0x0193FA13,BB106F,11,1);
procrw(0x01C3AB1A,BB106G,3,1);
procrw(0x01C3AD3B,BB106H,3,1);
procrw(0x017720A6,BB106J,2,1);
procrw(0x02039BD5,BB106K,2,1);
procrw(0x0193FB7E,BB106L,1,1);
procrw(0x00FB9625,BB106M,1,1);
procrw(0x00FB9635,BB106N,1,1);
procrw(0x0201D409,BB106O,1,1);
procrw(0x01D9E0D3,BB106P,1,1);
procrw(0x00F71BDD,BB106Q,1,1);
procrw(0x022A524B,BB106R,1,1);
procrw(0x0207B9A3,BB106S,13,1);
procrw(0x0207B824,BB106T,35,1);
procrw(0x0193C54C,BB106U,208,1);}}}
scePthreadExit(NULL);
return NULL;}
int32_t attr_module_hidden module_start(size_t argc,const void *args){
if (sys_sdk_proc_info(&procInfo)){return 0;}
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
int32_t attr_module_hidden module_stop(size_t argc, const void *args){
return 0;}