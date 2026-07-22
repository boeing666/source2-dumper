#pragma once

class CFuncInteractionLayerClip : public CBaseModelEntity /*0x0*/  // sizeof 0xA60, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0xA4C]; // offset 0x0
    bool m_bDisabled; // offset 0xA4C, size 0x1, align 1
    char _pad_0A4D[0x3]; // offset 0xA4D
    CUtlSymbolLarge m_iszInteractsAs; // offset 0xA50, size 0x8, align 8
    CUtlSymbolLarge m_iszInteractsWith; // offset 0xA58, size 0x8, align 8
};
