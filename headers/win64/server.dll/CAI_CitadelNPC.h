#pragma once

class CAI_CitadelNPC : public CAI_BaseNPC /*0x0*/  // sizeof 0x1710, align 0x10 [vtable] (server)
{
public:
    char _pad_0000[0x1148]; // offset 0x0
    CCitadelAbilityComponent m_CCitadelAbilityComponent; // offset 0x1148, size 0x270, align 255
    CCitadelRegenComponent m_CCitadelRegenComponent; // offset 0x13B8, size 0x160, align 255
    CCitadelMinimapComponent m_CCitadelMinimapComponent; // offset 0x1518, size 0x20, align 255
    char _pad_1538[0x30]; // offset 0x1538
    CHandle< CCitadelBaseAbility > m_hAbilityOwner; // offset 0x1568, size 0x4, align 4
    char _pad_156C[0x54]; // offset 0x156C
    CUtlVectorEmbeddedNetworkVar< WeakPoint_t > m_vecWeakPoints; // offset 0x15C0, size 0x68, align 8 | MNotSaved
    bool m_bMinion; // offset 0x1628, size 0x1, align 1 | MNotSaved
    char _pad_1629[0x3]; // offset 0x1629
    CHandle< CBaseEntity > m_hLookTarget; // offset 0x162C, size 0x4, align 4 | MNotSaved
    char _pad_1630[0xA0]; // offset 0x1630
    bool m_bBeamActive; // offset 0x16D0, size 0x1, align 1
    char _pad_16D1[0x3]; // offset 0x16D1
    VectorWS m_vEyeBeamTarget; // offset 0x16D4, size 0xC, align 4
    char _pad_16E0[0x30]; // offset 0x16E0
};
