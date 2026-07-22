#pragma once

class CRandomNumberGeneratorParameters  // sizeof 0x8, align 0x4 [trivial_dtor] (particles) {MGetKV3ClassDefaults}
{
public:
    bool m_bDistributeEvenly; // offset 0x0, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_0001[0x3]; // offset 0x1
    int32 m_nSeed; // offset 0x4, size 0x4, align 4 | MPropertyFriendlyName MPropertySuppressExpr
};
