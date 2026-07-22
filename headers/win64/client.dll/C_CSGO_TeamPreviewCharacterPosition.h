#pragma once

class C_CSGO_TeamPreviewCharacterPosition : public C_BaseEntity /*0x0*/  // sizeof 0x13A0, align 0xFF [vtable abstract] (client)
{
public:
    char _pad_0000[0x600]; // offset 0x0
    int32 m_nVariant; // offset 0x600, size 0x4, align 4
    int32 m_nRandom; // offset 0x604, size 0x4, align 4
    int32 m_nOrdinal; // offset 0x608, size 0x4, align 4
    char _pad_060C[0x4]; // offset 0x60C
    CUtlString m_sWeaponName; // offset 0x610, size 0x8, align 8
    uint64 m_xuid; // offset 0x618, size 0x8, align 8
    C_EconItemView m_agentItem; // offset 0x620, size 0x470, align 255
    C_EconItemView m_glovesItem; // offset 0xA90, size 0x470, align 255
    C_EconItemView m_weaponItem; // offset 0xF00, size 0x470, align 255
    char _pad_1370[0x30]; // offset 0x1370
};
