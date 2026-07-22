#pragma once

class CCSPlayerController_InventoryServices : public CPlayerControllerComponent /*0x0*/  // sizeof 0xF0, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x40]; // offset 0x0
    CUtlVector< CCSPlayerController_InventoryServices::NetworkedLoadoutSlot_t > m_vecNetworkableLoadout; // offset 0x40, size 0x18, align 8
    uint16 m_unMusicID; // offset 0x58, size 0x2, align 2
    char _pad_005A[0x2]; // offset 0x5A
    MedalRank_t[6] m_rank; // offset 0x5C, size 0x18, align 4
    int32 m_nPersonaDataPublicLevel; // offset 0x74, size 0x4, align 4
    int32 m_nPersonaDataPublicCommendsLeader; // offset 0x78, size 0x4, align 4
    int32 m_nPersonaDataPublicCommendsTeacher; // offset 0x7C, size 0x4, align 4
    int32 m_nPersonaDataPublicCommendsFriendly; // offset 0x80, size 0x4, align 4
    int32 m_nPersonaDataXpTrailLevel; // offset 0x84, size 0x4, align 4
    C_UtlVectorEmbeddedNetworkVar< ServerAuthoritativeWeaponSlot_t > m_vecServerAuthoritativeWeaponSlots; // offset 0x88, size 0x68, align 8
};
