#pragma once

class CAmbientGeneric : public CPointEntity /*0x0*/  // sizeof 0x820, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x778]; // offset 0x0
    float32 m_radius; // offset 0x778, size 0x4, align 4
    float32 m_flMaxRadius; // offset 0x77C, size 0x4, align 4
    soundlevel_t m_iSoundLevel; // offset 0x780, size 0x4, align 4
    dynpitchvol_t m_dpv; // offset 0x784, size 0x64, align 4
    bool m_fActive; // offset 0x7E8, size 0x1, align 1
    bool m_fLooping; // offset 0x7E9, size 0x1, align 1
    char _pad_07EA[0x6]; // offset 0x7EA
    CGameSoundEventName m_iszSound; // offset 0x7F0, size 0x8, align 8
    CUtlSymbolLarge m_sSourceEntName; // offset 0x7F8, size 0x8, align 8
    CHandle< CBaseEntity > m_hSoundSource; // offset 0x800, size 0x4, align 4 | MNotSaved
    CEntityIndex m_nSoundSourceEntIndex; // offset 0x804, size 0x4, align 4 | MNotSaved
    char _pad_0808[0x18]; // offset 0x808
};
