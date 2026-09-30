#pragma once

class C_Citadel_Destroyable_Building : public CCitadelAnimatingModelEntity /*0x0*/  // sizeof 0x1008, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0xDB8]; // offset 0x0
    CCitadelAbilityComponent m_CCitadelAbilityComponent; // offset 0xDB8, size 0x1E0, align 255
    C_UtlVectorEmbeddedNetworkVar< WeakPoint_t > m_vecWeakPoints; // offset 0xF98, size 0x68, align 8 | MNotSaved
    bool m_bDestroyed; // offset 0x1000, size 0x1, align 1 | MNotSaved
    bool m_bActive; // offset 0x1001, size 0x1, align 1 | MNotSaved
    bool m_bFinal; // offset 0x1002, size 0x1, align 1
    char _pad_1003[0x5]; // offset 0x1003
};
