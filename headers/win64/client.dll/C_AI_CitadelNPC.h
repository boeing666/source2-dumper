#pragma once

class C_AI_CitadelNPC : public C_AI_BaseNPC /*0x0*/  // sizeof 0x1B08, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0xE6D]; // offset 0x0
    bool m_bBeamActive; // offset 0xE6D, size 0x1, align 1
    char _pad_0E6E[0x2]; // offset 0xE6E
    VectorWS m_vEyeBeamTarget; // offset 0xE70, size 0xC, align 4
    char _pad_0E7C[0x9A4]; // offset 0xE7C
    int32 m_nPlayerTeamEvent; // offset 0x1820, size 0x4, align 4 | MNotSaved
    char _pad_1824[0x8C]; // offset 0x1824
    C_UtlVectorEmbeddedNetworkVar< WeakPoint_t > m_vecWeakPoints; // offset 0x18B0, size 0x68, align 8 | MNotSaved
    bool m_bMinion; // offset 0x1918, size 0x1, align 1 | MNotSaved
    char _pad_1919[0x3]; // offset 0x1919
    CHandle< C_BaseEntity > m_hLookTarget; // offset 0x191C, size 0x4, align 4 | MNotSaved
    CCitadelAbilityComponent m_CCitadelAbilityComponent; // offset 0x1920, size 0x1E0, align 255
    char _pad_1B00[0x8]; // offset 0x1B00
};
