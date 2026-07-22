#pragma once

class C_AI_CitadelNPC : public C_AI_BaseNPC /*0x0*/  // sizeof 0x1BD0, align 0x8 [vtable] (client) {MNetworkIncludeByName MNetworkIncludeByName MNetworkIncludeByName MNetworkIncludeByName MNetworkExcludeByUserGroup MNetworkExcludeByName MNetworkExcludeByName MNetworkOverride MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames}
{
public:
    char _pad_0000[0xF34]; // offset 0x0
    bool m_bBeamActive; // offset 0xF34, size 0x1, align 1 | MNetworkEnable MNetworkChangeCallback
    char _pad_0F35[0x3]; // offset 0xF35
    VectorWS m_vEyeBeamTarget; // offset 0xF38, size 0xC, align 4 | MNetworkEnable MNetworkEncoder MNetworkChangeCallback
    char _pad_0F44[0x9A4]; // offset 0xF44
    int32 m_nPlayerTeamEvent; // offset 0x18E8, size 0x4, align 4 | MNotSaved
    char _pad_18EC[0x8C]; // offset 0x18EC
    C_UtlVectorEmbeddedNetworkVar< WeakPoint_t > m_vecWeakPoints; // offset 0x1978, size 0x68, align 8 | MNetworkEnable MNotSaved
    bool m_bMinion; // offset 0x19E0, size 0x1, align 1 | MNetworkEnable MNotSaved
    char _pad_19E1[0x3]; // offset 0x19E1
    CHandle< C_BaseEntity > m_hLookTarget; // offset 0x19E4, size 0x4, align 4 | MNetworkEnable MNotSaved
    CCitadelAbilityComponent m_CCitadelAbilityComponent; // offset 0x19E8, size 0x1E8, align 255 | MNetworkEnable MNetworkUserGroup MNetworkAlias MNetworkTypeAlias
};
