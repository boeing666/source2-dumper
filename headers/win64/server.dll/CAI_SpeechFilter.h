#pragma once

class CAI_SpeechFilter : public CBaseEntity /*0x0*/  // sizeof 0x4C8, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x4B8]; // offset 0x0
    CUtlSymbolLarge m_iszSubject; // offset 0x4B8, size 0x8, align 8
    float32 m_flIdleModifier; // offset 0x4C0, size 0x4, align 4
    bool m_bNeverSayHello; // offset 0x4C4, size 0x1, align 1
    bool m_bDisabled; // offset 0x4C5, size 0x1, align 1
    char _pad_04C6[0x2]; // offset 0x4C6
};
