#pragma once

class CFuncInteractionLayerClip : public CBaseModelEntity /*0x0*/  // sizeof 0x788, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x770]; // offset 0x0
    bool m_bDisabled; // offset 0x770, size 0x1, align 1
    char _pad_0771[0x7]; // offset 0x771
    CUtlSymbolLarge m_iszInteractsAs; // offset 0x778, size 0x8, align 8
    CUtlSymbolLarge m_iszInteractsWith; // offset 0x780, size 0x8, align 8
};
