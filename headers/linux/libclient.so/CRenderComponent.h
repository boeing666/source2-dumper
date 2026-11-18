#pragma once

class CRenderComponent : public CEntityComponent /*0x0*/  // sizeof 0x78, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x10]; // offset 0x0
    CNetworkVarChainer __m_pChainEntity; // offset 0x10, size 0x28, align 255 | MNotSaved
    char _pad_0038[0x18]; // offset 0x38
    bool m_bIsRenderingWithViewModels; // offset 0x50, size 0x1, align 1 | MNotSaved
    bool m_bEnableRendering; // offset 0x51, size 0x1, align 1 | MNotSaved
    bool m_bInterpolationReadyToDraw; // offset 0x52, size 0x1, align 1 | MNotSaved
    char _pad_0053[0x25]; // offset 0x53
};
