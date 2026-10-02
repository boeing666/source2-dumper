#pragma once

class C_AI_CitadelNPC : public C_AI_BaseNPC /*0x0*/  // sizeof 0x1B60, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0xEC5]; // offset 0x0
    bool m_bBeamActive; // offset 0xEC5, size 0x1, align 1
    char _pad_0EC6[0x2]; // offset 0xEC6
    VectorWS m_vEyeBeamTarget; // offset 0xEC8, size 0xC, align 4
    char _pad_0ED4[0x9A4]; // offset 0xED4
    int32 m_nPlayerTeamEvent; // offset 0x1878, size 0x4, align 4 | MNotSaved
    char _pad_187C[0x8C]; // offset 0x187C
    C_UtlVectorEmbeddedNetworkVar< WeakPoint_t > m_vecWeakPoints; // offset 0x1908, size 0x68, align 8 | MNotSaved
    bool m_bMinion; // offset 0x1970, size 0x1, align 1 | MNotSaved
    char _pad_1971[0x3]; // offset 0x1971
    CHandle< C_BaseEntity > m_hLookTarget; // offset 0x1974, size 0x4, align 4 | MNotSaved
    CCitadelAbilityComponent m_CCitadelAbilityComponent; // offset 0x1978, size 0x1E0, align 255
    char _pad_1B58[0x8]; // offset 0x1B58
};
