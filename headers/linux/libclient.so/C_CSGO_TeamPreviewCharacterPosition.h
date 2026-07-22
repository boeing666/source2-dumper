#pragma once

class C_CSGO_TeamPreviewCharacterPosition : public C_BaseEntity /*0x0*/  // sizeof 0x4230, align 0xFF [vtable abstract] (client)
{
public:
    char _pad_0000[0x77C]; // offset 0x0
    int32 m_nVariant; // offset 0x77C, size 0x4, align 4
    int32 m_nRandom; // offset 0x780, size 0x4, align 4
    int32 m_nOrdinal; // offset 0x784, size 0x4, align 4
    CUtlString m_sWeaponName; // offset 0x788, size 0x8, align 8
    uint64 m_xuid; // offset 0x790, size 0x8, align 8
    C_EconItemView m_agentItem; // offset 0x798, size 0x1378, align 255
    C_EconItemView m_glovesItem; // offset 0x1B10, size 0x1378, align 255
    C_EconItemView m_weaponItem; // offset 0x2E88, size 0x1378, align 255
    char _pad_4200[0x30]; // offset 0x4200
};
