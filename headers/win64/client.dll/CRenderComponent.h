#pragma once

class CRenderComponent : public CEntityComponent /*0x0*/  // sizeof 0xD0, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x10]; // offset 0x0
    CNetworkVarChainer __m_pChainEntity; // offset 0x10, size 0x28, align 255 | MNotSaved
    char _pad_0038[0x18]; // offset 0x38
    bool m_bIsRenderingWithViewModels; // offset 0x50, size 0x1, align 1 | MNotSaved
    char _pad_0051[0x3]; // offset 0x51
    uint32 m_nSplitscreenFlags; // offset 0x54, size 0x4, align 4 | MNotSaved
    bool m_bEnableRendering; // offset 0x58, size 0x1, align 1 | MNotSaved
    char _pad_0059[0x4F]; // offset 0x59
    bool m_bInterpolationReadyToDraw; // offset 0xA8, size 0x1, align 1 | MNotSaved
    char _pad_00A9[0x27]; // offset 0xA9
};
