#pragma once

class CFuncInteractionLayerClip : public CBaseModelEntity /*0x0*/  // sizeof 0xB48, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0xB34]; // offset 0x0
    bool m_bDisabled; // offset 0xB34, size 0x1, align 1
    char _pad_0B35[0x3]; // offset 0xB35
    CUtlSymbolLarge m_iszInteractsAs; // offset 0xB38, size 0x8, align 8
    CUtlSymbolLarge m_iszInteractsWith; // offset 0xB40, size 0x8, align 8
};
