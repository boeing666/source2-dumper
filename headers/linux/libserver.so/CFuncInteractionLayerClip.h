#pragma once

class CFuncInteractionLayerClip : public CBaseModelEntity /*0x0*/  // sizeof 0xB40, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0xB2C]; // offset 0x0
    bool m_bDisabled; // offset 0xB2C, size 0x1, align 1
    char _pad_0B2D[0x3]; // offset 0xB2D
    CUtlSymbolLarge m_iszInteractsAs; // offset 0xB30, size 0x8, align 8
    CUtlSymbolLarge m_iszInteractsWith; // offset 0xB38, size 0x8, align 8
};
