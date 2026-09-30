#pragma once

class CFuncInteractionLayerClip : public CBaseModelEntity /*0x0*/  // sizeof 0x890, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x878]; // offset 0x0
    bool m_bDisabled; // offset 0x878, size 0x1, align 1
    char _pad_0879[0x7]; // offset 0x879
    CUtlSymbolLarge m_iszInteractsAs; // offset 0x880, size 0x8, align 8
    CUtlSymbolLarge m_iszInteractsWith; // offset 0x888, size 0x8, align 8
};
