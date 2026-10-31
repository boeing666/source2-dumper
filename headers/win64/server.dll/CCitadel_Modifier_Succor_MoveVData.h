#pragma once

class CCitadel_Modifier_Succor_MoveVData : public CCitadelModifierVData /*0x0*/  // sizeof 0x7B8, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x798]; // offset 0x0
    CSoundEventName m_PullSound; // offset 0x798, size 0x10, align 8 | MPropertyStartGroup
    float32 m_flPullSpeedMin; // offset 0x7A8, size 0x4, align 4 | MPropertyStartGroup
    float32 m_flPullSpeedMax; // offset 0x7AC, size 0x4, align 4
    float32 m_flPullDistanceMin; // offset 0x7B0, size 0x4, align 4
    float32 m_flPullDistanceMax; // offset 0x7B4, size 0x4, align 4
};
