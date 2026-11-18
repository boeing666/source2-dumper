#pragma once

class CFuncInteractionLayerClip : public CBaseModelEntity /*0x0*/  // sizeof 0x8D0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x8B8]; // offset 0x0
    bool m_bDisabled; // offset 0x8B8, size 0x1, align 1
    char _pad_08B9[0x7]; // offset 0x8B9
    CUtlSymbolLarge m_iszInteractsAs; // offset 0x8C0, size 0x8, align 8
    CUtlSymbolLarge m_iszInteractsWith; // offset 0x8C8, size 0x8, align 8
};
