#ifndef _H_drioctl
#include <DiscRecording/DiscRecording.h>

/* Shell functions */
void ioctl_shell(DRDeviceRef device);
void ioctl_shell_interpret(DRDeviceRef device, char *line);
void ioctl_shell_dispatch(DRDeviceRef device,int argc,char **argv);

/* Helper functions */
CFTypeRef CopyDeviceMediaProperty(DRDeviceRef device, CFStringRef property);
int DeviceHasMediaOfClass(DRDeviceRef device,CFStringRef class);
int GetDiskNodeName(DRDeviceRef device, char *nameBuffer, size_t nameBufferSize);
int GetDiskNodePath(DRDeviceRef device, char *pathBuffer, size_t pathBufferSize);
int OpenDiskNode(DRDeviceRef device);
int ioctlWithDRDevice(DRDeviceRef device,unsigned long request,char *argp);
void hexdump(u_int8_t *buffer,u_int32_t bufferSize);

/* Commands */
void PrintHelp(DRDeviceRef device, int argc, char **argv);
void PrintDevice(DRDeviceRef device, int argc, char **argv);
void PrintVolumes(DRDeviceRef device, int argc, char **argv);
void GetSpeed(DRDeviceRef device, int argc, char **argv);
void SetSpeed(DRDeviceRef device, int argc, char **argv);
void ReadDiscInfo(DRDeviceRef device, int argc, char **argv);
void ReadTrackInfo(DRDeviceRef device, int argc, char **argv);
void ReadCD(DRDeviceRef device, int argc, char **argv);
void ReadTOC(DRDeviceRef device, int argc, char **argv);
void ReadMCN(DRDeviceRef device, int argc, char **argv);
void ReadISRC(DRDeviceRef device, int argc, char **argv);
void ExitShell(DRDeviceRef device,int argc, char **argv);

#endif /* _H_drioctl */
