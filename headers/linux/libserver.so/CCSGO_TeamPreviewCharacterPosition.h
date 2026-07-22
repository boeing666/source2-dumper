#pragma once

class CCSGO_TeamPreviewCharacterPosition : public CBaseEntity /*0x0*/  // sizeof 0xFA0, align 0xFF [vtable abstract] (server)
{
public:
    char _pad_0000[0x788]; // offset 0x0
    int32 m_nVariant; // offset 0x788, size 0x4, align 4
    int32 m_nRandom; // offset 0x78C, size 0x4, align 4
    int32 m_nOrdinal; // offset 0x790, size 0x4, align 4
    char _pad_0794[0x4]; // offset 0x794
    CUtlString m_sWeaponName; // offset 0x798, size 0x8, align 8
    uint64 m_xuid; // offset 0x7A0, size 0x8, align 8
    CEconItemView m_agentItem; // offset 0x7A8, size 0x2A8, align 255
    CEconItemView m_glovesItem; // offset 0xA50, size 0x2A8, align 255
    CEconItemView m_weaponItem; // offset 0xCF8, size 0x2A8, align 255
};
