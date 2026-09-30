#pragma once

class CAI_CitadelNPC : public CAI_BaseNPC /*0x0*/  // sizeof 0x1710, align 0x10 [vtable] (server)
{
public:
    char _pad_0000[0x1148]; // offset 0x0
    CCitadelAbilityComponent m_CCitadelAbilityComponent; // offset 0x1148, size 0x268, align 255
    CCitadelRegenComponent m_CCitadelRegenComponent; // offset 0x13B0, size 0x160, align 255
    CCitadelMinimapComponent m_CCitadelMinimapComponent; // offset 0x1510, size 0x20, align 255
    char _pad_1530[0x30]; // offset 0x1530
    CHandle< CCitadelBaseAbility > m_hAbilityOwner; // offset 0x1560, size 0x4, align 4
    char _pad_1564[0x54]; // offset 0x1564
    CUtlVectorEmbeddedNetworkVar< WeakPoint_t > m_vecWeakPoints; // offset 0x15B8, size 0x68, align 8 | MNotSaved
    bool m_bMinion; // offset 0x1620, size 0x1, align 1 | MNotSaved
    char _pad_1621[0x3]; // offset 0x1621
    CHandle< CBaseEntity > m_hLookTarget; // offset 0x1624, size 0x4, align 4 | MNotSaved
    char _pad_1628[0xA0]; // offset 0x1628
    bool m_bBeamActive; // offset 0x16C8, size 0x1, align 1
    char _pad_16C9[0x3]; // offset 0x16C9
    VectorWS m_vEyeBeamTarget; // offset 0x16CC, size 0xC, align 4
    char _pad_16D8[0x38]; // offset 0x16D8
};
