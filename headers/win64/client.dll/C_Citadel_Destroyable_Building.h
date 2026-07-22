#pragma once

class C_Citadel_Destroyable_Building : public CCitadelAnimatingModelEntity /*0x0*/  // sizeof 0xF08, align 0x8 [vtable] (client) {MNetworkIncludeByName MNetworkIncludeByName MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames}
{
public:
    char _pad_0000[0xCB0]; // offset 0x0
    CCitadelAbilityComponent m_CCitadelAbilityComponent; // offset 0xCB0, size 0x1E8, align 255 | MNetworkEnable MNetworkUserGroup MNetworkAlias MNetworkTypeAlias
    C_UtlVectorEmbeddedNetworkVar< WeakPoint_t > m_vecWeakPoints; // offset 0xE98, size 0x68, align 8 | MNetworkEnable MNotSaved
    bool m_bDestroyed; // offset 0xF00, size 0x1, align 1 | MNetworkEnable MNetworkChangeCallback MNotSaved
    bool m_bActive; // offset 0xF01, size 0x1, align 1 | MNetworkEnable MNotSaved
    bool m_bFinal; // offset 0xF02, size 0x1, align 1 | MNetworkEnable
    char _pad_0F03[0x5]; // offset 0xF03
};
