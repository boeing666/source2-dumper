#pragma once

class CCSPlayerController_InventoryServices : public CPlayerControllerComponent /*0x0*/  // sizeof 0xFE0, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x40]; // offset 0x0
    uint16 m_unMusicID; // offset 0x40, size 0x2, align 2
    char _pad_0042[0x2]; // offset 0x42
    MedalRank_t[6] m_rank; // offset 0x44, size 0x18, align 4
    int32 m_nPersonaDataPublicLevel; // offset 0x5C, size 0x4, align 4
    int32 m_nPersonaDataPublicCommendsLeader; // offset 0x60, size 0x4, align 4
    int32 m_nPersonaDataPublicCommendsTeacher; // offset 0x64, size 0x4, align 4
    int32 m_nPersonaDataPublicCommendsFriendly; // offset 0x68, size 0x4, align 4
    int32 m_nPersonaDataXpTrailLevel; // offset 0x6C, size 0x4, align 4
    char _pad_0070[0xED8]; // offset 0x70
    uint32[1] m_unEquippedPlayerSprayIDs; // offset 0xF48, size 0x4, align 4
    char _pad_0F4C[0x4]; // offset 0xF4C
    uint64 m_unCurrentLoadoutHash; // offset 0xF50, size 0x8, align 8
    CUtlVectorEmbeddedNetworkVar< ServerAuthoritativeWeaponSlot_t > m_vecServerAuthoritativeWeaponSlots; // offset 0xF58, size 0x88, align 8
};
