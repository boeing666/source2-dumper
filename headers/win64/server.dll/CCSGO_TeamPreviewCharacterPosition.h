#pragma once

class CCSGO_TeamPreviewCharacterPosition : public CBaseEntity /*0x0*/  // sizeof 0xCC0, align 0xFF [vtable abstract] (server)
{
public:
    char _pad_0000[0x4A8]; // offset 0x0
    int32 m_nVariant; // offset 0x4A8, size 0x4, align 4
    int32 m_nRandom; // offset 0x4AC, size 0x4, align 4
    int32 m_nOrdinal; // offset 0x4B0, size 0x4, align 4
    char _pad_04B4[0x4]; // offset 0x4B4
    CUtlString m_sWeaponName; // offset 0x4B8, size 0x8, align 8
    uint64 m_xuid; // offset 0x4C0, size 0x8, align 8
    CEconItemView m_agentItem; // offset 0x4C8, size 0x2A8, align 255
    CEconItemView m_glovesItem; // offset 0x770, size 0x2A8, align 255
    CEconItemView m_weaponItem; // offset 0xA18, size 0x2A8, align 255
};
