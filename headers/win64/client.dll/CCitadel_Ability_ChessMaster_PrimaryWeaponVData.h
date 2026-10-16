#pragma once

class CCitadel_Ability_ChessMaster_PrimaryWeaponVData : public CCitadel_Ability_PrimaryWeaponVData /*0x0*/  // sizeof 0x17D8, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x16D0]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_strBishopTracer; // offset 0x16D0, size 0xE0, align 8 | MPropertyStartGroup
    float32 m_flMoveSlashThreshold; // offset 0x17B0, size 0x4, align 4
    char _pad_17B4[0x4]; // offset 0x17B4
    CSoundEventName m_strBishopCommandSound; // offset 0x17B8, size 0x10, align 8 | MPropertyStartGroup
    float32 m_flHorizontalOffsetPerShot; // offset 0x17C8, size 0x4, align 4 | MPropertyStartGroup
    int32 m_nTicksToHoldShuffleTime; // offset 0x17CC, size 0x4, align 4 | MPropertyStartGroup
    CGlobalSymbol m_strAG2HeroActionGainedBullets; // offset 0x17D0, size 0x8, align 8
};
