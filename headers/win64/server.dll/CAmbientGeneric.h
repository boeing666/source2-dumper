#pragma once

class CAmbientGeneric : public CPointEntity /*0x0*/  // sizeof 0x550, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x4A8]; // offset 0x0
    float32 m_radius; // offset 0x4A8, size 0x4, align 4
    float32 m_flMaxRadius; // offset 0x4AC, size 0x4, align 4
    soundlevel_t m_iSoundLevel; // offset 0x4B0, size 0x4, align 4
    dynpitchvol_t m_dpv; // offset 0x4B4, size 0x64, align 4
    bool m_fActive; // offset 0x518, size 0x1, align 1
    bool m_fLooping; // offset 0x519, size 0x1, align 1
    char _pad_051A[0x6]; // offset 0x51A
    CGameSoundEventName m_iszSound; // offset 0x520, size 0x8, align 8
    CUtlSymbolLarge m_sSourceEntName; // offset 0x528, size 0x8, align 8
    CHandle< CBaseEntity > m_hSoundSource; // offset 0x530, size 0x4, align 4 | MNotSaved
    CEntityIndex m_nSoundSourceEntIndex; // offset 0x534, size 0x4, align 4 | MNotSaved
    char _pad_0538[0x18]; // offset 0x538
};
