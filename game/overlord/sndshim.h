#ifndef SNDSHIM_H_
#define SNDSHIM_H_
#pragma once
#include "common/common_types.h"

typedef void* (*AllocFun)();
typedef void (*FreeFun)(void*);

void snd_StartSoundSystem();
void snd_StopSoundSystem();
void snd_RegisterIOPMemAllocator(AllocFun, FreeFun);
void snd_LockVoiceAllocator(s32);
void snd_UnlockVoiceAllocator();
s32 snd_ExternVoiceVoiceAlloc(s32, s32);
u32 snd_SRAMMalloc(u32);
void snd_SetMixerMode(s32, s32);
void snd_SetGroupVoiceRange(s32, s32, s32);
void snd_SetReverbDepth(s32, s32, s32);
void snd_SetReverbType(s32, s32);
void snd_SetPanTable(s16*);
void snd_SetPlayBackMode(s32);
s32 snd_SoundIsStillPlaying(s32);
void snd_StopSound(s32);
void snd_SetSoundVolPan(s32, s32, s32);
void snd_SetMasterVolume(s32, s32);
void snd_UnloadBank(s32);
void snd_ResolveBankXREFS();
void snd_ContinueAllSoundsInGroup(u8);
void snd_PauseAllSoundsInGroup(u8);
void snd_SetMIDIRegister(s32, u8, u8);
s32 snd_PlaySoundVolPanPMPB(s32, s32, s32, s32, s32, s32);
void snd_SetSoundPitchModifier(s32, s32);
void snd_SetSoundPitchBend(s32, s32);
void snd_PauseSound(s32);
void snd_ContinueSound(s32);
void snd_AutoPitch(s32, s32, s32, s32);
void snd_AutoPitchBend(s32, s32, s32, s32);
s32 snd_BankLoadEx(const char* filepath, s32 data_offset, s32 unk1, s32 unk2);

#endif  // SNDSHIM_H_
